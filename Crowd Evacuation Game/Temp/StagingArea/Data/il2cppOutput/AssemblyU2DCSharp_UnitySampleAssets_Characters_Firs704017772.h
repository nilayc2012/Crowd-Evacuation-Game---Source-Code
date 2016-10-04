#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct  MovementSettings_t704017772  : public Il2CppObject
{
public:
	// System.Single UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::ForwardSpeed
	float ___ForwardSpeed_0;
	// System.Single UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::BackwardSpeed
	float ___BackwardSpeed_1;
	// System.Single UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::StrafeSpeed
	float ___StrafeSpeed_2;
	// System.Single UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::SprintSpeed
	float ___SprintSpeed_3;
	// System.Single UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::JumpForce
	float ___JumpForce_4;
	// UnityEngine.AnimationCurve UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::SlopeCurveModifier
	AnimationCurve_t3306541151 * ___SlopeCurveModifier_5;
	// System.Single UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::CurrentTargetSpeed
	float ___CurrentTargetSpeed_6;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::running
	bool ___running_7;

public:
	inline static int32_t get_offset_of_ForwardSpeed_0() { return static_cast<int32_t>(offsetof(MovementSettings_t704017772, ___ForwardSpeed_0)); }
	inline float get_ForwardSpeed_0() const { return ___ForwardSpeed_0; }
	inline float* get_address_of_ForwardSpeed_0() { return &___ForwardSpeed_0; }
	inline void set_ForwardSpeed_0(float value)
	{
		___ForwardSpeed_0 = value;
	}

	inline static int32_t get_offset_of_BackwardSpeed_1() { return static_cast<int32_t>(offsetof(MovementSettings_t704017772, ___BackwardSpeed_1)); }
	inline float get_BackwardSpeed_1() const { return ___BackwardSpeed_1; }
	inline float* get_address_of_BackwardSpeed_1() { return &___BackwardSpeed_1; }
	inline void set_BackwardSpeed_1(float value)
	{
		___BackwardSpeed_1 = value;
	}

	inline static int32_t get_offset_of_StrafeSpeed_2() { return static_cast<int32_t>(offsetof(MovementSettings_t704017772, ___StrafeSpeed_2)); }
	inline float get_StrafeSpeed_2() const { return ___StrafeSpeed_2; }
	inline float* get_address_of_StrafeSpeed_2() { return &___StrafeSpeed_2; }
	inline void set_StrafeSpeed_2(float value)
	{
		___StrafeSpeed_2 = value;
	}

	inline static int32_t get_offset_of_SprintSpeed_3() { return static_cast<int32_t>(offsetof(MovementSettings_t704017772, ___SprintSpeed_3)); }
	inline float get_SprintSpeed_3() const { return ___SprintSpeed_3; }
	inline float* get_address_of_SprintSpeed_3() { return &___SprintSpeed_3; }
	inline void set_SprintSpeed_3(float value)
	{
		___SprintSpeed_3 = value;
	}

	inline static int32_t get_offset_of_JumpForce_4() { return static_cast<int32_t>(offsetof(MovementSettings_t704017772, ___JumpForce_4)); }
	inline float get_JumpForce_4() const { return ___JumpForce_4; }
	inline float* get_address_of_JumpForce_4() { return &___JumpForce_4; }
	inline void set_JumpForce_4(float value)
	{
		___JumpForce_4 = value;
	}

	inline static int32_t get_offset_of_SlopeCurveModifier_5() { return static_cast<int32_t>(offsetof(MovementSettings_t704017772, ___SlopeCurveModifier_5)); }
	inline AnimationCurve_t3306541151 * get_SlopeCurveModifier_5() const { return ___SlopeCurveModifier_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_SlopeCurveModifier_5() { return &___SlopeCurveModifier_5; }
	inline void set_SlopeCurveModifier_5(AnimationCurve_t3306541151 * value)
	{
		___SlopeCurveModifier_5 = value;
		Il2CppCodeGenWriteBarrier(&___SlopeCurveModifier_5, value);
	}

	inline static int32_t get_offset_of_CurrentTargetSpeed_6() { return static_cast<int32_t>(offsetof(MovementSettings_t704017772, ___CurrentTargetSpeed_6)); }
	inline float get_CurrentTargetSpeed_6() const { return ___CurrentTargetSpeed_6; }
	inline float* get_address_of_CurrentTargetSpeed_6() { return &___CurrentTargetSpeed_6; }
	inline void set_CurrentTargetSpeed_6(float value)
	{
		___CurrentTargetSpeed_6 = value;
	}

	inline static int32_t get_offset_of_running_7() { return static_cast<int32_t>(offsetof(MovementSettings_t704017772, ___running_7)); }
	inline bool get_running_7() const { return ___running_7; }
	inline bool* get_address_of_running_7() { return &___running_7; }
	inline void set_running_7(bool value)
	{
		___running_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
