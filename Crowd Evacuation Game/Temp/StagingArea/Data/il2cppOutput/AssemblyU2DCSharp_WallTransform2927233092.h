#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pos
struct Pos_t774521570;
// Rot
struct Rot_t774521503;
// WallScale
struct WallScale_t2901051958;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WallTransform
struct  WallTransform_t2927233092  : public Il2CppObject
{
public:
	// Pos WallTransform::pos
	Pos_t774521570 * ___pos_0;
	// Rot WallTransform::rot
	Rot_t774521503 * ___rot_1;
	// WallScale WallTransform::ws
	WallScale_t2901051958 * ___ws_2;
	// UnityEngine.GameObject WallTransform::gameObject
	GameObject_t1756533147 * ___gameObject_3;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(WallTransform_t2927233092, ___pos_0)); }
	inline Pos_t774521570 * get_pos_0() const { return ___pos_0; }
	inline Pos_t774521570 ** get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Pos_t774521570 * value)
	{
		___pos_0 = value;
		Il2CppCodeGenWriteBarrier(&___pos_0, value);
	}

	inline static int32_t get_offset_of_rot_1() { return static_cast<int32_t>(offsetof(WallTransform_t2927233092, ___rot_1)); }
	inline Rot_t774521503 * get_rot_1() const { return ___rot_1; }
	inline Rot_t774521503 ** get_address_of_rot_1() { return &___rot_1; }
	inline void set_rot_1(Rot_t774521503 * value)
	{
		___rot_1 = value;
		Il2CppCodeGenWriteBarrier(&___rot_1, value);
	}

	inline static int32_t get_offset_of_ws_2() { return static_cast<int32_t>(offsetof(WallTransform_t2927233092, ___ws_2)); }
	inline WallScale_t2901051958 * get_ws_2() const { return ___ws_2; }
	inline WallScale_t2901051958 ** get_address_of_ws_2() { return &___ws_2; }
	inline void set_ws_2(WallScale_t2901051958 * value)
	{
		___ws_2 = value;
		Il2CppCodeGenWriteBarrier(&___ws_2, value);
	}

	inline static int32_t get_offset_of_gameObject_3() { return static_cast<int32_t>(offsetof(WallTransform_t2927233092, ___gameObject_3)); }
	inline GameObject_t1756533147 * get_gameObject_3() const { return ___gameObject_3; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_3() { return &___gameObject_3; }
	inline void set_gameObject_3(GameObject_t1756533147 * value)
	{
		___gameObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
