using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameInitializer : MonoBehaviour
{
    #region Global Class Variables

    // Program mode flags
    bool runUnitTests = false;

    // Information about the current map
    Tiles[,] currentMap;
    int currentNumHorizontalTiles;
    int currentNumVerticalTiles;
    View myView;

    // Information about the active character and turn order
    GameObject currentCharacter;
    List<GameObject> characterTurnOrderList = new List<GameObject>();

    // Time variables for input delay
    const float MovementInputDelay = 0.2f;
    float timeSinceLastMove = 0.0f;
    const int zombiesPerRoom = 1;

    // Game score variables
    int roundsBeaten = 0;

    #endregion



    #region Game Updating Functions

    // Use this for initialization
    void Start()
    {
        myView = Camera.main.GetComponent<View>();
        myView.Initialize();
        //
        // Check if unit test flag active
        if (runUnitTests)
        {
            Instantiate<GameObject>(Resources.Load(@"prefabs\Tester") as GameObject);
        }
        else
        {
            // Create and draw map
            ResetMapToRandom();

            // Add a human and zombie character
            CreateGameCharacters(zombiesPerRoom);
        }

    }

    // Update is called once per frame
    void Update()
    {
        bool mKeyInput = Input.GetKeyDown(KeyCode.M);
        if (mKeyInput) {
            ResetMapToRandom();
            CreateGameCharacters(zombiesPerRoom);
            return;
        }

        // Ensure there is at least 1 character to move
        if (characterTurnOrderList.Count == 0)
        {
            return;
        }

        // Check if the current player is located on a door tile and load a new map if they are
        Vector2 currentPlayerIndexPosition = myView.GameObjectCurrentIndexPosition(currentCharacter);
        if (currentMap[(int)currentPlayerIndexPosition.x, (int)currentPlayerIndexPosition.y] == Tiles.Door)
        {
            roundsBeaten += 1;
            print("The number of rounds beaten is: " + roundsBeaten);
            ResetMapToRandom();
            CreateGameCharacters(zombiesPerRoom);
            return;
        }
        Mover currentMoverScript = currentCharacter.GetComponent<Mover>();
        if (currentMoverScript.RemainingMoves() <= 0)
        {
            currentMoverScript.ResetMoves();
            int newIndex = (characterTurnOrderList.IndexOf(currentCharacter) + 1) % characterTurnOrderList.Count;
            currentCharacter = characterTurnOrderList[newIndex];
            currentMoverScript = currentCharacter.GetComponent<Mover>();
        }
        if (currentMoverScript.MoverType() == CharacterType.Human)
        {
            MoveIfInput();
        }
        else
        {
            Vector2 humanPosition = myView.GameObjectCurrentIndexPosition(characterTurnOrderList[0]);
            List<Direction> pathToHuman = ShortestPathToHuman(humanPosition,myView.GameObjectCurrentIndexPosition(currentCharacter));
            if (pathToHuman.Count == 0) {
                currentMoverScript.ReduceMovesByOne();
                return;
            }
            if (pathToHuman.Count == 1) {
                Destroy(characterTurnOrderList[0]);
                characterTurnOrderList = new List<GameObject>();
            } else {
                TryMove(currentCharacter, pathToHuman[0]);
            }
        }
    }

    #endregion



    #region Setup functions

    // Sets globals corresponding to map properties when a new map is selected
    public void SetMap(Tiles[,] myMap)
    {
        currentMap = myMap;
        currentNumHorizontalTiles = myMap.GetLength(0);
        currentNumVerticalTiles = myMap.GetLength(1);
        myView.UpdateMap(currentMap);
    }

    public void ResetMap(Tiles[,] mansionMap)
    {
        Support.DestroyWithTag(Support.MAP_TAG);
        Support.DestroyWithTag(Support.MOVER_TAG);
        SetMap(mansionMap);
        myView.DrawMap(mansionMap);
        characterTurnOrderList = new List<GameObject>();
    }

    public void ResetMapToRandom()
    {
        Tiles[,] myMap = Support.GenerateRandomMap();
        ResetMap(myMap);
    }

    // Provided location to place character should be pre-checked
    public void CreateAndPlaceCharacter(CharacterType newCharacterType, Vector2 indexLocation)
    {
        GameObject newCharacter;
        string resourceLoadString;

        switch (newCharacterType)
        {
            case CharacterType.Human:
                resourceLoadString = @"prefabs\mover\Human";
                break;
            case CharacterType.Zombie:
                resourceLoadString = @"prefabs\mover\Zombie";
                break;
            default:
                resourceLoadString = "";
                throw new System.Exception("Trying to spawn character for a type that currently isn't accounted for" +
                                           "modify CreateAndPlaceCharacter function.");
        }

        newCharacter = Instantiate<GameObject>(Resources.Load(resourceLoadString) as GameObject);
        myView.MoveGameObjectToIndex(newCharacter, indexLocation);
        Mover newCharacterMoverScript = newCharacter.GetComponent<Mover>();
        switch (newCharacterType) {
            case CharacterType.Human:
                newCharacterMoverScript.InitHuman();
                break;
            case CharacterType.Zombie:
                newCharacterMoverScript.InitZombie();
                break;
            default:
                break;
        }
        characterTurnOrderList.Add(newCharacter);
        if (characterTurnOrderList.Count == 1)
        {
            currentCharacter = characterTurnOrderList[0];
        }
    }

    public void CreateGameCharacters(int numberOfZombies) {
        CreateAndPlaceCharacter(CharacterType.Human, ValidRandomIndexFloorPosition());
        for (int i = 0; i < numberOfZombies; i++)
        {
            CreateAndPlaceCharacter(CharacterType.Zombie, ValidRandomIndexFloorPosition());
        }
    }


    // Returns Vector2(-10000,-10000) if no valid location can be found
    // Cannot spawn a character in a door
    private Vector2 ValidRandomIndexFloorPosition()
    {
        List<Vector2> characterPositionList = GetOccupiedIndexPositionsList();
        List<int> xInts = new List<int>();
        List<int> yInts = new List<int>();
        for (int i =  0; i < currentNumHorizontalTiles; i++) {
            xInts.Add(i);
        }
        for (int j = 0; j < currentNumVerticalTiles; j++) {
            yInts.Add(j);
        }
        Support.shuffleListOfInt(xInts);
        Support.shuffleListOfInt(yInts);

        for (int i = 0; i < currentNumHorizontalTiles; i++)
        {
            for (int j = 0; j < currentNumVerticalTiles; j++)
            {
                if (!Support.PROHIBITED_TILES_NONHUMAN.Contains(currentMap[xInts[i], yInts[j]]))
                {
                    Vector2 testPosition = new Vector2(xInts[i], yInts[j]);
                    if (characterPositionList.Count == 0)
                    {
                        return testPosition;
                    }
                    bool canReturn = true;
                    for (int k = 0; k < characterPositionList.Count; k++)
                    {;
                        if (characterPositionList[k].x == testPosition.x && characterPositionList[k].y == testPosition.y)
                        {
                            canReturn = false;
                            break;
                        }

                    }
                    if (canReturn) {
                        return testPosition;
                    }

                }
            }
        }
        return new Vector2(-10000,-10000);
    }

    #endregion


    #region Movement functions

    public void TryMove(GameObject mover, Direction direction)
    {
        Vector2 newIndices = myView.GameObjectCurrentIndexPosition(mover);
        newIndices += VectorForDirection(direction);

        if (IsIndexPositionWithinMap(newIndices))
        {
            if (IsIndexSpaceWalkable(newIndices))
            {
                myView.MoveGameObjectToIndex(mover,newIndices);
                //mover.transform.position = myView.IndicesToMapCoordinates(newIndices);
                timeSinceLastMove = 0.0f;
                mover.GetComponent<Mover>().ReduceMovesByOne();
            }
        }
    }

    public bool IsIndexPositionWithinMap(Vector2 position) {
        if (position.x >= 0 &&
            position.x < currentNumHorizontalTiles &&
            position.y >= 0 &&
            position.y < currentNumVerticalTiles) {
            return true;
        }
        return false;
    }

    public Vector2 VectorForDirection(Direction direction) {
        Vector2 returnVector = new Vector2();
        switch ((int)direction)
        {
            case 0:
                returnVector = new Vector2(1, 0);
                break;
            case 1:
                returnVector = new Vector2(-1, 0);
                break;
            case 2:
                returnVector = new Vector2(0, 1);
                break;
            case 3:
                returnVector = new Vector2(0, -1);
                break;
        }
        return returnVector;
    }

    // Checks if the provided location (in index coordinates) is a prohibited tile or is occupied by
    // another character
    public bool IsIndexSpaceWalkable(Vector2 testSpace)
    {
        List<Tiles> prohibitedListForType;
        if (currentCharacter.GetComponent<Mover>().MoverType() != CharacterType.Human)
        {
            prohibitedListForType = Support.PROHIBITED_TILES_NONHUMAN;
        }
        else
        {
            prohibitedListForType = Support.PROHIBITED_TILES_HUMAN;
        }
        Tiles testTile = currentMap[(int)testSpace.x, (int)testSpace.y];
        if (!prohibitedListForType.Contains(testTile))
        {
            List<Vector2> occupiedList = GetOccupiedIndexPositionsList();
            if (!occupiedList.Contains(testSpace))
            {
                return true;
            }
        }
        return false;
    }

    // Returns a list of Vector2 positions occupied by characters, in index format
    public List<Vector2> GetOccupiedIndexPositionsList()
    {
        List<Vector2> returnList = new List<Vector2>();
        foreach (GameObject tempGameObject in this.characterTurnOrderList)
        {
            Vector2 temp3DPosition = myView.GameObjectCurrentIndexPosition(tempGameObject);
            returnList.Add(temp3DPosition);
        }
        return returnList;
    }

    // Checks for index on the horizontal or vertical input axes, and tries the move in the inputted direction
    private void MoveIfInput()
    {
        timeSinceLastMove += Time.deltaTime;
        float horizontalInput = Input.GetAxisRaw("Horizontal");
        float verticalInput = Input.GetAxisRaw("Vertical");
        if (timeSinceLastMove > MovementInputDelay)
        {
            if (horizontalInput > 0)
            {
                TryMove(currentCharacter, Direction.Right);

            }
            else if (horizontalInput < 0)
            {
                TryMove(currentCharacter, Direction.Left);
            }
            else if (verticalInput > 0)
            {
                TryMove(currentCharacter, Direction.Up);
            }
            else if (verticalInput < 0)
            {
                TryMove(currentCharacter, Direction.Down);
            }
        }
    }

    private List<Direction> ShortestPathToHuman(Vector2 goalPosition, Vector2 startingPosition) {
        Path firstPath = ScriptableObject.CreateInstance<Path>();
        firstPath.SetPosition(startingPosition);
        List<Path> possiblePaths = new List<Path> {firstPath};
        List<Vector2> exploredPositions = new List<Vector2>() { startingPosition };
        while (possiblePaths.Count > 0) {
            Path testPath = possiblePaths[0];
            possiblePaths.RemoveAt(0);
            Vector2 originalLocation = testPath.LatestPosition();
            List<int> directionIntsToTry = new List<int>();
            for (int i = 0; i < 4; i++) {
                directionIntsToTry.Add(i);
            }
            Support.shuffleListOfInt(directionIntsToTry);
            for (int i = 0; i < 4; i++) {
                Direction testDirection = (Direction)directionIntsToTry[i];
                Vector2 newLocation = originalLocation + VectorForDirection(testDirection);
                if (newLocation == goalPosition) {
                    testPath.AddDirections(testDirection);
                    return testPath.Directions();
                }
                if (IsIndexPositionWithinMap(newLocation) && !exploredPositions.Contains(newLocation) && IsIndexSpaceWalkable(newLocation)) {
                    exploredPositions.Add(newLocation);
                    Path novelPath = ScriptableObject.CreateInstance<Path>();
                    novelPath.DefaultInit(newLocation);
                    List<Direction> tempDirections = new List<Direction>();
                    foreach (Direction myTempDirection in testPath.Directions()) {
                        tempDirections.Add(myTempDirection);
                    }
                    novelPath.SetDirections(tempDirections);
                    novelPath.AddDirections(testDirection);
                    possiblePaths.Add(novelPath);
                }
            }
        }
        return new List<Direction>();
    }

    #endregion
}
