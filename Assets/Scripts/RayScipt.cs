using UnityEngine;
using System.Collections;

public class RayScipt : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		Ray ray = new Ray (GetComponent<Camera>().transform.position,GetComponent<Camera>().transform.forward);
		RaycastHit hit;

		if(Physics.Raycast(ray, out hit)){
			//reticle.transform.position = hit.point;
	
	}
}
			}
