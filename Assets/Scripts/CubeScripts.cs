﻿using UnityEngine;
using System.Collections;

public class CubeScripts : MonoBehaviour {

	// Use this for initialization
	void Start () {
		SetGazedAt (false);
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void SetGazedAt(bool gazedAt){
		GetComponent<Renderer> ().material.color = gazedAt ? Color.green : Color.yellow;
	}
	public void OnGazeEnter(){
		Debug.Log ("OnGazeEnter");
		SetGazedAt (true);
	}
	public void OnGazeExit(){
		Debug.Log ("OnGazeExit");
		SetGazedAt (false);
	}
		
}
