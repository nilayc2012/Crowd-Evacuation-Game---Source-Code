#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WallDetector
struct  WallDetector_t2329365202  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WallDetector::collidedWalls
	List_1_t1125654279 * ___collidedWalls_2;
	// System.Boolean WallDetector::flag
	bool ___flag_3;

public:
	inline static int32_t get_offset_of_collidedWalls_2() { return static_cast<int32_t>(offsetof(WallDetector_t2329365202, ___collidedWalls_2)); }
	inline List_1_t1125654279 * get_collidedWalls_2() const { return ___collidedWalls_2; }
	inline List_1_t1125654279 ** get_address_of_collidedWalls_2() { return &___collidedWalls_2; }
	inline void set_collidedWalls_2(List_1_t1125654279 * value)
	{
		___collidedWalls_2 = value;
		Il2CppCodeGenWriteBarrier(&___collidedWalls_2, value);
	}

	inline static int32_t get_offset_of_flag_3() { return static_cast<int32_t>(offsetof(WallDetector_t2329365202, ___flag_3)); }
	inline bool get_flag_3() const { return ___flag_3; }
	inline bool* get_address_of_flag_3() { return &___flag_3; }
	inline void set_flag_3(bool value)
	{
		___flag_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
