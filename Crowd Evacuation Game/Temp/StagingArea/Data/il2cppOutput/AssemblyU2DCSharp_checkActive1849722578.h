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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// checkActive
struct  checkActive_t1849722578  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip checkActive::alarm
	AudioClip_t1932558630 * ___alarm_2;
	// UnityEngine.AudioSource checkActive::audio
	AudioSource_t1135106623 * ___audio_3;

public:
	inline static int32_t get_offset_of_alarm_2() { return static_cast<int32_t>(offsetof(checkActive_t1849722578, ___alarm_2)); }
	inline AudioClip_t1932558630 * get_alarm_2() const { return ___alarm_2; }
	inline AudioClip_t1932558630 ** get_address_of_alarm_2() { return &___alarm_2; }
	inline void set_alarm_2(AudioClip_t1932558630 * value)
	{
		___alarm_2 = value;
		Il2CppCodeGenWriteBarrier(&___alarm_2, value);
	}

	inline static int32_t get_offset_of_audio_3() { return static_cast<int32_t>(offsetof(checkActive_t1849722578, ___audio_3)); }
	inline AudioSource_t1135106623 * get_audio_3() const { return ___audio_3; }
	inline AudioSource_t1135106623 ** get_address_of_audio_3() { return &___audio_3; }
	inline void set_audio_3(AudioSource_t1135106623 * value)
	{
		___audio_3 = value;
		Il2CppCodeGenWriteBarrier(&___audio_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
