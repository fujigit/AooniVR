using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class HeadLookWalk : MonoBehaviour {
	public float velocity = 0.7f;
	public bool isWalking =false;
	public static float dd =0;
	private CharacterController controller;
	private Clicker clicker = new Clicker ();
	public static float reg;
	public GameObject a;
	public GameObject audio;
	public static bool gameclear;
	public GameObject b;
	private AudioSource footsteps;
	bool escape;
	float timeleft;

	void Start(){
		controller = GetComponent<CharacterController> ();
		footsteps = GetComponent<AudioSource> ();
		reg =1.0f;
		a.SetActive (false);
		b.SetActive (false);
		escape = false;
		timeleft = 0.0f;
	}
	void Update () 
	{

		if (dd==1) 
		{
			isWalking = false;
		
		}
		if (clicker.clicked ()&&this.tag!="gameover") 
		{
				isWalking = !isWalking;
		}
		if (isWalking)
		{
			
			
			controller.SimpleMove (Camera.main.transform.forward * velocity);
		}
		if (this.tag == "gameover")
		{
			timeleft += Time.deltaTime;
			a.SetActive (true);
			aooniAI.stop = true;
			isWalking = false;
			audio.SetActive (false);
			if (clicker.clicked ()&&timeleft>2.0f) {
				SceneManager.LoadScene ("pre");
			}
		}
		if (gameclear) {
			timeleft += Time.deltaTime;
			b.SetActive (true);
			aooniAI.stop = true;
			isWalking = false;
			audio.SetActive (false);
			if (clicker.clicked () && timeleft > 2.0f) {
				SceneManager.LoadScene ("pre");
		

			}
		}
	}
	void OnTriggerEnter(Collider col)
	{
		if (col.tag == "aooni") 
		{
			this.tag = "gameover";
		}
	}
}
