using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {

    #region Fields

    // Character type currently set by using prefabs with their character type set
    [SerializeField]
    protected MoverType moverType;

    protected int totalMovesPerTurn;
    protected int remainingMovesPerTurn;
    

    #endregion



    #region Properties

    public int RemainingMoves() {
        return remainingMovesPerTurn;
    }

    public MoverType TypeOfMover() {
        return moverType;
    }

    #endregion



    #region Methods

    public void Init(int movesPerTurn) {
        this.totalMovesPerTurn = movesPerTurn;
        this.remainingMovesPerTurn = totalMovesPerTurn;
    }

    public void InitHuman()
    {
        this.Init(2);
        this.moverType = MoverType.Human;
    }

    public void InitZombie() {
        this.Init(1);
        this.moverType = MoverType.Zombie;
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

    // Returns true if move was successful, false if move was not succesful
    public void TryMoveForInput(Direction direction) {
        
    }

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
