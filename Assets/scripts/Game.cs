using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Priority_Queue;
using System.Linq;

public class Game : MonoBehaviour
{
    #region Global Class Variables

    // Program mode flags
    bool runUnitTests = false;
    bool visiblePathing = false;

    // Information about the current map
    Tiles[,] currentMap;
    int mapHorizontalWidth;
    int mapVeticalWidth;
    View myView;
    HUD hud;

    // Information about the active character and turn order
    GameObject currentCharacter;
    public List<GameObject> characterTurnOrderList = new List<GameObject>();

    // Time variables for input delay
    const float MovementInputDelay = 0.2f;
    const float ZombieMovementInputDelay = 0.0f;
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
        hud = GameObject.FindWithTag(Support.HUD_TAG).GetComponent<HUD>();
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

        if (Input.GetKeyDown(KeyCode.R)) {
            Support.DestroyAllWithTag(Support.MARKER_TAG);
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
            hud.SetRoundsBeaten(roundsBeaten);
            print(string.Format("The number of rounds beaten is: {0}", roundsBeaten));
            ResetMapToRandom();
            CreateHumanAndZombies(zombiesPerRoom);
            return;
        }
        // Change character when out of moves
        if (currentMover.RemainingMoves <= 0)
        {
            currentMover.ResetMoves();
            int newIndex = (characterTurnOrderList.IndexOf(currentCharacter) + 1) % characterTurnOrderList.Count;
            currentCharacter = characterTurnOrderList[newIndex];
            currentMover = currentCharacter.GetComponent<Mover>();
            int maxHumanMoves = characterTurnOrderList[0].GetComponent<Mover>().RemainingMoves;
            hud.SetCurrentActionPoints(maxHumanMoves);
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
        myView.SetNewMap(myMap);
    }

