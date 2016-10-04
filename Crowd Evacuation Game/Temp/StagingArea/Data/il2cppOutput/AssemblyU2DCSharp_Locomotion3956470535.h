#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locomotion
struct  Locomotion_t3956470535  : public Il2CppObject
{
public:
	// UnityEngine.Animator Locomotion::m_Animator
	Animator_t69676727 * ___m_Animator_0;
	// System.Int32 Locomotion::m_SpeedId
	int32_t ___m_SpeedId_1;
	// System.Int32 Locomotion::m_AgularSpeedId
	int32_t ___m_AgularSpeedId_2;
	// System.Int32 Locomotion::m_DirectionId
	int32_t ___m_DirectionId_3;
	// System.Single Locomotion::m_SpeedDampTime
	float ___m_SpeedDampTime_4;
	// System.Single Locomotion::m_AnguarSpeedDampTime
	float ___m_AnguarSpeedDampTime_5;
	// System.Single Locomotion::m_DirectionResponseTime
	float ___m_DirectionResponseTime_6;

public:
	inline static int32_t get_offset_of_m_Animator_0() { return static_cast<int32_t>(offsetof(Locomotion_t3956470535, ___m_Animator_0)); }
	inline Animator_t69676727 * get_m_Animator_0() const { return ___m_Animator_0; }
	inline Animator_t69676727 ** get_address_of_m_Animator_0() { return &___m_Animator_0; }
	inline void set_m_Animator_0(Animator_t69676727 * value)
	{
		___m_Animator_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_0, value);
	}

	inline static int32_t get_offset_of_m_SpeedId_1() { return static_cast<int32_t>(offsetof(Locomotion_t3956470535, ___m_SpeedId_1)); }
	inline int32_t get_m_SpeedId_1() const { return ___m_SpeedId_1; }
	inline int32_t* get_address_of_m_SpeedId_1() { return &___m_SpeedId_1; }
	inline void set_m_SpeedId_1(int32_t value)
	{
		___m_SpeedId_1 = value;
	}

	inline static int32_t get_offset_of_m_AgularSpeedId_2() { return static_cast<int32_t>(offsetof(Locomotion_t3956470535, ___m_AgularSpeedId_2)); }
	inline int32_t get_m_AgularSpeedId_2() const { return ___m_AgularSpeedId_2; }
	inline int32_t* get_address_of_m_AgularSpeedId_2() { return &___m_AgularSpeedId_2; }
	inline void set_m_AgularSpeedId_2(int32_t value)
	{
		___m_AgularSpeedId_2 = value;
	}

	inline static int32_t get_offset_of_m_DirectionId_3() { return static_cast<int32_t>(offsetof(Locomotion_t3956470535, ___m_DirectionId_3)); }
	inline int32_t get_m_DirectionId_3() const { return ___m_DirectionId_3; }
	inline int32_t* get_address_of_m_DirectionId_3() { return &___m_DirectionId_3; }
	inline void set_m_DirectionId_3(int32_t value)
	{
		___m_DirectionId_3 = value;
	}

	inline static int32_t get_offset_of_m_SpeedDampTime_4() { return static_cast<int32_t>(offsetof(Locomotion_t3956470535, ___m_SpeedDampTime_4)); }
	inline float get_m_SpeedDampTime_4() const { return ___m_SpeedDampTime_4; }
	inline float* get_address_of_m_SpeedDampTime_4() { return &___m_SpeedDampTime_4; }
	inline void set_m_SpeedDampTime_4(float value)
	{
		___m_SpeedDampTime_4 = value;
	}

	inline static int32_t get_offset_of_m_AnguarSpeedDampTime_5() { return static_cast<int32_t>(offsetof(Locomotion_t3956470535, ___m_AnguarSpeedDampTime_5)); }
	inline float get_m_AnguarSpeedDampTime_5() const { return ___m_AnguarSpeedDampTime_5; }
	inline float* get_address_of_m_AnguarSpeedDampTime_5() { return &___m_AnguarSpeedDampTime_5; }
	inline void set_m_AnguarSpeedDampTime_5(float value)
	{
		___m_AnguarSpeedDampTime_5 = value;
	}

	inline static int32_t get_offset_of_m_DirectionResponseTime_6() { return static_cast<int32_t>(offsetof(Locomotion_t3956470535, ___m_DirectionResponseTime_6)); }
	inline float get_m_DirectionResponseTime_6() const { return ___m_DirectionResponseTime_6; }
	inline float* get_address_of_m_DirectionResponseTime_6() { return &___m_DirectionResponseTime_6; }
	inline void set_m_DirectionResponseTime_6(float value)
	{
		___m_DirectionResponseTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
