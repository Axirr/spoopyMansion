using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour {

    [SerializeField]
    Text currentActionPoints;

    public void SetCurrentActionPoints(int points) {
        currentActionPoints.text = "Action Points Left: " + points;
    }

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
