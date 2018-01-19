using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// A mostly static class of support constants and methods

public class Support : MonoBehaviour
{

    // Constants, for use by the entire program
    public const string MAP_TAG = "map";
    public const string MOVER_TAG = "mover";
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

    public static void DestroyWithTag(string myTag) {
        GameObject[] gameObjectsToDelete = GameObject.FindGameObjectsWithTag(myTag);
        foreach (GameObject myGameObject in gameObjectsToDelete) {
            Destroy(myGameObject);
        }
    }

    public static Tiles[,] GenerateRandomMap() {
        int randomXSize = Random.Range(5, 11);
        int randomYSize = Random.Range(5, 11);

        Tiles[,] returnMap = Support.GenerateMap(randomXSize, randomYSize);
        while (returnMap[1, 1] == Tiles.Obstacle)
        {
            returnMap = Support.GenerateMap(randomXSize, randomYSize);
        }
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
}

public enum Tiles
{
    Door,
    Floor,
    Obstacle,
    Wall
}

public enum Direction {
    Right,
    Left,
    Up,
    Down
}

public enum CharacterType {
    Human,
    Zombie
}