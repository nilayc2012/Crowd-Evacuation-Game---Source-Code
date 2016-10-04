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

// WallTransform
struct WallTransform_t2927233092;
// Pos
struct Pos_t774521570;
// Rot
struct Rot_t774521503;
// WallScale
struct WallScale_t2901051958;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Pos774521570.h"
#include "AssemblyU2DCSharp_Rot774521503.h"
#include "AssemblyU2DCSharp_WallScale2901051958.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WallTransform::.ctor()
extern "C"  void WallTransform__ctor_m199112465 (WallTransform_t2927233092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WallTransform::.ctor(Pos,Rot,WallScale)
extern "C"  void WallTransform__ctor_m2444783036 (WallTransform_t2927233092 * __this, Pos_t774521570 * ___pos0, Rot_t774521503 * ___rot1, WallScale_t2901051958 * ___ws2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WallTransform::Equals(System.Object)
extern "C"  bool WallTransform_Equals_m2456349760 (WallTransform_t2927233092 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject WallTransform::convertToUnityGameobject()
extern "C"  GameObject_t1756533147 * WallTransform_convertToUnityGameobject_m2784017586 (WallTransform_t2927233092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WallTransform::updateDetails()
extern "C"  void WallTransform_updateDetails_m1061348178 (WallTransform_t2927233092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
