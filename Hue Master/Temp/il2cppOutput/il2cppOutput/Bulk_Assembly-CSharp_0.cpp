#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// AppController
struct AppController_t2916840573;
// Butterfly
struct Butterfly_t2006435411;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Object
struct Il2CppObject;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// CameraLookAt
struct CameraLookAt_t3320706775;
// TextureTransition
struct TextureTransition_t719845552;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_AppController2916840573.h"
#include "AssemblyU2DCSharp_AppController2916840573MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "AssemblyU2DCSharp_Butterfly2006435411.h"
#include "AssemblyU2DCSharp_Butterfly2006435411MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3963434288MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_ForceMode759713627.h"
#include "AssemblyU2DCSharp_CameraLookAt3320706775.h"
#include "AssemblyU2DCSharp_CameraLookAt3320706775MethodDeclarations.h"
#include "AssemblyU2DCSharp_TextureTransition719845552.h"
#include "AssemblyU2DCSharp_TextureTransition719845552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Graphics1688236792MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Screen3994030297MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material1886596500MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
#define Component_GetComponent_TisTransform_t284553113_m3811551876(__this, method) ((  Transform_t284553113 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t1972007546_m2174365699(__this, method) ((  Rigidbody_t1972007546 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppController::.ctor()
extern "C"  void AppController__ctor_m777890190 (AppController_t2916840573 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AppController::Start()
extern "C"  void AppController_Start_m4019995278 (AppController_t2916840573 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AppController::Update()
extern "C"  void AppController_Update_m71654207 (AppController_t2916840573 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Butterfly::.ctor()
extern "C"  void Butterfly__ctor_m2696002680 (Butterfly_t2006435411 * __this, const MethodInfo* method)
{
	{
		__this->set_IsFluttering_2((bool)1);
		__this->set_WingRotFreq_9((30.0f));
		__this->set_WingRotMax_10((30.0f));
		__this->set_HeadingCorrectDelayTick_13((0.2f));
		__this->set_HeadingCorrectDelay_14((0.2f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Butterfly::Start()
extern const MethodInfo* Component_GetComponent_TisTransform_t284553113_m3811551876_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t1972007546_m2174365699_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4102578313;
extern Il2CppCodeGenString* _stringLiteral2631537114;
extern const uint32_t Butterfly_Start_m1643140472_MetadataUsageId;
extern "C"  void Butterfly_Start_m1643140472 (Butterfly_t2006435411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Butterfly_Start_m1643140472_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t284553113 * L_0 = Component_GetComponent_TisTransform_t284553113_m3811551876(__this, /*hidden argument*/Component_GetComponent_TisTransform_t284553113_m3811551876_MethodInfo_var);
		__this->set_TR_3(L_0);
		Transform_t284553113 * L_1 = __this->get_TR_3();
		NullCheck(L_1);
		Transform_t284553113 * L_2 = Transform_Find_m3950449392(L_1, _stringLiteral4102578313, /*hidden argument*/NULL);
		__this->set_WingLeft_4(L_2);
		Transform_t284553113 * L_3 = __this->get_TR_3();
		NullCheck(L_3);
		Transform_t284553113 * L_4 = Transform_Find_m3950449392(L_3, _stringLiteral2631537114, /*hidden argument*/NULL);
		__this->set_WingRight_5(L_4);
		Rigidbody_t1972007546 * L_5 = Component_GetComponent_TisRigidbody_t1972007546_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1972007546_m2174365699_MethodInfo_var);
		__this->set_RB_6(L_5);
		Vector3_t3525329789  L_6 = Random_get_onUnitSphere_m1999405197(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_Heading_12(L_6);
		return;
	}
}
// System.Void Butterfly::Update()
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Butterfly_Update_m3698566549_MetadataUsageId;
extern "C"  void Butterfly_Update_m3698566549 (Butterfly_t2006435411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Butterfly_Update_m3698566549_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3525329789  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t1891715979  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3525329789  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float G_B3_0 = 0.0f;
	{
		Rigidbody_t1972007546 * L_0 = __this->get_RB_6();
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Rigidbody_get_velocity_m2696244068(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Max_m3923796455(NULL /*static, unused*/, L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_SpeedY_11(((float)((float)(0.2f)+(float)L_3)));
		float L_4 = __this->get_WingRotTick_8();
		float L_5 = Time_get_smoothDeltaTime_m1119418976(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_SpeedY_11();
		__this->set_WingRotTick_8(((float)((float)L_4+(float)((float)((float)L_5*(float)L_6)))));
		float L_7 = __this->get_WingRotTick_8();
		float L_8 = __this->get_WingRotFreq_9();
		float L_9 = sinf(((float)((float)L_7*(float)L_8)));
		float L_10 = __this->get_WingRotMax_10();
		__this->set_WingRot_7(((float)((float)L_9*(float)L_10)));
		Transform_t284553113 * L_11 = __this->get_WingLeft_4();
		float L_12 = __this->get_WingRot_7();
		Quaternion_t1891715979  L_13 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (0.0f), L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localRotation_m3719981474(L_11, L_13, /*hidden argument*/NULL);
		Transform_t284553113 * L_14 = __this->get_WingRight_5();
		float L_15 = __this->get_WingRot_7();
		Quaternion_t1891715979  L_16 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (0.0f), ((-L_15)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localRotation_m3719981474(L_14, L_16, /*hidden argument*/NULL);
		Rigidbody_t1972007546 * L_17 = __this->get_RB_6();
		NullCheck(L_17);
		Vector3_t3525329789  L_18 = Rigidbody_get_velocity_m2696244068(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		float L_19 = Vector3_get_sqrMagnitude_m1207423764((&V_2), /*hidden argument*/NULL);
		if ((!(((float)L_19) > ((float)(0.01f)))))
		{
			goto IL_00e5;
		}
	}
	{
		Rigidbody_t1972007546 * L_20 = __this->get_RB_6();
		NullCheck(L_20);
		Vector3_t3525329789  L_21 = Rigidbody_get_velocity_m2696244068(L_20, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_22 = Quaternion_LookRotation_m1257501645(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		Vector3_t3525329789  L_23 = Quaternion_get_eulerAngles_m997303795((&V_3), /*hidden argument*/NULL);
		V_4 = L_23;
		float L_24 = (&V_4)->get_y_2();
		G_B3_0 = L_24;
		goto IL_00ea;
	}

IL_00e5:
	{
		G_B3_0 = (0.0f);
	}

IL_00ea:
	{
		V_0 = G_B3_0;
		Transform_t284553113 * L_25 = __this->get_TR_3();
		Transform_t284553113 * L_26 = __this->get_TR_3();
		NullCheck(L_26);
		Quaternion_t1891715979  L_27 = Transform_get_localRotation_m3343229381(L_26, /*hidden argument*/NULL);
		float L_28 = V_0;
		Quaternion_t1891715979  L_29 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (90.0f), L_28, (0.0f), /*hidden argument*/NULL);
		float L_30 = Time_get_smoothDeltaTime_m1119418976(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_31 = Quaternion_Lerp_m1693481477(NULL /*static, unused*/, L_27, L_29, ((float)((float)L_30*(float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localRotation_m3719981474(L_25, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Butterfly::FixedUpdate()
extern "C"  void Butterfly_FixedUpdate_m1298817011 (Butterfly_t2006435411 * __this, const MethodInfo* method)
{
	{
		Rigidbody_t1972007546 * L_0 = __this->get_RB_6();
		Vector3_t3525329789  L_1 = __this->get_Heading_12();
		Vector3_t3525329789  L_2 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_1, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_m557267180(L_0, L_2, 5, /*hidden argument*/NULL);
		Rigidbody_t1972007546 * L_3 = __this->get_RB_6();
		Vector3_t3525329789  L_4 = Vector3_get_forward_m1039372701(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_5 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_4, (4.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_AddForce_m3682301239(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Butterfly::OnCollisionEnter()
extern "C"  void Butterfly_OnCollisionEnter_m1782071953 (Butterfly_t2006435411 * __this, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = __this->get_Heading_12();
		Vector3_t3525329789  L_1 = Vector3_op_UnaryNegation_m3293197314(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_Heading_12(L_1);
		return;
	}
}
// System.Void CameraLookAt::.ctor()
extern "C"  void CameraLookAt__ctor_m3638345124 (CameraLookAt_t3320706775 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraLookAt::Start()
extern const MethodInfo* Component_GetComponent_TisTransform_t284553113_m3811551876_MethodInfo_var;
extern const uint32_t CameraLookAt_Start_m2585482916_MetadataUsageId;
extern "C"  void CameraLookAt_Start_m2585482916 (CameraLookAt_t3320706775 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CameraLookAt_Start_m2585482916_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t284553113 * L_0 = Component_GetComponent_TisTransform_t284553113_m3811551876(__this, /*hidden argument*/Component_GetComponent_TisTransform_t284553113_m3811551876_MethodInfo_var);
		__this->set_CameraTR_3(L_0);
		return;
	}
}
// System.Void CameraLookAt::Update()
extern "C"  void CameraLookAt_Update_m2846411241 (CameraLookAt_t3320706775 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = __this->get_CameraTR_3();
		Transform_t284553113 * L_1 = __this->get_LookAtGO_2();
		NullCheck(L_0);
		Transform_LookAt_m2663225588(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextureTransition::.ctor()
extern "C"  void TextureTransition__ctor_m3638590139 (TextureTransition_t719845552 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextureTransition::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void TextureTransition_OnRenderImage_m3116748995 (TextureTransition_t719845552 * __this, RenderTexture_t12905170 * ___source0, RenderTexture_t12905170 * ___dest1, const MethodInfo* method)
{
	{
		RenderTexture_t12905170 * L_0 = ___source0;
		RenderTexture_t12905170 * L_1 = ___dest1;
		Material_t1886596500 * L_2 = __this->get_TransitionMaterial_2();
		Graphics_Blit_m2695454291(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextureTransition::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral443274540;
extern const uint32_t TextureTransition_Update_m2854006706_MetadataUsageId;
extern "C"  void TextureTransition_Update_m2854006706 (TextureTransition_t719845552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TextureTransition_Update_m2854006706_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_1 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		int32_t L_3 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, ((float)((float)L_2/(float)(((float)((float)L_3))))), (0.1f), (0.9f), /*hidden argument*/NULL);
		V_0 = ((float)((float)((float)((float)L_4-(float)(0.1f)))/(float)(0.8f)));
		float L_5 = __this->get_x_3();
		float L_6 = V_0;
		float L_7 = Time_get_smoothDeltaTime_m1119418976(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_5, L_6, ((float)((float)L_7*(float)(10.0f))), /*hidden argument*/NULL);
		__this->set_x_3(L_8);
		Material_t1886596500 * L_9 = __this->get_TransitionMaterial_2();
		float L_10 = __this->get_x_3();
		float L_11 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_10, (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Material_SetFloat_m981710063(L_9, _stringLiteral443274540, L_11, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
