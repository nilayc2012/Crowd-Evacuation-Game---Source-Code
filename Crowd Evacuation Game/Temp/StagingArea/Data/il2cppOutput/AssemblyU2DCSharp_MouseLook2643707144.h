#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MouseLook_RotationAxes2150291266.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseLook
struct  MouseLook_t2643707144  : public MonoBehaviour_t1158329972
{
public:
	// MouseLook/RotationAxes MouseLook::axes
	int32_t ___axes_2;
	// System.Single MouseLook::sensitivityX
	float ___sensitivityX_3;
	// System.Single MouseLook::sensitivityY
	float ___sensitivityY_4;
	// System.Single MouseLook::minimumX
	float ___minimumX_5;
	// System.Single MouseLook::maximumX
	float ___maximumX_6;
	// System.Single MouseLook::minimumY
	float ___minimumY_7;
	// System.Single MouseLook::maximumY
	float ___maximumY_8;
	// UnityEngine.GameObject MouseLook::msg
	GameObject_t1756533147 * ___msg_9;
	// System.Int32 MouseLook::timer
	int32_t ___timer_10;
	// System.Single MouseLook::rotationY
	float ___rotationY_11;

public:
	inline static int32_t get_offset_of_axes_2() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___axes_2)); }
	inline int32_t get_axes_2() const { return ___axes_2; }
	inline int32_t* get_address_of_axes_2() { return &___axes_2; }
	inline void set_axes_2(int32_t value)
	{
		___axes_2 = value;
	}

	inline static int32_t get_offset_of_sensitivityX_3() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___sensitivityX_3)); }
	inline float get_sensitivityX_3() const { return ___sensitivityX_3; }
	inline float* get_address_of_sensitivityX_3() { return &___sensitivityX_3; }
	inline void set_sensitivityX_3(float value)
	{
		___sensitivityX_3 = value;
	}

	inline static int32_t get_offset_of_sensitivityY_4() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___sensitivityY_4)); }
	inline float get_sensitivityY_4() const { return ___sensitivityY_4; }
	inline float* get_address_of_sensitivityY_4() { return &___sensitivityY_4; }
	inline void set_sensitivityY_4(float value)
	{
		___sensitivityY_4 = value;
	}

	inline static int32_t get_offset_of_minimumX_5() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___minimumX_5)); }
	inline float get_minimumX_5() const { return ___minimumX_5; }
	inline float* get_address_of_minimumX_5() { return &___minimumX_5; }
	inline void set_minimumX_5(float value)
	{
		___minimumX_5 = value;
	}

	inline static int32_t get_offset_of_maximumX_6() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___maximumX_6)); }
	inline float get_maximumX_6() const { return ___maximumX_6; }
	inline float* get_address_of_maximumX_6() { return &___maximumX_6; }
	inline void set_maximumX_6(float value)
	{
		___maximumX_6 = value;
	}

	inline static int32_t get_offset_of_minimumY_7() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___minimumY_7)); }
	inline float get_minimumY_7() const { return ___minimumY_7; }
	inline float* get_address_of_minimumY_7() { return &___minimumY_7; }
	inline void set_minimumY_7(float value)
	{
		___minimumY_7 = value;
	}

	inline static int32_t get_offset_of_maximumY_8() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___maximumY_8)); }
	inline float get_maximumY_8() const { return ___maximumY_8; }
	inline float* get_address_of_maximumY_8() { return &___maximumY_8; }
	inline void set_maximumY_8(float value)
	{
		___maximumY_8 = value;
	}

	inline static int32_t get_offset_of_msg_9() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___msg_9)); }
	inline GameObject_t1756533147 * get_msg_9() const { return ___msg_9; }
	inline GameObject_t1756533147 ** get_address_of_msg_9() { return &___msg_9; }
	inline void set_msg_9(GameObject_t1756533147 * value)
	{
		___msg_9 = value;
		Il2CppCodeGenWriteBarrier(&___msg_9, value);
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___timer_10)); }
	inline int32_t get_timer_10() const { return ___timer_10; }
	inline int32_t* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(int32_t value)
	{
		___timer_10 = value;
	}

	inline static int32_t get_offset_of_rotationY_11() { return static_cast<int32_t>(offsetof(MouseLook_t2643707144, ___rotationY_11)); }
	inline float get_rotationY_11() const { return ___rotationY_11; }
	inline float* get_address_of_rotationY_11() { return &___rotationY_11; }
	inline void set_rotationY_11(float value)
	{
		___rotationY_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
