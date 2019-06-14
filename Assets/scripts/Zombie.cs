using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zombie : Mover {

    const int ZOMBIEMOVESPERTURN = 4;

    public void InitZombie(Vector2 location)
    {
        base.Init(ZOMBIEMOVESPERTURN, Direction.Right, location, Support.PROHIBITED_TILES_NONHUMAN);
    }

	public override void MoveTo(Vector2 indexPosition)
	{
		base.MoveTo(indexPosition);
		SpriteRenderer spriteRenderer = this.GetComponent<SpriteRenderer>();
		if (Support.isFogOfWar)
        {
            List<Vector2> currentlyVisibleTiles = Camera.main.GetComponent<Game>().currentlyVisibleTiles();
            if (currentlyVisibleTiles.Contains(this.Position))
            {
                spriteRenderer.enabled = true;
            }
            else
            {
                spriteRenderer.enabled = false;
            }
        }
	}
}
