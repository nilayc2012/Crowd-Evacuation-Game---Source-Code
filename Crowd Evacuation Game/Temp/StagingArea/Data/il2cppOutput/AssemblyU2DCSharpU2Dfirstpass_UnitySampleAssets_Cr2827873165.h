#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnitySampleAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t4103700240;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t3312055674;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySampleAssets_Cr3133708428.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t2827873165  : public MonoBehaviour_t1158329972
{
public:
	// UnitySampleAssets.CrossPlatformInput.TiltInput/AxisMapping UnitySampleAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t4103700240 * ___mapping_2;
	// UnitySampleAssets.CrossPlatformInput.TiltInput/AxisOptions UnitySampleAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnitySampleAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnitySampleAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.TiltInput::steerAxis
	VirtualAxis_t3312055674 * ___steerAxis_6;

public:
	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(TiltInput_t2827873165, ___mapping_2)); }
	inline AxisMapping_t4103700240 * get_mapping_2() const { return ___mapping_2; }
	inline AxisMapping_t4103700240 ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(AxisMapping_t4103700240 * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_2, value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_3() { return static_cast<int32_t>(offsetof(TiltInput_t2827873165, ___tiltAroundAxis_3)); }
	inline int32_t get_tiltAroundAxis_3() const { return ___tiltAroundAxis_3; }
	inline int32_t* get_address_of_tiltAroundAxis_3() { return &___tiltAroundAxis_3; }
	inline void set_tiltAroundAxis_3(int32_t value)
	{
		___tiltAroundAxis_3 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_4() { return static_cast<int32_t>(offsetof(TiltInput_t2827873165, ___fullTiltAngle_4)); }
	inline float get_fullTiltAngle_4() const { return ___fullTiltAngle_4; }
	inline float* get_address_of_fullTiltAngle_4() { return &___fullTiltAngle_4; }
	inline void set_fullTiltAngle_4(float value)
	{
		___fullTiltAngle_4 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_5() { return static_cast<int32_t>(offsetof(TiltInput_t2827873165, ___centreAngleOffset_5)); }
	inline float get_centreAngleOffset_5() const { return ___centreAngleOffset_5; }
	inline float* get_address_of_centreAngleOffset_5() { return &___centreAngleOffset_5; }
	inline void set_centreAngleOffset_5(float value)
	{
		___centreAngleOffset_5 = value;
	}

	inline static int32_t get_offset_of_steerAxis_6() { return static_cast<int32_t>(offsetof(TiltInput_t2827873165, ___steerAxis_6)); }
	inline VirtualAxis_t3312055674 * get_steerAxis_6() const { return ___steerAxis_6; }
	inline VirtualAxis_t3312055674 ** get_address_of_steerAxis_6() { return &___steerAxis_6; }
	inline void set_steerAxis_6(VirtualAxis_t3312055674 * value)
	{
		___steerAxis_6 = value;
		Il2CppCodeGenWriteBarrier(&___steerAxis_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
