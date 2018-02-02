﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class View : MonoBehaviour {

    float horizontalDrawOffset;
    float verticalDrawOffset;

    GameObject[] tilePrefabs;

    public void Initialize() {
        // Load floor tile prefabs
        tilePrefabs = new GameObject[] { Resources.Load(@"prefabs\tiles\Door") as GameObject,
        Resources.Load(@"prefabs\tiles\Floor") as GameObject,
        Resources.Load(@"prefabs\tiles\Obstacle") as GameObject,
        Resources.Load(@"prefabs\tiles\Wall") as GameObject};
    }


    public void UpdateMap(Tiles[,] myMap) {
        horizontalDrawOffset = -myMap.GetLength(0) / 2.0f + 0.5f;
        verticalDrawOffset = -myMap.GetLength(1) / 2.0f + 0.5f;
    }

    #region GameObject current position and moving functions

    public void MoveGameObjectToIndex(GameObject myGameObject,Vector2 index) {
        myGameObject.transform.position = this.IndicesToMapCoordinates(index);    
    }

    public Vector2 GameObjectCurrentIndexPosition(GameObject myGameObject) {
        return this.MapToIndicesCoordinates(myGameObject.transform.position);
    }

    #endregion


    #region Map drawing/coordinate Functions

    /// <summary>
    /// Draws the map. Starts drawing from the upper left corner of the grid
    /// </summary>
    /// <param name="myMap">My map.</param>
    public void DrawMap(Tiles[,] myMap)
    {

        for (int i = 0; i < myMap.GetLength(0); i++)
        {
            for (int j = 0; j < myMap.GetLength(1); j++)
            {
                Vector3 worldLocation = new Vector3(horizontalDrawOffset + i, verticalDrawOffset + j, -Camera.main.transform.position.z);
                Instantiate<GameObject>(tilePrefabs[(int)myMap[i, j]], worldLocation, Quaternion.identity);
            }
        }
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