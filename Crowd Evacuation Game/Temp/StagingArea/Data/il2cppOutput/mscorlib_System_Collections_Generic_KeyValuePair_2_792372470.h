#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2,System.Single>
struct  KeyValuePair_2_t792372470 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector2_t2243707579  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t792372470, ___key_0)); }
	inline Vector2_t2243707579  get_key_0() const { return ___key_0; }
	inline Vector2_t2243707579 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector2_t2243707579  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t792372470, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
