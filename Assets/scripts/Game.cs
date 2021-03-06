﻿using System.Collections;
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
    bool shadowsEnabled = true;


    // Information about the current map
    Tiles[,] currentMap;
    int mapHorizontalWidth;
    int mapVeticalWidth;
    View myView;
    HUD hud;
    const int maxMapGenerationAttempts = 50;

    // Information about the active character and turn order
    GameObject currentCharacter;
    public List<GameObject> characterTurnOrderList = new List<GameObject>();
    bool hasKey = false;

    // Time variables for input delay
    const float MovementInputDelay = 0.2f;
    const float ZombieMovementInputDelay = 0.0f;
    float timeSinceLastInputMove = 0.0f;
    const int zombiesPerRoom = 1;

    // Game score variables
    int roundsBeaten = 0;

    // Dummy human and zombie for pathing function to get type specific action costs, etc.
    Human dummyHuman;
    Zombie dummyZombie;

    #endregion



    #region Game Updating Functions

    // Use this for initialization
    void Start()
    {
        myView = Camera.main.GetComponent<View>();
        hud = GameObject.FindWithTag(Support.HUD_TAG).GetComponent<HUD>();

        //Poor workaround for pathing function requiring a mover
        dummyHuman = GameObject.FindWithTag(Support.HUD_TAG).AddComponent<Human>();
        dummyHuman.InitHuman(new Vector2(-10, -10));
        dummyZombie = GameObject.FindWithTag(Support.HUD_TAG).AddComponent<Zombie>();
        dummyZombie.InitZombie(new Vector2(-11, -11));

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
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.M)) {
            ResetMapToRandom();
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
        //Check for key, if enabled
        if (Support.isKeyEnabled && !hasKey)
        {
            GameObject key = GameObject.FindWithTag(Support.KEY_TAG);
            Vector2 keyLocation = myView.GameObjectCurrentIndexPosition(key);
            //MonoBehaviour.print("Key location: " + keyLocation.x + " " + keyLocation.y);
            //MonoBehaviour.print("Human Location: " + currentPlayerIndexPosition.x + " " + currentPlayerIndexPosition.y);
            if (currentMover is Human && currentPlayerIndexPosition.x == keyLocation.x && currentPlayerIndexPosition.y == keyLocation.y)
            {
                ToggleHasKey(true);
                Destroy(key);
            }
        }

        // Standing on door behaviour
        if (currentMover is Human && 
            currentMap[(int)currentPlayerIndexPosition.x, (int)currentPlayerIndexPosition.y] == Tiles.Door && (hasKey || !Support.isKeyEnabled)) {
            roundsBeaten += 1;
            hud.SetRoundsBeaten(roundsBeaten);
            print(string.Format("The number of rounds beaten is: {0}", roundsBeaten));
            ResetMapToRandom();
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
        else if (currentMover is Human)
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

    public void ToggleHasKey(bool keyStatus)
    {
        hasKey = keyStatus;
        hud.SetHasKey(keyStatus);
    }

    #endregion



    #region Setup functions

    // Sets globals corresponding to map properties when a new map is selected
    private void SetMap(Tiles[,] myMap)
    {
        ToggleHasKey(false);
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
        Support.DestroyAllWithTag(Support.KEY_TAG);
        SetMap(mansionMap);
    }

    private void ResetMapToRandom()
    {
        bool wasSuccessful = false;
        int attemptCount = 0;
        while (!wasSuccessful && attemptCount < maxMapGenerationAttempts) {
            attemptCount += 1;
            Tiles[,] myMap = Support.GenerateRandomMap();
            this.SetMap(myMap);
            List<Vector2> spawnIndexList = new List<Vector2>();
            for (int i = 0; i < (zombiesPerRoom + 1); i++)
            {
                spawnIndexList.Add(ValidRandomIndexFloorPosition(currentMap,spawnIndexList));
            }
            if (Support.isKeyEnabled)
            {
                spawnIndexList.Add(ValidRandomIndexFloorPosition(currentMap, spawnIndexList));
            }
            if (IsMapValid(currentMap,spawnIndexList)) {
                wasSuccessful = true;
                ResetMap(myMap);
                CreateHumanAndZombies(spawnIndexList);
            }
        }
        print("Number of map generation attempts was: " + attemptCount);
    }

    private bool IsMapValid(Tiles[,] myMap, List<Vector2> spawnLocations) {
        bool isValid = true;
        Vector2 goalSquare = new Vector2(-1, -1);
        for (int i = 0; i < myMap.GetLength(0); i++)
        {
            for (int j = 0; j < myMap.GetLength(1); j++)
            {
                if (myMap[i, j] == Tiles.Door)
                {
                    goalSquare = new Vector2(i, j);
                    break;
                }
            }
        }
        if (goalSquare == new Vector2(-1, -1))
        {
            isValid = false;
            return isValid;
        }
        Vector2 testHumanPosition = spawnLocations[0];
        List<Vector2> humanPath = this.ShortestPath(goalSquare, testHumanPosition, Direction.Right, dummyHuman, currentMap, spawnLocations);
        if (!humanPath.Any())
        {
            isValid = false;
            return isValid;
        }
        for (int i = 1; i < spawnLocations.Count; i++)
        {
            Vector2 testZombiePosition = spawnLocations[i];
            List<Vector2> zombiePath = this.ShortestPath(testHumanPosition, testZombiePosition, Direction.Right, dummyZombie, currentMap, spawnLocations);
            if (!zombiePath.Any())
            {
                isValid = false;
                return isValid;
            }
        }
        return isValid;
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
        Mover myMover = newCharacter.GetComponent<Mover>();
        if (myMover is Human)
        {
            (myMover as Human).InitHuman(location);
            currentCharacter = newCharacter;
        }
        else if (myMover is Zombie)
        {
            (myMover as Zombie).InitZombie(location);
            if (Support.isFogOfWar)
            {
                newCharacter.GetComponent<SpriteRenderer>().enabled = false;
            }
        }
        myView.MoveGameObjectToIndex(newCharacter, location);
        characterTurnOrderList.Add(newCharacter);
    }

    public void CreateItem(Vector2 location)
    {
        string resourceLoadString;
        resourceLoadString = @"prefabs\Key";
        GameObject newItem = Instantiate<GameObject>(Resources.Load(resourceLoadString) as GameObject);
        Item item = newItem.GetComponent<Item>();
        item.Init(location);
        myView.MoveGameObjectToIndex(newItem, location);
        if (Support.isFogOfWar)
        {
            newItem.GetComponent<SpriteRenderer>().enabled = false;
        }
    }

    public void CreateHumanAndZombies(List<Vector2> spawnLocations) {
        Support.DestroyAllWithTag(Support.MOVER_TAG);
        characterTurnOrderList = new List<GameObject>();
        // Only goes to second last item, to potentially accomodate key generation
        for (int i = 0; i < (spawnLocations.Count - 1); i++) {
            if (i == 0) {
                CreateCharacter(MoverType.Human, spawnLocations[i]);
            } else {
                CreateCharacter(MoverType.Zombie, spawnLocations[i]);
            }
        }
        if (Support.isKeyEnabled)
        {
            CreateItem(spawnLocations[spawnLocations.Count - 1]);
        }
        else
        {
            CreateCharacter(MoverType.Zombie, spawnLocations[spawnLocations.Count - 1]);
        }
        hud.SetCurrentActionPoints(currentCharacter.GetComponent<Mover>().RemainingMoves);
        Human humanMover = currentCharacter.GetComponent<Mover>() as Human;
        List<Vector2> currentVision = VisionForSpaceWithShape(humanMover.Position,
                                                              humanMover.Orientation,
                                                              humanMover.VisionShape);
		myView.UpdateMap(currentVision, new List<Vector2>());
    }


    // Returns Vector2(-10000,-10000) if no valid location can be found
    // Cannot spawn a character in a door
    private Vector2 ValidRandomIndexFloorPosition(Tiles[,] myMap, List<Vector2> characterPositionList)
    {
        //List<Vector2> characterPositionList = GetOccupiedIndexPositionsList();
        List<int> xInts = new List<int>();
        List<int> yInts = new List<int>();
        int myMapWidth = myMap.GetLength(0);
        int myMapHeight = myMap.GetLength(1);
        for (int i =  0; i < myMapWidth; i++) {
            xInts.Add(i);
        }
        for (int j = 0; j < myMapHeight; j++) {
            yInts.Add(j);
        }
        Support.shuffleListOfInt(xInts);
        Support.shuffleListOfInt(yInts);

        for (int i = 0; i < myMapWidth; i++)
        {
            for (int j = 0; j < myMapHeight; j++)
            {
                // Non-human prohibited, not allowed to spawn on door
                if (!Support.PROHIBITED_TILES_NONHUMAN.Contains(myMap[xInts[i], yInts[j]]))
                {
                    Vector2 testPosition = new Vector2(xInts[i], yInts[j]);
                    if (characterPositionList.Count == 0)
                    {
                        return testPosition;
                    }
                    bool canReturn = true;
                    for (int k = 0; k < characterPositionList.Count; k++)
                    {;
                        if (System.Math.Abs(characterPositionList[k].x - testPosition.x) < 0.1 && System.Math.Abs(characterPositionList[k].y - testPosition.y) < 0.1)
                        {
                            canReturn = false;
                            break;
                        }

                    }
                    if (canReturn)
                    {
                        return testPosition;
                    }

                }
            }
        }
        print("ERROR, COULD NOT GENERATE VALID RANDOM SPAWN LOCATION");
        return new Vector2(-10000, -10000);
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
            // prefers horizontal to vertical moves if simultaneously pressed
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
            } else if (rotationInput < 0 || rotationInput > 0) {
				Direction directionToRotate;
                if (rotationInput < 0) { directionToRotate = Direction.Left; }
                else { directionToRotate = Direction.Right; }
                mover.Rotate(directionToRotate);
                didMove = true;
            }

            if (didMove) { 
                timeSinceLastInputMove = 0.0f;
                hud.SetCurrentActionPoints(mover.RemainingMoves);
            }
        }
    }

	public List<Vector2> currentlyVisibleTiles()
	{
		Human human = characterTurnOrderList[0].GetComponent<Mover>() as Human;
		List<Vector2> visibleSquares = VisionForSpaceWithShape(human.Position, human.Orientation, human.VisionShape);
		return visibleSquares;
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
        List<Vector2> pathToHuman = ShortestPath(humanPosition, mover.Position, mover.Orientation, mover, currentMap, GetOccupiedIndexPositionsList());
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
                    if (Support.isFogOfWar && !humanVisionCone.Contains(mover.Position)) {
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
        if (IsIndexSpaceWalkable(newLocation, mover.ImpassableTiles, currentMap, GetOccupiedIndexPositionsList()) && currentMoverOrientation == direction && mover.RemainingMoves >= Support.MOVES_PER_STEP)
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
    private bool IsIndexSpaceWalkable(Vector2 testSpace, List<Tiles> impassableTiles, Tiles[,] testMap, List<Vector2> occupiedList)
    {
        Tiles testTile = testMap[(int)testSpace.x, (int)testSpace.y];
        if (!impassableTiles.Contains(testTile))
        {
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

    private List<Vector2> ShortestPath(Vector2 goalSquare, Vector2 startSquare, Direction orientation, Mover dummyMover, Tiles[,] testMap, List<Vector2> occupiedList)
    {
        Support.DestroyAllWithTag(Support.MARKER_TAG);
        Dictionary<OrientedSquare, int> distanceDict = new Dictionary<OrientedSquare, int>();
        Dictionary<OrientedSquare, OrientedSquare> previousDict = new Dictionary<OrientedSquare, OrientedSquare>();
        Vector2 nullVector = new Vector2(-1, -1);
        Direction[] directionArray = { Direction.Up, Direction.Down, Direction.Left, Direction.Right };
        List<OrientedSquare> visitedSquares = new List<OrientedSquare>();

        SimplePriorityQueue<OrientedSquare, float> myQueue = new SimplePriorityQueue<OrientedSquare, float>();
        OrientedSquare startOrientedSquare = new OrientedSquare(startSquare, orientation);
        distanceDict[startOrientedSquare] = 0;
        myQueue.Enqueue(startOrientedSquare, distanceDict[startOrientedSquare] + heuristicDistanceStartToGoal(startOrientedSquare.Position, goalSquare, orientation, dummyMover));
        int checkCount = 0;
        bool isSolved = false;

        // For drawing pathfinding AI
        List<Vector2> squaresToDraw = new List<Vector2>();
        GameObject circlePathMarkerPrefab = Resources.Load(@"prefabs/pathMarkers/circleOptimalPath") as GameObject;

        OrientedSquare foundOrientedGoal = new OrientedSquare(new Vector2(-1, -1), Direction.Down);
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
            if (IsIndexSpaceWalkable(forwardSquare, dummyMover.ImpassableTiles, testMap, occupiedList) || forwardSquare == goalSquare)
            {
                testSquares.Add(new OrientedSquare(forwardSquare, fromDirection));
            }

            foreach (OrientedSquare testSquare in testSquares)
            {
                int actionPointsDistance = actionPointsCostToOrientedNeighbour(testSquare, fromDirection, dummyMover);
                int newDistance = distanceDict[fromOrientedSquare] + actionPointsDistance;
                if (distanceDict.ContainsKey(testSquare))
                {
                    if (newDistance < distanceDict[testSquare])
                    {
                        distanceDict[testSquare] = newDistance;
                        previousDict[testSquare] = fromOrientedSquare;
                    }
                } else {
                    distanceDict[testSquare] = newDistance;
                    previousDict[testSquare] = fromOrientedSquare;
                }
                if (!visitedSquares.Contains(testSquare))
                {
                    float heuristicDistance = heuristicDistanceStartToGoal(testSquare.Position, goalSquare, orientation, dummyMover);
                    myQueue.Enqueue(testSquare, distanceDict[testSquare] + heuristicDistance);
                    //Below line may cause bugs
                    visitedSquares.Add(testSquare);
                }
                if (testSquare.Position == goalSquare)
                {
                    isSolved = true;
                    foundOrientedGoal = testSquare;
                    break;
                }

                if (!(squaresToDraw.Contains(testSquare.Position)))
                {
                    squaresToDraw.Add(testSquare.Position);
                }
            }
        }
        //print(string.Format("Number of oriented squares examined was {0}.", checkCount));
        if (visiblePathing)
        {
            DrawPathing(squaresToDraw);
        }
        if (!isSolved)
        {
            print("No pathing solution found.");
            return new List<Vector2>();
        }
        else
        {
            OrientedSquare currentSquare = foundOrientedGoal;
            List<Vector2> squareList = new List<Vector2>();
            while (true)
            {
                if (squareList.Count == 0 || currentSquare.Position != squareList[squareList.Count - 1])
                {
                    squareList.Add(currentSquare.Position);
                }

                if (distanceDict[currentSquare] == 0)
                {
                    break;
                }
                currentSquare = previousDict[currentSquare];
            }
            squareList.Reverse();
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

    private int actionPointsCostToOrientedNeighbour(OrientedSquare testSquare, Direction fromDirection, Mover dummyMover) {
        if (testSquare.Orientation != fromDirection)
        {
            return dummyMover.MovesPerRotation;
        }
        else
        {
            return dummyMover.MovesPerStep;
        }
    }

    private float heuristicDistanceStartToGoal(Vector2 testSquare, Vector2 goalSquare, Direction startOrientation, Mover dummyMover) {
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
            int tempNumberTurns = Support.MinimumTurns(startOrientation, myDirection);
            if (tempNumberTurns > minimumRotations)
            {
                minimumRotations = tempNumberTurns;
            }
        }
        if (minimumRotations > 2)
        {
            throw new System.Exception("Should not be here, minimum rotations is more than 2.");
        }
        float heuristicDistance = (Mathf.Abs(xToMove) + Mathf.Abs(yToMove)) * dummyMover.MovesPerStep +
                                                                                          minimumRotations * dummyMover.MovesPerRotation;
        return heuristicDistance;
    }

    //Some vision shapes don't work properly, either an issue with this or the jagged transpose function
    public List<Vector2> VisionForSpaceWithShape(Vector2 location, Direction orientation,bool[][] visionShape) {
        List<Vector2> visibleSquares = new List<Vector2>() { location };


        int xSignModifier = 1;
        int ySignModifier = 1;
        bool isWidthOffset = true;
        bool[][] transposedArray = Support.TransposeJaggedArray(visionShape);
        bool[][] arrayToWorkWith = visionShape;
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
        int height = arrayToWorkWith[0].GetLength(0);
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
                if (IsIndexPositionWithinMap(testIndex) && arrayToWorkWith[i][j] == true) {
					if (shadowsEnabled) {
						List<Vector2> tracedList = raytrace((int)location.x, (int)location.y, (int)testIndex.x, (int)testIndex.y);
						if (tracedList.Count > 0)
						{
							visibleSquares.Add(testIndex);
						}
					} else
					{
						visibleSquares.Add(testIndex);
					}
                }
            }
        }
		//List<Vector2> returnList = new List<Vector2>();
		//if (shadowsEnabled)
		//{
		//	foreach (var tile in visibleSquares)
		//	{
		//		float tileX = tile.x;
		//		float tileY = tile.y;
		//		float slope = tileY - tileX / (location.y - location.x);
		//		float inverseSlope = -1.0f / slope;
		//		//Ax + By = C
		//		float AVLine = -slope;
		//		float BVLine = 1;
		//		float CVLine = location.y - slope * location.x;
		//		float ASLine = -inverseSlope;
		//		float BSLine = 1;
		//		float CSLine = tileY - inverseSlope * tileX;
		//		float delta = AVLine * BSLine - ASLine * BVLine;
		//		if (Mathf.Abs(delta) > 0.001) {
		//			float intersectionX = (BSLine*CVLine - BVLine*CSLine)/delta;
		//			float intersectionY = (AVLine*CSLine - ASLine*CVLine)/delta;
		//			float distance = Mathf.Sqrt(Mathf.Pow(intersectionX-tileX,2)+Mathf.Pow(intersectionY-tileY,2));
		//			if (distance > 0.5) {
		//				returnList.Add(tile);
		//			}
		//			print("For tile:");
		//			print(intersectionX);
		//			print(intersectionY);
		//			print(distance);
		//		} else
		//		{
		//			print("Lines are parallel.");
		//		}
		//	}
		//}

		//return visibleSquares;
		return visibleSquares;
    }

	//BUG: Will go beyond minimum or maximum X indices on long traversals
	private List<Vector2> raytrace(int x0, int y0, int x1, int y1)
	{
		print(string.Format("Tracing from ({0},{1}).", x0, y0));
		print(string.Format("To ({0},{1}).", x1, y1));
		List<Vector2> resultList = new List<Vector2>();
		int dx = Mathf.Abs(x1 - x0);
		int dy = Mathf.Abs(y1 - y0);
		int x = x0;
		int y = y0;
		int n = 1 + dx + dy;
		int x_inc = (x1 > x0) ? 1 : -1;
		int y_inc = (y1 > y0) ? 1 : -1;
		int error = dx - dy;
		dx *= 2;
		dy *= 2;

		for (; n > 0; --n)
		{
			if (n == 1)
            {
				print("Added square!");
				resultList.Add(new Vector2(x, y));
				break;
            }
			try
			{
				if (currentMap[x, y] == Tiles.Obstacle)
				{
					break;
				}
			}
			catch 
			{
				resultList.Add(new Vector2(x, y));
                break;
			}
            
            if (error > 0)
			{
				x += x_inc;
				error -= dy;
			}
			else
			{
				y += y_inc;
				error += dy;
			}
		}

		return resultList;
	}

    #endregion
}
