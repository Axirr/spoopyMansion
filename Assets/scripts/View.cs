using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class View : MonoBehaviour {

    float horizontalDrawOffset;
    float verticalDrawOffset;
    GameObject[,] gameObjectMap;
    float desaturationRatio = 0.5f;


    Dictionary<Tiles,GameObject> tilePrefabsDict = new Dictionary<Tiles, GameObject>();

    public void Initialize() {
        // Load floor tile prefabs
        tilePrefabsDict[Tiles.Door] = Resources.Load(@"prefabs\tiles\Door") as GameObject;
        tilePrefabsDict[Tiles.Floor] = Resources.Load(@"prefabs\tiles\Floor") as GameObject;
        tilePrefabsDict[Tiles.Obstacle] = Resources.Load(@"prefabs\tiles\Obstacle") as GameObject;
        tilePrefabsDict[Tiles.Wall] = Resources.Load(@"prefabs\tiles\Wall") as GameObject;
        tilePrefabsDict[Tiles.Unknown] = Resources.Load(@"prefabs\tiles\Unknown") as GameObject;
    }


    public void SetNewMap(Tiles[,] myMap) {
        int width = myMap.GetLength(0);
        int height = myMap.GetLength(1);
        horizontalDrawOffset = -width / 2.0f + 0.5f;
        verticalDrawOffset = -height / 2.0f + 0.5f;
        gameObjectMap = new GameObject[width,height];
        this.InitialDrawMap(myMap);
    }

    #region GameObject current position and moving functions

    public Vector2 GameObjectCurrentIndexPosition(GameObject myGameObject)
    {
        return this.MapToIndicesCoordinates(myGameObject.transform.position);
    }

    public void MoveGameObjectToIndex(GameObject myGameObject,Vector2 index) {
        myGameObject.transform.position = this.IndicesToMapCoordinates(index);    
    }

    public void RotateGameObjectLeftRight(GameObject myGameObject, Direction direction) {
        switch (direction) {
            case (Direction.Left):
                myGameObject.transform.eulerAngles = new Vector3(0, 0, 90);
                break;
            case (Direction.Right):
                myGameObject.transform.eulerAngles = new Vector3(0, 0, -90);
                break;
            default:
                throw new System.Exception("Error, objects can only be rotated left or right.");
        }
    }

    public void RotateToDirection(GameObject myGameObject, Direction newDirection) {
        Mover myMover = myGameObject.GetComponent<Mover>();
        Direction currentDirection = myMover.Orientation;
        int numberOfRightTurns = Support.NumberOfRightTurns(currentDirection,newDirection);
        int numberOfLeftTurns = 4 - numberOfRightTurns;
        print("Number of right turns is: " + numberOfRightTurns);
        int newZ = (int)((myGameObject.transform.eulerAngles.z + numberOfLeftTurns * 90) % 360);
        myGameObject.transform.eulerAngles = new Vector3(0, 0, newZ);
    }

    #endregion


    #region Map drawing/coordinate Functions

    /// <summary>
    /// Draws the map. Starts drawing from the upper left corner of the grid
    /// </summary>
    /// <param name="myMap">My map.</param>
    private void InitialDrawMap(Tiles[,] myMap)
    {
        for (int i = 0; i < myMap.GetLength(0); i++)
        {
            for (int j = 0; j < myMap.GetLength(1); j++)
            {
                Vector3 worldLocation = new Vector3(horizontalDrawOffset + i, verticalDrawOffset + j, -Camera.main.transform.position.z);
                Tiles actualTileType = (Tiles)(int)myMap[i, j];
                Tiles displayedTileType = myMap[i, j];
                if (Support.isFogOfWar) {
                    displayedTileType = Tiles.Unknown;
                }
                GameObject newTile = Instantiate<GameObject>(tilePrefabsDict[displayedTileType], worldLocation, Quaternion.identity);
                TileInfo tileInfo = newTile.GetComponent<TileInfo>();
                tileInfo.Initialize(actualTileType,displayedTileType,false);
                gameObjectMap[i, j] = newTile;
                if (Support.isFogOfWar && displayedTileType != Tiles.Unknown)
                {
                    ChangeTileSaturation(newTile, false);
                }                
            }
        }
    }

    private void UpdateTile(Vector2 tilePosition, bool newVisibility) {
        int tileX = (int)tilePosition.x;
        int tileY = (int)tilePosition.y;
        GameObject tileGameObject = gameObjectMap[tileX, tileY];
        TileInfo tileInfo = tileGameObject.GetComponent<TileInfo>();
        bool currentExploredStatus = tileInfo.Explored;
        if (!currentExploredStatus) {
            Tiles tileType = tileInfo.ActualTileType;
            Destroy(tileGameObject);
            GameObject newTile = Instantiate<GameObject>(tilePrefabsDict[tileType], this.IndicesToMapCoordinates(tilePosition), Quaternion.identity);
            newTile.GetComponent<TileInfo>().Initialize(tileType, tileType, true);
            ChangeTileSaturation(newTile, false);
            gameObjectMap[tileX, tileY] = newTile;
            tileGameObject = newTile;
        }
        if (newVisibility) {
            ChangeTileSaturation(tileGameObject,true);
        } else {
            ChangeTileSaturation(tileGameObject, false);
        }
    }

    public void UpdateMap(List<Vector2> previousVision, List<Vector2> newVision) {
        if (!Support.isFogOfWar) {
            return;
        }
        List<Vector2> goneSquares = previousVision.Except(newVision).ToList();
        List<Vector2> newSquares  = newVision.Except(previousVision).ToList();
        List<GameObject> zombies = (from charc in Camera.main.GetComponent<Game>().characterTurnOrderList
                                    where (charc.GetComponent<Mover>() as Human) == null
                                    select charc).ToList();
        foreach (var square in goneSquares) {
            UpdateTile(square,false);
            CheckAndUpdateZombieVisibility(square,zombies,false);
        }
        foreach (var square in newSquares) {
            UpdateTile(square,true);
            CheckAndUpdateZombieVisibility(square,zombies,true);
        }
    }

    public void CheckAndUpdateZombieVisibility(Vector2 square, List<GameObject> zombies, bool isVisible) {
        //float newAlpha = 1.0f;
        //switch (isVisible) {
        //    case true:
        //        newAlpha = 1.0f;
        //        break;
        //    case false:
        //        newAlpha = 0.0f;
        //        break;
        //}
        foreach (var zombie in zombies) {
            if (zombie.GetComponent<Mover>().Position == square)
            {
                zombie.GetComponent<SpriteRenderer>().enabled = isVisible;
                //Color oldColor = zombie.GetComponent<SpriteRenderer>().color;
                //oldColor.a = newAlpha;
                //zombie.GetComponent<SpriteRenderer>().color = oldColor;
            }
        }
    }

    private void ChangeTileSaturation(GameObject newTile, bool increaseSaturation)
    {
        SpriteRenderer tileSpriteRenderer = newTile.GetComponent<SpriteRenderer>();
        Color oldColor = tileSpriteRenderer.material.color;
        float newSaturationRatio;
        if (increaseSaturation)
        {
            newSaturationRatio = 1.0f / desaturationRatio;
        }
        else
        {
            newSaturationRatio = desaturationRatio;
        }
        Color newColor = oldColor * newSaturationRatio;
        newColor.a = 1.0f;
        tileSpriteRenderer.material.color = newColor;
    }

    private Vector2 IndicesToMapCoordinates(Vector2 oldCoordinate)
    {
        return new Vector2(horizontalDrawOffset + oldCoordinate.x, verticalDrawOffset + oldCoordinate.y);
    }

    private Vector2 MapToIndicesCoordinates(Vector2 oldCoordinate)
    {
        return new Vector2(oldCoordinate.x - horizontalDrawOffset, oldCoordinate.y - verticalDrawOffset);
    }

    #endregion
}
