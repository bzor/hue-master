using UnityEngine;

[ExecuteInEditMode]
public class TextureTransition : MonoBehaviour {

	public Material TransitionMaterial;

	float x = 0;

	void OnRenderImage(RenderTexture source, RenderTexture dest){
		Graphics.Blit(source, dest, TransitionMaterial);
	}

	void Update() {
		if(Input.GetMouseButton(0)){
			float mouseXInput = (Mathf.Clamp(Input.mousePosition.x / Screen.width, 0.1f, 0.9f) - 0.1f) / 0.8f;
			x = Mathf.Lerp(x, mouseXInput, Time.smoothDeltaTime * 10f);
			TransitionMaterial.SetFloat("_Cutoff", Mathf.Clamp(x, 0, 1f));
		}
	}

}
