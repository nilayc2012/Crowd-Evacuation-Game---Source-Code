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

// GUIAnimFREE
struct GUIAnimFREE_t2360261712;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "codegen/il2cpp-codegen.h"
#include "GUIAnimatorFREE_GUIAnimSystemFREE_eGUIMove3410604551.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "GETween_GETween_GETweenType2881034057.h"
#include "GUIAnimatorFREE_GUIAnimFREE_eEaseType875930122.h"

// System.Void GUIAnimFREE::Awake()
extern "C"  void GUIAnimFREE_Awake_m2874888320 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::Start()
extern "C"  void GUIAnimFREE_Start_m318995371 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::Update()
extern "C"  void GUIAnimFREE_Update_m1865664770 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::Reset()
extern "C"  void GUIAnimFREE_Reset_m2058011652 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::Free_ResetPositionDoneFlag(System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_Free_ResetPositionDoneFlag_m900878243 (GUIAnimFREE_t2360261712 * __this, float ___Delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ResetAllChildren()
extern "C"  void GUIAnimFREE_ResetAllChildren_m1745546170 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::InitScaleIn(System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_InitScaleIn_m74559117 (GUIAnimFREE_t2360261712 * __this, float ___Delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::CalculateCameraArea()
extern "C"  void GUIAnimFREE_CalculateCameraArea_m4256688885 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitMoveIn()
extern "C"  void GUIAnimFREE_InitMoveIn_m2184197427 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitMoveOut()
extern "C"  void GUIAnimFREE_InitMoveOut_m3136089374 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitRotationIn()
extern "C"  void GUIAnimFREE_InitRotationIn_m4276488080 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitScaleIn()
extern "C"  void GUIAnimFREE_InitScaleIn_m2691306900 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::InitFadeIn()
extern "C"  void GUIAnimFREE_InitFadeIn_m2091819416 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveIn()
extern "C"  void GUIAnimFREE_MoveIn_m3334364553 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveIn(GUIAnimSystemFREE/eGUIMove)
extern "C"  void GUIAnimFREE_MoveIn_m3020128394 (GUIAnimFREE_t2360261712 * __this, int32_t ___GUIMoveType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::RecuresiveMoveIn(UnityEngine.Transform)
extern "C"  void GUIAnimFREE_RecuresiveMoveIn_m39231357 (GUIAnimFREE_t2360261712 * __this, Transform_t3275118058 * ___tf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StartMoveIdle()
extern "C"  void GUIAnimFREE_StartMoveIdle_m2527534676 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveIdle()
extern "C"  void GUIAnimFREE_MoveIdle_m1155160396 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::CoroutineMoveIdle(System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_CoroutineMoveIdle_m197132879 (GUIAnimFREE_t2360261712 * __this, float ___Delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveOut()
extern "C"  void GUIAnimFREE_MoveOut_m3706246088 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::CoroutineMoveOut(System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_CoroutineMoveOut_m826919121 (GUIAnimFREE_t2360261712 * __this, float ___Delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::MoveOut(GUIAnimSystemFREE/eGUIMove)
extern "C"  void GUIAnimFREE_MoveOut_m3051453773 (GUIAnimFREE_t2360261712 * __this, int32_t ___GUIMoveType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::RecuresiveMoveOut(UnityEngine.Transform)
extern "C"  void GUIAnimFREE_RecuresiveMoveOut_m2102726356 (GUIAnimFREE_t2360261712 * __this, Transform_t3275118058 * ___tf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_MoveUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimIn_MoveUpdateByValue_m1699998725 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_MoveComplete()
extern "C"  void GUIAnimFREE_AnimIn_MoveComplete_m1880843214 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_MoveUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimOut_MoveUpdateByValue_m1152091050 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_MoveComplete()
extern "C"  void GUIAnimFREE_AnimOut_MoveComplete_m1185792093 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_RotationUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimIn_RotationUpdateByValue_m1137304666 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_RotationComplete()
extern "C"  void GUIAnimFREE_AnimIn_RotationComplete_m3024114137 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_RotationUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimOut_RotationUpdateByValue_m3298473457 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_RotationComplete()
extern "C"  void GUIAnimFREE_AnimOut_RotationComplete_m2305733430 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_ScaleUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimIn_ScaleUpdateByValue_m4199975236 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_ScaleComplete()
extern "C"  void GUIAnimFREE_AnimIn_ScaleComplete_m3389676393 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_ScaleUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimOut_ScaleUpdateByValue_m551582885 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_ScaleComplete()
extern "C"  void GUIAnimFREE_AnimOut_ScaleComplete_m500535118 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_FadeUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimIn_FadeUpdateByValue_m2521753734 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimIn_FadeComplete()
extern "C"  void GUIAnimFREE_AnimIn_FadeComplete_m389697723 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_FadeUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_AnimOut_FadeUpdateByValue_m3910130007 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::AnimOut_FadeComplete()
extern "C"  void GUIAnimFREE_AnimOut_FadeComplete_m3207519478 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ScaleLoopStart(System.Single)
extern "C"  void GUIAnimFREE_ScaleLoopStart_m1971771452 (GUIAnimFREE_t2360261712 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ScaleLoopUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_ScaleLoopUpdateByValue_m1339035007 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ScaleLoopComplete()
extern "C"  void GUIAnimFREE_ScaleLoopComplete_m1245143908 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StopScaleLoop()
extern "C"  void GUIAnimFREE_StopScaleLoop_m2393762039 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeLoopStart(System.Single)
extern "C"  void GUIAnimFREE_FadeLoopStart_m1395354400 (GUIAnimFREE_t2360261712 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeLoopUpdateByValue(System.Single)
extern "C"  void GUIAnimFREE_FadeLoopUpdateByValue_m1600602741 (GUIAnimFREE_t2360261712 * __this, float ___Value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeLoopComplete()
extern "C"  void GUIAnimFREE_FadeLoopComplete_m498072952 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StopFadeLoop()
extern "C"  void GUIAnimFREE_StopFadeLoop_m613246821 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::PlaySoundOneShot(UnityEngine.AudioClip)
extern "C"  void GUIAnimFREE_PlaySoundOneShot_m2676013267 (GUIAnimFREE_t2360261712 * __this, AudioClip_t1932558630 * ___pAudioClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimFREE::PlaySoundOneShotWithDelay(UnityEngine.AudioClip,System.Single)
extern "C"  Il2CppObject * GUIAnimFREE_PlaySoundOneShotWithDelay_m2711805011 (GUIAnimFREE_t2360261712 * __this, AudioClip_t1932558630 * ___pAudioClip0, float ___Delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource GUIAnimFREE::PlaySoundLoop(UnityEngine.AudioClip)
extern "C"  AudioSource_t1135106623 * GUIAnimFREE_PlaySoundLoop_m120143276 (GUIAnimFREE_t2360261712 * __this, AudioClip_t1932558630 * ___pAudioClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StartScaleLoopSound()
extern "C"  void GUIAnimFREE_StartScaleLoopSound_m665406736 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StopScaleLoopSound()
extern "C"  void GUIAnimFREE_StopScaleLoopSound_m2870509880 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StartFadeLoopSound()
extern "C"  void GUIAnimFREE_StartFadeLoopSound_m3413190656 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::StopFadeLoopSound()
extern "C"  void GUIAnimFREE_StopFadeLoopSound_m3459302496 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::CalculateTotalBounds()
extern "C"  void GUIAnimFREE_CalculateTotalBounds_m899280020 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::ScreenResolutionChange()
extern "C"  void GUIAnimFREE_ScreenResolutionChange_m488448263 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GUIAnimFREE::IsAnimating()
extern "C"  bool GUIAnimFREE_IsAnimating_m1725488439 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GUIAnimFREE::GetFadeValue(UnityEngine.Transform)
extern "C"  float GUIAnimFREE_GetFadeValue_m977168917 (GUIAnimFREE_t2360261712 * __this, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GUIAnimFREE::GetFadeTextOutlineValue(UnityEngine.Transform)
extern "C"  float GUIAnimFREE_GetFadeTextOutlineValue_m1237615000 (GUIAnimFREE_t2360261712 * __this, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GUIAnimFREE::GetFadeTextShadowValue(UnityEngine.Transform)
extern "C"  float GUIAnimFREE_GetFadeTextShadowValue_m4169599188 (GUIAnimFREE_t2360261712 * __this, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::RecursiveFade(UnityEngine.Transform,System.Single,System.Boolean)
extern "C"  void GUIAnimFREE_RecursiveFade_m1427123088 (GUIAnimFREE_t2360261712 * __this, Transform_t3275118058 * ___trans0, float ___Fade1, bool ___IsFadeChildren2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeTextOutline(UnityEngine.Transform,System.Single)
extern "C"  void GUIAnimFREE_FadeTextOutline_m1632125420 (GUIAnimFREE_t2360261712 * __this, Transform_t3275118058 * ___trans0, float ___FadeOutline1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::FadeTextShadow(UnityEngine.Transform,System.Single)
extern "C"  void GUIAnimFREE_FadeTextShadow_m1722326296 (GUIAnimFREE_t2360261712 * __this, Transform_t3275118058 * ___trans0, float ___FadeShadow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GETween/GETweenType GUIAnimFREE::GETweenEaseType(GUIAnimFREE/eEaseType)
extern "C"  int32_t GUIAnimFREE_GETweenEaseType_m2095030826 (GUIAnimFREE_t2360261712 * __this, int32_t ___easeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimFREE::.ctor()
extern "C"  void GUIAnimFREE__ctor_m4075787791 (GUIAnimFREE_t2360261712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
