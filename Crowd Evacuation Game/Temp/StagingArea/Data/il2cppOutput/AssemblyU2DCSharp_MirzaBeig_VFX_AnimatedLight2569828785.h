#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t494725636;
// UnityEngine.Gradient
struct Gradient_t3600583008;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.AnimatedLight
struct  AnimatedLight_t2569828785  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Light MirzaBeig.VFX.AnimatedLight::light
	Light_t494725636 * ___light_2;
	// System.Single MirzaBeig.VFX.AnimatedLight::duration
	float ___duration_3;
	// System.Boolean MirzaBeig.VFX.AnimatedLight::evaluating
	bool ___evaluating_4;
	// UnityEngine.Gradient MirzaBeig.VFX.AnimatedLight::colourOverLifetime
	Gradient_t3600583008 * ___colourOverLifetime_5;
	// UnityEngine.AnimationCurve MirzaBeig.VFX.AnimatedLight::intensityOverLifetime
	AnimationCurve_t3306541151 * ___intensityOverLifetime_6;
	// System.Boolean MirzaBeig.VFX.AnimatedLight::loop
	bool ___loop_7;
	// System.Boolean MirzaBeig.VFX.AnimatedLight::autoDestruct
	bool ___autoDestruct_8;
	// UnityEngine.Color MirzaBeig.VFX.AnimatedLight::startColour
	Color_t2020392075  ___startColour_9;
	// System.Single MirzaBeig.VFX.AnimatedLight::startIntensity
	float ___startIntensity_10;
	// System.Single MirzaBeig.VFX.AnimatedLight::<time>k__BackingField
	float ___U3CtimeU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_light_2() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___light_2)); }
	inline Light_t494725636 * get_light_2() const { return ___light_2; }
	inline Light_t494725636 ** get_address_of_light_2() { return &___light_2; }
	inline void set_light_2(Light_t494725636 * value)
	{
		___light_2 = value;
		Il2CppCodeGenWriteBarrier(&___light_2, value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_evaluating_4() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___evaluating_4)); }
	inline bool get_evaluating_4() const { return ___evaluating_4; }
	inline bool* get_address_of_evaluating_4() { return &___evaluating_4; }
	inline void set_evaluating_4(bool value)
	{
		___evaluating_4 = value;
	}

	inline static int32_t get_offset_of_colourOverLifetime_5() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___colourOverLifetime_5)); }
	inline Gradient_t3600583008 * get_colourOverLifetime_5() const { return ___colourOverLifetime_5; }
	inline Gradient_t3600583008 ** get_address_of_colourOverLifetime_5() { return &___colourOverLifetime_5; }
	inline void set_colourOverLifetime_5(Gradient_t3600583008 * value)
	{
		___colourOverLifetime_5 = value;
		Il2CppCodeGenWriteBarrier(&___colourOverLifetime_5, value);
	}

	inline static int32_t get_offset_of_intensityOverLifetime_6() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___intensityOverLifetime_6)); }
	inline AnimationCurve_t3306541151 * get_intensityOverLifetime_6() const { return ___intensityOverLifetime_6; }
	inline AnimationCurve_t3306541151 ** get_address_of_intensityOverLifetime_6() { return &___intensityOverLifetime_6; }
	inline void set_intensityOverLifetime_6(AnimationCurve_t3306541151 * value)
	{
		___intensityOverLifetime_6 = value;
		Il2CppCodeGenWriteBarrier(&___intensityOverLifetime_6, value);
	}

	inline static int32_t get_offset_of_loop_7() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___loop_7)); }
	inline bool get_loop_7() const { return ___loop_7; }
	inline bool* get_address_of_loop_7() { return &___loop_7; }
	inline void set_loop_7(bool value)
	{
		___loop_7 = value;
	}

	inline static int32_t get_offset_of_autoDestruct_8() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___autoDestruct_8)); }
	inline bool get_autoDestruct_8() const { return ___autoDestruct_8; }
	inline bool* get_address_of_autoDestruct_8() { return &___autoDestruct_8; }
	inline void set_autoDestruct_8(bool value)
	{
		___autoDestruct_8 = value;
	}

	inline static int32_t get_offset_of_startColour_9() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___startColour_9)); }
	inline Color_t2020392075  get_startColour_9() const { return ___startColour_9; }
	inline Color_t2020392075 * get_address_of_startColour_9() { return &___startColour_9; }
	inline void set_startColour_9(Color_t2020392075  value)
	{
		___startColour_9 = value;
	}

	inline static int32_t get_offset_of_startIntensity_10() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___startIntensity_10)); }
	inline float get_startIntensity_10() const { return ___startIntensity_10; }
	inline float* get_address_of_startIntensity_10() { return &___startIntensity_10; }
	inline void set_startIntensity_10(float value)
	{
		___startIntensity_10 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AnimatedLight_t2569828785, ___U3CtimeU3Ek__BackingField_11)); }
	inline float get_U3CtimeU3Ek__BackingField_11() const { return ___U3CtimeU3Ek__BackingField_11; }
	inline float* get_address_of_U3CtimeU3Ek__BackingField_11() { return &___U3CtimeU3Ek__BackingField_11; }
	inline void set_U3CtimeU3Ek__BackingField_11(float value)
	{
		___U3CtimeU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
