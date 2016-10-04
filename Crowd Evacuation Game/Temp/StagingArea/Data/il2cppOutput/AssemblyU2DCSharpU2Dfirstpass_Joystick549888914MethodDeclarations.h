#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Joystick
struct Joystick_t549888914;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"

// System.Void Joystick::.ctor()
extern "C"  void Joystick__ctor_m2065635551 (Joystick_t549888914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::Start()
extern "C"  void Joystick_Start_m2650953299 (Joystick_t549888914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void Joystick_UpdateVirtualAxes_m1478351113 (Joystick_t549888914 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::CreateVirtualAxes()
extern "C"  void Joystick_CreateVirtualAxes_m4286790537 (Joystick_t549888914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnDrag_m2402131680 (Joystick_t549888914 * __this, PointerEventData_t1599784723 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerUp_m3928950428 (Joystick_t549888914 * __this, PointerEventData_t1599784723 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerDown_m101935171 (Joystick_t549888914 * __this, PointerEventData_t1599784723 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnDisable()
extern "C"  void Joystick_OnDisable_m1464164816 (Joystick_t549888914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
