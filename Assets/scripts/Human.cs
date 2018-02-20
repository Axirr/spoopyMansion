using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Human : Mover {

    const int HUMANMOVESPERTURN = 5;

    public void InitHuman() {
        base.Init(HUMANMOVESPERTURN);
    }
}
