using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Path : ScriptableObject {

    List<Direction> directions = new List<Direction>();
    Vector2 latestPosition;

    #region Properties

    public List<Direction> Directions() {
        return directions;
    }

    public Vector2 LatestPosition() {
        return latestPosition;
    }

    #endregion

    #region Methods

    public void Init(List<Direction> directions, Vector2 latestPosition) {
        this.directions = directions;
        this.latestPosition = latestPosition;
    }

    public void DefaultInit(Vector2 latestPosition) {
        this.Init(new List<Direction>(),latestPosition);
    }

    public void SetPosition(Vector2 latestPosition) {
        this.latestPosition = latestPosition;
    }

    public void AddDirections(Direction latestDirection) {
        this.directions.Add(latestDirection);
    }

    public void SetDirections(List<Direction> directions) {
        this.directions = directions;
    }

    #endregion

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
