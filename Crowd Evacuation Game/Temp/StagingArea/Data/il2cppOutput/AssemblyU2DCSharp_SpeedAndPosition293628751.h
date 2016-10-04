#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpeedAndPosition
struct  SpeedAndPosition_t293628751  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 SpeedAndPosition::position
	Vector3_t2243707580  ___position_0;
	// System.Single SpeedAndPosition::speed
	float ___speed_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(SpeedAndPosition_t293628751, ___position_0)); }
	inline Vector3_t2243707580  get_position_0() const { return ___position_0; }
	inline Vector3_t2243707580 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t2243707580  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(SpeedAndPosition_t293628751, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
