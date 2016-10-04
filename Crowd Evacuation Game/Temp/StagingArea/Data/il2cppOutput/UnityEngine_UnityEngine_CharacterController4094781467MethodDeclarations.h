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

// UnityEngine.CharacterController
struct CharacterController_t4094781467;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_CollisionFlags4046947985.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_CharacterController4094781467.h"

// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C"  int32_t CharacterController_Move_m3456882757 (CharacterController_t4094781467 * __this, Vector3_t2243707580  ___motion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C"  int32_t CharacterController_INTERNAL_CALL_Move_m2826125634 (Il2CppObject * __this /* static, unused */, CharacterController_t4094781467 * ___self0, Vector3_t2243707580 * ___motion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
extern "C"  bool CharacterController_get_isGrounded_m2594228107 (CharacterController_t4094781467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C"  Vector3_t2243707580  CharacterController_get_velocity_m1484936086 (CharacterController_t4094781467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void CharacterController_INTERNAL_get_velocity_m3465973477 (CharacterController_t4094781467 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_radius()
extern "C"  float CharacterController_get_radius_m2751828411 (CharacterController_t4094781467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_height()
extern "C"  float CharacterController_get_height_m2830713110 (CharacterController_t4094781467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
