﻿using UnityEngine;
using System.Collections;

public class aooni1 : MonoBehaviour {
	private Animation animation;
	bool one;
	bool two;
	float time;
	// Use this for initialization
	void Start () {
		one = true;
		two = true;
		time = 0.0f;
		animation=GetComponent<Animation>();
	
	}
	
	// Update is called once per frame
	void Update () {
		if (!one) {
			time += Time.deltaTime;
			if (time > 3.0f) {
				if (two) {
					HeadLookWalk.dd = 0;
					aooniAI.move = 1.0f;

					two = false;

				}
			}
		}
	
	}
	void OnTriggerEnter(Collider col){
		if (col.tag == "Player") 
		{
			if (one) {
				animation.Play ("aoonientry");
				HeadLookWalk.dd = 1;
				one = false;
			}
		}

	}
	/*void OnTiggerExit(Collider col)
	{
	if(col.tag =="Player"){
		animation.SetBool ("Open", false);
		}
	}*/
}

