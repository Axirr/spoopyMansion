using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {

    const int StepMoves = 2;
    const int TurnMoves = 1;

    #region Fields
    protected int totalMovesPerTurn;
    protected int remainingMovesPerTurn;
    Direction orientation;


    #endregion



    #region Properties

    public int RemainingMoves() {
        return remainingMovesPerTurn;
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
        this.ReduceMovesBy(StepMoves);
    }

    public void Rotate(Direction direction) {
        View myView = Camera.main.GetComponent<View>();
        Direction currentObjectOrientation = this.orientation;
        Direction directionToAssign = Direction.Down;
        switch (direction) {
            case Direction.Right:
                switch (currentObjectOrientation) {
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
        //print("Rotation direction is " + direction);
        //print("Originaldirection of character is " + this.orientation);
        //print("NewDirection is " + directionToAssign);
        myView.RotateToDirection(this.gameObject,directionToAssign);
        this.orientation = directionToAssign;
        this.ReduceMovesBy(TurnMoves);
    }

    #endregion


    void Start()
    {

    }

	// Update is called once per frame
	void Update () {
		
	}


}
