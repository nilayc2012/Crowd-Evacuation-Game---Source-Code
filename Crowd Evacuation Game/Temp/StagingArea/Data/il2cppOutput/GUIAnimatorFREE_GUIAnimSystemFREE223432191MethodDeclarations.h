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

// GUIAnimSystemFREE
struct GUIAnimSystemFREE_t223432191;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t4075570403;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t410733016;
// UnityEngine.UI.GraphicRaycaster[]
struct GraphicRaycasterU5BU5D_t3005406153;

#include "codegen/il2cpp-codegen.h"
#include "GUIAnimatorFREE_GUIAnimSystemFREE223432191.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Canvas209405766.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster410733016.h"

// GUIAnimSystemFREE GUIAnimSystemFREE::get_Instance()
extern "C"  GUIAnimSystemFREE_t223432191 * GUIAnimSystemFREE_get_Instance_m2644685246 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::set_Instance(GUIAnimSystemFREE)
extern "C"  void GUIAnimSystemFREE_set_Instance_m2690394079 (Il2CppObject * __this /* static, unused */, GUIAnimSystemFREE_t223432191 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GUIAnimSystemFREE GUIAnimSystemFREE::GetInstance()
extern "C"  GUIAnimSystemFREE_t223432191 * GUIAnimSystemFREE_GetInstance_m2412175483 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::Awake()
extern "C"  void GUIAnimSystemFREE_Awake_m1504973735 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::Start()
extern "C"  void GUIAnimSystemFREE_Start_m636132828 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::Update()
extern "C"  void GUIAnimSystemFREE_Update_m2701126003 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::OnGUI()
extern "C"  void GUIAnimSystemFREE_OnGUI_m3992607896 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::ShowFreeVersionText()
extern "C"  void GUIAnimSystemFREE_ShowFreeVersionText_m1116220958 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::LoadLevel(System.String,System.Single)
extern "C"  void GUIAnimSystemFREE_LoadLevel_m3199371989 (GUIAnimSystemFREE_t223432191 * __this, String_t* ___LevelName0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::LoadLevelDelay(System.String,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_LoadLevelDelay_m2654380768 (GUIAnimSystemFREE_t223432191 * __this, String_t* ___LevelName0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::MoveIn(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_MoveIn_m725522468 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___EffectsOnChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::MoveInAll()
extern "C"  void GUIAnimSystemFREE_MoveInAll_m2638283249 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::MoveOut(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_MoveOut_m1193341829 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___EffectsOnChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::MoveOutAll()
extern "C"  void GUIAnimSystemFREE_MoveOutAll_m677968292 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::PlayParticle(UnityEngine.Transform)
extern "C"  void GUIAnimSystemFREE_PlayParticle_m115934729 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::StopParticle(UnityEngine.Transform)
extern "C"  void GUIAnimSystemFREE_StopParticle_m1853302609 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::DontDestroyParticleWhenLoadNewScene(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_DontDestroyParticleWhenLoadNewScene_m3715891521 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___StopParticle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DontDestroyParticleWhenLoadNewSceneDelay(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DontDestroyParticleWhenLoadNewSceneDelay_m3892440187 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___StopParticle1, float ___delay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::DontDestroyParticleWhenLoadNewScene(UnityEngine.ParticleSystem,System.Boolean)
extern "C"  void GUIAnimSystemFREE_DontDestroyParticleWhenLoadNewScene_m1986834878 (GUIAnimSystemFREE_t223432191 * __this, ParticleSystem_t3394631041 * ___pParticleSystem0, bool ___StopParticle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DontDestroyParticleWhenLoadNewSceneDelay(UnityEngine.ParticleSystem,System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DontDestroyParticleWhenLoadNewSceneDelay_m32575132 (GUIAnimSystemFREE_t223432191 * __this, ParticleSystem_t3394631041 * ___pParticleSystem0, bool ___StopParticle1, float ___delay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusOnlyThisCanvas(UnityEngine.GameObject)
extern "C"  void GUIAnimSystemFREE_FocusOnlyThisCanvas_m3679764080 (GUIAnimSystemFREE_t223432191 * __this, GameObject_t1756533147 * ___gOB0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusTheseCanvases(UnityEngine.GameObject[])
extern "C"  void GUIAnimSystemFREE_FocusTheseCanvases_m431897017 (GUIAnimSystemFREE_t223432191 * __this, GameObjectU5BU5D_t3057952154* ___gOBs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusThisCanvas(UnityEngine.Canvas)
extern "C"  void GUIAnimSystemFREE_FocusThisCanvas_m647313759 (GUIAnimSystemFREE_t223432191 * __this, Canvas_t209405766 * ___pCanvas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusTheseCanvas(UnityEngine.Canvas[])
extern "C"  void GUIAnimSystemFREE_FocusTheseCanvas_m2156464376 (GUIAnimSystemFREE_t223432191 * __this, CanvasU5BU5D_t4075570403* ___pCanvases0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusThisCanvas(UnityEngine.UI.GraphicRaycaster)
extern "C"  void GUIAnimSystemFREE_FocusThisCanvas_m1465656263 (GUIAnimSystemFREE_t223432191 * __this, GraphicRaycaster_t410733016 * ___pGraphicRaycaster0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::FocusTheseCanvases(UnityEngine.UI.GraphicRaycaster[])
extern "C"  void GUIAnimSystemFREE_FocusTheseCanvases_m3339714542 (GUIAnimSystemFREE_t223432191 * __this, GraphicRaycasterU5BU5D_t3005406153* ___pGraphicRaycasters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetGraphicRaycasterEnable(UnityEngine.GameObject,System.Boolean)
extern "C"  void GUIAnimSystemFREE_SetGraphicRaycasterEnable_m1558738584 (GUIAnimSystemFREE_t223432191 * __this, GameObject_t1756533147 * ___gOB0, bool ___Enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetGraphicRaycasterEnable(UnityEngine.Canvas,System.Boolean)
extern "C"  void GUIAnimSystemFREE_SetGraphicRaycasterEnable_m2677720871 (GUIAnimSystemFREE_t223432191 * __this, Canvas_t209405766 * ___pCanvas0, bool ___Enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetGraphicRaycasterEnable(UnityEngine.UI.GraphicRaycaster,System.Boolean)
extern "C"  void GUIAnimSystemFREE_SetGraphicRaycasterEnable_m1503580515 (GUIAnimSystemFREE_t223432191 * __this, GraphicRaycaster_t410733016 * ___pGraphicRaycaster0, bool ___Enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableAllGraphicRaycasters(System.Boolean)
extern "C"  void GUIAnimSystemFREE_EnableAllGraphicRaycasters_m2490469632 (GUIAnimSystemFREE_t223432191 * __this, bool ___Enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableAllButtons(System.Boolean)
extern "C"  void GUIAnimSystemFREE_EnableAllButtons_m678290296 (GUIAnimSystemFREE_t223432191 * __this, bool ___Enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableButton(System.Boolean,System.Single)
extern "C"  void GUIAnimSystemFREE_EnableButton_m810891479 (GUIAnimSystemFREE_t223432191 * __this, bool ___Enable0, float ___Seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DelayEnableButton(System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DelayEnableButton_m2056682894 (GUIAnimSystemFREE_t223432191 * __this, bool ___Enable0, float ___Seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableButton(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_EnableButton_m3824658909 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___Enable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::EnableButton(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  void GUIAnimSystemFREE_EnableButton_m2797540722 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___Enable1, float ___Seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DelayEnableButton(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DelayEnableButton_m3548787807 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___Enable1, float ___Seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetInteracableAllButtons(System.Boolean)
extern "C"  void GUIAnimSystemFREE_SetInteracableAllButtons_m3351484251 (GUIAnimSystemFREE_t223432191 * __this, bool ___Interacable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::SetInteracableAllButtons(System.Boolean,System.Single)
extern "C"  void GUIAnimSystemFREE_SetInteracableAllButtons_m715998950 (GUIAnimSystemFREE_t223432191 * __this, bool ___Interacable0, float ___Seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DelayInteracableOfAllButton(System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DelayInteracableOfAllButton_m1427241933 (GUIAnimSystemFREE_t223432191 * __this, bool ___Interacable0, float ___Seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::InteracableButton(UnityEngine.Transform,System.Boolean)
extern "C"  void GUIAnimSystemFREE_InteracableButton_m1847113458 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___Interacable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::InteracableButton(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  void GUIAnimSystemFREE_InteracableButton_m1355061625 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___Interacable1, float ___Seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GUIAnimSystemFREE::DelayInteracableButton(UnityEngine.Transform,System.Boolean,System.Single)
extern "C"  Il2CppObject * GUIAnimSystemFREE_DelayInteracableButton_m831056550 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, bool ___Interacable1, float ___Seconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas GUIAnimSystemFREE::GetParent_Canvas(UnityEngine.Transform)
extern "C"  Canvas_t209405766 * GUIAnimSystemFREE_GetParent_Canvas_m3323488542 (GUIAnimSystemFREE_t223432191 * __this, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIAnimSystemFREE::.ctor()
extern "C"  void GUIAnimSystemFREE__ctor_m3891452392 (GUIAnimSystemFREE_t223432191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
