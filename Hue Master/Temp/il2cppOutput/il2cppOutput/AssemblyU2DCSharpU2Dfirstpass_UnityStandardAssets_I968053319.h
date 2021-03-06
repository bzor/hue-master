﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Blur
struct  Blur_t968053319  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Blur::iterations
	int32_t ___iterations_2;
	// System.Single UnityStandardAssets.ImageEffects.Blur::blurSpread
	float ___blurSpread_3;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Blur::blurShader
	Shader_t3998140498 * ___blurShader_4;

public:
	inline static int32_t get_offset_of_iterations_2() { return static_cast<int32_t>(offsetof(Blur_t968053319, ___iterations_2)); }
	inline int32_t get_iterations_2() const { return ___iterations_2; }
	inline int32_t* get_address_of_iterations_2() { return &___iterations_2; }
	inline void set_iterations_2(int32_t value)
	{
		___iterations_2 = value;
	}

	inline static int32_t get_offset_of_blurSpread_3() { return static_cast<int32_t>(offsetof(Blur_t968053319, ___blurSpread_3)); }
	inline float get_blurSpread_3() const { return ___blurSpread_3; }
	inline float* get_address_of_blurSpread_3() { return &___blurSpread_3; }
	inline void set_blurSpread_3(float value)
	{
		___blurSpread_3 = value;
	}

	inline static int32_t get_offset_of_blurShader_4() { return static_cast<int32_t>(offsetof(Blur_t968053319, ___blurShader_4)); }
	inline Shader_t3998140498 * get_blurShader_4() const { return ___blurShader_4; }
	inline Shader_t3998140498 ** get_address_of_blurShader_4() { return &___blurShader_4; }
	inline void set_blurShader_4(Shader_t3998140498 * value)
	{
		___blurShader_4 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_4, value);
	}
};

struct Blur_t968053319_StaticFields
{
public:
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::m_Material
	Material_t1886596500 * ___m_Material_5;

public:
	inline static int32_t get_offset_of_m_Material_5() { return static_cast<int32_t>(offsetof(Blur_t968053319_StaticFields, ___m_Material_5)); }
	inline Material_t1886596500 * get_m_Material_5() const { return ___m_Material_5; }
	inline Material_t1886596500 ** get_address_of_m_Material_5() { return &___m_Material_5; }
	inline void set_m_Material_5(Material_t1886596500 * value)
	{
		___m_Material_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
