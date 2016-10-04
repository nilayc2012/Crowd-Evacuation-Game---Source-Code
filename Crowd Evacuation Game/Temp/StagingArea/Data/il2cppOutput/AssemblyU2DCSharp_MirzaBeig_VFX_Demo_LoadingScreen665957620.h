#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;
// MirzaBeig.Animation.Timer
struct Timer_t3161204067;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.Demo.LoadingScreen
struct  LoadingScreen_t665957620  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text MirzaBeig.VFX.Demo.LoadingScreen::loadingText
	Text_t356221433 * ___loadingText_2;
	// System.String MirzaBeig.VFX.Demo.LoadingScreen::loadingTextStringFormat
	String_t* ___loadingTextStringFormat_3;
	// UnityEngine.UI.Image MirzaBeig.VFX.Demo.LoadingScreen::loadingImageFill
	Image_t2042527209 * ___loadingImageFill_4;
	// System.Boolean MirzaBeig.VFX.Demo.LoadingScreen::simulateLoading
	bool ___simulateLoading_5;
	// MirzaBeig.Animation.Timer MirzaBeig.VFX.Demo.LoadingScreen::simulatedLoadingTimer
	Timer_t3161204067 * ___simulatedLoadingTimer_6;

public:
	inline static int32_t get_offset_of_loadingText_2() { return static_cast<int32_t>(offsetof(LoadingScreen_t665957620, ___loadingText_2)); }
	inline Text_t356221433 * get_loadingText_2() const { return ___loadingText_2; }
	inline Text_t356221433 ** get_address_of_loadingText_2() { return &___loadingText_2; }
	inline void set_loadingText_2(Text_t356221433 * value)
	{
		___loadingText_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_2, value);
	}

	inline static int32_t get_offset_of_loadingTextStringFormat_3() { return static_cast<int32_t>(offsetof(LoadingScreen_t665957620, ___loadingTextStringFormat_3)); }
	inline String_t* get_loadingTextStringFormat_3() const { return ___loadingTextStringFormat_3; }
	inline String_t** get_address_of_loadingTextStringFormat_3() { return &___loadingTextStringFormat_3; }
	inline void set_loadingTextStringFormat_3(String_t* value)
	{
		___loadingTextStringFormat_3 = value;
		Il2CppCodeGenWriteBarrier(&___loadingTextStringFormat_3, value);
	}

	inline static int32_t get_offset_of_loadingImageFill_4() { return static_cast<int32_t>(offsetof(LoadingScreen_t665957620, ___loadingImageFill_4)); }
	inline Image_t2042527209 * get_loadingImageFill_4() const { return ___loadingImageFill_4; }
	inline Image_t2042527209 ** get_address_of_loadingImageFill_4() { return &___loadingImageFill_4; }
	inline void set_loadingImageFill_4(Image_t2042527209 * value)
	{
		___loadingImageFill_4 = value;
		Il2CppCodeGenWriteBarrier(&___loadingImageFill_4, value);
	}

	inline static int32_t get_offset_of_simulateLoading_5() { return static_cast<int32_t>(offsetof(LoadingScreen_t665957620, ___simulateLoading_5)); }
	inline bool get_simulateLoading_5() const { return ___simulateLoading_5; }
	inline bool* get_address_of_simulateLoading_5() { return &___simulateLoading_5; }
	inline void set_simulateLoading_5(bool value)
	{
		___simulateLoading_5 = value;
	}

	inline static int32_t get_offset_of_simulatedLoadingTimer_6() { return static_cast<int32_t>(offsetof(LoadingScreen_t665957620, ___simulatedLoadingTimer_6)); }
	inline Timer_t3161204067 * get_simulatedLoadingTimer_6() const { return ___simulatedLoadingTimer_6; }
	inline Timer_t3161204067 ** get_address_of_simulatedLoadingTimer_6() { return &___simulatedLoadingTimer_6; }
	inline void set_simulatedLoadingTimer_6(Timer_t3161204067 * value)
	{
		___simulatedLoadingTimer_6 = value;
		Il2CppCodeGenWriteBarrier(&___simulatedLoadingTimer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
