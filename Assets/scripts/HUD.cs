using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour {

    [SerializeField]
    Text currentActionPoints = null;

    [SerializeField]
    Text roundsBeatenText = null;

    [SerializeField]
    Text hasKeyText = null;

    public void SetCurrentActionPoints(int points) {
        currentActionPoints.text = "Action Points Left: " + points;
    }

    public void SetRoundsBeaten(int roundsBeaten) {
        roundsBeatenText.text = string.Format("Rounds Beaten: {0}",roundsBeaten);
    }

    public void SetHasKey(bool hasKey)
    {
        if (!hasKey)
        {
            hasKeyText.text = string.Format("No key, can't use door.");
        }
        else
        {
            hasKeyText.text = string.Format("Have key, find door.");
        }
    }

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
