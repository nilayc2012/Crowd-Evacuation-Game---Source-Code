#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// ModalPanel
struct ModalPanel_t3020707755;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<CrowdConfiguration>
struct List_1_t3819067091;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip GameController::siren
	AudioClip_t1932558630 * ___siren_2;
	// UnityEngine.AudioSource GameController::audio
	AudioSource_t1135106623 * ___audio_4;
	// System.Boolean GameController::finish
	bool ___finish_5;
	// ModalPanel GameController::modalPanel
	ModalPanel_t3020707755 * ___modalPanel_7;
	// UnityEngine.Events.UnityAction GameController::next
	UnityAction_t4025899511 * ___next_8;
	// UnityEngine.Events.UnityAction GameController::replay
	UnityAction_t4025899511 * ___replay_9;
	// UnityEngine.Events.UnityAction GameController::quit
	UnityAction_t4025899511 * ___quit_10;
	// UnityEngine.GameObject GameController::mainCam
	GameObject_t1756533147 * ___mainCam_14;
	// UnityEngine.GameObject GameController::FileController
	GameObject_t1756533147 * ___FileController_15;
	// System.Boolean GameController::sclock
	bool ___sclock_19;
	// System.Collections.Generic.List`1<CrowdConfiguration> GameController::listOfConfigurations
	List_1_t3819067091 * ___listOfConfigurations_20;
	// System.String[] GameController::listOfLos
	StringU5BU5D_t1642385972* ___listOfLos_21;
	// System.String[] GameController::listOfLoa
	StringU5BU5D_t1642385972* ___listOfLoa_22;

public:
	inline static int32_t get_offset_of_siren_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___siren_2)); }
	inline AudioClip_t1932558630 * get_siren_2() const { return ___siren_2; }
	inline AudioClip_t1932558630 ** get_address_of_siren_2() { return &___siren_2; }
	inline void set_siren_2(AudioClip_t1932558630 * value)
	{
		___siren_2 = value;
		Il2CppCodeGenWriteBarrier(&___siren_2, value);
	}

	inline static int32_t get_offset_of_audio_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___audio_4)); }
	inline AudioSource_t1135106623 * get_audio_4() const { return ___audio_4; }
	inline AudioSource_t1135106623 ** get_address_of_audio_4() { return &___audio_4; }
	inline void set_audio_4(AudioSource_t1135106623 * value)
	{
		___audio_4 = value;
		Il2CppCodeGenWriteBarrier(&___audio_4, value);
	}

	inline static int32_t get_offset_of_finish_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___finish_5)); }
	inline bool get_finish_5() const { return ___finish_5; }
	inline bool* get_address_of_finish_5() { return &___finish_5; }
	inline void set_finish_5(bool value)
	{
		___finish_5 = value;
	}

	inline static int32_t get_offset_of_modalPanel_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___modalPanel_7)); }
	inline ModalPanel_t3020707755 * get_modalPanel_7() const { return ___modalPanel_7; }
	inline ModalPanel_t3020707755 ** get_address_of_modalPanel_7() { return &___modalPanel_7; }
	inline void set_modalPanel_7(ModalPanel_t3020707755 * value)
	{
		___modalPanel_7 = value;
		Il2CppCodeGenWriteBarrier(&___modalPanel_7, value);
	}

	inline static int32_t get_offset_of_next_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___next_8)); }
	inline UnityAction_t4025899511 * get_next_8() const { return ___next_8; }
	inline UnityAction_t4025899511 ** get_address_of_next_8() { return &___next_8; }
	inline void set_next_8(UnityAction_t4025899511 * value)
	{
		___next_8 = value;
		Il2CppCodeGenWriteBarrier(&___next_8, value);
	}

	inline static int32_t get_offset_of_replay_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___replay_9)); }
	inline UnityAction_t4025899511 * get_replay_9() const { return ___replay_9; }
	inline UnityAction_t4025899511 ** get_address_of_replay_9() { return &___replay_9; }
	inline void set_replay_9(UnityAction_t4025899511 * value)
	{
		___replay_9 = value;
		Il2CppCodeGenWriteBarrier(&___replay_9, value);
	}

	inline static int32_t get_offset_of_quit_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___quit_10)); }
	inline UnityAction_t4025899511 * get_quit_10() const { return ___quit_10; }
	inline UnityAction_t4025899511 ** get_address_of_quit_10() { return &___quit_10; }
	inline void set_quit_10(UnityAction_t4025899511 * value)
	{
		___quit_10 = value;
		Il2CppCodeGenWriteBarrier(&___quit_10, value);
	}

	inline static int32_t get_offset_of_mainCam_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___mainCam_14)); }
	inline GameObject_t1756533147 * get_mainCam_14() const { return ___mainCam_14; }
	inline GameObject_t1756533147 ** get_address_of_mainCam_14() { return &___mainCam_14; }
	inline void set_mainCam_14(GameObject_t1756533147 * value)
	{
		___mainCam_14 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_14, value);
	}

	inline static int32_t get_offset_of_FileController_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___FileController_15)); }
	inline GameObject_t1756533147 * get_FileController_15() const { return ___FileController_15; }
	inline GameObject_t1756533147 ** get_address_of_FileController_15() { return &___FileController_15; }
	inline void set_FileController_15(GameObject_t1756533147 * value)
	{
		___FileController_15 = value;
		Il2CppCodeGenWriteBarrier(&___FileController_15, value);
	}

	inline static int32_t get_offset_of_sclock_19() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___sclock_19)); }
	inline bool get_sclock_19() const { return ___sclock_19; }
	inline bool* get_address_of_sclock_19() { return &___sclock_19; }
	inline void set_sclock_19(bool value)
	{
		___sclock_19 = value;
	}

	inline static int32_t get_offset_of_listOfConfigurations_20() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___listOfConfigurations_20)); }
	inline List_1_t3819067091 * get_listOfConfigurations_20() const { return ___listOfConfigurations_20; }
	inline List_1_t3819067091 ** get_address_of_listOfConfigurations_20() { return &___listOfConfigurations_20; }
	inline void set_listOfConfigurations_20(List_1_t3819067091 * value)
	{
		___listOfConfigurations_20 = value;
		Il2CppCodeGenWriteBarrier(&___listOfConfigurations_20, value);
	}

	inline static int32_t get_offset_of_listOfLos_21() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___listOfLos_21)); }
	inline StringU5BU5D_t1642385972* get_listOfLos_21() const { return ___listOfLos_21; }
	inline StringU5BU5D_t1642385972** get_address_of_listOfLos_21() { return &___listOfLos_21; }
	inline void set_listOfLos_21(StringU5BU5D_t1642385972* value)
	{
		___listOfLos_21 = value;
		Il2CppCodeGenWriteBarrier(&___listOfLos_21, value);
	}

	inline static int32_t get_offset_of_listOfLoa_22() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___listOfLoa_22)); }
	inline StringU5BU5D_t1642385972* get_listOfLoa_22() const { return ___listOfLoa_22; }
	inline StringU5BU5D_t1642385972** get_address_of_listOfLoa_22() { return &___listOfLoa_22; }
	inline void set_listOfLoa_22(StringU5BU5D_t1642385972* value)
	{
		___listOfLoa_22 = value;
		Il2CppCodeGenWriteBarrier(&___listOfLoa_22, value);
	}
};

