﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2441427762 (Vector4_t3525329790 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C"  int32_t Vector4_GetHashCode_m3402333527 (Vector4_t3525329790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C"  bool Vector4_Equals_m3270185343 (Vector4_t3525329790 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C"  String_t* Vector4_ToString_m3272970053 (Vector4_t3525329790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C"  Vector4_t3525329790  Vector4_get_zero_m3835647092 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
extern "C"  Vector4_t3525329790  Vector4_get_one_m3300413884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t3525329790  Vector4_op_Multiply_m209031836 (Il2CppObject * __this /* static, unused */, Vector4_t3525329790  ___a0, float ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(System.Single,UnityEngine.Vector4)
extern "C"  Vector4_t3525329790  Vector4_op_Multiply_m3555003804 (Il2CppObject * __this /* static, unused */, float ___d0, Vector4_t3525329790  ___a1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector4_t3525329790  Vector4_op_Implicit_m331673271 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector4_t3525329790  Vector4_op_Implicit_m331673240 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector4_t3525329790;
struct Vector4_t3525329790_marshaled_pinvoke;

extern "C" void Vector4_t3525329790_marshal_pinvoke(const Vector4_t3525329790& unmarshaled, Vector4_t3525329790_marshaled_pinvoke& marshaled);
extern "C" void Vector4_t3525329790_marshal_pinvoke_back(const Vector4_t3525329790_marshaled_pinvoke& marshaled, Vector4_t3525329790& unmarshaled);
extern "C" void Vector4_t3525329790_marshal_pinvoke_cleanup(Vector4_t3525329790_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector4_t3525329790;
struct Vector4_t3525329790_marshaled_com;

extern "C" void Vector4_t3525329790_marshal_com(const Vector4_t3525329790& unmarshaled, Vector4_t3525329790_marshaled_com& marshaled);
extern "C" void Vector4_t3525329790_marshal_com_back(const Vector4_t3525329790_marshaled_com& marshaled, Vector4_t3525329790& unmarshaled);
extern "C" void Vector4_t3525329790_marshal_com_cleanup(Vector4_t3525329790_marshaled_com& marshaled);
