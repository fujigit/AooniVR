using UnityEngine;
using System.Collections;

public class key1 : MonoBehaviour {
	
	private Clicker clicker = new Clicker ();

	public GameObject ke1;
	public GameObject ke2;
	public GameObject ke3;
	public GameObject ke4;
	public GameObject ke5;
	public GameObject ao3;
	int tt;
	public int number;

	bool one;
	bool two;
	bool three;
	bool four;
	bool five;
	public AudioSource get;



	void Start () {
		

		/*ke1 = GameObject.Find ("keytex_ima");
		ke2 = GameObject.Find ("keytex_ongakusitu");
		ke3 = GameObject.Find ("keytex_tikasitu");
		ke4 = GameObject.Find ("keytex_gyokuza");
		ke5 = GameObject.Find ("keytex_genkan");*/
		tt = 0;


		ke1.SetActive (false);
		ke2.SetActive (false);
		ke3.SetActive (false);
		ke4.SetActive (false);
		ke5.SetActive (false);
		ao3.SetActive (false);

		one = true;
		two = true;
		three = true;
		four = true;
		five = true;
	
	}
	
	// Update is called once per frame
	void Update () {
		if (tt==1) {
			if (one) {
				ke1.SetActive (true);
				Destroy (ke1, 2.0f);
				Destroy (gameObject);
				one = false;
				HeadLookWalk.reg = 2.0f;
			}

		}
		else if (tt==2) {
			if (two) {
				ke2.SetActive (true);
				Destroy (ke2, 2.0f);
				Destroy (gameObject);
				one = false;
				HeadLookWalk.reg = 3.0f;
			}

		}
		else if (tt==3) {
			if (three) {
				ke3.SetActive (true);
				Destroy (ke3, 2.0f);
				Destroy (gameObject);
				one = false;
				HeadLookWalk.reg = 4.0f;
			}

		}
		else if (tt==4) {
			if (four) {
				ke4.SetActive (true);
				Destroy (ke4, 2.0f);
				Destroy (gameObject);
				one = false;
				HeadLookWalk.reg = 6.0f;
			}

		}
		else if (tt==5) {
			if (five) {
				ke5.SetActive (true);
				Destroy (ke5, 2.0f);
				Destroy (gameObject);
				one = false;
				HeadLookWalk.reg = 7.0f;
				ao3.SetActive (true);

			}

		}
			
	
	}
	void OnTriggerEnter(Collider col){
		if (col.tag == "Player") 
		{
			get.Play ();
			tt = this.number;
			//number++;
		}
	}
	/*void OnTiggerExit(Collider col)
	{
	if(col.tag =="Player"){
		animation.SetBool ("Open", false);
		}
	}*/
}
	/*public void SetGazedAt(bool gazedAt){

		tt = true;


	}
	public void OnGazeEnter(){
		Debug.Log ("OnGazeEnter");
		SetGazedAt (true);
	}
	public void OnGazeExit(){
		Debug.Log ("OnGazeExit");
		SetGazedAt (false);
	}
		
}*/
