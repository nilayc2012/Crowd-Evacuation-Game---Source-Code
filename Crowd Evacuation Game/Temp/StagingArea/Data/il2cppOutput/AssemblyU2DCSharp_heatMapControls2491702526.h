#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// heatMapControls
struct  heatMapControls_t2491702526  : public MonoBehaviour_t1158329972
{
public:
	// System.Single heatMapControls::speed
	float ___speed_2;
	// UnityEngine.Camera heatMapControls::cam
	Camera_t189460977 * ___cam_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(heatMapControls_t2491702526, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(heatMapControls_t2491702526, ___cam_3)); }
	inline Camera_t189460977 * get_cam_3() const { return ___cam_3; }
	inline Camera_t189460977 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Camera_t189460977 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
