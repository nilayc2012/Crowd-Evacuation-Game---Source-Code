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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// leaderScript
struct  leaderScript_t4049806094  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text leaderScript::index
	Text_t356221433 * ___index_2;
	// UnityEngine.UI.Text leaderScript::pname
	Text_t356221433 * ___pname_3;
	// UnityEngine.UI.Text leaderScript::score
	Text_t356221433 * ___score_4;
	// UnityEngine.GameObject leaderScript::panel
	GameObject_t1756533147 * ___panel_5;
	// System.String leaderScript::los
	String_t* ___los_6;
	// System.String leaderScript::loa
	String_t* ___loa_7;
	// System.String leaderScript::homo
	String_t* ___homo_8;
	// System.String leaderScript::playername
	String_t* ___playername_9;
	// System.Single leaderScript::mintime
	float ___mintime_10;

public:
	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___index_2)); }
	inline Text_t356221433 * get_index_2() const { return ___index_2; }
	inline Text_t356221433 ** get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(Text_t356221433 * value)
	{
		___index_2 = value;
		Il2CppCodeGenWriteBarrier(&___index_2, value);
	}

	inline static int32_t get_offset_of_pname_3() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___pname_3)); }
	inline Text_t356221433 * get_pname_3() const { return ___pname_3; }
	inline Text_t356221433 ** get_address_of_pname_3() { return &___pname_3; }
	inline void set_pname_3(Text_t356221433 * value)
	{
		___pname_3 = value;
		Il2CppCodeGenWriteBarrier(&___pname_3, value);
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___score_4)); }
	inline Text_t356221433 * get_score_4() const { return ___score_4; }
	inline Text_t356221433 ** get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(Text_t356221433 * value)
	{
		___score_4 = value;
		Il2CppCodeGenWriteBarrier(&___score_4, value);
	}

	inline static int32_t get_offset_of_panel_5() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___panel_5)); }
	inline GameObject_t1756533147 * get_panel_5() const { return ___panel_5; }
	inline GameObject_t1756533147 ** get_address_of_panel_5() { return &___panel_5; }
	inline void set_panel_5(GameObject_t1756533147 * value)
	{
		___panel_5 = value;
		Il2CppCodeGenWriteBarrier(&___panel_5, value);
	}

	inline static int32_t get_offset_of_los_6() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___los_6)); }
	inline String_t* get_los_6() const { return ___los_6; }
	inline String_t** get_address_of_los_6() { return &___los_6; }
	inline void set_los_6(String_t* value)
	{
		___los_6 = value;
		Il2CppCodeGenWriteBarrier(&___los_6, value);
	}

	inline static int32_t get_offset_of_loa_7() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___loa_7)); }
	inline String_t* get_loa_7() const { return ___loa_7; }
	inline String_t** get_address_of_loa_7() { return &___loa_7; }
	inline void set_loa_7(String_t* value)
	{
		___loa_7 = value;
		Il2CppCodeGenWriteBarrier(&___loa_7, value);
	}

	inline static int32_t get_offset_of_homo_8() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___homo_8)); }
	inline String_t* get_homo_8() const { return ___homo_8; }
	inline String_t** get_address_of_homo_8() { return &___homo_8; }
	inline void set_homo_8(String_t* value)
	{
		___homo_8 = value;
		Il2CppCodeGenWriteBarrier(&___homo_8, value);
	}

	inline static int32_t get_offset_of_playername_9() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___playername_9)); }
	inline String_t* get_playername_9() const { return ___playername_9; }
	inline String_t** get_address_of_playername_9() { return &___playername_9; }
	inline void set_playername_9(String_t* value)
	{
		___playername_9 = value;
		Il2CppCodeGenWriteBarrier(&___playername_9, value);
	}

	inline static int32_t get_offset_of_mintime_10() { return static_cast<int32_t>(offsetof(leaderScript_t4049806094, ___mintime_10)); }
	inline float get_mintime_10() const { return ___mintime_10; }
	inline float* get_address_of_mintime_10() { return &___mintime_10; }
	inline void set_mintime_10(float value)
	{
		___mintime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
