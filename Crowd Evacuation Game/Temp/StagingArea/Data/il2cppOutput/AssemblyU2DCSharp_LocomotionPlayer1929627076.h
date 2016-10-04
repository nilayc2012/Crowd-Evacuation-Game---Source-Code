#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// Locomotion
struct Locomotion_t3956470535;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LocomotionPlayer
struct  LocomotionPlayer_t1929627076  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator LocomotionPlayer::animator
	Animator_t69676727 * ___animator_2;
	// System.Single LocomotionPlayer::speed
	float ___speed_3;
	// System.Single LocomotionPlayer::direction
	float ___direction_4;
	// Locomotion LocomotionPlayer::locomotion
	Locomotion_t3956470535 * ___locomotion_5;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(LocomotionPlayer_t1929627076, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(LocomotionPlayer_t1929627076, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(LocomotionPlayer_t1929627076, ___direction_4)); }
	inline float get_direction_4() const { return ___direction_4; }
	inline float* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(float value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_locomotion_5() { return static_cast<int32_t>(offsetof(LocomotionPlayer_t1929627076, ___locomotion_5)); }
	inline Locomotion_t3956470535 * get_locomotion_5() const { return ___locomotion_5; }
	inline Locomotion_t3956470535 ** get_address_of_locomotion_5() { return &___locomotion_5; }
	inline void set_locomotion_5(Locomotion_t3956470535 * value)
	{
		___locomotion_5 = value;
		Il2CppCodeGenWriteBarrier(&___locomotion_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
