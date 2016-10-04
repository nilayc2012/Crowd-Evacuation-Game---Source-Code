#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t2171372499;
// UnityEngine.Animator
struct Animator_t69676727;
// System.Random
struct Random_t1044426839;
// UnityEngine.NavMeshPath
struct NavMeshPath_t3371201495;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Random_State1234999858.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NavigationController
struct  NavigationController_t3294591622  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform NavigationController::chosenTarget
	Transform_t3275118058 * ___chosenTarget_2;
	// UnityEngine.GameObject[] NavigationController::targets
	GameObjectU5BU5D_t3057952154* ___targets_3;
	// UnityEngine.NavMeshAgent NavigationController::agent
	NavMeshAgent_t2171372499 * ___agent_4;
	// UnityEngine.Animator NavigationController::anim
	Animator_t69676727 * ___anim_5;
	// UnityEngine.Vector3 NavigationController::currentPosition
	Vector3_t2243707580  ___currentPosition_7;
	// UnityEngine.NavMeshPath NavigationController::path
	NavMeshPath_t3371201495 * ___path_8;
	// System.Int32 NavigationController::loc
	int32_t ___loc_11;
	// UnityEngine.AudioClip NavigationController::siren
	AudioClip_t1932558630 * ___siren_12;
	// System.Boolean NavigationController::collided
	bool ___collided_13;
	// UnityEngine.Vector2 NavigationController::smoothDeltaPosition
	Vector2_t2243707579  ___smoothDeltaPosition_14;
	// UnityEngine.Vector2 NavigationController::velocity
	Vector2_t2243707579  ___velocity_15;
	// System.Int32 NavigationController::seeExit
	int32_t ___seeExit_16;
	// System.Int32 NavigationController::timePassed
	int32_t ___timePassed_17;
	// UnityEngine.Transform NavigationController::finalExit
	Transform_t3275118058 * ___finalExit_18;
	// System.Int32 NavigationController::ready
	int32_t ___ready_19;
	// System.Int32 NavigationController::start
	int32_t ___start_20;
	// UnityEngine.Vector3 NavigationController::startPosition
	Vector3_t2243707580  ___startPosition_22;

