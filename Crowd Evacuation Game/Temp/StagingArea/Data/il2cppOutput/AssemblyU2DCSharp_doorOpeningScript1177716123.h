#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// doorOpeningScript
struct  doorOpeningScript_t1177716123  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody doorOpeningScript::rb
	Rigidbody_t4233889191 * ___rb_2;
	// UnityEngine.Vector3 doorOpeningScript::previousPos
	Vector3_t2243707580  ___previousPos_3;
	// UnityEngine.Quaternion doorOpeningScript::previousRot
	Quaternion_t4030073918  ___previousRot_4;
	// System.Boolean doorOpeningScript::collided
	bool ___collided_5;
	// System.Int32 doorOpeningScript::timer
	int32_t ___timer_6;
	// System.Boolean doorOpeningScript::startcount
	bool ___startcount_7;
	// UnityEngine.Vector3 doorOpeningScript::defaultRot
	Vector3_t2243707580  ___defaultRot_8;
	// UnityEngine.Vector3 doorOpeningScript::openRot
	Vector3_t2243707580  ___openRot_9;
	// UnityEngine.AudioClip doorOpeningScript::openclip
	AudioClip_t1932558630 * ___openclip_10;
	// UnityEngine.AudioClip doorOpeningScript::closeclip
	AudioClip_t1932558630 * ___closeclip_11;
	// System.Boolean doorOpeningScript::closing
	bool ___closing_12;
	// System.Boolean doorOpeningScript::opening
	bool ___opening_13;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___rb_2)); }
	inline Rigidbody_t4233889191 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t4233889191 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_previousPos_3() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___previousPos_3)); }
	inline Vector3_t2243707580  get_previousPos_3() const { return ___previousPos_3; }
	inline Vector3_t2243707580 * get_address_of_previousPos_3() { return &___previousPos_3; }
	inline void set_previousPos_3(Vector3_t2243707580  value)
	{
		___previousPos_3 = value;
	}

	inline static int32_t get_offset_of_previousRot_4() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___previousRot_4)); }
	inline Quaternion_t4030073918  get_previousRot_4() const { return ___previousRot_4; }
	inline Quaternion_t4030073918 * get_address_of_previousRot_4() { return &___previousRot_4; }
	inline void set_previousRot_4(Quaternion_t4030073918  value)
	{
		___previousRot_4 = value;
	}

	inline static int32_t get_offset_of_collided_5() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___collided_5)); }
	inline bool get_collided_5() const { return ___collided_5; }
	inline bool* get_address_of_collided_5() { return &___collided_5; }
	inline void set_collided_5(bool value)
	{
		___collided_5 = value;
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___timer_6)); }
	inline int32_t get_timer_6() const { return ___timer_6; }
	inline int32_t* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(int32_t value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_startcount_7() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___startcount_7)); }
	inline bool get_startcount_7() const { return ___startcount_7; }
	inline bool* get_address_of_startcount_7() { return &___startcount_7; }
	inline void set_startcount_7(bool value)
	{
		___startcount_7 = value;
	}

	inline static int32_t get_offset_of_defaultRot_8() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___defaultRot_8)); }
	inline Vector3_t2243707580  get_defaultRot_8() const { return ___defaultRot_8; }
	inline Vector3_t2243707580 * get_address_of_defaultRot_8() { return &___defaultRot_8; }
	inline void set_defaultRot_8(Vector3_t2243707580  value)
	{
		___defaultRot_8 = value;
	}

	inline static int32_t get_offset_of_openRot_9() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___openRot_9)); }
	inline Vector3_t2243707580  get_openRot_9() const { return ___openRot_9; }
	inline Vector3_t2243707580 * get_address_of_openRot_9() { return &___openRot_9; }
	inline void set_openRot_9(Vector3_t2243707580  value)
	{
		___openRot_9 = value;
	}

	inline static int32_t get_offset_of_openclip_10() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___openclip_10)); }
	inline AudioClip_t1932558630 * get_openclip_10() const { return ___openclip_10; }
	inline AudioClip_t1932558630 ** get_address_of_openclip_10() { return &___openclip_10; }
	inline void set_openclip_10(AudioClip_t1932558630 * value)
	{
		___openclip_10 = value;
		Il2CppCodeGenWriteBarrier(&___openclip_10, value);
	}

	inline static int32_t get_offset_of_closeclip_11() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___closeclip_11)); }
	inline AudioClip_t1932558630 * get_closeclip_11() const { return ___closeclip_11; }
	inline AudioClip_t1932558630 ** get_address_of_closeclip_11() { return &___closeclip_11; }
	inline void set_closeclip_11(AudioClip_t1932558630 * value)
	{
		___closeclip_11 = value;
		Il2CppCodeGenWriteBarrier(&___closeclip_11, value);
	}

	inline static int32_t get_offset_of_closing_12() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___closing_12)); }
	inline bool get_closing_12() const { return ___closing_12; }
	inline bool* get_address_of_closing_12() { return &___closing_12; }
	inline void set_closing_12(bool value)
	{
		___closing_12 = value;
	}

	inline static int32_t get_offset_of_opening_13() { return static_cast<int32_t>(offsetof(doorOpeningScript_t1177716123, ___opening_13)); }
	inline bool get_opening_13() const { return ___opening_13; }
	inline bool* get_address_of_opening_13() { return &___opening_13; }
	inline void set_opening_13(bool value)
	{
		___opening_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
