#pragma once

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

// WallsNextToIt
struct  WallsNextToIt_t11049824  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WallsNextToIt::rightWall
	GameObject_t1756533147 * ___rightWall_2;
	// UnityEngine.GameObject WallsNextToIt::leftWall
	GameObject_t1756533147 * ___leftWall_3;

public:
	inline static int32_t get_offset_of_rightWall_2() { return static_cast<int32_t>(offsetof(WallsNextToIt_t11049824, ___rightWall_2)); }
	inline GameObject_t1756533147 * get_rightWall_2() const { return ___rightWall_2; }
	inline GameObject_t1756533147 ** get_address_of_rightWall_2() { return &___rightWall_2; }
	inline void set_rightWall_2(GameObject_t1756533147 * value)
	{
		___rightWall_2 = value;
		Il2CppCodeGenWriteBarrier(&___rightWall_2, value);
	}

	inline static int32_t get_offset_of_leftWall_3() { return static_cast<int32_t>(offsetof(WallsNextToIt_t11049824, ___leftWall_3)); }
	inline GameObject_t1756533147 * get_leftWall_3() const { return ___leftWall_3; }
	inline GameObject_t1756533147 ** get_address_of_leftWall_3() { return &___leftWall_3; }
	inline void set_leftWall_3(GameObject_t1756533147 * value)
	{
		___leftWall_3 = value;
		Il2CppCodeGenWriteBarrier(&___leftWall_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
