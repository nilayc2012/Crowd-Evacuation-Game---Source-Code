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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// GETween
struct GETween_t1944310849;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// GETweenItem
struct GETweenItem_t3020157540;
// System.Action`1<System.Single>
struct Action_1_t1878309314;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "GETween_GETweenItem3020157540.h"

// UnityEngine.GameObject GETween::get_m_TweenEmpty()
extern "C"  GameObject_t1756533147 * GETween_get_m_TweenEmpty_m76463827 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::Init()
extern "C"  void GETween_Init_m4174725805 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::Init(System.Int32)
extern "C"  void GETween_Init_m1369860212 (Il2CppObject * __this /* static, unused */, int32_t ___maxSimultaneousTweens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::Reset()
extern "C"  void GETween_Reset_m4032798948 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::Update()
extern "C"  void GETween_Update_m2388464026 (GETween_t1944310849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::update()
extern "C"  void GETween_update_m1098627322 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::RemoveTween(System.Int32,System.Int32)
extern "C"  void GETween_RemoveTween_m3022205064 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___uniqueId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::RemoveTween(System.Int32)
extern "C"  void GETween_RemoveTween_m3644396881 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object GETween::SendLogError(System.String)
extern "C"  Il2CppObject * GETween_SendLogError_m4228014298 (Il2CppObject * __this /* static, unused */, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GETweenItem GETween::MoreInfo()
extern "C"  GETweenItem_t3020157540 * GETween_MoreInfo_m63730169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GETweenItem GETween::AddTween(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,GETweenItem)
extern "C"  GETweenItem_t3020157540 * GETween_AddTween_m632949360 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Vector3_t2243707580  ___to1, float ___time2, GETweenItem_t3020157540 * ___tween3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GETweenItem GETween::TweenValue(UnityEngine.GameObject,System.Action`1<System.Single>,System.Single,System.Single,System.Single)
extern "C"  GETweenItem_t3020157540 * GETween_TweenValue_m3138542768 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, Action_1_t1878309314 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutQuadOpt_m3276637995 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInQuadOpt_m3318917026 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutQuadOpt(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutQuadOpt_m993742022 (Il2CppObject * __this /* static, unused */, float ___start0, float ___diff1, float ___ratioPassed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseLinear(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseLinear_m2185749656 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseSpring(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseSpring_m3522681108 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInQuad(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInQuad_m4033502149 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutQuad(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutQuad_m740287716 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutQuad(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutQuad_m1845238923 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInCubic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInCubic_m2337348796 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutCubic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutCubic_m642045763 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutCubic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutCubic_m1118329876 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInQuart(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInQuart_m258180223 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutQuart(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutQuart_m3260817426 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutQuart(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutQuart_m13830993 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInQuint(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInQuint_m3624798011 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutQuint(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutQuint_m2079015854 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutQuint(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutQuint_m2965816621 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInSine(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInSine_m1544160217 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutSine(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutSine_m503260594 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutSine(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutSine_m408756359 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInExpo(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInExpo_m2926163482 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutExpo(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutExpo_m4033017299 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutExpo(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutExpo_m1366389042 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInCirc(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInCirc_m4163029419 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutCirc(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutCirc_m2136309512 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutCirc(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutCirc_m2367506933 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInBounce(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInBounce_m1547828430 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutBounce(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutBounce_m4140952721 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutBounce(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutBounce_m106599238 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInBack(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInBack_m2617109275 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutBack(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutBack_m2842924632 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutBack(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutBack_m3629061445 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInElastic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInElastic_m2258308337 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseOutElastic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseOutElastic_m4007438770 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GETween::UpdateEaseInOutElastic(System.Single,System.Single,System.Single)
extern "C"  float GETween_UpdateEaseInOutElastic_m1425578579 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::.ctor()
extern "C"  void GETween__ctor_m2655612959 (GETween_t1944310849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GETween::.cctor()
extern "C"  void GETween__cctor_m3069593486 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
