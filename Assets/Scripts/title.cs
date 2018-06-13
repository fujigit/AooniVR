using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
public class title : MonoBehaviour {
	private Clicker clicker = new Clicker ();

	// Use this for initialization
	void Start () {
		
	
	}
	
	// Update is called once per frame
	void Update () {
		if (clicker.clicked()) 
		{
			SceneManager.LoadScene ("pre");
		}
	
	}
}
