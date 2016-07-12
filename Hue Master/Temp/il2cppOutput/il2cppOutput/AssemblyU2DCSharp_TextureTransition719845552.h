#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextureTransition
struct  TextureTransition_t719845552  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material TextureTransition::TransitionMaterial
	Material_t1886596500 * ___TransitionMaterial_2;
	// System.Single TextureTransition::x
	float ___x_3;

public:
	inline static int32_t get_offset_of_TransitionMaterial_2() { return static_cast<int32_t>(offsetof(TextureTransition_t719845552, ___TransitionMaterial_2)); }
	inline Material_t1886596500 * get_TransitionMaterial_2() const { return ___TransitionMaterial_2; }
	inline Material_t1886596500 ** get_address_of_TransitionMaterial_2() { return &___TransitionMaterial_2; }
	inline void set_TransitionMaterial_2(Material_t1886596500 * value)
	{
		___TransitionMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___TransitionMaterial_2, value);
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(TextureTransition_t719845552, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
