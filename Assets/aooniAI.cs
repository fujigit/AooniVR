using UnityEngine;
using System.Collections;

public class aooniAI : MonoBehaviour {
	public GameObject taget;
	NavMeshAgent agent;
	GameObject parent;
	GameObject Playe;
	Animator ani;
	Animation anim;
	public static bool stop;
	private AudioSource sound1;
	public static float move;
	public float mode;
	bool one;
	public float time;
	// Use this for initialization
	void Start () {
		agent = GetComponent<NavMeshAgent> ();
		ani = GetComponent<Animator>();
		one = true;
		move = 0.0f;
		sound1 = GetComponent<AudioSource> ();
		stop = false;

	}
	
	// Update is called once per frame
	void Update ()
	{
		if (stop) 
		{
			Destroy (gameObject);
		}
		else
		{
			
			if (move == this.mode) 
			{
				ani.SetBool ("move", true);
				agent.destination = taget.transform.position;
				if (one)
				{
					
					Destroy (gameObject, time);
					one = false;
					sound1.PlayOneShot (sound1.clip);
					BodyWalk.escape = true;
					Invoke ("change", time);
				}

			}

			//aooni2=true;
		}
	}
	void change()
	{
		BodyWalk.escape=false;
	}
}
