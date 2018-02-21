using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {



    #region Fields
    int totalMovesPerTurn;
    int remainingMovesPerTurn;
    Direction orientation;
    int stepMoves = 2;
    int turnMoves = 1;
    int attackMoves = 0;


    #endregion



    #region Properties

    public int RemainingMoves() {
        return remainingMovesPerTurn;
    }

    public int MovesPerStep {
        get { return this.stepMoves; }
    }

    public int MovesPerRotation {
        get { return this.turnMoves; }
    }

    public int MovesPerAttack {
        get { return this.attackMoves; }
    }

    #endregion



    #region Methods

    protected void Init(int movesPerTurn) {
        this.totalMovesPerTurn = movesPerTurn;
        this.remainingMovesPerTurn = totalMovesPerTurn;
        this.orientation = Direction.Right;
    }

    public void ResetMoves() {
        remainingMovesPerTurn = totalMovesPerTurn;
    }

    public void ReduceMovesBy(int pointCost) {
        remainingMovesPerTurn -= pointCost;
    }

    public void SetMovesToZero() {
        remainingMovesPerTurn = 0;
    }

    public Direction Orientation() {
        return this.orientation;
    }

    #endregion



    #region Movement methods

    public void MoveTo(Vector2 indexPosition) {
        View myView = Camera.main.GetComponent<View>();
        myView.MoveGameObjectToIndex(gameObject,indexPosition);
        this.ReduceMovesBy(stepMoves);
    }

    public void Rotate(Direction direction) {
        View myView = Camera.main.GetComponent<View>();
        Direction currentObjectOrientation = this.orientation;
        Direction directionToAssign = Direction.Down;
        directionToAssign = Support.DirectionRotated(currentObjectOrientation,direction);
        //print("Rotation direction is " + direction);
        //print("Originaldirection of character is " + this.orientation);
        //print("NewDirection is " + directionToAssign);
        myView.RotateToDirection(this.gameObject,directionToAssign);
        this.orientation = directionToAssign;
        this.ReduceMovesBy(turnMoves);
    }

    #endregion


    void Start()
    {

    }

	// Update is called once per frame
	void Update () {
		
	}


}
