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

// UnityStandardAssets.Water.PlanarReflection
struct PlanarReflection_t2931543887;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityStandardAssets.Water.PlanarReflection::.ctor()
extern "C"  void PlanarReflection__ctor_m1279159428 (PlanarReflection_t2931543887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::Start()
extern "C"  void PlanarReflection_Start_m3592061564 (PlanarReflection_t2931543887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
extern "C"  Camera_t189460977 * PlanarReflection_CreateReflectionCameraFor_m2967596404 (PlanarReflection_t2931543887 * __this, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
extern "C"  void PlanarReflection_SetStandardCameraParameter_m1836612147 (PlanarReflection_t2931543887 * __this, Camera_t189460977 * ___cam0, LayerMask_t3188175821  ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityStandardAssets.Water.PlanarReflection::CreateTextureFor(UnityEngine.Camera)
extern "C"  RenderTexture_t2666733923 * PlanarReflection_CreateTextureFor_m3515003827 (PlanarReflection_t2931543887 * __this, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
extern "C"  void PlanarReflection_RenderHelpCameras_m1380237535 (PlanarReflection_t2931543887 * __this, Camera_t189460977 * ___currentCam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::LateUpdate()
extern "C"  void PlanarReflection_LateUpdate_m557651377 (PlanarReflection_t2931543887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern "C"  void PlanarReflection_WaterTileBeingRendered_m187266240 (PlanarReflection_t2931543887 * __this, Transform_t3275118058 * ___tr0, Camera_t189460977 * ___currentCam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnEnable()
extern "C"  void PlanarReflection_OnEnable_m1108670012 (PlanarReflection_t2931543887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnDisable()
extern "C"  void PlanarReflection_OnDisable_m239492945 (PlanarReflection_t2931543887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void PlanarReflection_RenderReflectionFor_m2334755602 (PlanarReflection_t2931543887 * __this, Camera_t189460977 * ___cam0, Camera_t189460977 * ___reflectCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
extern "C"  void PlanarReflection_SaneCameraSettings_m2023309855 (PlanarReflection_t2931543887 * __this, Camera_t189460977 * ___helperCam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Matrix4x4_t2933234003  PlanarReflection_CalculateObliqueMatrix_m253681959 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___projection0, Vector4_t2243707581  ___clipPlane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Matrix4x4_t2933234003  PlanarReflection_CalculateReflectionMatrix_m577471045 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___reflectionMat0, Vector4_t2243707581  ___plane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Water.PlanarReflection::Sgn(System.Single)
extern "C"  float PlanarReflection_Sgn_m2682791593 (Il2CppObject * __this /* static, unused */, float ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector4_t2243707581  PlanarReflection_CameraSpacePlane_m1013868673 (PlanarReflection_t2931543887 * __this, Camera_t189460977 * ___cam0, Vector3_t2243707580  ___pos1, Vector3_t2243707580  ___normal2, float ___sideSign3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
