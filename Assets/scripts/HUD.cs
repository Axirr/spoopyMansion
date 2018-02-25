using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour {

    [SerializeField]
    Text currentActionPoints = null;

    [SerializeField]
    Text roundsBeatenText = null;

    public void SetCurrentActionPoints(int points) {
        currentActionPoints.text = "Action Points Left: " + points;
    }

    public void SetRoundsBeaten(int roundsBeaten) {
        roundsBeatenText.text = string.Format("Rounds Beaten: {0}",roundsBeaten);
    }

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
