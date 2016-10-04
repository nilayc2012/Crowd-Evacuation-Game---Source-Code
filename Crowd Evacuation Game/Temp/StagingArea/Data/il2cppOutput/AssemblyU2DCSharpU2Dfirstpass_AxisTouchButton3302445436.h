#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// AxisTouchButton
struct AxisTouchButton_t3302445436;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t3312055674;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AxisTouchButton
struct  AxisTouchButton_t3302445436  : public MonoBehaviour_t1158329972
{
public:
	// System.String AxisTouchButton::axisName
	String_t* ___axisName_2;
	// System.Single AxisTouchButton::axisValue
	float ___axisValue_3;
	// System.Single AxisTouchButton::responseSpeed
	float ___responseSpeed_4;
	// System.Single AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_5;
	// AxisTouchButton AxisTouchButton::pairedWith
	AxisTouchButton_t3302445436 * ___pairedWith_6;
	// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis AxisTouchButton::axis
	VirtualAxis_t3312055674 * ___axis_7;

public:
	inline static int32_t get_offset_of_axisName_2() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3302445436, ___axisName_2)); }
	inline String_t* get_axisName_2() const { return ___axisName_2; }
	inline String_t** get_address_of_axisName_2() { return &___axisName_2; }
	inline void set_axisName_2(String_t* value)
	{
		___axisName_2 = value;
		Il2CppCodeGenWriteBarrier(&___axisName_2, value);
	}

	inline static int32_t get_offset_of_axisValue_3() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3302445436, ___axisValue_3)); }
	inline float get_axisValue_3() const { return ___axisValue_3; }
	inline float* get_address_of_axisValue_3() { return &___axisValue_3; }
	inline void set_axisValue_3(float value)
	{
		___axisValue_3 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3302445436, ___responseSpeed_4)); }
	inline float get_responseSpeed_4() const { return ___responseSpeed_4; }
	inline float* get_address_of_responseSpeed_4() { return &___responseSpeed_4; }
	inline void set_responseSpeed_4(float value)
	{
		___responseSpeed_4 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3302445436, ___returnToCentreSpeed_5)); }
	inline float get_returnToCentreSpeed_5() const { return ___returnToCentreSpeed_5; }
	inline float* get_address_of_returnToCentreSpeed_5() { return &___returnToCentreSpeed_5; }
	inline void set_returnToCentreSpeed_5(float value)
	{
		___returnToCentreSpeed_5 = value;
	}

	inline static int32_t get_offset_of_pairedWith_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3302445436, ___pairedWith_6)); }
	inline AxisTouchButton_t3302445436 * get_pairedWith_6() const { return ___pairedWith_6; }
	inline AxisTouchButton_t3302445436 ** get_address_of_pairedWith_6() { return &___pairedWith_6; }
	inline void set_pairedWith_6(AxisTouchButton_t3302445436 * value)
	{
		___pairedWith_6 = value;
		Il2CppCodeGenWriteBarrier(&___pairedWith_6, value);
	}

	inline static int32_t get_offset_of_axis_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3302445436, ___axis_7)); }
	inline VirtualAxis_t3312055674 * get_axis_7() const { return ___axis_7; }
	inline VirtualAxis_t3312055674 ** get_address_of_axis_7() { return &___axis_7; }
	inline void set_axis_7(VirtualAxis_t3312055674 * value)
	{
		___axis_7 = value;
		Il2CppCodeGenWriteBarrier(&___axis_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
