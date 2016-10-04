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

// MirzaBeig.Common.MathUtility/RangeFloat
struct RangeFloat_t3791186727;
// UnityEngine.Transform
struct Transform_t3275118058;
// MirzaBeig.Common.MathUtility/TransformContainer
struct TransformContainer_t2855586155;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_MirzaBeig_Common_MathUtility_Ler2097207407.h"
#include "AssemblyU2DCSharp_MirzaBeig_Common_MathUtility_Ran3791186727.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"
#include "AssemblyU2DCSharp_MirzaBeig_Common_MathUtility_Tra2855586155.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Double MirzaBeig.Common.MathUtility::clamp(System.Double,System.Double,System.Double)
extern "C"  double MathUtility_clamp_m4073630316 (Il2CppObject * __this /* static, unused */, double ___value0, double ___min1, double ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::clampAngle(System.Single,System.Single,System.Single)
extern "C"  float MathUtility_clampAngle_m3537335279 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MirzaBeig.Common.MathUtility::nextPowerOfTwo(System.Int32)
extern "C"  int32_t MathUtility_nextPowerOfTwo_m589121188 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::lerp(System.Single,System.Single,System.Single)
extern "C"  float MathUtility_lerp_m691613188 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtility_lerp_m484462768 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::lerp(System.Single,System.Single,System.Single,MirzaBeig.Common.MathUtility/LerpType)
extern "C"  float MathUtility_lerp_m1051464363 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,MirzaBeig.Common.MathUtility/LerpType)
extern "C"  Vector3_t2243707580  MathUtility_lerp_m1660614983 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___time2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::lerpEaseInSine(System.Single,System.Single,System.Single)
extern "C"  float MathUtility_lerpEaseInSine_m3613121048 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::lerpEaseOutSine(System.Single,System.Single,System.Single)
extern "C"  float MathUtility_lerpEaseOutSine_m4021399495 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::lerpEaseInOutSine(System.Single,System.Single,System.Single)
extern "C"  float MathUtility_lerpEaseInOutSine_m1111067670 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::lerpEaseInSine(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtility_lerpEaseInSine_m787501108 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::lerpEaseOutSine(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtility_lerpEaseOutSine_m798058627 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::lerpEaseInOutSine(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtility_lerpEaseInOutSine_m2339641886 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::lerpEaseInQuad(System.Single,System.Single,System.Single)
extern "C"  float MathUtility_lerpEaseInQuad_m4122208186 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::lerpEaseOutQuad(System.Single,System.Single,System.Single)
extern "C"  float MathUtility_lerpEaseOutQuad_m1118386651 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::lerpEaseInOutQuad(System.Single,System.Single,System.Single)
extern "C"  float MathUtility_lerpEaseInOutQuad_m1874756320 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::lerpEaseInQuad(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtility_lerpEaseInQuad_m3962526798 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::lerpEaseOutQuad(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtility_lerpEaseOutQuad_m327304815 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::lerpEaseInOutQuad(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtility_lerpEaseInOutQuad_m3644261632 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___from0, Vector3_t2243707580  ___to1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::remap(System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  float MathUtility_remap_m1945492813 (Il2CppObject * __this /* static, unused */, float ___value0, float ___fromMin1, float ___fromMax2, float ___toMin3, float ___toMax4, bool ___clamp5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::remap(System.Single,MirzaBeig.Common.MathUtility/RangeFloat,MirzaBeig.Common.MathUtility/RangeFloat,System.Boolean)
extern "C"  float MathUtility_remap_m169687565 (Il2CppObject * __this /* static, unused */, float ___value0, RangeFloat_t3791186727 * ___from1, RangeFloat_t3791186727 * ___to2, bool ___clamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::remap(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
extern "C"  Vector3_t2243707580  MathUtility_remap_m948030445 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___value0, Vector3_t2243707580  ___fromMin1, Vector3_t2243707580  ___fromMax2, Vector3_t2243707580  ___toMin3, Vector3_t2243707580  ___toMax4, bool ___clamp5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::normalizeRange(System.Single,System.Single,System.Single,System.Boolean)
extern "C"  float MathUtility_normalizeRange_m207493106 (Il2CppObject * __this /* static, unused */, float ___value0, float ___min1, float ___max2, bool ___clamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::normalizeRange(System.Single,MirzaBeig.Common.MathUtility/RangeFloat,System.Boolean)
extern "C"  float MathUtility_normalizeRange_m3641438865 (Il2CppObject * __this /* static, unused */, float ___value0, RangeFloat_t3791186727 * ___range1, bool ___clamp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::normalizeRange(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
extern "C"  Vector3_t2243707580  MathUtility_normalizeRange_m555269378 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___value0, Vector3_t2243707580  ___min1, Vector3_t2243707580  ___max2, bool ___clamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::catmullRom(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float MathUtility_catmullRom_m3819347583 (Il2CppObject * __this /* static, unused */, float ___p10, float ___p21, float ___p32, float ___p43, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MirzaBeig.Common.MathUtility::floatEquals(System.Single,System.Single,System.Single)
extern "C"  bool MathUtility_floatEquals_m3083536580 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, float ___epsilon2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Common.MathUtility::rotateAround(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void MathUtility_rotateAround_m811783588 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, Vector3_t2243707580  ___point1, Vector3_t2243707580  ___axis2, float ___angle3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MirzaBeig.Common.MathUtility/TransformContainer MirzaBeig.Common.MathUtility::getRotationAround(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  TransformContainer_t2855586155 * MathUtility_getRotationAround_m1086486491 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, Vector3_t2243707580  ___point1, Vector3_t2243707580  ___axis2, float ___angle3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MirzaBeig.Common.MathUtility/TransformContainer MirzaBeig.Common.MathUtility::getRotationAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  TransformContainer_t2855586155 * MathUtility_getRotationAround_m1330250598 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___point0, Vector3_t2243707580  ___axis1, float ___angle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Common.MathUtility::setRotationAround(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Space,UnityEngine.Space)
extern "C"  void MathUtility_setRotationAround_m3337850285 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, Vector3_t2243707580  ___point1, Vector3_t2243707580  ___axis2, float ___angle3, int32_t ___positionRelativeTo4, int32_t ___rotationRelativeTo5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Common.MathUtility::setRotationAround2(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Space,UnityEngine.Space)
extern "C"  void MathUtility_setRotationAround2_m3936919783 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, Vector3_t2243707580  ___point1, Vector3_t2243707580  ___axis2, float ___angle3, int32_t ___positionRelativeTo4, int32_t ___rotationRelativeTo5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MirzaBeig.Common.MathUtility::LerpTo(UnityEngine.Transform,MirzaBeig.Common.MathUtility/TransformContainer,System.Single,UnityEngine.Space)
extern "C"  void MathUtility_LerpTo_m990417202 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, TransformContainer_t2855586155 * ___target1, float ___t2, int32_t ___relativeTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::rotatePointAroundPivot(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  MathUtility_rotatePointAroundPivot_m3229656763 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___point0, Vector3_t2243707580  ___axis1, float ___angle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::rotatePointAroundPivot(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Vector3_t2243707580  MathUtility_rotatePointAroundPivot_m2905878669 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___point0, Vector3_t2243707580  ___axis1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MirzaBeig.Common.MathUtility::getPointOnCircle(System.Single)
extern "C"  Vector2_t2243707579  MathUtility_getPointOnCircle_m262334393 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::getYaw(UnityEngine.Quaternion)
extern "C"  float MathUtility_getYaw_m1280549832 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::getPitch(UnityEngine.Quaternion)
extern "C"  float MathUtility_getPitch_m1270411879 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MirzaBeig.Common.MathUtility::getRoll(UnityEngine.Quaternion)
extern "C"  float MathUtility_getRoll_m2439411690 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::getYawPitchRoll(UnityEngine.Quaternion)
extern "C"  Vector3_t2243707580  MathUtility_getYawPitchRoll_m1698635121 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::mouseScreenToWorld(UnityEngine.Camera)
extern "C"  Vector3_t2243707580  MathUtility_mouseScreenToWorld_m4038612656 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MirzaBeig.Common.MathUtility::mouseScreenToWorldSimulated(UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  MathUtility_mouseScreenToWorldSimulated_m1246251805 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___position0, Camera_t189460977 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
