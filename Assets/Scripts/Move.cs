using UnityEngine;
using System.Collections;

public class Move : MonoBehaviour {
	
	private Animator animation;
	public float ability;
	public AudioSource door;
	bool one;

	void Start () {
	    
		one = true;
		animation = transform.parent.GetComponent<Animator>();


	}
	

	void OnTriggerEnter(Collider col){
		if (col.tag == "Player"&&HeadLookWalk.reg>=ability) 
		{
			animation.SetBool ("Open", true);
			if (one) {
				door.Play ();
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