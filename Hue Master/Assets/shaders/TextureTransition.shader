Shader "Hue/ImageEffects/TextureTransition"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		_TransitionTex ("Transition Texture", 2D) = "white" {}
		_FinalTex ("Final Texture", 2D) = "white" {}
		_Cutoff ("Cutoff", Range(0, 1)) = 0
		_Feather ("Feather", Range(0, 0.5)) = 0
		_Color ("Color", Color) = (0, 0, 0, 255)
	}
	SubShader
	{
		// No culling or depth
		Cull Off ZWrite Off ZTest Always

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			
			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
			};

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv = v.uv;

				return o;
			}
			
			sampler2D _MainTex;
			sampler2D _TransitionTex;
			sampler2D _FinalTex;
			float _Cutoff;
			float _Feather;
			fixed4 _Color;

			fixed4 frag (v2f i) : SV_Target
			{
				float4 transit = tex2D(_TransitionTex, i.uv);

				float4 col = tex2D(_MainTex, i.uv);

				float4 finalcol = tex2D(_FinalTex, i.uv);

				if(transit.r - _Cutoff <= _Feather && _Cutoff != 0){
					return lerp(finalcol, col, clamp((transit.r - _Cutoff) / _Feather, 0, 1));
				} else {
					return col;
				}

			}
			ENDCG
		}
	}
}
