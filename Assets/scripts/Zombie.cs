using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zombie : Mover {

    const int ZOMBIEMOVESPERTURN = 3;

    public void InitZombie()
    {
        Init(ZOMBIEMOVESPERTURN);
    }
}
