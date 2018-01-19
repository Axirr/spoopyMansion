using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {

    #region Fields

    // Character type currently set by using prefabs with their character type set
    [SerializeField]
    CharacterType characterType = CharacterType.Zombie;

    int totalMovesPerTurn;
    int remainingMovesPerTurn;
    

    #endregion



    #region Properties

    public int RemainingMoves() {
        return remainingMovesPerTurn;
    }

    public CharacterType MoverType() {
        return characterType;
    }

    #endregion



    #region Methods

    private void Init(int totalMovesPerTurn) {
        this.totalMovesPerTurn = totalMovesPerTurn;
        this.remainingMovesPerTurn = totalMovesPerTurn;
    }

    public void InitHuman() {
        this.Init(2);
    }

    public void InitZombie() {
        this.Init(1);
    }

    public void ResetMoves() {
        remainingMovesPerTurn = totalMovesPerTurn;
    }

    public void ReduceMovesByOne() {
        remainingMovesPerTurn -= 1;
    }

    #endregion
	



    void Start()
    {

    }

	// Update is called once per frame
	void Update () {
		
	}


}
