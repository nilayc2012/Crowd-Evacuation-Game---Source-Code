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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Quaternion
struct Quaternion_t4030073918;
struct Quaternion_t4030073918_marshaled_pinvoke;
struct Quaternion_t4030073918_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m3196903881 (Quaternion_t4030073918 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m1561886418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Dot_m952616600 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___a0, Quaternion_t4030073918  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t4030073918  Quaternion_AngleAxis_m2806222563 (Il2CppObject * __this /* static, unused */, float ___angle0, Vector3_t2243707580  ___axis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_AngleAxis_m3310327005 (Il2CppObject * __this /* static, unused */, float ___angle0, Vector3_t2243707580 * ___axis1, Quaternion_t4030073918 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t4030073918  Quaternion_FromToRotation_m1685306068 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___fromDirection0, Vector3_t2243707580  ___toDirection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_FromToRotation(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_FromToRotation_m2839236110 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___fromDirection0, Vector3_t2243707580 * ___toDirection1, Quaternion_t4030073918 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t4030073918  Quaternion_LookRotation_m633695927 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___forward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_LookRotation_m3606560944 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___forward0, Vector3_t2243707580 * ___upwards1, Quaternion_t4030073918 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t4030073918  Quaternion_Slerp_m1992855400 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___a0, Quaternion_t4030073918  ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Slerp_m1926970492 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918 * ___a0, Quaternion_t4030073918 * ___b1, float ___t2, Quaternion_t4030073918 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Quaternion_Inverse_m3931399088 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Inverse_m1043108654 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918 * ___rotation0, Quaternion_t4030073918 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m2638853272 (Quaternion_t4030073918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t2243707580  Quaternion_get_eulerAngles_m3302573991 (Quaternion_t4030073918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t4030073918  Quaternion_Euler_m2887458175 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t4030073918  Quaternion_Euler_m3586339259 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Quaternion_Internal_MakePositive_m2921671247 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C"  Vector3_t2243707580  Quaternion_Internal_ToEulerRad_m2807508879 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m1077217777 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918 * ___rotation0, Vector3_t2243707580 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C"  Quaternion_t4030073918  Quaternion_Internal_FromEulerRad_m1121344272 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m1113788132 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___euler0, Quaternion_t4030073918 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m2270520528 (Quaternion_t4030073918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3730391696 (Quaternion_t4030073918 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Quaternion_op_Multiply_m2426727589 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___lhs0, Quaternion_t4030073918  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Quaternion_op_Multiply_m1483423721 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___rotation0, Vector3_t2243707580  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Quaternion_op_Inequality_m3629786166 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___lhs0, Quaternion_t4030073918  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t4030073918;
struct Quaternion_t4030073918_marshaled_pinvoke;

extern "C" void Quaternion_t4030073918_marshal_pinvoke(const Quaternion_t4030073918& unmarshaled, Quaternion_t4030073918_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t4030073918_marshal_pinvoke_back(const Quaternion_t4030073918_marshaled_pinvoke& marshaled, Quaternion_t4030073918& unmarshaled);
extern "C" void Quaternion_t4030073918_marshal_pinvoke_cleanup(Quaternion_t4030073918_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t4030073918;
struct Quaternion_t4030073918_marshaled_com;

extern "C" void Quaternion_t4030073918_marshal_com(const Quaternion_t4030073918& unmarshaled, Quaternion_t4030073918_marshaled_com& marshaled);
extern "C" void Quaternion_t4030073918_marshal_com_back(const Quaternion_t4030073918_marshaled_com& marshaled, Quaternion_t4030073918& unmarshaled);
extern "C" void Quaternion_t4030073918_marshal_com_cleanup(Quaternion_t4030073918_marshaled_com& marshaled);
