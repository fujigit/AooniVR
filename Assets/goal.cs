using UnityEngine;
using System.Collections;

public class goal : MonoBehaviour {
	public AudioSource au;
	// Use this for initialization
	void Start () {
		au = GetComponent<AudioSource> ();
	
	}
	
	// Update is called once per frame
	void OnTriggerEnter(Collider col){
		if (col.tag == "Player"&&HeadLookWalk.reg == 7.0f) 
		{
			au.Play ();
			HeadLookWalk.gameclear=true;

		}
	}
}

