using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrientedSquare
{
    Vector2 position;
    Direction orientation;

    #region Constructor

    public OrientedSquare(Vector2 position, Direction orientation)
    {
        this.position = position;
        this.orientation = orientation;
    }

    #endregion

    #region Properties

    public Vector2 Position
    {
        get { return this.position; }
    }

    public Direction Orientation
    {
        get { return this.orientation; }
    }

    #endregion



    #region Methods

    public override bool Equals(object obj)
    {
        if (obj == null) {
            return false;
        }

        OrientedSquare castSquare = obj as OrientedSquare;
        if (castSquare == null) {
            return false;
        }

        return (this.Position == castSquare.Position && this.Orientation == castSquare.Orientation);
    }

    public override int GetHashCode()
    {
        return this.Position.GetHashCode() ^ this.Orientation.GetHashCode();
    }

    #endregion
}
