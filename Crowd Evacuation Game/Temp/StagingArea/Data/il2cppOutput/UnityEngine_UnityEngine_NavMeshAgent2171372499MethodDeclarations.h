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

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t2171372499;
// UnityEngine.NavMeshPath
struct NavMeshPath_t3371201495;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_NavMeshAgent2171372499.h"
#include "UnityEngine_UnityEngine_NavMeshPath3371201495.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C"  bool NavMeshAgent_SetDestination_m2242640013 (NavMeshAgent_t2171372499 * __this, Vector3_t2243707580  ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C"  bool NavMeshAgent_INTERNAL_CALL_SetDestination_m2967457926 (Il2CppObject * __this /* static, unused */, NavMeshAgent_t2171372499 * ___self0, Vector3_t2243707580 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_destination()
extern "C"  Vector3_t2243707580  NavMeshAgent_get_destination_m2275142893 (NavMeshAgent_t2171372499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_destination(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_destination_m189344078 (NavMeshAgent_t2171372499 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_velocity()
extern "C"  Vector3_t2243707580  NavMeshAgent_get_velocity_m3011766024 (NavMeshAgent_t2171372499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_velocity_m1009413875 (NavMeshAgent_t2171372499 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_nextPosition()
extern "C"  Vector3_t2243707580  NavMeshAgent_get_nextPosition_m464803831 (NavMeshAgent_t2171372499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_nextPosition(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_nextPosition_m1376432904 (NavMeshAgent_t2171372499 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::Resume()
extern "C"  void NavMeshAgent_Resume_m655224463 (NavMeshAgent_t2171372499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::ResetPath()
extern "C"  void NavMeshAgent_ResetPath_m3425889006 (NavMeshAgent_t2171372499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::SetPath(UnityEngine.NavMeshPath)
extern "C"  bool NavMeshAgent_SetPath_m3429229977 (NavMeshAgent_t2171372499 * __this, NavMeshPath_t3371201495 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_path(UnityEngine.NavMeshPath)
extern "C"  void NavMeshAgent_set_path_m1714377390 (NavMeshAgent_t2171372499 * __this, NavMeshPath_t3371201495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_speed(System.Single)
extern "C"  void NavMeshAgent_set_speed_m2952720301 (NavMeshAgent_t2171372499 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_acceleration(System.Single)
extern "C"  void NavMeshAgent_set_acceleration_m2695039242 (NavMeshAgent_t2171372499 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_height(System.Single)
extern "C"  void NavMeshAgent_set_height_m2057470789 (NavMeshAgent_t2171372499 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::set_avoidancePriority(System.Int32)
extern "C"  void NavMeshAgent_set_avoidancePriority_m2622007822 (NavMeshAgent_t2171372499 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
