﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GUIAnimFREE/cSoundsForPingPongAnim
struct cSoundsForPingPongAnim_t3067920598;

#include "mscorlib_System_Object2689449295.h"
#include "GUIAnimatorFREE_GUIAnimFREE_eEaseType875930122.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE/cPingPongFade
struct  cPingPongFade_t3145526934  : public Il2CppObject
{
public:
	// System.Boolean GUIAnimFREE/cPingPongFade::Enable
	bool ___Enable_0;
	// System.Boolean GUIAnimFREE/cPingPongFade::Began
	bool ___Began_1;
	// System.Boolean GUIAnimFREE/cPingPongFade::Animating
	bool ___Animating_2;
	// System.Boolean GUIAnimFREE/cPingPongFade::IsOverriding
	bool ___IsOverriding_3;
	// System.Single GUIAnimFREE/cPingPongFade::IsOverridingDelayTimeCount
	float ___IsOverridingDelayTimeCount_4;
	// System.Boolean GUIAnimFREE/cPingPongFade::Done
	bool ___Done_5;
	// System.Single GUIAnimFREE/cPingPongFade::m_FadeLast
	float ___m_FadeLast_6;
	// System.Single GUIAnimFREE/cPingPongFade::Min
	float ___Min_7;
	// System.Single GUIAnimFREE/cPingPongFade::Max
	float ___Max_8;
	// GUIAnimFREE/eEaseType GUIAnimFREE/cPingPongFade::EaseType
	int32_t ___EaseType_9;
	// System.Single GUIAnimFREE/cPingPongFade::Time
	float ___Time_10;
	// System.Single GUIAnimFREE/cPingPongFade::Delay
	float ___Delay_11;
	// System.Boolean GUIAnimFREE/cPingPongFade::FadeChildren
	bool ___FadeChildren_12;
	// GUIAnimFREE/cSoundsForPingPongAnim GUIAnimFREE/cPingPongFade::Sound
	cSoundsForPingPongAnim_t3067920598 * ___Sound_13;

public:
	inline static int32_t get_offset_of_Enable_0() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Enable_0)); }
	inline bool get_Enable_0() const { return ___Enable_0; }
	inline bool* get_address_of_Enable_0() { return &___Enable_0; }
	inline void set_Enable_0(bool value)
	{
		___Enable_0 = value;
	}

	inline static int32_t get_offset_of_Began_1() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Began_1)); }
	inline bool get_Began_1() const { return ___Began_1; }
	inline bool* get_address_of_Began_1() { return &___Began_1; }
	inline void set_Began_1(bool value)
	{
		___Began_1 = value;
	}

	inline static int32_t get_offset_of_Animating_2() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Animating_2)); }
	inline bool get_Animating_2() const { return ___Animating_2; }
	inline bool* get_address_of_Animating_2() { return &___Animating_2; }
	inline void set_Animating_2(bool value)
	{
		___Animating_2 = value;
	}

	inline static int32_t get_offset_of_IsOverriding_3() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___IsOverriding_3)); }
	inline bool get_IsOverriding_3() const { return ___IsOverriding_3; }
	inline bool* get_address_of_IsOverriding_3() { return &___IsOverriding_3; }
	inline void set_IsOverriding_3(bool value)
	{
		___IsOverriding_3 = value;
	}

	inline static int32_t get_offset_of_IsOverridingDelayTimeCount_4() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___IsOverridingDelayTimeCount_4)); }
	inline float get_IsOverridingDelayTimeCount_4() const { return ___IsOverridingDelayTimeCount_4; }
	inline float* get_address_of_IsOverridingDelayTimeCount_4() { return &___IsOverridingDelayTimeCount_4; }
	inline void set_IsOverridingDelayTimeCount_4(float value)
	{
		___IsOverridingDelayTimeCount_4 = value;
	}

	inline static int32_t get_offset_of_Done_5() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Done_5)); }
	inline bool get_Done_5() const { return ___Done_5; }
	inline bool* get_address_of_Done_5() { return &___Done_5; }
	inline void set_Done_5(bool value)
	{
		___Done_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeLast_6() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___m_FadeLast_6)); }
	inline float get_m_FadeLast_6() const { return ___m_FadeLast_6; }
	inline float* get_address_of_m_FadeLast_6() { return &___m_FadeLast_6; }
	inline void set_m_FadeLast_6(float value)
	{
		___m_FadeLast_6 = value;
	}

	inline static int32_t get_offset_of_Min_7() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Min_7)); }
	inline float get_Min_7() const { return ___Min_7; }
	inline float* get_address_of_Min_7() { return &___Min_7; }
	inline void set_Min_7(float value)
	{
		___Min_7 = value;
	}

	inline static int32_t get_offset_of_Max_8() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Max_8)); }
	inline float get_Max_8() const { return ___Max_8; }
	inline float* get_address_of_Max_8() { return &___Max_8; }
	inline void set_Max_8(float value)
	{
		___Max_8 = value;
	}

	inline static int32_t get_offset_of_EaseType_9() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___EaseType_9)); }
	inline int32_t get_EaseType_9() const { return ___EaseType_9; }
	inline int32_t* get_address_of_EaseType_9() { return &___EaseType_9; }
	inline void set_EaseType_9(int32_t value)
	{
		___EaseType_9 = value;
	}

	inline static int32_t get_offset_of_Time_10() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Time_10)); }
	inline float get_Time_10() const { return ___Time_10; }
	inline float* get_address_of_Time_10() { return &___Time_10; }
	inline void set_Time_10(float value)
	{
		___Time_10 = value;
	}

	inline static int32_t get_offset_of_Delay_11() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Delay_11)); }
	inline float get_Delay_11() const { return ___Delay_11; }
	inline float* get_address_of_Delay_11() { return &___Delay_11; }
	inline void set_Delay_11(float value)
	{
		___Delay_11 = value;
	}

	inline static int32_t get_offset_of_FadeChildren_12() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___FadeChildren_12)); }
	inline bool get_FadeChildren_12() const { return ___FadeChildren_12; }
	inline bool* get_address_of_FadeChildren_12() { return &___FadeChildren_12; }
	inline void set_FadeChildren_12(bool value)
	{
		___FadeChildren_12 = value;
	}

	inline static int32_t get_offset_of_Sound_13() { return static_cast<int32_t>(offsetof(cPingPongFade_t3145526934, ___Sound_13)); }
	inline cSoundsForPingPongAnim_t3067920598 * get_Sound_13() const { return ___Sound_13; }
	inline cSoundsForPingPongAnim_t3067920598 ** get_address_of_Sound_13() { return &___Sound_13; }
	inline void set_Sound_13(cSoundsForPingPongAnim_t3067920598 * value)
	{
		___Sound_13 = value;
		Il2CppCodeGenWriteBarrier(&___Sound_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
