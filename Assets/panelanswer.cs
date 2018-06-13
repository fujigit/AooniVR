using UnityEngine;
using System.Collections;

public class panelanswer : MonoBehaviour {
	public static int number;
	public GameObject ke1;
	public GameObject ke2;
	public GameObject ke3;
	// Use this for initialization
	void Start () {
		
		ke1.SetActive (false);
		ke2.SetActive (false);
		ke3.SetActive (false);
		number = 0;
	
	}
	
	// Update is called once per frame
	void OnTriggerEnter(Collider col){
		if (col.tag == "Player") {
			Debug.Log (number);
			if (number == 0) {
				ke1.SetActive (true);
				Invoke ("close", 14);
			} else if (number == 12340) 
			{
				ke2.SetActive (true);
				Invoke ("close", 2);
				HeadLookWalk.reg = 5.0f;
			} else {
				ke3.SetActive (true);
				number = 0;
				Invoke ("close", 2);
			}
		}
	}
		void close()
	{
		ke1.SetActive (false);
		ke2.SetActive (false);
		ke3.SetActive (false);
		}
	/*void OnTiggerExit(Collider col)
	{
	if(col.tag =="Player"){
		animation.SetBool ("Open", false);
		}
	}*/
}