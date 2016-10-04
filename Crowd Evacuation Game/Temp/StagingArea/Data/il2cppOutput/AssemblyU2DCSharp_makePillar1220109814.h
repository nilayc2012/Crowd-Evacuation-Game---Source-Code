#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// makePillar
struct  makePillar_t1220109814  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RaycastHit makePillar::hitInfo
	RaycastHit_t87180320  ___hitInfo_2;
	// UnityEngine.Transform makePillar::temp
	Transform_t3275118058 * ___temp_3;
	// UnityEngine.GameObject makePillar::pillar
	GameObject_t1756533147 * ___pillar_4;
	// System.Single makePillar::PillarWidth
	float ___PillarWidth_5;
	// System.Single makePillar::pillarHeight
	float ___pillarHeight_6;
	// System.Int32 makePillar::timer
	int32_t ___timer_7;

public:
	inline static int32_t get_offset_of_hitInfo_2() { return static_cast<int32_t>(offsetof(makePillar_t1220109814, ___hitInfo_2)); }
	inline RaycastHit_t87180320  get_hitInfo_2() const { return ___hitInfo_2; }
	inline RaycastHit_t87180320 * get_address_of_hitInfo_2() { return &___hitInfo_2; }
	inline void set_hitInfo_2(RaycastHit_t87180320  value)
	{
		___hitInfo_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(makePillar_t1220109814, ___temp_3)); }
	inline Transform_t3275118058 * get_temp_3() const { return ___temp_3; }
	inline Transform_t3275118058 ** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(Transform_t3275118058 * value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier(&___temp_3, value);
	}

	inline static int32_t get_offset_of_pillar_4() { return static_cast<int32_t>(offsetof(makePillar_t1220109814, ___pillar_4)); }
	inline GameObject_t1756533147 * get_pillar_4() const { return ___pillar_4; }
	inline GameObject_t1756533147 ** get_address_of_pillar_4() { return &___pillar_4; }
	inline void set_pillar_4(GameObject_t1756533147 * value)
	{
		___pillar_4 = value;
		Il2CppCodeGenWriteBarrier(&___pillar_4, value);
	}

	inline static int32_t get_offset_of_PillarWidth_5() { return static_cast<int32_t>(offsetof(makePillar_t1220109814, ___PillarWidth_5)); }
	inline float get_PillarWidth_5() const { return ___PillarWidth_5; }
	inline float* get_address_of_PillarWidth_5() { return &___PillarWidth_5; }
	inline void set_PillarWidth_5(float value)
	{
		___PillarWidth_5 = value;
	}

	inline static int32_t get_offset_of_pillarHeight_6() { return static_cast<int32_t>(offsetof(makePillar_t1220109814, ___pillarHeight_6)); }
	inline float get_pillarHeight_6() const { return ___pillarHeight_6; }
	inline float* get_address_of_pillarHeight_6() { return &___pillarHeight_6; }
	inline void set_pillarHeight_6(float value)
	{
		___pillarHeight_6 = value;
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(makePillar_t1220109814, ___timer_7)); }
	inline int32_t get_timer_7() const { return ___timer_7; }
	inline int32_t* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(int32_t value)
	{
		___timer_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
