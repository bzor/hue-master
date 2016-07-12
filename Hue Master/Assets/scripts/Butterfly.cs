using UnityEngine;
using System.Collections;

public class Butterfly : MonoBehaviour {

	private bool IsFluttering = true;

	private Transform TR;
	private Transform WingLeft;
	private Transform WingRight;

	private Rigidbody RB;

	private float WingRot = 0;
	private float WingRotTick = 0;
	public float WingRotFreq = 30f;
	public  float WingRotMax = 30f;
	private float SpeedY;

	private Vector3 Heading;

	private float HeadingCorrectDelayTick = 0.2f;
	private float HeadingCorrectDelay = 0.2f;

	void Start () {
		TR = GetComponent<Transform>();
		WingLeft = TR.Find("wing-left");
		WingRight = TR.Find("wing-right");
		RB = GetComponent<Rigidbody>();
		Heading = Random.onUnitSphere;
	}
	
	void Update () {
		SpeedY = 0.2f + Mathf.Max(RB.velocity.y, 0);
		WingRotTick += Time.smoothDeltaTime * SpeedY;
		WingRot = Mathf.Sin(WingRotTick * WingRotFreq) * WingRotMax;
		WingLeft.localRotation = Quaternion.Euler(0, WingRot, 0);
		WingRight.localRotation = Quaternion.Euler(0, -WingRot, 0);

		float headingRotY = (RB.velocity.sqrMagnitude > 0.01f) ? Quaternion.LookRotation(RB.velocity).eulerAngles.y : 0;
		TR.localRotation = Quaternion.Lerp(TR.localRotation, Quaternion.Euler(90f, headingRotY, 0), Time.smoothDeltaTime * 2f);
	}

	void FixedUpdate() {
		RB.AddForce(Heading * 3f, ForceMode.Acceleration);
		RB.AddForce(Vector3.forward * 4f);
	}

	void OnCollisionEnter() {
		Heading = -Heading;
	}
}
