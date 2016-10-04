﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ElementGenerator
struct  ElementGenerator_t1212624375  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ElementGenerator::pillar
	GameObject_t1756533147 * ___pillar_2;
	// System.Single ElementGenerator::PillarWidth
	float ___PillarWidth_3;
	// System.Single ElementGenerator::pillarHeight
	float ___pillarHeight_4;
	// System.Int32 ElementGenerator::noOfPillars
	int32_t ___noOfPillars_5;

public:
	inline static int32_t get_offset_of_pillar_2() { return static_cast<int32_t>(offsetof(ElementGenerator_t1212624375, ___pillar_2)); }
	inline GameObject_t1756533147 * get_pillar_2() const { return ___pillar_2; }
	inline GameObject_t1756533147 ** get_address_of_pillar_2() { return &___pillar_2; }
	inline void set_pillar_2(GameObject_t1756533147 * value)
	{
		___pillar_2 = value;
		Il2CppCodeGenWriteBarrier(&___pillar_2, value);
	}

	inline static int32_t get_offset_of_PillarWidth_3() { return static_cast<int32_t>(offsetof(ElementGenerator_t1212624375, ___PillarWidth_3)); }
	inline float get_PillarWidth_3() const { return ___PillarWidth_3; }
	inline float* get_address_of_PillarWidth_3() { return &___PillarWidth_3; }
	inline void set_PillarWidth_3(float value)
	{
		___PillarWidth_3 = value;
	}

	inline static int32_t get_offset_of_pillarHeight_4() { return static_cast<int32_t>(offsetof(ElementGenerator_t1212624375, ___pillarHeight_4)); }
	inline float get_pillarHeight_4() const { return ___pillarHeight_4; }
	inline float* get_address_of_pillarHeight_4() { return &___pillarHeight_4; }
	inline void set_pillarHeight_4(float value)
	{
		___pillarHeight_4 = value;
	}

	inline static int32_t get_offset_of_noOfPillars_5() { return static_cast<int32_t>(offsetof(ElementGenerator_t1212624375, ___noOfPillars_5)); }
	inline int32_t get_noOfPillars_5() const { return ___noOfPillars_5; }
	inline int32_t* get_address_of_noOfPillars_5() { return &___noOfPillars_5; }
	inline void set_noOfPillars_5(int32_t value)
	{
		___noOfPillars_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
