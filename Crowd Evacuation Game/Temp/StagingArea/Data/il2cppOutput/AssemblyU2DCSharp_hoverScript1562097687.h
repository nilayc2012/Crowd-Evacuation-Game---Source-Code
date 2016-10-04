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

// hoverScript
struct  hoverScript_t1562097687  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource hoverScript::audio1
	AudioSource_t1135106623 * ___audio1_2;
	// UnityEngine.AudioSource hoverScript::audio3
	AudioSource_t1135106623 * ___audio3_3;

public:
	inline static int32_t get_offset_of_audio1_2() { return static_cast<int32_t>(offsetof(hoverScript_t1562097687, ___audio1_2)); }
	inline AudioSource_t1135106623 * get_audio1_2() const { return ___audio1_2; }
	inline AudioSource_t1135106623 ** get_address_of_audio1_2() { return &___audio1_2; }
	inline void set_audio1_2(AudioSource_t1135106623 * value)
	{
		___audio1_2 = value;
		Il2CppCodeGenWriteBarrier(&___audio1_2, value);
	}

	inline static int32_t get_offset_of_audio3_3() { return static_cast<int32_t>(offsetof(hoverScript_t1562097687, ___audio3_3)); }
	inline AudioSource_t1135106623 * get_audio3_3() const { return ___audio3_3; }
	inline AudioSource_t1135106623 ** get_address_of_audio3_3() { return &___audio3_3; }
	inline void set_audio3_3(AudioSource_t1135106623 * value)
	{
		___audio3_3 = value;
		Il2CppCodeGenWriteBarrier(&___audio3_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
