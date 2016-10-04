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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// makeDoor
struct  makeDoor_t2714499102  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RaycastHit makeDoor::hitInfo
	RaycastHit_t87180320  ___hitInfo_2;
	// UnityEngine.RaycastHit makeDoor::hit
	RaycastHit_t87180320  ___hit_3;
	// UnityEngine.Transform makeDoor::temp
	Transform_t3275118058 * ___temp_4;
	// UnityEngine.Transform makeDoor::childtemp
	Transform_t3275118058 * ___childtemp_5;
	// UnityEngine.GameObject makeDoor::door
	GameObject_t1756533147 * ___door_6;
	// UnityEngine.GameObject makeDoor::rightWall
	GameObject_t1756533147 * ___rightWall_7;
	// System.Single makeDoor::WidthOfDoor
	float ___WidthOfDoor_8;
	// System.Single makeDoor::wallHeight
	float ___wallHeight_9;
	// UnityEngine.GameObject[] makeDoor::points
	GameObjectU5BU5D_t3057952154* ___points_10;
	// UnityEngine.UI.Text makeDoor::errorText
	Text_t356221433 * ___errorText_12;
	// System.Int32 makeDoor::timer
	int32_t ___timer_13;
	// System.Boolean makeDoor::setTimer
	bool ___setTimer_14;

public:
	inline static int32_t get_offset_of_hitInfo_2() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___hitInfo_2)); }
	inline RaycastHit_t87180320  get_hitInfo_2() const { return ___hitInfo_2; }
	inline RaycastHit_t87180320 * get_address_of_hitInfo_2() { return &___hitInfo_2; }
	inline void set_hitInfo_2(RaycastHit_t87180320  value)
	{
		___hitInfo_2 = value;
	}

	inline static int32_t get_offset_of_hit_3() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___hit_3)); }
	inline RaycastHit_t87180320  get_hit_3() const { return ___hit_3; }
	inline RaycastHit_t87180320 * get_address_of_hit_3() { return &___hit_3; }
	inline void set_hit_3(RaycastHit_t87180320  value)
	{
		___hit_3 = value;
	}

	inline static int32_t get_offset_of_temp_4() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___temp_4)); }
	inline Transform_t3275118058 * get_temp_4() const { return ___temp_4; }
	inline Transform_t3275118058 ** get_address_of_temp_4() { return &___temp_4; }
	inline void set_temp_4(Transform_t3275118058 * value)
	{
		___temp_4 = value;
		Il2CppCodeGenWriteBarrier(&___temp_4, value);
	}

	inline static int32_t get_offset_of_childtemp_5() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___childtemp_5)); }
	inline Transform_t3275118058 * get_childtemp_5() const { return ___childtemp_5; }
	inline Transform_t3275118058 ** get_address_of_childtemp_5() { return &___childtemp_5; }
	inline void set_childtemp_5(Transform_t3275118058 * value)
	{
		___childtemp_5 = value;
		Il2CppCodeGenWriteBarrier(&___childtemp_5, value);
	}

	inline static int32_t get_offset_of_door_6() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___door_6)); }
	inline GameObject_t1756533147 * get_door_6() const { return ___door_6; }
	inline GameObject_t1756533147 ** get_address_of_door_6() { return &___door_6; }
	inline void set_door_6(GameObject_t1756533147 * value)
	{
		___door_6 = value;
		Il2CppCodeGenWriteBarrier(&___door_6, value);
	}

	inline static int32_t get_offset_of_rightWall_7() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___rightWall_7)); }
	inline GameObject_t1756533147 * get_rightWall_7() const { return ___rightWall_7; }
	inline GameObject_t1756533147 ** get_address_of_rightWall_7() { return &___rightWall_7; }
	inline void set_rightWall_7(GameObject_t1756533147 * value)
	{
		___rightWall_7 = value;
		Il2CppCodeGenWriteBarrier(&___rightWall_7, value);
	}

	inline static int32_t get_offset_of_WidthOfDoor_8() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___WidthOfDoor_8)); }
	inline float get_WidthOfDoor_8() const { return ___WidthOfDoor_8; }
	inline float* get_address_of_WidthOfDoor_8() { return &___WidthOfDoor_8; }
	inline void set_WidthOfDoor_8(float value)
	{
		___WidthOfDoor_8 = value;
	}

	inline static int32_t get_offset_of_wallHeight_9() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___wallHeight_9)); }
	inline float get_wallHeight_9() const { return ___wallHeight_9; }
	inline float* get_address_of_wallHeight_9() { return &___wallHeight_9; }
	inline void set_wallHeight_9(float value)
	{
		___wallHeight_9 = value;
	}

	inline static int32_t get_offset_of_points_10() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___points_10)); }
	inline GameObjectU5BU5D_t3057952154* get_points_10() const { return ___points_10; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_points_10() { return &___points_10; }
	inline void set_points_10(GameObjectU5BU5D_t3057952154* value)
	{
		___points_10 = value;
		Il2CppCodeGenWriteBarrier(&___points_10, value);
	}

	inline static int32_t get_offset_of_errorText_12() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___errorText_12)); }
	inline Text_t356221433 * get_errorText_12() const { return ___errorText_12; }
	inline Text_t356221433 ** get_address_of_errorText_12() { return &___errorText_12; }
	inline void set_errorText_12(Text_t356221433 * value)
	{
		___errorText_12 = value;
		Il2CppCodeGenWriteBarrier(&___errorText_12, value);
	}

	inline static int32_t get_offset_of_timer_13() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___timer_13)); }
	inline int32_t get_timer_13() const { return ___timer_13; }
	inline int32_t* get_address_of_timer_13() { return &___timer_13; }
	inline void set_timer_13(int32_t value)
	{
		___timer_13 = value;
	}

	inline static int32_t get_offset_of_setTimer_14() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102, ___setTimer_14)); }
	inline bool get_setTimer_14() const { return ___setTimer_14; }
	inline bool* get_address_of_setTimer_14() { return &___setTimer_14; }
	inline void set_setTimer_14(bool value)
	{
		___setTimer_14 = value;
	}
};

struct makeDoor_t2714499102_StaticFields
{
public:
	// System.Boolean makeDoor::recomputeFlag
	bool ___recomputeFlag_11;

public:
	inline static int32_t get_offset_of_recomputeFlag_11() { return static_cast<int32_t>(offsetof(makeDoor_t2714499102_StaticFields, ___recomputeFlag_11)); }
	inline bool get_recomputeFlag_11() const { return ___recomputeFlag_11; }
	inline bool* get_address_of_recomputeFlag_11() { return &___recomputeFlag_11; }
	inline void set_recomputeFlag_11(bool value)
	{
		___recomputeFlag_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
