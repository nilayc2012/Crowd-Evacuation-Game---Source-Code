#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.Demo.MouseFollow
struct  MouseFollow_t3719438114  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 MirzaBeig.VFX.Demo.MouseFollow::position
	Vector3_t2243707580  ___position_2;
	// System.Single MirzaBeig.VFX.Demo.MouseFollow::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(MouseFollow_t3719438114, ___position_2)); }
	inline Vector3_t2243707580  get_position_2() const { return ___position_2; }
	inline Vector3_t2243707580 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t2243707580  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(MouseFollow_t3719438114, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
