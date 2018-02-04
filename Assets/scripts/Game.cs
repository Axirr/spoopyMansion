using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game : MonoBehaviour
{
    #region Global Class Variables

    // Program mode flags
    bool runUnitTests = false;

    // Information about the current map
    Tiles[,] currentMap;
    int mapHorizontalWidth;
    int mapVeticalWidth;
    View myView;

    // Information about the active character and turn order
    GameObject currentCharacter;
    List<GameObject> characterTurnOrderList = new List<GameObject>();

    // Time variables for input delay
    const float MovementInputDelay = 0.2f;
    float timeSinceLastInputMove = 0.0f;
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

            // Add a human and zombie characters
            CreateHumanAndZombies(zombiesPerRoom);
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.M)) {
            ResetMapToRandom();
            CreateHumanAndZombies(zombiesPerRoom);
            return;
        }

        // To prevent hanging in tests with no characters in them
        if (characterTurnOrderList.Count == 0)
        {
            return;
        }

        // Check if the current player is located on a door tile and load a new map if they are
        Vector2 currentPlayerIndexPosition = myView.GameObjectCurrentIndexPosition(currentCharacter);
        Mover currentMover = currentCharacter.GetComponent<Mover>();
        // Standing on door behaviour
        if (currentMover is Human && 
            currentMap[(int)currentPlayerIndexPosition.x, (int)currentPlayerIndexPosition.y] == Tiles.Door) {
            roundsBeaten += 1;
            print("The number of rounds beaten is: " + roundsBeaten);
            ResetMapToRandom();
            CreateHumanAndZombies(zombiesPerRoom);
            return;
        }
        // Change character when out of moves
        if (currentMover.RemainingMoves() <= 0)
        {
            currentMover.ResetMoves();
            int newIndex = (characterTurnOrderList.IndexOf(currentCharacter) + 1) % characterTurnOrderList.Count;
            currentCharacter = characterTurnOrderList[newIndex];
            currentMover = currentCharacter.GetComponent<Mover>();
        }
        if (currentMover is Human)
        {
            ListenForMovementInput();
        }
        else if (currentMover is Zombie)
        {
            MoveToHuman(currentMover);
        } else {
            throw new System.Exception("Character type not recognized Game.");
        }
    }

    #endregion



    #region Setup functions

    // Sets globals corresponding to map properties when a new map is selected
    private void SetMap(Tiles[,] myMap)
    {
        currentMap = myMap;
        mapHorizontalWidth = myMap.GetLength(0);
        mapVeticalWidth = myMap.GetLength(1);
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

    private void ResetMapToRandom()
    {
        Tiles[,] myMap = Support.GenerateRandomMap();
        ResetMap(myMap);
    }

    private void CreateCharacter(MoverType newMoverType, Vector2 location) {
        string resourceLoadString;
        switch (newMoverType)
        {
            case MoverType.Human:
                resourceLoadString = @"prefabs\mover\Human";
                break;
            case MoverType.Zombie:
                resourceLoadString = @"prefabs\mover\Zombie";
                break;
            default:
                resourceLoadString = "";
                throw new System.Exception("Trying to spawn character for a type that currently isn't accounted for" +
                                           "modify character spawning function.");
        }
        GameObject newCharacter = Instantiate<GameObject>(Resources.Load(resourceLoadString) as GameObject);
        myView.MoveGameObjectToIndex(newCharacter, location);
        Mover myMover = newCharacter.GetComponent<Mover>();
        if (myMover is Human) {
            (myMover as Human).InitHuman();
            currentCharacter = newCharacter;
        } else if (myMover is Zombie) {
            (myMover as Zombie).InitZombie();
        }
        characterTurnOrderList.Add(newCharacter);
    }

    public void CreateHumanAndZombies(int numberOfZombies) {
        CreateCharacter(MoverType.Human,ValidRandomIndexFloorPosition());
        for (int i = 0; i < numberOfZombies; i++) {
            CreateCharacter(MoverType.Zombie,ValidRandomIndexFloorPosition());
        }
    }


    // Returns Vector2(-10000,-10000) if no valid location can be found
    // Cannot spawn a character in a door
    private Vector2 ValidRandomIndexFloorPosition()
    {
        List<Vector2> characterPositionList = GetOccupiedIndexPositionsList();
        List<int> xInts = new List<int>();
        List<int> yInts = new List<int>();
        for (int i =  0; i < mapHorizontalWidth; i++) {
            xInts.Add(i);
        }
        for (int j = 0; j < mapVeticalWidth; j++) {
            yInts.Add(j);
        }
        Support.shuffleListOfInt(xInts);
        Support.shuffleListOfInt(yInts);

        for (int i = 0; i < mapHorizontalWidth; i++)
        {
            for (int j = 0; j < mapVeticalWidth; j++)
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

    // Checks for index on the horizontal or vertical input axes, and tries the move in the inputted direction
    private void ListenForMovementInput()
    {
        timeSinceLastInputMove += Time.deltaTime;
        float horizontalInput = Input.GetAxisRaw("Horizontal");
        float verticalInput = Input.GetAxisRaw("Vertical");
        float rotationInput = Input.GetAxisRaw("Rotation");
        bool skipInput = Input.GetKeyDown(KeyCode.P);
        Direction currentMoverDirection = currentCharacter.GetComponent<Mover>().Orientation();
        if (timeSinceLastInputMove > MovementInputDelay)
        {
            bool didMove = false;
            Mover mover = currentCharacter.GetComponent<Mover>();
            if (skipInput) {
                mover.SetMovesToZero();
                didMove = true;
            }
            else if (horizontalInput > 0)
            {
                TryMoveForMoverInDirection(mover, Direction.Right);
            }
            else if (horizontalInput < 0)
            {
                TryMoveForMoverInDirection(mover, Direction.Left);
            }
            else if (verticalInput > 0)
            {
                TryMoveForMoverInDirection(mover, Direction.Up);
            }
            else if (verticalInput < 0)
            {
                TryMoveForMoverInDirection(mover, Direction.Down);
            } else if (rotationInput < 0) {
                mover.Rotate(Direction.Left);
                didMove = true;
            } else if (rotationInput > 0) {
                mover.Rotate(Direction.Right);
                didMove = true;
            }

            if (didMove) { timeSinceLastInputMove = 0.0f; }
        }
    }

    private void MoveToHuman(Mover mover)
    {
        Vector2 humanPosition = myView.GameObjectCurrentIndexPosition(characterTurnOrderList[0]);
        List<Direction> pathToHuman = ShortestPathToHuman(humanPosition, myView.GameObjectCurrentIndexPosition(currentCharacter));
        // No path to human
        if (pathToHuman.Count == 0)
        {
            mover.SetMovesToZero();
            return;
        }
        // Next to human, attack behaviour
        if (pathToHuman.Count == 1)
        {
            Destroy(characterTurnOrderList[0]);
            characterTurnOrderList = new List<GameObject>();
        }
        else
        {
            Direction directionToMove = pathToHuman[0];
            if (directionToMove != mover.Orientation()) {
                int rightTurns = Support.NumberOfRightTurns(mover.Orientation(), directionToMove);
                if (rightTurns != 3) {
                    mover.Rotate(Direction.Right);
                } else {
                    mover.Rotate(Direction.Left);
                }
            } else if (mover.RemainingMoves() < Support.MOVES_PER_STEP) {
                mover.SetMovesToZero();
            } else {
                Vector2 newLocation = myView.GameObjectCurrentIndexPosition(currentCharacter) + Support.IndexVectorForDirection(directionToMove);
                mover.MoveTo(newLocation);   
            }
        }
    }

    private void TryMoveForMoverInDirection(Mover mover, Direction direction)
    {
        Vector2 newLocation = myView.GameObjectCurrentIndexPosition(currentCharacter) + Support.IndexVectorForDirection(direction);
        Direction currentMoverOrientation = mover.Orientation();
        if (IsIndexSpaceWalkable(newLocation) && currentMoverOrientation == direction && mover.RemainingMoves() >= Support.MOVES_PER_STEP)
        {
            mover.MoveTo(newLocation);
            timeSinceLastInputMove = 0.0f;
        }
    }

    private bool IsIndexPositionWithinMap(Vector2 position) {
        if (position.x >= 0 &&
            position.x < mapHorizontalWidth &&
            position.y >= 0 &&
            position.y < mapVeticalWidth) {
            return true;
        }
        return false;
    }

    // Checks if the provided location (in index coordinates) is a prohibited tile or is occupied by
    // another character
    private bool IsIndexSpaceWalkable(Vector2 testSpace)
    {
        List<Tiles> prohibitedListForType;
        if (!(currentCharacter.GetComponent<Mover>() is Human))
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
    private List<Vector2> GetOccupiedIndexPositionsList()
    {
        List<Vector2> returnList = new List<Vector2>();
        foreach (GameObject tempGameObject in this.characterTurnOrderList)
        {
            Vector2 temp3DPosition = myView.GameObjectCurrentIndexPosition(tempGameObject);
            returnList.Add(temp3DPosition);
        }
        return returnList;
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
            //Support.shuffleListOfInt(directionIntsToTry);
            for (int i = 0; i < 4; i++) {
                Direction testDirection = (Direction)directionIntsToTry[i];
                Vector2 newLocation = originalLocation + Support.IndexVectorForDirection(testDirection);
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
