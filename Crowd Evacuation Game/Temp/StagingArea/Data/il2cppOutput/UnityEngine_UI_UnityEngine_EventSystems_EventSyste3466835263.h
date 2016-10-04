﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t664902677;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t1295781545;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t1282925227;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t3466835263  : public UIBehaviour_t3960014691
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t664902677 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t1295781545 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1756533147 * ___m_FirstSelected_4;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_5;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1756533147 * ___m_CurrentSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_8;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t2681005625 * ___m_DummyData_9;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_2() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263, ___m_SystemInputModules_2)); }
	inline List_1_t664902677 * get_m_SystemInputModules_2() const { return ___m_SystemInputModules_2; }
	inline List_1_t664902677 ** get_address_of_m_SystemInputModules_2() { return &___m_SystemInputModules_2; }
	inline void set_m_SystemInputModules_2(List_1_t664902677 * value)
	{
		___m_SystemInputModules_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_SystemInputModules_2, value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_3() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263, ___m_CurrentInputModule_3)); }
	inline BaseInputModule_t1295781545 * get_m_CurrentInputModule_3() const { return ___m_CurrentInputModule_3; }
	inline BaseInputModule_t1295781545 ** get_address_of_m_CurrentInputModule_3() { return &___m_CurrentInputModule_3; }
	inline void set_m_CurrentInputModule_3(BaseInputModule_t1295781545 * value)
	{
		___m_CurrentInputModule_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentInputModule_3, value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_4() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263, ___m_FirstSelected_4)); }
	inline GameObject_t1756533147 * get_m_FirstSelected_4() const { return ___m_FirstSelected_4; }
	inline GameObject_t1756533147 ** get_address_of_m_FirstSelected_4() { return &___m_FirstSelected_4; }
	inline void set_m_FirstSelected_4(GameObject_t1756533147 * value)
	{
		___m_FirstSelected_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_FirstSelected_4, value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_5() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263, ___m_sendNavigationEvents_5)); }
	inline bool get_m_sendNavigationEvents_5() const { return ___m_sendNavigationEvents_5; }
	inline bool* get_address_of_m_sendNavigationEvents_5() { return &___m_sendNavigationEvents_5; }
	inline void set_m_sendNavigationEvents_5(bool value)
	{
		___m_sendNavigationEvents_5 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_6() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263, ___m_DragThreshold_6)); }
	inline int32_t get_m_DragThreshold_6() const { return ___m_DragThreshold_6; }
	inline int32_t* get_address_of_m_DragThreshold_6() { return &___m_DragThreshold_6; }
	inline void set_m_DragThreshold_6(int32_t value)
	{
		___m_DragThreshold_6 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263, ___m_CurrentSelected_7)); }
	inline GameObject_t1756533147 * get_m_CurrentSelected_7() const { return ___m_CurrentSelected_7; }
	inline GameObject_t1756533147 ** get_address_of_m_CurrentSelected_7() { return &___m_CurrentSelected_7; }
	inline void set_m_CurrentSelected_7(GameObject_t1756533147 * value)
	{
		___m_CurrentSelected_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentSelected_7, value);
	}

	inline static int32_t get_offset_of_m_SelectionGuard_8() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263, ___m_SelectionGuard_8)); }
	inline bool get_m_SelectionGuard_8() const { return ___m_SelectionGuard_8; }
	inline bool* get_address_of_m_SelectionGuard_8() { return &___m_SelectionGuard_8; }
	inline void set_m_SelectionGuard_8(bool value)
	{
		___m_SelectionGuard_8 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_9() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263, ___m_DummyData_9)); }
	inline BaseEventData_t2681005625 * get_m_DummyData_9() const { return ___m_DummyData_9; }
	inline BaseEventData_t2681005625 ** get_address_of_m_DummyData_9() { return &___m_DummyData_9; }
	inline void set_m_DummyData_9(BaseEventData_t2681005625 * value)
	{
		___m_DummyData_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_DummyData_9, value);
	}
};

struct EventSystem_t3466835263_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t1282925227 * ___s_RaycastComparer_10;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::<current>k__BackingField
	EventSystem_t3466835263 * ___U3CcurrentU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_s_RaycastComparer_10() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263_StaticFields, ___s_RaycastComparer_10)); }
	inline Comparison_1_t1282925227 * get_s_RaycastComparer_10() const { return ___s_RaycastComparer_10; }
	inline Comparison_1_t1282925227 ** get_address_of_s_RaycastComparer_10() { return &___s_RaycastComparer_10; }
	inline void set_s_RaycastComparer_10(Comparison_1_t1282925227 * value)
	{
		___s_RaycastComparer_10 = value;
		Il2CppCodeGenWriteBarrier(&___s_RaycastComparer_10, value);
	}

	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventSystem_t3466835263_StaticFields, ___U3CcurrentU3Ek__BackingField_11)); }
	inline EventSystem_t3466835263 * get_U3CcurrentU3Ek__BackingField_11() const { return ___U3CcurrentU3Ek__BackingField_11; }
	inline EventSystem_t3466835263 ** get_address_of_U3CcurrentU3Ek__BackingField_11() { return &___U3CcurrentU3Ek__BackingField_11; }
	inline void set_U3CcurrentU3Ek__BackingField_11(EventSystem_t3466835263 * value)
	{
		___U3CcurrentU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcurrentU3Ek__BackingField_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
