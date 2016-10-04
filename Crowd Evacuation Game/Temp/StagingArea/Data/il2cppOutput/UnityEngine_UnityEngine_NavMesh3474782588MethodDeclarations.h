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

// UnityEngine.NavMeshPath
struct NavMeshPath_t3371201495;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_NavMeshPath3371201495.h"

// System.Boolean UnityEngine.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.NavMeshPath)
extern "C"  bool NavMesh_CalculatePath_m1890183427 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___sourcePosition0, Vector3_t2243707580  ___targetPosition1, int32_t ___areaMask2, NavMeshPath_t3371201495 * ___path3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMesh::CalculatePathInternal(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.NavMeshPath)
extern "C"  bool NavMesh_CalculatePathInternal_m3132613452 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___sourcePosition0, Vector3_t2243707580  ___targetPosition1, int32_t ___areaMask2, NavMeshPath_t3371201495 * ___path3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMesh::INTERNAL_CALL_CalculatePathInternal(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Int32,UnityEngine.NavMeshPath)
extern "C"  bool NavMesh_INTERNAL_CALL_CalculatePathInternal_m3287317221 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___sourcePosition0, Vector3_t2243707580 * ___targetPosition1, int32_t ___areaMask2, NavMeshPath_t3371201495 * ___path3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
