using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {

    #region Fields
    protected int totalMovesPerTurn;
    protected int remainingMovesPerTurn;
    

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
    }

    public void ResetMoves() {
        remainingMovesPerTurn = totalMovesPerTurn;
    }

    public void ReduceMovesByOne() {
        remainingMovesPerTurn -= 1;
    }

    public void SetMovesToZero() {
        remainingMovesPerTurn = 0;
    }

    #endregion



    #region Movement methods

    public void MoveTo(Vector2 indexPosition) {
        View myView = Camera.main.GetComponent<View>();
        myView.MoveGameObjectToIndex(gameObject,indexPosition);
        this.ReduceMovesByOne();
    }

    #endregion


    void Start()
    {

    }

	// Update is called once per frame
	void Update () {
		
	}


}
