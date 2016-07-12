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
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Butterfly
struct  Butterfly_t2006435411  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Butterfly::IsFluttering
	bool ___IsFluttering_2;
	// UnityEngine.Transform Butterfly::TR
	Transform_t284553113 * ___TR_3;
	// UnityEngine.Transform Butterfly::WingLeft
	Transform_t284553113 * ___WingLeft_4;
	// UnityEngine.Transform Butterfly::WingRight
	Transform_t284553113 * ___WingRight_5;
	// UnityEngine.Rigidbody Butterfly::RB
	Rigidbody_t1972007546 * ___RB_6;
	// System.Single Butterfly::WingRot
	float ___WingRot_7;
	// System.Single Butterfly::WingRotTick
	float ___WingRotTick_8;
	// System.Single Butterfly::WingRotFreq
	float ___WingRotFreq_9;
	// System.Single Butterfly::WingRotMax
	float ___WingRotMax_10;
	// System.Single Butterfly::SpeedY
	float ___SpeedY_11;
	// UnityEngine.Vector3 Butterfly::Heading
	Vector3_t3525329789  ___Heading_12;
	// System.Single Butterfly::HeadingCorrectDelayTick
	float ___HeadingCorrectDelayTick_13;
	// System.Single Butterfly::HeadingCorrectDelay
	float ___HeadingCorrectDelay_14;

public:
	inline static int32_t get_offset_of_IsFluttering_2() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___IsFluttering_2)); }
	inline bool get_IsFluttering_2() const { return ___IsFluttering_2; }
	inline bool* get_address_of_IsFluttering_2() { return &___IsFluttering_2; }
	inline void set_IsFluttering_2(bool value)
	{
		___IsFluttering_2 = value;
	}

	inline static int32_t get_offset_of_TR_3() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___TR_3)); }
	inline Transform_t284553113 * get_TR_3() const { return ___TR_3; }
	inline Transform_t284553113 ** get_address_of_TR_3() { return &___TR_3; }
	inline void set_TR_3(Transform_t284553113 * value)
	{
		___TR_3 = value;
		Il2CppCodeGenWriteBarrier(&___TR_3, value);
	}

	inline static int32_t get_offset_of_WingLeft_4() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___WingLeft_4)); }
	inline Transform_t284553113 * get_WingLeft_4() const { return ___WingLeft_4; }
	inline Transform_t284553113 ** get_address_of_WingLeft_4() { return &___WingLeft_4; }
	inline void set_WingLeft_4(Transform_t284553113 * value)
	{
		___WingLeft_4 = value;
		Il2CppCodeGenWriteBarrier(&___WingLeft_4, value);
	}

	inline static int32_t get_offset_of_WingRight_5() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___WingRight_5)); }
	inline Transform_t284553113 * get_WingRight_5() const { return ___WingRight_5; }
	inline Transform_t284553113 ** get_address_of_WingRight_5() { return &___WingRight_5; }
	inline void set_WingRight_5(Transform_t284553113 * value)
	{
		___WingRight_5 = value;
		Il2CppCodeGenWriteBarrier(&___WingRight_5, value);
	}

	inline static int32_t get_offset_of_RB_6() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___RB_6)); }
	inline Rigidbody_t1972007546 * get_RB_6() const { return ___RB_6; }
	inline Rigidbody_t1972007546 ** get_address_of_RB_6() { return &___RB_6; }
	inline void set_RB_6(Rigidbody_t1972007546 * value)
	{
		___RB_6 = value;
		Il2CppCodeGenWriteBarrier(&___RB_6, value);
	}

	inline static int32_t get_offset_of_WingRot_7() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___WingRot_7)); }
	inline float get_WingRot_7() const { return ___WingRot_7; }
	inline float* get_address_of_WingRot_7() { return &___WingRot_7; }
	inline void set_WingRot_7(float value)
	{
		___WingRot_7 = value;
	}

	inline static int32_t get_offset_of_WingRotTick_8() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___WingRotTick_8)); }
	inline float get_WingRotTick_8() const { return ___WingRotTick_8; }
	inline float* get_address_of_WingRotTick_8() { return &___WingRotTick_8; }
	inline void set_WingRotTick_8(float value)
	{
		___WingRotTick_8 = value;
	}

	inline static int32_t get_offset_of_WingRotFreq_9() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___WingRotFreq_9)); }
	inline float get_WingRotFreq_9() const { return ___WingRotFreq_9; }
	inline float* get_address_of_WingRotFreq_9() { return &___WingRotFreq_9; }
	inline void set_WingRotFreq_9(float value)
	{
		___WingRotFreq_9 = value;
	}

	inline static int32_t get_offset_of_WingRotMax_10() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___WingRotMax_10)); }
	inline float get_WingRotMax_10() const { return ___WingRotMax_10; }
	inline float* get_address_of_WingRotMax_10() { return &___WingRotMax_10; }
	inline void set_WingRotMax_10(float value)
	{
		___WingRotMax_10 = value;
	}

	inline static int32_t get_offset_of_SpeedY_11() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___SpeedY_11)); }
	inline float get_SpeedY_11() const { return ___SpeedY_11; }
	inline float* get_address_of_SpeedY_11() { return &___SpeedY_11; }
	inline void set_SpeedY_11(float value)
	{
		___SpeedY_11 = value;
	}

	inline static int32_t get_offset_of_Heading_12() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___Heading_12)); }
	inline Vector3_t3525329789  get_Heading_12() const { return ___Heading_12; }
	inline Vector3_t3525329789 * get_address_of_Heading_12() { return &___Heading_12; }
	inline void set_Heading_12(Vector3_t3525329789  value)
	{
		___Heading_12 = value;
	}

	inline static int32_t get_offset_of_HeadingCorrectDelayTick_13() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___HeadingCorrectDelayTick_13)); }
	inline float get_HeadingCorrectDelayTick_13() const { return ___HeadingCorrectDelayTick_13; }
	inline float* get_address_of_HeadingCorrectDelayTick_13() { return &___HeadingCorrectDelayTick_13; }
	inline void set_HeadingCorrectDelayTick_13(float value)
	{
		___HeadingCorrectDelayTick_13 = value;
	}

	inline static int32_t get_offset_of_HeadingCorrectDelay_14() { return static_cast<int32_t>(offsetof(Butterfly_t2006435411, ___HeadingCorrectDelay_14)); }
	inline float get_HeadingCorrectDelay_14() const { return ___HeadingCorrectDelay_14; }
	inline float* get_address_of_HeadingCorrectDelay_14() { return &___HeadingCorrectDelay_14; }
	inline void set_HeadingCorrectDelay_14(float value)
	{
		___HeadingCorrectDelay_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
