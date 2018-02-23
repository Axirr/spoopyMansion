using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// A mostly static class of support constants and methods

public class Support : MonoBehaviour
{

    // Constants, for use by the entire program
    public const string MAP_TAG = "map";
    public const string MOVER_TAG = "mover";
    public const string HUD_TAG = "hud";
    public const string MARKER_TAG = "pathMarker";
    public const int MOVES_PER_STEP = 2;
    public const int MOVES_PER_Rotation = 1;
    public static List<Tiles> PROHIBITED_TILES_HUMAN = new List<Tiles>() { Tiles.Obstacle, Tiles.Wall };
    public static List<Tiles> PROHIBITED_TILES_NONHUMAN = new List<Tiles>() { Tiles.Obstacle, Tiles.Wall, Tiles.Door };

    public static Tiles[,] ReverseMap(Tiles[,] myMap) {
        Tiles[,] tempArray = new Tiles[myMap.GetLength(1), myMap.GetLength(0)];
        for (int i = 0; i < myMap.GetLength(0); i++) {
            for (int j = 0; j < myMap.GetLength(1); j++) {
                tempArray[j, i] = myMap[myMap.GetLength(0) - 1 - i, j];
            }
        }
        return tempArray;
    }

    public static void DestroyAllWithTag(string myTag) {
        GameObject[] gameObjectsToDelete = GameObject.FindGameObjectsWithTag(myTag);
        foreach (GameObject myGameObject in gameObjectsToDelete) {
            Destroy(myGameObject);
        }
    }

    public static Tiles[,] GenerateRandomMap() {
        int randomXSize = Random.Range(14, 15);
        int randomYSize = Random.Range(14, 15);

        Tiles[,] returnMap = Support.GenerateMap(randomXSize, randomYSize);
        return returnMap;
    }

    public static Tiles[,] GenerateMap(int xLength, int yLength)
    {
        int tileSelector;
        Tiles tileType;
        Tiles[,] returnMap = new Tiles[xLength, yLength];
        // Populate the walls
        for (int i = 0; i < xLength; i++) {
            returnMap[i, 0] = Tiles.Wall;
            returnMap[i, yLength - 1] = Tiles.Wall;
        }
        for (int j = 0; j < yLength; j++)
        {
            returnMap[0, j] = Tiles.Wall;
            returnMap[xLength - 1, j] = Tiles.Wall;
        }


        // Populate the floor
        for (int i = 1; i < xLength -1; i++) {
            for (int j = 1; j < yLength - 1; j++) {
                tileSelector = Random.Range(0, 11);
                switch (tileSelector) {
                    //case 8:
                    case 9:
                    case 10:
                        tileType = Tiles.Obstacle;
                        break;
                    default:
                        tileType = Tiles.Floor;
                        break;
                        
                }
                returnMap[i, j] = tileType;
            }
        }

        // Populate a door
        Direction direction = (Direction)Random.Range(0, 4);
        int doorX = 0;
        int doorY = 0;
        switch (direction) {
            case Direction.Up:
                doorY = yLength - 1;
                doorX = Random.Range(1, xLength-1);
                break;
            case Direction.Down:
                doorY = 0;
                doorX = Random.Range(1, xLength-1);
                break;
            case Direction.Left:
                doorY = Random.Range(1, yLength-1);
                doorX = 0;
                break;
            case Direction.Right:
                doorY = Random.Range(1, yLength-1);
                doorX = xLength - 1;
                break;
            default:
                break;
        }
        returnMap[doorX, doorY] = Tiles.Door;

        return returnMap;
    }

    public static void shuffleListOfInt(List<int> myList)
    {
        int n = myList.Count;
        while (n > 1)
        {
            n--;
            int k = Random.Range(0, n + 1);
            int tempValue = myList[k];
            myList[k] = myList[n];
            myList[n] = tempValue;
        }
    }

