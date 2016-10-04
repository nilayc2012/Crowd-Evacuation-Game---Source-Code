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
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConnectionScript
struct  ConnectionScript_t4263972583  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ConnectionScript::errorText
	GameObject_t1756533147 * ___errorText_3;
	// UnityEngine.Material ConnectionScript::falseMatter
	Material_t193706927 * ___falseMatter_4;
	// UnityEngine.Material ConnectionScript::trueMatter
	Material_t193706927 * ___trueMatter_5;

public:
	inline static int32_t get_offset_of_errorText_3() { return static_cast<int32_t>(offsetof(ConnectionScript_t4263972583, ___errorText_3)); }
	inline GameObject_t1756533147 * get_errorText_3() const { return ___errorText_3; }
	inline GameObject_t1756533147 ** get_address_of_errorText_3() { return &___errorText_3; }
	inline void set_errorText_3(GameObject_t1756533147 * value)
	{
		___errorText_3 = value;
		Il2CppCodeGenWriteBarrier(&___errorText_3, value);
	}

	inline static int32_t get_offset_of_falseMatter_4() { return static_cast<int32_t>(offsetof(ConnectionScript_t4263972583, ___falseMatter_4)); }
	inline Material_t193706927 * get_falseMatter_4() const { return ___falseMatter_4; }
	inline Material_t193706927 ** get_address_of_falseMatter_4() { return &___falseMatter_4; }
	inline void set_falseMatter_4(Material_t193706927 * value)
	{
		___falseMatter_4 = value;
		Il2CppCodeGenWriteBarrier(&___falseMatter_4, value);
	}

	inline static int32_t get_offset_of_trueMatter_5() { return static_cast<int32_t>(offsetof(ConnectionScript_t4263972583, ___trueMatter_5)); }
	inline Material_t193706927 * get_trueMatter_5() const { return ___trueMatter_5; }
	inline Material_t193706927 ** get_address_of_trueMatter_5() { return &___trueMatter_5; }
	inline void set_trueMatter_5(Material_t193706927 * value)
	{
		___trueMatter_5 = value;
		Il2CppCodeGenWriteBarrier(&___trueMatter_5, value);
	}
};

struct ConnectionScript_t4263972583_StaticFields
{
public:
	// System.Boolean ConnectionScript::notConnected
	bool ___notConnected_2;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ConnectionScript::falseListTrans
	List_1_t2644239190 * ___falseListTrans_6;

public:
	inline static int32_t get_offset_of_notConnected_2() { return static_cast<int32_t>(offsetof(ConnectionScript_t4263972583_StaticFields, ___notConnected_2)); }
	inline bool get_notConnected_2() const { return ___notConnected_2; }
	inline bool* get_address_of_notConnected_2() { return &___notConnected_2; }
	inline void set_notConnected_2(bool value)
	{
		___notConnected_2 = value;
	}

	inline static int32_t get_offset_of_falseListTrans_6() { return static_cast<int32_t>(offsetof(ConnectionScript_t4263972583_StaticFields, ___falseListTrans_6)); }
	inline List_1_t2644239190 * get_falseListTrans_6() const { return ___falseListTrans_6; }
	inline List_1_t2644239190 ** get_address_of_falseListTrans_6() { return &___falseListTrans_6; }
	inline void set_falseListTrans_6(List_1_t2644239190 * value)
	{
		___falseListTrans_6 = value;
		Il2CppCodeGenWriteBarrier(&___falseListTrans_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
