using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Human : Mover
{

    const int HUMANMOVESPERTURN = 6;
    bool[,] visionShape;

    public bool[,] VisionShape {
        get { return this.visionShape; }
    }

    public void InitHuman(Vector2 location) {
        base.Init(HUMANMOVESPERTURN, Direction.Right, location, Support.PROHIBITED_TILES_HUMAN);
        visionShape = new bool[,] {{true,true,true,true,true},
                                    {true,true,true,true,true}};
        visionShape = Support.TransposeBoolArray(visionShape);
    }

    public override void MoveTo(Vector2 indexPosition)
    {
        View myView = Camera.main.GetComponent<View>();
        Game model = Camera.main.GetComponent<Game>();
        Vector2 formerPosition = myView.GameObjectCurrentIndexPosition(gameObject);
		List<Vector2> previousSquares = model.currentlyVisibleTiles();
        base.MoveTo(indexPosition);
		List<Vector2> newSquares = model.currentlyVisibleTiles();
		myView.UpdateMap(newSquares.Except(previousSquares).ToList(),previousSquares.Except(newSquares).ToList());
    }

    public override void Rotate(Direction direction)
    {
        View myView = Camera.main.GetComponent<View>();
        Game model = Camera.main.GetComponent<Game>();
        Direction formerOrientation = this.Orientation;
        List<Vector2> previousFullVision = model.currentlyVisibleTiles();
		base.Rotate(direction);
		List<Vector2> newFullVision = model.currentlyVisibleTiles();
		myView.UpdateMap(newFullVision.Except(previousFullVision).ToList(), previousFullVision.Except(newFullVision).ToList());
    }
}