    public static Vector2 IndexVectorForDirection(Direction direction)
    {
        Vector2 returnVector = new Vector2();
        switch (direction)
        {
            case Direction.Right:
                returnVector = new Vector2(1, 0);
                break;
            case Direction.Left:
                returnVector = new Vector2(-1, 0);
                break;
            case Direction.Up:
                returnVector = new Vector2(0, 1);
                break;
            case Direction.Down:
                returnVector = new Vector2(0, -1);
                break;
        }
        return returnVector;
    }

    public static Direction DirectionForIndexVector(Vector2 vector) {
        Direction returnDirection = Direction.Up;
        if (vector == new Vector2(1,0)) {
            returnDirection = Direction.Right;
        } else if (vector == new Vector2(-1,0)) {
            returnDirection = Direction.Left;
        } else if (vector == new Vector2(0,1)) {
            returnDirection = Direction.Up;
        } else if (vector == new Vector2(0,-1)) {
            returnDirection = Direction.Down;
        } else {
            throw new System.Exception("Should not have reached here");
        }
        return returnDirection;
    }

    public static int NumberOfRightTurns(Direction currentDirection, Direction newDirection) {
        int numberOfRightTurns = -1;
        switch (currentDirection)
        {
            case Direction.Up:
                switch (newDirection)
                {
                    case Direction.Up:
                        numberOfRightTurns = 0;
                        break;
                    case Direction.Right:
                        numberOfRightTurns = 1;
                        break;
                    case Direction.Down:
                        numberOfRightTurns = 2;
                        break;
                    case Direction.Left:
                        numberOfRightTurns = 3;
                        break;
                }
                break;
            case Direction.Right:
                switch (newDirection)
                {
                    case Direction.Up:
                        numberOfRightTurns = 3;
                        break;
                    case Direction.Right:
                        numberOfRightTurns = 0;
                        break;
                    case Direction.Down:
                        numberOfRightTurns = 1;
                        break;
                    case Direction.Left:
                        numberOfRightTurns = 2;
                        break;
                }
                break;
            case Direction.Down:
                switch (newDirection)
                {
                    case Direction.Up:
                        numberOfRightTurns = 2;
                        break;
                    case Direction.Right:
                        numberOfRightTurns = 3;
                        break;
                    case Direction.Down:
                        numberOfRightTurns = 0;
                        break;
                    case Direction.Left:
                        numberOfRightTurns = 1;
                        break;
                }
                break;
            case Direction.Left:
                switch (newDirection)
                {
                    case Direction.Up:
                        numberOfRightTurns = 1;
                        break;
                    case Direction.Right:
                        numberOfRightTurns = 2;
                        break;
                    case Direction.Down:
                        numberOfRightTurns = 3;
                        break;
                    case Direction.Left:
                        numberOfRightTurns = 0;
                        break;
                }
                break;
        }
        return numberOfRightTurns;
    }

    public static int MinimumTurns(Direction currentDirection, Direction newDirection) {
        int numberTurns = NumberOfRightTurns(currentDirection, newDirection);
        if (numberTurns == 3) {
            numberTurns = 1;
        }
        return numberTurns;
    }

    public static Direction DirectionRotatedLeftRight(Direction currentObjectOrientation, Direction direction) {
        Direction directionToAssign = currentObjectOrientation;
        switch (direction)
        {
            case Direction.Right:
                switch (currentObjectOrientation)
                {
                    case Direction.Up:
                        directionToAssign = Direction.Right;
                        break;
                    case Direction.Right:
                        directionToAssign = Direction.Down;
                        break;
                    case Direction.Down:
                        directionToAssign = Direction.Left;
                        break;
                    case Direction.Left:
                        directionToAssign = Direction.Up;
                        break;
                }
                break;
            case Direction.Left:
                switch (currentObjectOrientation)
                {
                    case Direction.Up:
                        directionToAssign = Direction.Left;
                        break;
                    case Direction.Right:
                        directionToAssign = Direction.Up;
                        break;
                    case Direction.Down:
                        directionToAssign = Direction.Right;
                        break;
                    case Direction.Left:
                        directionToAssign = Direction.Down;
                        break;
                }
                break;
        }
        return directionToAssign;
    }
}