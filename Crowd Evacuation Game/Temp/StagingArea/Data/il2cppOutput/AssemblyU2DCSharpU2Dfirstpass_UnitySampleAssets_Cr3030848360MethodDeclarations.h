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

// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t3030848360;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C"  void MobileInput__ctor_m3020032619 (MobileInput_t3030848360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C"  void MobileInput_AddButton_m3615007294 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C"  void MobileInput_AddAxes_m2182473303 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
extern "C"  float MobileInput_GetAxis_m1172626221 (MobileInput_t3030848360 * __this, String_t* ___name0, bool ___raw1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
extern "C"  void MobileInput_SetButtonDown_m1238699371 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
extern "C"  void MobileInput_SetButtonUp_m2619268496 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
extern "C"  void MobileInput_SetAxisPositive_m1248185115 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
extern "C"  void MobileInput_SetAxisNegative_m110443275 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
extern "C"  void MobileInput_SetAxisZero_m3638533874 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
extern "C"  void MobileInput_SetAxis_m1194439933 (MobileInput_t3030848360 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
extern "C"  bool MobileInput_GetButtonDown_m3895363551 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
extern "C"  bool MobileInput_GetButtonUp_m3649974618 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
extern "C"  bool MobileInput_GetButton_m2939035745 (MobileInput_t3030848360 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
extern "C"  Vector3_t2243707580  MobileInput_MousePosition_m1708674333 (MobileInput_t3030848360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
