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

// TimerScript
struct  TimerScript_t1270803794  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TimerScript::time
	int32_t ___time_2;
	// System.Boolean TimerScript::timer
	bool ___timer_3;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(TimerScript_t1270803794, ___time_2)); }
	inline int32_t get_time_2() const { return ___time_2; }
	inline int32_t* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(int32_t value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(TimerScript_t1270803794, ___timer_3)); }
	inline bool get_timer_3() const { return ___timer_3; }
	inline bool* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(bool value)
	{
		___timer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
