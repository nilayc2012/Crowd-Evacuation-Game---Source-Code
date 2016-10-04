#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MirzaBeig.Animation.Timer/onTimerCompleteEventHandler
struct onTimerCompleteEventHandler_t2244827951;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_MirzaBeig_Animation_Timer_Playba1657275170.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.Animation.Timer
struct  Timer_t3161204067  : public Il2CppObject
{
public:
	// System.Single MirzaBeig.Animation.Timer::time
	float ___time_0;
	// System.Single MirzaBeig.Animation.Timer::duration
	float ___duration_1;
	// System.Boolean MirzaBeig.Animation.Timer::loop
	bool ___loop_2;
	// MirzaBeig.Animation.Timer/PlaybackState MirzaBeig.Animation.Timer::playbackState
	int32_t ___playbackState_3;
	// MirzaBeig.Animation.Timer/onTimerCompleteEventHandler MirzaBeig.Animation.Timer::onTimerCompleteEvent
	onTimerCompleteEventHandler_t2244827951 * ___onTimerCompleteEvent_4;
	// System.Boolean MirzaBeig.Animation.Timer::<isComplete>k__BackingField
	bool ___U3CisCompleteU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(Timer_t3161204067, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(Timer_t3161204067, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_loop_2() { return static_cast<int32_t>(offsetof(Timer_t3161204067, ___loop_2)); }
	inline bool get_loop_2() const { return ___loop_2; }
	inline bool* get_address_of_loop_2() { return &___loop_2; }
	inline void set_loop_2(bool value)
	{
		___loop_2 = value;
	}

	inline static int32_t get_offset_of_playbackState_3() { return static_cast<int32_t>(offsetof(Timer_t3161204067, ___playbackState_3)); }
	inline int32_t get_playbackState_3() const { return ___playbackState_3; }
	inline int32_t* get_address_of_playbackState_3() { return &___playbackState_3; }
	inline void set_playbackState_3(int32_t value)
	{
		___playbackState_3 = value;
	}

	inline static int32_t get_offset_of_onTimerCompleteEvent_4() { return static_cast<int32_t>(offsetof(Timer_t3161204067, ___onTimerCompleteEvent_4)); }
	inline onTimerCompleteEventHandler_t2244827951 * get_onTimerCompleteEvent_4() const { return ___onTimerCompleteEvent_4; }
	inline onTimerCompleteEventHandler_t2244827951 ** get_address_of_onTimerCompleteEvent_4() { return &___onTimerCompleteEvent_4; }
	inline void set_onTimerCompleteEvent_4(onTimerCompleteEventHandler_t2244827951 * value)
	{
		___onTimerCompleteEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___onTimerCompleteEvent_4, value);
	}

	inline static int32_t get_offset_of_U3CisCompleteU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Timer_t3161204067, ___U3CisCompleteU3Ek__BackingField_5)); }
	inline bool get_U3CisCompleteU3Ek__BackingField_5() const { return ___U3CisCompleteU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CisCompleteU3Ek__BackingField_5() { return &___U3CisCompleteU3Ek__BackingField_5; }
	inline void set_U3CisCompleteU3Ek__BackingField_5(bool value)
	{
		___U3CisCompleteU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
