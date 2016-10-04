#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Transform>>
struct List_1_t2013360322;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FileScript
struct  FileScript_t4250362747  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean FileScript::flag
	bool ___flag_7;
	// System.Boolean FileScript::headFlag
	bool ___headFlag_8;
	// UnityEngine.UI.Text FileScript::mytext
	Text_t356221433 * ___mytext_9;
	// UnityEngine.GameObject FileScript::heatPlane
	GameObject_t1756533147 * ___heatPlane_10;
	// System.Collections.IEnumerator FileScript::coroutine
	Il2CppObject * ___coroutine_11;

public:
	inline static int32_t get_offset_of_flag_7() { return static_cast<int32_t>(offsetof(FileScript_t4250362747, ___flag_7)); }
	inline bool get_flag_7() const { return ___flag_7; }
	inline bool* get_address_of_flag_7() { return &___flag_7; }
	inline void set_flag_7(bool value)
	{
		___flag_7 = value;
	}

	inline static int32_t get_offset_of_headFlag_8() { return static_cast<int32_t>(offsetof(FileScript_t4250362747, ___headFlag_8)); }
	inline bool get_headFlag_8() const { return ___headFlag_8; }
	inline bool* get_address_of_headFlag_8() { return &___headFlag_8; }
	inline void set_headFlag_8(bool value)
	{
		___headFlag_8 = value;
	}

	inline static int32_t get_offset_of_mytext_9() { return static_cast<int32_t>(offsetof(FileScript_t4250362747, ___mytext_9)); }
	inline Text_t356221433 * get_mytext_9() const { return ___mytext_9; }
	inline Text_t356221433 ** get_address_of_mytext_9() { return &___mytext_9; }
	inline void set_mytext_9(Text_t356221433 * value)
	{
		___mytext_9 = value;
		Il2CppCodeGenWriteBarrier(&___mytext_9, value);
	}

	inline static int32_t get_offset_of_heatPlane_10() { return static_cast<int32_t>(offsetof(FileScript_t4250362747, ___heatPlane_10)); }
	inline GameObject_t1756533147 * get_heatPlane_10() const { return ___heatPlane_10; }
	inline GameObject_t1756533147 ** get_address_of_heatPlane_10() { return &___heatPlane_10; }
	inline void set_heatPlane_10(GameObject_t1756533147 * value)
	{
		___heatPlane_10 = value;
		Il2CppCodeGenWriteBarrier(&___heatPlane_10, value);
	}

	inline static int32_t get_offset_of_coroutine_11() { return static_cast<int32_t>(offsetof(FileScript_t4250362747, ___coroutine_11)); }
	inline Il2CppObject * get_coroutine_11() const { return ___coroutine_11; }
	inline Il2CppObject ** get_address_of_coroutine_11() { return &___coroutine_11; }
	inline void set_coroutine_11(Il2CppObject * value)
	{
		___coroutine_11 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_11, value);
	}
};

struct FileScript_t4250362747_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Transform>> FileScript::tempListList
	List_1_t2013360322 * ___tempListList_2;
	// System.Single FileScript::time
	float ___time_3;
	// System.Boolean FileScript::checkedHM
	bool ___checkedHM_4;
	// System.Boolean FileScript::replayFlag
	bool ___replayFlag_5;
	// System.Boolean FileScript::checkedBHM
	bool ___checkedBHM_6;

public:
	inline static int32_t get_offset_of_tempListList_2() { return static_cast<int32_t>(offsetof(FileScript_t4250362747_StaticFields, ___tempListList_2)); }
	inline List_1_t2013360322 * get_tempListList_2() const { return ___tempListList_2; }
	inline List_1_t2013360322 ** get_address_of_tempListList_2() { return &___tempListList_2; }
	inline void set_tempListList_2(List_1_t2013360322 * value)
	{
		___tempListList_2 = value;
		Il2CppCodeGenWriteBarrier(&___tempListList_2, value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(FileScript_t4250362747_StaticFields, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_checkedHM_4() { return static_cast<int32_t>(offsetof(FileScript_t4250362747_StaticFields, ___checkedHM_4)); }
	inline bool get_checkedHM_4() const { return ___checkedHM_4; }
	inline bool* get_address_of_checkedHM_4() { return &___checkedHM_4; }
	inline void set_checkedHM_4(bool value)
	{
		___checkedHM_4 = value;
	}

	inline static int32_t get_offset_of_replayFlag_5() { return static_cast<int32_t>(offsetof(FileScript_t4250362747_StaticFields, ___replayFlag_5)); }
	inline bool get_replayFlag_5() const { return ___replayFlag_5; }
	inline bool* get_address_of_replayFlag_5() { return &___replayFlag_5; }
	inline void set_replayFlag_5(bool value)
	{
		___replayFlag_5 = value;
	}

	inline static int32_t get_offset_of_checkedBHM_6() { return static_cast<int32_t>(offsetof(FileScript_t4250362747_StaticFields, ___checkedBHM_6)); }
	inline bool get_checkedBHM_6() const { return ___checkedBHM_6; }
	inline bool* get_address_of_checkedBHM_6() { return &___checkedBHM_6; }
	inline void set_checkedBHM_6(bool value)
	{
		___checkedBHM_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
