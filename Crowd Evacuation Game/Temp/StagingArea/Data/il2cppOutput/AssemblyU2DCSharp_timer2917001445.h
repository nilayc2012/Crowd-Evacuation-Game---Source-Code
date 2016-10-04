#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// timer
struct  timer_t2917001445  : public MonoBehaviour_t1158329972
{
public:
	// System.Single timer::time
	float ___time_2;
	// System.Single timer::subtime
	float ___subtime_3;
	// System.Boolean timer::flag
	bool ___flag_4;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(timer_t2917001445, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_subtime_3() { return static_cast<int32_t>(offsetof(timer_t2917001445, ___subtime_3)); }
	inline float get_subtime_3() const { return ___subtime_3; }
	inline float* get_address_of_subtime_3() { return &___subtime_3; }
	inline void set_subtime_3(float value)
	{
		___subtime_3 = value;
	}

	inline static int32_t get_offset_of_flag_4() { return static_cast<int32_t>(offsetof(timer_t2917001445, ___flag_4)); }
	inline bool get_flag_4() const { return ___flag_4; }
	inline bool* get_address_of_flag_4() { return &___flag_4; }
	inline void set_flag_4(bool value)
	{
		___flag_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
