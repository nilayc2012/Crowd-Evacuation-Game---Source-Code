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

// playAudio
struct  playAudio_t1960380612  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip playAudio::clip
	AudioClip_t1932558630 * ___clip_2;
	// UnityEngine.AudioSource playAudio::audio
	AudioSource_t1135106623 * ___audio_3;
	// System.Int32 playAudio::timer
	int32_t ___timer_4;

public:
	inline static int32_t get_offset_of_clip_2() { return static_cast<int32_t>(offsetof(playAudio_t1960380612, ___clip_2)); }
	inline AudioClip_t1932558630 * get_clip_2() const { return ___clip_2; }
	inline AudioClip_t1932558630 ** get_address_of_clip_2() { return &___clip_2; }
	inline void set_clip_2(AudioClip_t1932558630 * value)
	{
		___clip_2 = value;
		Il2CppCodeGenWriteBarrier(&___clip_2, value);
	}

	inline static int32_t get_offset_of_audio_3() { return static_cast<int32_t>(offsetof(playAudio_t1960380612, ___audio_3)); }
	inline AudioSource_t1135106623 * get_audio_3() const { return ___audio_3; }
	inline AudioSource_t1135106623 ** get_address_of_audio_3() { return &___audio_3; }
	inline void set_audio_3(AudioSource_t1135106623 * value)
	{
		___audio_3 = value;
		Il2CppCodeGenWriteBarrier(&___audio_3, value);
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(playAudio_t1960380612, ___timer_4)); }
	inline int32_t get_timer_4() const { return ___timer_4; }
	inline int32_t* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(int32_t value)
	{
		___timer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
