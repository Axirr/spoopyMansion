using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zombie : Mover {

    const int ZOMBIEMOVESPERTURN = 1;

    public void InitZombie()
    {
        totalMovesPerTurn = ZOMBIEMOVESPERTURN;
        remainingMovesPerTurn = totalMovesPerTurn;
    }
}
