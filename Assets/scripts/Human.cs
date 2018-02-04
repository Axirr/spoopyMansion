using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Human : Mover {

    const int HUMANMOVESPERTURN = 4;

    public void InitHuman() {
        Init(HUMANMOVESPERTURN);
    }
}
