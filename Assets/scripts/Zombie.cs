using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zombie : Mover {

    const int ZOMBIEMOVESPERTURN = 4;

    public void InitZombie()
    {
        Init(ZOMBIEMOVESPERTURN);
    }
}
