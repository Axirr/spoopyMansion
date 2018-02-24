using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {



    #region Fields
    int totalMovesPerTurn;
    int remainingMovesPerTurn;
    Direction orientation;
    int stepMoves = 2;
    int turnMoves = 0;
    int attackMoves = 0;


    #endregion



    #region Properties

    public int RemainingMoves {
        get { return remainingMovesPerTurn; }
    }

    public Direction Orientation
    {
        get { return this.orientation; }
    }

    public Vector2 Position {
        get { return Camera.main.GetComponent<View>().GameObjectCurrentIndexPosition(gameObject); }
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

    #endregion



    #region Movement methods

    public virtual void MoveTo(Vector2 indexPosition) {
        View myView = Camera.main.GetComponent<View>();
        myView.MoveGameObjectToIndex(gameObject,indexPosition);
        this.ReduceMovesBy(stepMoves);
    }

    public virtual void Rotate(Direction direction) {
        View myView = Camera.main.GetComponent<View>();
        Direction currentObjectOrientation = this.orientation;
        Direction directionToAssign = Direction.Down;
        directionToAssign = Support.DirectionRotatedLeftRight(currentObjectOrientation,direction);
        myView.RotateToDirection(this.gameObject,directionToAssign);
        this.orientation = directionToAssign;
        this.ReduceMovesBy(turnMoves);
    }

    #endregion
}
