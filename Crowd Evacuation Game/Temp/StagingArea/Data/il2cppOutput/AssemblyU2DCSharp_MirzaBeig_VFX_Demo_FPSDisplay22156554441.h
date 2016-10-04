#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MirzaBeig.VFX.Demo.FPSDisplay2
struct FPSDisplay2_t2156554441;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.Demo.FPSDisplay2
struct  FPSDisplay2_t2156554441  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MirzaBeig.VFX.Demo.FPSDisplay2::fpsMeasurePeriod
	float ___fpsMeasurePeriod_3;
	// System.Int32 MirzaBeig.VFX.Demo.FPSDisplay2::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_4;
	// System.Single MirzaBeig.VFX.Demo.FPSDisplay2::m_FpsNextPeriod
	float ___m_FpsNextPeriod_5;
	// System.Int32 MirzaBeig.VFX.Demo.FPSDisplay2::m_CurrentFps
	int32_t ___m_CurrentFps_6;
	// UnityEngine.UI.Text MirzaBeig.VFX.Demo.FPSDisplay2::fpsText
	Text_t356221433 * ___fpsText_7;
	// System.String MirzaBeig.VFX.Demo.FPSDisplay2::textFormat
	String_t* ___textFormat_8;

public:
	inline static int32_t get_offset_of_fpsMeasurePeriod_3() { return static_cast<int32_t>(offsetof(FPSDisplay2_t2156554441, ___fpsMeasurePeriod_3)); }
	inline float get_fpsMeasurePeriod_3() const { return ___fpsMeasurePeriod_3; }
	inline float* get_address_of_fpsMeasurePeriod_3() { return &___fpsMeasurePeriod_3; }
	inline void set_fpsMeasurePeriod_3(float value)
	{
		___fpsMeasurePeriod_3 = value;
	}

	inline static int32_t get_offset_of_m_FpsAccumulator_4() { return static_cast<int32_t>(offsetof(FPSDisplay2_t2156554441, ___m_FpsAccumulator_4)); }
	inline int32_t get_m_FpsAccumulator_4() const { return ___m_FpsAccumulator_4; }
	inline int32_t* get_address_of_m_FpsAccumulator_4() { return &___m_FpsAccumulator_4; }
	inline void set_m_FpsAccumulator_4(int32_t value)
	{
		___m_FpsAccumulator_4 = value;
	}

	inline static int32_t get_offset_of_m_FpsNextPeriod_5() { return static_cast<int32_t>(offsetof(FPSDisplay2_t2156554441, ___m_FpsNextPeriod_5)); }
	inline float get_m_FpsNextPeriod_5() const { return ___m_FpsNextPeriod_5; }
	inline float* get_address_of_m_FpsNextPeriod_5() { return &___m_FpsNextPeriod_5; }
	inline void set_m_FpsNextPeriod_5(float value)
	{
		___m_FpsNextPeriod_5 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFps_6() { return static_cast<int32_t>(offsetof(FPSDisplay2_t2156554441, ___m_CurrentFps_6)); }
	inline int32_t get_m_CurrentFps_6() const { return ___m_CurrentFps_6; }
	inline int32_t* get_address_of_m_CurrentFps_6() { return &___m_CurrentFps_6; }
	inline void set_m_CurrentFps_6(int32_t value)
	{
		___m_CurrentFps_6 = value;
	}

	inline static int32_t get_offset_of_fpsText_7() { return static_cast<int32_t>(offsetof(FPSDisplay2_t2156554441, ___fpsText_7)); }
	inline Text_t356221433 * get_fpsText_7() const { return ___fpsText_7; }
	inline Text_t356221433 ** get_address_of_fpsText_7() { return &___fpsText_7; }
	inline void set_fpsText_7(Text_t356221433 * value)
	{
		___fpsText_7 = value;
		Il2CppCodeGenWriteBarrier(&___fpsText_7, value);
	}

	inline static int32_t get_offset_of_textFormat_8() { return static_cast<int32_t>(offsetof(FPSDisplay2_t2156554441, ___textFormat_8)); }
	inline String_t* get_textFormat_8() const { return ___textFormat_8; }
	inline String_t** get_address_of_textFormat_8() { return &___textFormat_8; }
	inline void set_textFormat_8(String_t* value)
	{
		___textFormat_8 = value;
		Il2CppCodeGenWriteBarrier(&___textFormat_8, value);
	}
};

struct FPSDisplay2_t2156554441_StaticFields
{
public:
	// MirzaBeig.VFX.Demo.FPSDisplay2 MirzaBeig.VFX.Demo.FPSDisplay2::instance
	FPSDisplay2_t2156554441 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(FPSDisplay2_t2156554441_StaticFields, ___instance_2)); }
	inline FPSDisplay2_t2156554441 * get_instance_2() const { return ___instance_2; }
	inline FPSDisplay2_t2156554441 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(FPSDisplay2_t2156554441 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
