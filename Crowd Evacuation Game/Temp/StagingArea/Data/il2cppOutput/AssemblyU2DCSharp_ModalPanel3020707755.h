#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ModalPanel
struct ModalPanel_t3020707755;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModalPanel
struct  ModalPanel_t3020707755  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ModalPanel::score
	Text_t356221433 * ___score_2;
	// UnityEngine.UI.Button ModalPanel::nextlevel
	Button_t2872111280 * ___nextlevel_3;
	// UnityEngine.UI.Button ModalPanel::replay
	Button_t2872111280 * ___replay_4;
	// UnityEngine.UI.Button ModalPanel::quit
	Button_t2872111280 * ___quit_5;
	// System.Single ModalPanel::replayPos
	float ___replayPos_6;
	// System.Single ModalPanel::quitPos
	float ___quitPos_7;
	// UnityEngine.GameObject ModalPanel::modalPanelObject
	GameObject_t1756533147 * ___modalPanelObject_8;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ModalPanel_t3020707755, ___score_2)); }
	inline Text_t356221433 * get_score_2() const { return ___score_2; }
	inline Text_t356221433 ** get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(Text_t356221433 * value)
	{
		___score_2 = value;
		Il2CppCodeGenWriteBarrier(&___score_2, value);
	}

	inline static int32_t get_offset_of_nextlevel_3() { return static_cast<int32_t>(offsetof(ModalPanel_t3020707755, ___nextlevel_3)); }
	inline Button_t2872111280 * get_nextlevel_3() const { return ___nextlevel_3; }
	inline Button_t2872111280 ** get_address_of_nextlevel_3() { return &___nextlevel_3; }
	inline void set_nextlevel_3(Button_t2872111280 * value)
	{
		___nextlevel_3 = value;
		Il2CppCodeGenWriteBarrier(&___nextlevel_3, value);
	}

	inline static int32_t get_offset_of_replay_4() { return static_cast<int32_t>(offsetof(ModalPanel_t3020707755, ___replay_4)); }
	inline Button_t2872111280 * get_replay_4() const { return ___replay_4; }
	inline Button_t2872111280 ** get_address_of_replay_4() { return &___replay_4; }
	inline void set_replay_4(Button_t2872111280 * value)
	{
		___replay_4 = value;
		Il2CppCodeGenWriteBarrier(&___replay_4, value);
	}

	inline static int32_t get_offset_of_quit_5() { return static_cast<int32_t>(offsetof(ModalPanel_t3020707755, ___quit_5)); }
	inline Button_t2872111280 * get_quit_5() const { return ___quit_5; }
	inline Button_t2872111280 ** get_address_of_quit_5() { return &___quit_5; }
	inline void set_quit_5(Button_t2872111280 * value)
	{
		___quit_5 = value;
		Il2CppCodeGenWriteBarrier(&___quit_5, value);
	}

	inline static int32_t get_offset_of_replayPos_6() { return static_cast<int32_t>(offsetof(ModalPanel_t3020707755, ___replayPos_6)); }
	inline float get_replayPos_6() const { return ___replayPos_6; }
	inline float* get_address_of_replayPos_6() { return &___replayPos_6; }
	inline void set_replayPos_6(float value)
	{
		___replayPos_6 = value;
	}

	inline static int32_t get_offset_of_quitPos_7() { return static_cast<int32_t>(offsetof(ModalPanel_t3020707755, ___quitPos_7)); }
	inline float get_quitPos_7() const { return ___quitPos_7; }
	inline float* get_address_of_quitPos_7() { return &___quitPos_7; }
	inline void set_quitPos_7(float value)
	{
		___quitPos_7 = value;
	}

	inline static int32_t get_offset_of_modalPanelObject_8() { return static_cast<int32_t>(offsetof(ModalPanel_t3020707755, ___modalPanelObject_8)); }
	inline GameObject_t1756533147 * get_modalPanelObject_8() const { return ___modalPanelObject_8; }
	inline GameObject_t1756533147 ** get_address_of_modalPanelObject_8() { return &___modalPanelObject_8; }
	inline void set_modalPanelObject_8(GameObject_t1756533147 * value)
	{
		___modalPanelObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___modalPanelObject_8, value);
	}
};

struct ModalPanel_t3020707755_StaticFields
{
public:
	// ModalPanel ModalPanel::modalPanel
	ModalPanel_t3020707755 * ___modalPanel_9;

public:
	inline static int32_t get_offset_of_modalPanel_9() { return static_cast<int32_t>(offsetof(ModalPanel_t3020707755_StaticFields, ___modalPanel_9)); }
	inline ModalPanel_t3020707755 * get_modalPanel_9() const { return ___modalPanel_9; }
	inline ModalPanel_t3020707755 ** get_address_of_modalPanel_9() { return &___modalPanel_9; }
	inline void set_modalPanel_9(ModalPanel_t3020707755 * value)
	{
		___modalPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___modalPanel_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