struct GameController_t3607102586_StaticFields
{
public:
	// System.Boolean GameController::startSiren
	bool ___startSiren_3;
	// System.Boolean GameController::dont
	bool ___dont_6;
	// System.Int32 GameController::numberLeft
	int32_t ___numberLeft_11;
	// System.Int32 GameController::maxNumberPeople
	int32_t ___maxNumberPeople_12;
	// System.Single GameController::totalTime
	float ___totalTime_13;
	// System.Boolean GameController::countFlag
	bool ___countFlag_16;
	// System.Int32 GameController::numberOfAgentsReady
	int32_t ___numberOfAgentsReady_17;
	// System.Int32 GameController::numberOfAgents
	int32_t ___numberOfAgents_18;

public:
	inline static int32_t get_offset_of_startSiren_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___startSiren_3)); }
	inline bool get_startSiren_3() const { return ___startSiren_3; }
	inline bool* get_address_of_startSiren_3() { return &___startSiren_3; }
	inline void set_startSiren_3(bool value)
	{
		___startSiren_3 = value;
	}

	inline static int32_t get_offset_of_dont_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___dont_6)); }
	inline bool get_dont_6() const { return ___dont_6; }
	inline bool* get_address_of_dont_6() { return &___dont_6; }
	inline void set_dont_6(bool value)
	{
		___dont_6 = value;
	}

	inline static int32_t get_offset_of_numberLeft_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___numberLeft_11)); }
	inline int32_t get_numberLeft_11() const { return ___numberLeft_11; }
	inline int32_t* get_address_of_numberLeft_11() { return &___numberLeft_11; }
	inline void set_numberLeft_11(int32_t value)
	{
		___numberLeft_11 = value;
	}

	inline static int32_t get_offset_of_maxNumberPeople_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___maxNumberPeople_12)); }
	inline int32_t get_maxNumberPeople_12() const { return ___maxNumberPeople_12; }
	inline int32_t* get_address_of_maxNumberPeople_12() { return &___maxNumberPeople_12; }
	inline void set_maxNumberPeople_12(int32_t value)
	{
		___maxNumberPeople_12 = value;
	}

	inline static int32_t get_offset_of_totalTime_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___totalTime_13)); }
	inline float get_totalTime_13() const { return ___totalTime_13; }
	inline float* get_address_of_totalTime_13() { return &___totalTime_13; }
	inline void set_totalTime_13(float value)
	{
		___totalTime_13 = value;
	}

	inline static int32_t get_offset_of_countFlag_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___countFlag_16)); }
	inline bool get_countFlag_16() const { return ___countFlag_16; }
	inline bool* get_address_of_countFlag_16() { return &___countFlag_16; }
	inline void set_countFlag_16(bool value)
	{
		___countFlag_16 = value;
	}

	inline static int32_t get_offset_of_numberOfAgentsReady_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___numberOfAgentsReady_17)); }
	inline int32_t get_numberOfAgentsReady_17() const { return ___numberOfAgentsReady_17; }
	inline int32_t* get_address_of_numberOfAgentsReady_17() { return &___numberOfAgentsReady_17; }
	inline void set_numberOfAgentsReady_17(int32_t value)
	{
		___numberOfAgentsReady_17 = value;
	}

	inline static int32_t get_offset_of_numberOfAgents_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___numberOfAgents_18)); }
	inline int32_t get_numberOfAgents_18() const { return ___numberOfAgents_18; }
	inline int32_t* get_address_of_numberOfAgents_18() { return &___numberOfAgents_18; }
	inline void set_numberOfAgents_18(int32_t value)
	{
		___numberOfAgents_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
