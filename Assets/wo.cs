using UnityEngine;
using System.Collections;

public class wo : MonoBehaviour {
	
	// Use this for initialization
	void Start () {
		

	}

	// Update is called once per frame
	void OnTriggerEnter(Collider col){
		if (col.tag == "Player"&&HeadLookWalk.reg == 7.0f) 
		{
			aooniAI.move = 3;
		}
	}
}

