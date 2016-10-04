#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nameStore
struct  nameStore_t2339660780  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct nameStore_t2339660780_StaticFields
{
public:
	// System.String nameStore::name
	String_t* ___name_2;
	// System.String nameStore::scene
	String_t* ___scene_3;
	// System.String nameStore::runId
	String_t* ___runId_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(nameStore_t2339660780_StaticFields, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_scene_3() { return static_cast<int32_t>(offsetof(nameStore_t2339660780_StaticFields, ___scene_3)); }
	inline String_t* get_scene_3() const { return ___scene_3; }
	inline String_t** get_address_of_scene_3() { return &___scene_3; }
	inline void set_scene_3(String_t* value)
	{
		___scene_3 = value;
		Il2CppCodeGenWriteBarrier(&___scene_3, value);
	}

	inline static int32_t get_offset_of_runId_4() { return static_cast<int32_t>(offsetof(nameStore_t2339660780_StaticFields, ___runId_4)); }
	inline String_t* get_runId_4() const { return ___runId_4; }
	inline String_t** get_address_of_runId_4() { return &___runId_4; }
	inline void set_runId_4(String_t* value)
	{
		___runId_4 = value;
		Il2CppCodeGenWriteBarrier(&___runId_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
