using UnityEngine;
using System.Collections;

public class BodyWalk : MonoBehaviour {
	private HeadLookWalk lookWalk;
	private AudioSource footsteps;
	private Transform head;
	private Transform body;
	public static bool escape;
	public AudioSource footsteps2;

	void Start(){
		lookWalk = GetComponent<HeadLookWalk> ();
		footsteps = GetComponent<AudioSource> ();
		head = Camera.main.transform;
		body = transform.Find ("MeBody");
		escape = false;
	}
	void Update () {
		if (lookWalk.isWalking) {
			//body.transform.rotation = Quaternion.Euler (new Vector3 (0.0f, head.transform.eulerAngles.y, 0.0f));
			/*if (!escape) {
				if (!footsteps.isPlaying) {
					footsteps.Play ();
				} else {
					footsteps.Stop ();
				}
			}
			else if (escape) {
				if (!footsteps2.isPlaying) {
					footsteps2.Play ();
				} else {
					footsteps2.Stop ();
				}
			}*/
		}
	}
}
