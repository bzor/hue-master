using UnityEngine;
using System.Collections;

public class CameraLookAt : MonoBehaviour {

	public Transform LookAtGO;
	private Transform CameraTR;

	void Start () {
		CameraTR = GetComponent<Transform>();
	}
	
	void Update () {
		CameraTR.LookAt(LookAtGO);
	}

}