    public void ResetMap(Tiles[,] mansionMap)
    {
        Support.DestroyAllWithTag(Support.MAP_TAG);
        Support.DestroyAllWithTag(Support.MOVER_TAG);
        Support.DestroyAllWithTag(Support.MARKER_TAG);
        SetMap(mansionMap);
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
            newCharacter.GetComponent<SpriteRenderer>().enabled = false;
        }
        characterTurnOrderList.Add(newCharacter);
    }

    public void CreateHumanAndZombies(int numberOfZombies) {
        CreateCharacter(MoverType.Human,ValidRandomIndexFloorPosition());
        for (int i = 0; i < numberOfZombies; i++) {
            CreateCharacter(MoverType.Zombie,ValidRandomIndexFloorPosition());
        }
        hud.SetCurrentActionPoints(currentCharacter.GetComponent<Mover>().RemainingMoves);
        Human humanMover = currentCharacter.GetComponent<Mover>() as Human;
        List<Vector2> currentVision = VisionForSpaceWithShape(humanMover.Position,
                                                              humanMover.Orientation,
                                                              humanMover.VisionShape);
        myView.UpdateMap(new List<Vector2>(),currentVision);
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
                didMove = TryMoveForMoverInDirection(mover, Direction.Right);
            }
            else if (horizontalInput < 0)
            {
                didMove = TryMoveForMoverInDirection(mover, Direction.Left);
            }
            else if (verticalInput > 0)
            {
                didMove = TryMoveForMoverInDirection(mover, Direction.Up);
            }
            else if (verticalInput < 0)
            {
                didMove = TryMoveForMoverInDirection(mover, Direction.Down);
            } else if (rotationInput < 0) {
                mover.Rotate(Direction.Left);
                didMove = true;
            } else if (rotationInput > 0) {
                mover.Rotate(Direction.Right);
                didMove = true;
            }

            if (didMove) { 
                timeSinceLastInputMove = 0.0f;
                hud.SetCurrentActionPoints(mover.RemainingMoves);
            }
        }
    }

    private void MoveToHuman(Mover mover)
    {
        timeSinceLastInputMove += Time.deltaTime;
        if (timeSinceLastInputMove < ZombieMovementInputDelay) {
            return;
        } else {
            timeSinceLastInputMove = 0.0f;
        }
        Vector2 humanPosition = myView.GameObjectCurrentIndexPosition(characterTurnOrderList[0]);
        List<Vector2> pathToHuman = ShortestPath3(humanPosition, myView.GameObjectCurrentIndexPosition(currentCharacter));
        if (pathToHuman.Count == 0)
        {
            mover.SetMovesToZero();
            return;
        }
        else
        {
            Direction directionToMove = Support.DirectionForIndexVector(pathToHuman[1]-myView.GameObjectCurrentIndexPosition(currentCharacter));
            int requiredActionPoints = -1;
            if (directionToMove != mover.Orientation)
            {
                requiredActionPoints = mover.MovesPerRotation;
            }
            else if (pathToHuman.Count > 2)
            {
                requiredActionPoints = mover.MovesPerStep;
            }
            else if (pathToHuman.Count == 2)
            {
                requiredActionPoints = mover.MovesPerAttack;
            }

            if (requiredActionPoints > mover.RemainingMoves)
            {
                mover.SetMovesToZero();
            }
            else
            {
                if (directionToMove != mover.Orientation)
                {
                    int rightTurns = Support.NumberOfRightTurns(mover.Orientation, directionToMove);
                    if (rightTurns != 3)
                    {
                        mover.Rotate(Direction.Right);
                    }
                    else
                    {
                        mover.Rotate(Direction.Left);
                    }
                }
                else if (pathToHuman.Count == 2)
                {
                    currentCharacter.GetComponent<SpriteRenderer>().enabled = true;
                    Destroy(characterTurnOrderList[0]);
                    characterTurnOrderList = new List<GameObject>();
                }
                else
                {
                    Vector2 newLocation = myView.GameObjectCurrentIndexPosition(currentCharacter) + Support.IndexVectorForDirection(directionToMove);
                    mover.MoveTo(newLocation);
                    Human humanMover = characterTurnOrderList[0].GetComponent<Mover>() as Human;
                    List<Vector2> humanVisionCone = VisionForSpaceWithShape(humanMover.Position,
                                                                            humanMover.Orientation,
                                                                            humanMover.VisionShape);
                    if (!humanVisionCone.Contains(mover.Position)) {
                        currentCharacter.GetComponent<SpriteRenderer>().enabled = false;
                    }
                }
            }
        }
    }

    private bool TryMoveForMoverInDirection(Mover mover, Direction direction)
    {
        Vector2 newLocation = myView.GameObjectCurrentIndexPosition(currentCharacter) + Support.IndexVectorForDirection(direction);
        Direction currentMoverOrientation = mover.Orientation;
        if (IsIndexSpaceWalkable(newLocation) && currentMoverOrientation == direction && mover.RemainingMoves >= Support.MOVES_PER_STEP)
        {
            mover.MoveTo(newLocation);
            return true;
        }
        return false;
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

    private List<Vector2> ShortestPath3(Vector2 goalSquare, Vector2 startSquare)
    {
        Support.DestroyAllWithTag(Support.MARKER_TAG);
        Mover currentMover = currentCharacter.GetComponent<Mover>();

        Dictionary<OrientedSquare, int> distanceDict = new Dictionary<OrientedSquare, int>();
        const int STARTING_DISTANCE = 1000000;
        Dictionary<OrientedSquare, OrientedSquare> previousDict = new Dictionary<OrientedSquare, OrientedSquare>();
        Vector2 nullVector = new Vector2(-1,-1);
        Direction[] directionArray = { Direction.Up, Direction.Down, Direction.Left, Direction.Right };
        for (int i = 0; i < mapHorizontalWidth; i++)
        {
            for (int j = 0; j < mapVeticalWidth; j++)
            {
                foreach (var direction in directionArray) {
                    OrientedSquare createdSquare = new OrientedSquare(new Vector2(i, j),direction);
                    distanceDict[createdSquare] = STARTING_DISTANCE;
                    previousDict[createdSquare] = new OrientedSquare(nullVector, Direction.Up);
                }
            }
        }
        List<OrientedSquare> visitedSquares = new List<OrientedSquare>();



        SimplePriorityQueue<OrientedSquare, float> myQueue = new SimplePriorityQueue<OrientedSquare, float>();
        OrientedSquare startOrientedSquare = new OrientedSquare(startSquare, currentMover.Orientation);
        distanceDict[startOrientedSquare] = 0;
        myQueue.Enqueue(startOrientedSquare,distanceDict[startOrientedSquare]+heuristicDistanceStartToGoal(startOrientedSquare.Position,goalSquare,currentMover));
        float totalDistanceApproximate = heuristicDistanceStartToGoal(startOrientedSquare.Position,goalSquare,currentMover);
        int checkCount = 0;
        bool isSolved = false;

        // For drawing pathfinding AI
        List<Vector2> squaresToDraw = new List<Vector2>();
        GameObject circlePathMarkerPrefab = Resources.Load(@"prefabs/pathMarkers/circleOptimalPath") as GameObject;

        while (myQueue.Count > 0 && !isSolved)
        {
            checkCount += 1;
            OrientedSquare fromOrientedSquare = myQueue.Dequeue();
            visitedSquares.Add(fromOrientedSquare);
            Vector2 fromSquare = fromOrientedSquare.Position;
            Direction fromDirection = fromOrientedSquare.Orientation;

            // Construct neighbour squares
            List<OrientedSquare> testSquares = new List<OrientedSquare>() { 
                new OrientedSquare(fromSquare, Support.DirectionRotatedLeftRight(fromDirection, Direction.Right)),
                new OrientedSquare(fromSquare, Support.DirectionRotatedLeftRight(fromDirection, Direction.Left))
            };
            Vector2 forwardSquare = fromSquare + Support.IndexVectorForDirection(fromDirection);
            if (IsIndexSpaceWalkable(forwardSquare) || forwardSquare == goalSquare) {
                testSquares.Add(new OrientedSquare(forwardSquare, fromDirection));
            }

            foreach (OrientedSquare testSquare in testSquares)
            {
                int actionPointsDistance = actionPointsCostToOrientedNeighbour(testSquare,fromDirection,currentMover);
                int newDistance = distanceDict[fromOrientedSquare] + actionPointsDistance;
                if (newDistance < distanceDict[testSquare])
                {
                    distanceDict[testSquare] = newDistance;
                    previousDict[testSquare] = fromOrientedSquare;
                }
                if (!visitedSquares.Contains(testSquare))
                {
                    float heuristicDistance = heuristicDistanceStartToGoal(testSquare.Position,goalSquare,currentMover);
                    myQueue.Enqueue(testSquare, distanceDict[testSquare] + heuristicDistance);
                }
                //print("Test square is: " + testSquare.Position);
                //print("Goal square is: " + goalSquare);
                if (testSquare.Position == goalSquare)
                {
                    isSolved = true;
                }

                if (!(squaresToDraw.Contains(testSquare.Position))) {
                    squaresToDraw.Add(testSquare.Position);
                }
            }
        }
        print(string.Format("Number of oriented squares examined was {0}.", checkCount));
        if (visiblePathing) {
            DrawPathing(squaresToDraw);
        }
        if (!isSolved)
        {
            print("No pathing solution found.");
            return new List<Vector2>();
        }
        else
        {
            List<Vector2> squareList = new List<Vector2>();
            List<OrientedSquare> goalSquares = new List<OrientedSquare>();
            for (int i = 0; i < 4; i++) {
                goalSquares.Add(new OrientedSquare(goalSquare,(Direction)i));
            }
            OrientedSquare minGoalSquare = goalSquares[0];
            foreach (OrientedSquare testGoalSquare in goalSquares) {
                int distance = distanceDict[testGoalSquare];
                if (distance < distanceDict[minGoalSquare]) {
                    minGoalSquare = testGoalSquare;
                }
            }
            print("Total distance is: " + distanceDict[minGoalSquare]);
            OrientedSquare currentSquare = minGoalSquare;
            while (true)
            {
                if (squareList.Count == 0 || currentSquare.Position != squareList[squareList.Count - 1]) {
                    squareList.Add(currentSquare.Position);
                }

                if (distanceDict[currentSquare] == 0)
                {
                    break;
                } 
                currentSquare = previousDict[currentSquare];
            }
            squareList.Reverse();
            if (visiblePathing) {
                foreach (Vector2 square in squareList)
                {
                    GameObject myCircleMarker = Instantiate<GameObject>(circlePathMarkerPrefab, new Vector3(0, 0, 0), Quaternion.identity);
                    myView.MoveGameObjectToIndex(myCircleMarker, square);
                }
            }
            return squareList;
        }
    }

    private void DrawPathing(List<Vector2> visitedSquares) {
        for (int i = 0; i < visitedSquares.Count(); i++) {
            var square = visitedSquares[i];
            GameObject trianglePrefab = Resources.Load(@"prefabs/pathMarkers/triangleExploredSquares") as GameObject;
            GameObject marker = Instantiate<GameObject>(trianglePrefab, new Vector3(0, 0, 0), Quaternion.identity);
            float colorNumber = i / (float)visitedSquares.Count();
            Color myColor = new Color(colorNumber, 0, 0, 1f);
            marker.GetComponent<SpriteRenderer>().material.color = myColor;
            myView.MoveGameObjectToIndex(marker, square);
        }
    }

    private int actionPointsCostToOrientedNeighbour(OrientedSquare testSquare, Direction fromDirection, Mover currentMover) {
        if (testSquare.Orientation != fromDirection)
        {
            return currentMover.MovesPerRotation;
        }
        else
        {
            return currentMover.MovesPerStep;
        }
    }

    private float heuristicDistanceStartToGoal(Vector2 testSquare, Vector2 goalSquare, Mover currentMover) {
        float xToMove = goalSquare.x - testSquare.x;
        float yToMove = goalSquare.y - testSquare.y;
        int minimumRotations = 0;
        List<Direction> directionList = new List<Direction>();
        if (xToMove < 0)
        {
            directionList.Add(Direction.Left);
        }
        else if (xToMove > 0)
        {
            directionList.Add(Direction.Right);
        }
        if (yToMove < 0)
        {
            directionList.Add(Direction.Down);
        }
        else if (yToMove > 0)
        {
            directionList.Add(Direction.Up);
        }
        foreach (Direction myDirection in directionList)
        {
            int tempNumberTurns = Support.MinimumTurns(currentMover.Orientation, myDirection);
            if (tempNumberTurns > minimumRotations)
            {
                minimumRotations = tempNumberTurns;
            }
        }
        if (minimumRotations > 2)
        {
            throw new System.Exception("Should not be here, minimum rotations is more than 2.");
        }
        float heuristicDistance = (Mathf.Abs(xToMove) + Mathf.Abs(yToMove)) * currentMover.MovesPerStep +
                                                                                          minimumRotations * currentMover.MovesPerRotation;
        return heuristicDistance;
    }

    public List<Vector2> VisionForSpaceWithShape(Vector2 location, Direction orientation,bool[,] visionShape) {
        List<Vector2> visibleSquares = new List<Vector2>() { location };


        int xSignModifier = 1;
        int ySignModifier = 1;
        bool isWidthOffset = true;
        bool[,] transposedArray = Support.TransposeBoolArray(visionShape);
        bool[,] arrayToWorkWith = visionShape;
        switch (orientation) {
            case Direction.Down:
                ySignModifier = -1;
                break;
            case Direction.Left:
                arrayToWorkWith = transposedArray;
                xSignModifier = -1;
                isWidthOffset = false;
                break;
            case Direction.Right:
                arrayToWorkWith = transposedArray;
                isWidthOffset = false;
                break;
            default:
                break;
        }
        int width = arrayToWorkWith.GetLength(0);
        int height = arrayToWorkWith.GetLength(1);
        int widthOffset = -width/2;
        int heightOffset = -height/2;
        if (isWidthOffset) {
            heightOffset = 1;
        } else {
            widthOffset = 1;
        }

        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
                Vector2 testIndex = new Vector2(i*xSignModifier + widthOffset*xSignModifier, j*ySignModifier+heightOffset*ySignModifier) + location;
                if (IsIndexPositionWithinMap(testIndex) && arrayToWorkWith[i,j] == true) {
                    visibleSquares.Add(testIndex);
                }
            }
        }
        return visibleSquares;
    }

    #endregion
}
