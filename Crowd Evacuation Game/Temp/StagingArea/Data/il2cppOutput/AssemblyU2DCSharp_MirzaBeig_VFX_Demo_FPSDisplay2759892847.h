#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MirzaBeig.VFX.Demo.FPSDisplay
struct FPSDisplay_t2759892847;
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

// MirzaBeig.VFX.Demo.FPSDisplay
struct  FPSDisplay_t2759892847  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text MirzaBeig.VFX.Demo.FPSDisplay::fpsText
	Text_t356221433 * ___fpsText_3;
	// System.Int32 MirzaBeig.VFX.Demo.FPSDisplay::frames
	int32_t ___frames_4;
	// System.Single MirzaBeig.VFX.Demo.FPSDisplay::time
	float ___time_5;
	// System.Int32 MirzaBeig.VFX.Demo.FPSDisplay::targetFrameRate
	int32_t ___targetFrameRate_6;
	// System.Single MirzaBeig.VFX.Demo.FPSDisplay::updateTime
	float ___updateTime_7;
	// System.String MirzaBeig.VFX.Demo.FPSDisplay::textFormat
	String_t* ___textFormat_8;

public:
	inline static int32_t get_offset_of_fpsText_3() { return static_cast<int32_t>(offsetof(FPSDisplay_t2759892847, ___fpsText_3)); }
	inline Text_t356221433 * get_fpsText_3() const { return ___fpsText_3; }
	inline Text_t356221433 ** get_address_of_fpsText_3() { return &___fpsText_3; }
	inline void set_fpsText_3(Text_t356221433 * value)
	{
		___fpsText_3 = value;
		Il2CppCodeGenWriteBarrier(&___fpsText_3, value);
	}

	inline static int32_t get_offset_of_frames_4() { return static_cast<int32_t>(offsetof(FPSDisplay_t2759892847, ___frames_4)); }
	inline int32_t get_frames_4() const { return ___frames_4; }
	inline int32_t* get_address_of_frames_4() { return &___frames_4; }
	inline void set_frames_4(int32_t value)
	{
		___frames_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(FPSDisplay_t2759892847, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_targetFrameRate_6() { return static_cast<int32_t>(offsetof(FPSDisplay_t2759892847, ___targetFrameRate_6)); }
	inline int32_t get_targetFrameRate_6() const { return ___targetFrameRate_6; }
	inline int32_t* get_address_of_targetFrameRate_6() { return &___targetFrameRate_6; }
	inline void set_targetFrameRate_6(int32_t value)
	{
		___targetFrameRate_6 = value;
	}

	inline static int32_t get_offset_of_updateTime_7() { return static_cast<int32_t>(offsetof(FPSDisplay_t2759892847, ___updateTime_7)); }
	inline float get_updateTime_7() const { return ___updateTime_7; }
	inline float* get_address_of_updateTime_7() { return &___updateTime_7; }
	inline void set_updateTime_7(float value)
	{
		___updateTime_7 = value;
	}

	inline static int32_t get_offset_of_textFormat_8() { return static_cast<int32_t>(offsetof(FPSDisplay_t2759892847, ___textFormat_8)); }
	inline String_t* get_textFormat_8() const { return ___textFormat_8; }
	inline String_t** get_address_of_textFormat_8() { return &___textFormat_8; }
	inline void set_textFormat_8(String_t* value)
	{
		___textFormat_8 = value;
		Il2CppCodeGenWriteBarrier(&___textFormat_8, value);
	}
};

struct FPSDisplay_t2759892847_StaticFields
{
public:
	// MirzaBeig.VFX.Demo.FPSDisplay MirzaBeig.VFX.Demo.FPSDisplay::instance
	FPSDisplay_t2759892847 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(FPSDisplay_t2759892847_StaticFields, ___instance_2)); }
	inline FPSDisplay_t2759892847 * get_instance_2() const { return ___instance_2; }
	inline FPSDisplay_t2759892847 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(FPSDisplay_t2759892847 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
