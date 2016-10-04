#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// backscript
struct  backscript_t863172532  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject backscript::button
	GameObject_t1756533147 * ___button_2;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(backscript_t863172532, ___button_2)); }
	inline GameObject_t1756533147 * get_button_2() const { return ___button_2; }
	inline GameObject_t1756533147 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(GameObject_t1756533147 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}
};

struct backscript_t863172532_StaticFields
{
public:
	// UnityEngine.Events.UnityAction backscript::<>f__am$cache1
	UnityAction_t4025899511 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(backscript_t863172532_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline UnityAction_t4025899511 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline UnityAction_t4025899511 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(UnityAction_t4025899511 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
