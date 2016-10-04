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
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// makeWall
struct  makeWall_t496305406  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RaycastHit makeWall::hitInfo
	RaycastHit_t87180320  ___hitInfo_3;
	// UnityEngine.Transform makeWall::temp
	Transform_t3275118058 * ___temp_4;
	// UnityEngine.GameObject makeWall::wall
	GameObject_t1756533147 * ___wall_5;
	// UnityEngine.Vector2 makeWall::start
	Vector2_t2243707579  ___start_6;
	// UnityEngine.Vector2 makeWall::end
	Vector2_t2243707579  ___end_7;
	// System.Single makeWall::wallHeight
	float ___wallHeight_8;
	// System.Single makeWall::wallCenter
	float ___wallCenter_9;
	// System.Int32 makeWall::timer
	int32_t ___timer_10;

public:
	inline static int32_t get_offset_of_hitInfo_3() { return static_cast<int32_t>(offsetof(makeWall_t496305406, ___hitInfo_3)); }
	inline RaycastHit_t87180320  get_hitInfo_3() const { return ___hitInfo_3; }
	inline RaycastHit_t87180320 * get_address_of_hitInfo_3() { return &___hitInfo_3; }
	inline void set_hitInfo_3(RaycastHit_t87180320  value)
	{
		___hitInfo_3 = value;
	}

	inline static int32_t get_offset_of_temp_4() { return static_cast<int32_t>(offsetof(makeWall_t496305406, ___temp_4)); }
	inline Transform_t3275118058 * get_temp_4() const { return ___temp_4; }
	inline Transform_t3275118058 ** get_address_of_temp_4() { return &___temp_4; }
	inline void set_temp_4(Transform_t3275118058 * value)
	{
		___temp_4 = value;
		Il2CppCodeGenWriteBarrier(&___temp_4, value);
	}

	inline static int32_t get_offset_of_wall_5() { return static_cast<int32_t>(offsetof(makeWall_t496305406, ___wall_5)); }
	inline GameObject_t1756533147 * get_wall_5() const { return ___wall_5; }
	inline GameObject_t1756533147 ** get_address_of_wall_5() { return &___wall_5; }
	inline void set_wall_5(GameObject_t1756533147 * value)
	{
		___wall_5 = value;
		Il2CppCodeGenWriteBarrier(&___wall_5, value);
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(makeWall_t496305406, ___start_6)); }
	inline Vector2_t2243707579  get_start_6() const { return ___start_6; }
	inline Vector2_t2243707579 * get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(Vector2_t2243707579  value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_end_7() { return static_cast<int32_t>(offsetof(makeWall_t496305406, ___end_7)); }
	inline Vector2_t2243707579  get_end_7() const { return ___end_7; }
	inline Vector2_t2243707579 * get_address_of_end_7() { return &___end_7; }
	inline void set_end_7(Vector2_t2243707579  value)
	{
		___end_7 = value;
	}

	inline static int32_t get_offset_of_wallHeight_8() { return static_cast<int32_t>(offsetof(makeWall_t496305406, ___wallHeight_8)); }
	inline float get_wallHeight_8() const { return ___wallHeight_8; }
	inline float* get_address_of_wallHeight_8() { return &___wallHeight_8; }
	inline void set_wallHeight_8(float value)
	{
		___wallHeight_8 = value;
	}

	inline static int32_t get_offset_of_wallCenter_9() { return static_cast<int32_t>(offsetof(makeWall_t496305406, ___wallCenter_9)); }
	inline float get_wallCenter_9() const { return ___wallCenter_9; }
	inline float* get_address_of_wallCenter_9() { return &___wallCenter_9; }
	inline void set_wallCenter_9(float value)
	{
		___wallCenter_9 = value;
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(makeWall_t496305406, ___timer_10)); }
	inline int32_t get_timer_10() const { return ___timer_10; }
	inline int32_t* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(int32_t value)
	{
		___timer_10 = value;
	}
};

struct makeWall_t496305406_StaticFields
{
public:
	// System.Int32 makeWall::placingWall
	int32_t ___placingWall_2;

public:
	inline static int32_t get_offset_of_placingWall_2() { return static_cast<int32_t>(offsetof(makeWall_t496305406_StaticFields, ___placingWall_2)); }
	inline int32_t get_placingWall_2() const { return ___placingWall_2; }
	inline int32_t* get_address_of_placingWall_2() { return &___placingWall_2; }
	inline void set_placingWall_2(int32_t value)
	{
		___placingWall_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
