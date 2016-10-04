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

// ModalPanel
struct ModalPanel_t3020707755;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"

// System.Void ModalPanel::.ctor()
extern "C"  void ModalPanel__ctor_m630973376 (ModalPanel_t3020707755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModalPanel::Start()
extern "C"  void ModalPanel_Start_m220254476 (ModalPanel_t3020707755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ModalPanel ModalPanel::Instance()
extern "C"  ModalPanel_t3020707755 * ModalPanel_Instance_m743666485 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModalPanel::Choice(System.String,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction)
extern "C"  void ModalPanel_Choice_m2054819186 (ModalPanel_t3020707755 * __this, String_t* ___score0, UnityAction_t4025899511 * ___nextEvent1, UnityAction_t4025899511 * ___repEvent2, UnityAction_t4025899511 * ___qEvent3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ModalPanel::ClosePanel()
extern "C"  void ModalPanel_ClosePanel_m4281226500 (ModalPanel_t3020707755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
