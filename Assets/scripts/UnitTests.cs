using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTests : MonoBehaviour {
    
    Game testGame;
    int testNumber = 0;
    View myView;

    // Wall and floor only, 4 x 4
    Tiles[,] wallFloor4x4Map = new Tiles[,] {
        {Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall}
    };

    // Wall, floor, door, obstacle, 5 x 5
    Tiles[,] allTileTypes5x5Map = new Tiles[,] {
        {Tiles.Wall, Tiles.Wall, Tiles.Door, Tiles.Wall, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Obstacle, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Obstacle, Tiles.Wall},
        {Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall}
    };

    Tiles[,] allTileTypes10x9Map = new Tiles[,] {
        {Tiles.Wall, Tiles.Door, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Obstacle, Tiles.Obstacle, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Obstacle, Tiles.Obstacle, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Obstacle, Tiles.Obstacle, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Floor, Tiles.Wall},
        {Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall, Tiles.Wall}
    };


	// Use this for initialization
	void Start () {
        // Convert maps from human readable format
        wallFloor4x4Map = Support.ReverseMap(wallFloor4x4Map);
        allTileTypes5x5Map = Support.ReverseMap(allTileTypes5x5Map);
        allTileTypes10x9Map = Support.ReverseMap(allTileTypes10x9Map);

        // 
        testGame = Camera.main.GetComponent<Game>();
        myView = Camera.main.GetComponent<View>();
        print("Click mouse button 0 to move through tests.");
	}

    // Update is called once per frame
    void Update()
    {
        bool mouseInput = Input.GetMouseButtonDown(0);
        if (mouseInput)
        {
            switch (testNumber)
            {
                case 0:
                    print("Should display a centered 4 x 4 map with only floor and walls.");
                    testGame.ResetMap(wallFloor4x4Map);
                    testNumber += 1;
                    break;
                case 1:
                    print("Should display a centered 5 x 5 map with two obstacles on the right side of the room and" +
                          "a door in the top center.");
                    testGame.ResetMap(allTileTypes5x5Map);
                    testNumber += 1;
                    break;
                case 2:
                    print("Should display a 9 x 10 map with 2 x 3 obstacle one block away from top and right edge and " +
                          "a door one right from the top left corner.");
                    testGame.ResetMap(allTileTypes10x9Map);
                    testNumber += 1;
                    break;
                // Starting map movement tests
                case 3:
                    print("Should be able to move around on all floor (brown) and door (green) tiles and" +
                          "not on wall (black) or obstacle (red) tiles.");
                    print("Map for moving #1");

                    testNumber += 1;
                    break;
                case 4:
                    print("Map for moving #2");

                    testNumber += 1;
                    break;
                case 5:
                    print("Map for moving #3");

                    testNumber += 1;
                    break;
                //NEED TO CREATE TEST FOR PATHING FUNCTION
                case 6:
                    testNumber += 1;
                    break;
                case 7:
                    testNumber += 1;
                    break;
                default:
                    break;
            }
        }
    }
}