public:
	inline static int32_t get_offset_of_chosenTarget_2() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___chosenTarget_2)); }
	inline Transform_t3275118058 * get_chosenTarget_2() const { return ___chosenTarget_2; }
	inline Transform_t3275118058 ** get_address_of_chosenTarget_2() { return &___chosenTarget_2; }
	inline void set_chosenTarget_2(Transform_t3275118058 * value)
	{
		___chosenTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___chosenTarget_2, value);
	}

	inline static int32_t get_offset_of_targets_3() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___targets_3)); }
	inline GameObjectU5BU5D_t3057952154* get_targets_3() const { return ___targets_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_targets_3() { return &___targets_3; }
	inline void set_targets_3(GameObjectU5BU5D_t3057952154* value)
	{
		___targets_3 = value;
		Il2CppCodeGenWriteBarrier(&___targets_3, value);
	}

	inline static int32_t get_offset_of_agent_4() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___agent_4)); }
	inline NavMeshAgent_t2171372499 * get_agent_4() const { return ___agent_4; }
	inline NavMeshAgent_t2171372499 ** get_address_of_agent_4() { return &___agent_4; }
	inline void set_agent_4(NavMeshAgent_t2171372499 * value)
	{
		___agent_4 = value;
		Il2CppCodeGenWriteBarrier(&___agent_4, value);
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___anim_5)); }
	inline Animator_t69676727 * get_anim_5() const { return ___anim_5; }
	inline Animator_t69676727 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t69676727 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_currentPosition_7() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___currentPosition_7)); }
	inline Vector3_t2243707580  get_currentPosition_7() const { return ___currentPosition_7; }
	inline Vector3_t2243707580 * get_address_of_currentPosition_7() { return &___currentPosition_7; }
	inline void set_currentPosition_7(Vector3_t2243707580  value)
	{
		___currentPosition_7 = value;
	}

	inline static int32_t get_offset_of_path_8() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___path_8)); }
	inline NavMeshPath_t3371201495 * get_path_8() const { return ___path_8; }
	inline NavMeshPath_t3371201495 ** get_address_of_path_8() { return &___path_8; }
	inline void set_path_8(NavMeshPath_t3371201495 * value)
	{
		___path_8 = value;
		Il2CppCodeGenWriteBarrier(&___path_8, value);
	}

	inline static int32_t get_offset_of_loc_11() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___loc_11)); }
	inline int32_t get_loc_11() const { return ___loc_11; }
	inline int32_t* get_address_of_loc_11() { return &___loc_11; }
	inline void set_loc_11(int32_t value)
	{
		___loc_11 = value;
	}

	inline static int32_t get_offset_of_siren_12() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___siren_12)); }
	inline AudioClip_t1932558630 * get_siren_12() const { return ___siren_12; }
	inline AudioClip_t1932558630 ** get_address_of_siren_12() { return &___siren_12; }
	inline void set_siren_12(AudioClip_t1932558630 * value)
	{
		___siren_12 = value;
		Il2CppCodeGenWriteBarrier(&___siren_12, value);
	}

	inline static int32_t get_offset_of_collided_13() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___collided_13)); }
	inline bool get_collided_13() const { return ___collided_13; }
	inline bool* get_address_of_collided_13() { return &___collided_13; }
	inline void set_collided_13(bool value)
	{
		___collided_13 = value;
	}

	inline static int32_t get_offset_of_smoothDeltaPosition_14() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___smoothDeltaPosition_14)); }
	inline Vector2_t2243707579  get_smoothDeltaPosition_14() const { return ___smoothDeltaPosition_14; }
	inline Vector2_t2243707579 * get_address_of_smoothDeltaPosition_14() { return &___smoothDeltaPosition_14; }
	inline void set_smoothDeltaPosition_14(Vector2_t2243707579  value)
	{
		___smoothDeltaPosition_14 = value;
	}

	inline static int32_t get_offset_of_velocity_15() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___velocity_15)); }
	inline Vector2_t2243707579  get_velocity_15() const { return ___velocity_15; }
	inline Vector2_t2243707579 * get_address_of_velocity_15() { return &___velocity_15; }
	inline void set_velocity_15(Vector2_t2243707579  value)
	{
		___velocity_15 = value;
	}

	inline static int32_t get_offset_of_seeExit_16() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___seeExit_16)); }
	inline int32_t get_seeExit_16() const { return ___seeExit_16; }
	inline int32_t* get_address_of_seeExit_16() { return &___seeExit_16; }
	inline void set_seeExit_16(int32_t value)
	{
		___seeExit_16 = value;
	}

	inline static int32_t get_offset_of_timePassed_17() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___timePassed_17)); }
	inline int32_t get_timePassed_17() const { return ___timePassed_17; }
	inline int32_t* get_address_of_timePassed_17() { return &___timePassed_17; }
	inline void set_timePassed_17(int32_t value)
	{
		___timePassed_17 = value;
	}

	inline static int32_t get_offset_of_finalExit_18() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___finalExit_18)); }
	inline Transform_t3275118058 * get_finalExit_18() const { return ___finalExit_18; }
	inline Transform_t3275118058 ** get_address_of_finalExit_18() { return &___finalExit_18; }
	inline void set_finalExit_18(Transform_t3275118058 * value)
	{
		___finalExit_18 = value;
		Il2CppCodeGenWriteBarrier(&___finalExit_18, value);
	}

	inline static int32_t get_offset_of_ready_19() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___ready_19)); }
	inline int32_t get_ready_19() const { return ___ready_19; }
	inline int32_t* get_address_of_ready_19() { return &___ready_19; }
	inline void set_ready_19(int32_t value)
	{
		___ready_19 = value;
	}

	inline static int32_t get_offset_of_start_20() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___start_20)); }
	inline int32_t get_start_20() const { return ___start_20; }
	inline int32_t* get_address_of_start_20() { return &___start_20; }
	inline void set_start_20(int32_t value)
	{
		___start_20 = value;
	}

	inline static int32_t get_offset_of_startPosition_22() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622, ___startPosition_22)); }
	inline Vector3_t2243707580  get_startPosition_22() const { return ___startPosition_22; }
	inline Vector3_t2243707580 * get_address_of_startPosition_22() { return &___startPosition_22; }
	inline void set_startPosition_22(Vector3_t2243707580  value)
	{
		___startPosition_22 = value;
	}
};

struct NavigationController_t3294591622_StaticFields
{
public:
	// System.Random NavigationController::r
	Random_t1044426839 * ___r_6;
	// System.Boolean NavigationController::startFlag
	bool ___startFlag_9;
	// System.Int32 NavigationController::value
	int32_t ___value_10;
	// UnityEngine.Random/State NavigationController::normalState
	State_t1234999858  ___normalState_21;

public:
	inline static int32_t get_offset_of_r_6() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622_StaticFields, ___r_6)); }
	inline Random_t1044426839 * get_r_6() const { return ___r_6; }
	inline Random_t1044426839 ** get_address_of_r_6() { return &___r_6; }
	inline void set_r_6(Random_t1044426839 * value)
	{
		___r_6 = value;
		Il2CppCodeGenWriteBarrier(&___r_6, value);
	}

	inline static int32_t get_offset_of_startFlag_9() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622_StaticFields, ___startFlag_9)); }
	inline bool get_startFlag_9() const { return ___startFlag_9; }
	inline bool* get_address_of_startFlag_9() { return &___startFlag_9; }
	inline void set_startFlag_9(bool value)
	{
		___startFlag_9 = value;
	}

	inline static int32_t get_offset_of_value_10() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622_StaticFields, ___value_10)); }
	inline int32_t get_value_10() const { return ___value_10; }
	inline int32_t* get_address_of_value_10() { return &___value_10; }
	inline void set_value_10(int32_t value)
	{
		___value_10 = value;
	}

	inline static int32_t get_offset_of_normalState_21() { return static_cast<int32_t>(offsetof(NavigationController_t3294591622_StaticFields, ___normalState_21)); }
	inline State_t1234999858  get_normalState_21() const { return ___normalState_21; }
	inline State_t1234999858 * get_address_of_normalState_21() { return &___normalState_21; }
	inline void set_normalState_21(State_t1234999858  value)
	{
		___normalState_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
