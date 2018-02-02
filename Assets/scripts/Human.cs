using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Human : Mover {

    const int HUMANMOVESPERTURN = 2;

    public void InitHuman() {
        totalMovesPerTurn = HUMANMOVESPERTURN;
        remainingMovesPerTurn = totalMovesPerTurn;
    }
}
