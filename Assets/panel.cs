using UnityEngine;
using System.Collections;

public class panel : MonoBehaviour {
	
	public int number;
	int  answer;
	AudioSource au;
	void Start () {
		au = GetComponent<AudioSource> ();
	}


	void OnTriggerEnter(Collider col){
		if (col.tag == "Player") 
		{
			au.Play ();
			panelanswer.number += this.number;
			panelanswer.number *= 10;

		}
	}
	/*void OnTiggerExit(Collider col)
	{
	if(col.tag =="Player"){
		animation.SetBool ("Open", false);
		}
	}*/
}