using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Human : Mover
{

    const int HUMANMOVESPERTURN = 6;
    bool[,] visionShape;

    public bool[,] VisionShape {
        get { return this.visionShape; }
    }

    public void InitHuman() {
        base.Init(HUMANMOVESPERTURN, Support.PROHIBITED_TILES_HUMAN);
        visionShape = new bool[,] {{true,true,true},
                                    {true,true,true}};
        visionShape = Support.TransposeBoolArray(visionShape);
    }

    public override void MoveTo(Vector2 indexPosition)
    {
        View myView = Camera.main.GetComponent<View>();
        Game model = Camera.main.GetComponent<Game>();
        Vector2 formerPosition = myView.GameObjectCurrentIndexPosition(gameObject);
        base.MoveTo(indexPosition);
        List<Vector2> previousSquares = model.VisionForSpaceWithShape(formerPosition,this.Orientation,visionShape);
        List<Vector2> newSquares = model.VisionForSpaceWithShape(indexPosition,this.Orientation,visionShape);
        myView.UpdateMap(previousSquares,newSquares);
    }

    public override void Rotate(Direction direction)
    {
        View myView = Camera.main.GetComponent<View>();
        Game model = Camera.main.GetComponent<Game>();
        Direction formerOrientation = this.Orientation;
        base.Rotate(direction);
        List<Vector2> previousSquares = model.VisionForSpaceWithShape(this.Position, formerOrientation, visionShape);
        List<Vector2> newSquares = model.VisionForSpaceWithShape(this.Position, this.Orientation, visionShape);
        myView.UpdateMap(previousSquares, newSquares);
    }
}
