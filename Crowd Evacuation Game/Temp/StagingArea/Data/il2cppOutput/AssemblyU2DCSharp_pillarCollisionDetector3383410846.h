﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pillarCollisionDetector
struct  pillarCollisionDetector_t3383410846  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean pillarCollisionDetector::collided
	bool ___collided_2;

public:
	inline static int32_t get_offset_of_collided_2() { return static_cast<int32_t>(offsetof(pillarCollisionDetector_t3383410846, ___collided_2)); }
	inline bool get_collided_2() const { return ___collided_2; }
	inline bool* get_address_of_collided_2() { return &___collided_2; }
	inline void set_collided_2(bool value)
	{
		___collided_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
