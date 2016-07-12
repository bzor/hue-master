#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraLookAt
struct  CameraLookAt_t3320706775  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform CameraLookAt::LookAtGO
	Transform_t284553113 * ___LookAtGO_2;
	// UnityEngine.Transform CameraLookAt::CameraTR
	Transform_t284553113 * ___CameraTR_3;

public:
	inline static int32_t get_offset_of_LookAtGO_2() { return static_cast<int32_t>(offsetof(CameraLookAt_t3320706775, ___LookAtGO_2)); }
	inline Transform_t284553113 * get_LookAtGO_2() const { return ___LookAtGO_2; }
	inline Transform_t284553113 ** get_address_of_LookAtGO_2() { return &___LookAtGO_2; }
	inline void set_LookAtGO_2(Transform_t284553113 * value)
	{
		___LookAtGO_2 = value;
		Il2CppCodeGenWriteBarrier(&___LookAtGO_2, value);
	}

	inline static int32_t get_offset_of_CameraTR_3() { return static_cast<int32_t>(offsetof(CameraLookAt_t3320706775, ___CameraTR_3)); }
	inline Transform_t284553113 * get_CameraTR_3() const { return ___CameraTR_3; }
	inline Transform_t284553113 ** get_address_of_CameraTR_3() { return &___CameraTR_3; }
	inline void set_CameraTR_3(Transform_t284553113 * value)
	{
		___CameraTR_3 = value;
		Il2CppCodeGenWriteBarrier(&___CameraTR_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
