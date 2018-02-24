using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileInfo : MonoBehaviour
{
    Tiles actualTileType;
    Tiles displayedTileType;
    bool explored = false;

    #region Properties

    public Tiles ActualTileType
    {
        get { return this.actualTileType; }
        set { this.actualTileType = value; }
    }

    public bool Explored
    {
        get { return this.explored; }
        set { this.explored = value; }
    }

    public Tiles DisplayedTileType
    {
        get { return this.displayedTileType; }
        set { this.displayedTileType = value; }
    }

    #endregion



    #region Methods

    public void Initialize(Tiles actualTile, Tiles displayedTile, bool exploredStatus) {
        this.ActualTileType = actualTile;
        this.DisplayedTileType = displayedTile;
        this.Explored = exploredStatus;
    }

    #endregion
}
