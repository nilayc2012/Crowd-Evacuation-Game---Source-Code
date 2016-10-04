#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hoverandclick
struct  hoverandclick_t669065833  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource hoverandclick::audio4
	AudioSource_t1135106623 * ___audio4_2;
	// UnityEngine.AudioSource hoverandclick::audio5
	AudioSource_t1135106623 * ___audio5_3;

public:
	inline static int32_t get_offset_of_audio4_2() { return static_cast<int32_t>(offsetof(hoverandclick_t669065833, ___audio4_2)); }
	inline AudioSource_t1135106623 * get_audio4_2() const { return ___audio4_2; }
	inline AudioSource_t1135106623 ** get_address_of_audio4_2() { return &___audio4_2; }
	inline void set_audio4_2(AudioSource_t1135106623 * value)
	{
		___audio4_2 = value;
		Il2CppCodeGenWriteBarrier(&___audio4_2, value);
	}

	inline static int32_t get_offset_of_audio5_3() { return static_cast<int32_t>(offsetof(hoverandclick_t669065833, ___audio5_3)); }
	inline AudioSource_t1135106623 * get_audio5_3() const { return ___audio5_3; }
	inline AudioSource_t1135106623 ** get_address_of_audio5_3() { return &___audio5_3; }
	inline void set_audio5_3(AudioSource_t1135106623 * value)
	{
		___audio5_3 = value;
		Il2CppCodeGenWriteBarrier(&___audio5_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
