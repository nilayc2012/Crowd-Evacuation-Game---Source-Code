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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewWallScript
struct  NewWallScript_t3919459019  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RaycastHit NewWallScript::hitInfo
	RaycastHit_t87180320  ___hitInfo_2;
	// UnityEngine.Transform NewWallScript::temp
	Transform_t3275118058 * ___temp_3;
	// UnityEngine.Vector3 NewWallScript::screenPoint
	Vector3_t2243707580  ___screenPoint_4;
	// UnityEngine.Vector3 NewWallScript::offset
	Vector3_t2243707580  ___offset_5;
	// System.Boolean NewWallScript::selected
	bool ___selected_6;
	// UnityEngine.Vector3 NewWallScript::curpos
	Vector3_t2243707580  ___curpos_7;
	// System.Boolean NewWallScript::leftflag
	bool ___leftflag_8;
	// System.Boolean NewWallScript::rightflag
	bool ___rightflag_9;
	// System.Single NewWallScript::timer
	float ___timer_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NewWallScript::neighbors
	List_1_t1125654279 * ___neighbors_11;
	// System.Int32 NewWallScript::nOfWalls
	int32_t ___nOfWalls_12;
	// System.Single NewWallScript::moveDistance
	float ___moveDistance_13;

public:
	inline static int32_t get_offset_of_hitInfo_2() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___hitInfo_2)); }
	inline RaycastHit_t87180320  get_hitInfo_2() const { return ___hitInfo_2; }
	inline RaycastHit_t87180320 * get_address_of_hitInfo_2() { return &___hitInfo_2; }
	inline void set_hitInfo_2(RaycastHit_t87180320  value)
	{
		___hitInfo_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___temp_3)); }
	inline Transform_t3275118058 * get_temp_3() const { return ___temp_3; }
	inline Transform_t3275118058 ** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(Transform_t3275118058 * value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier(&___temp_3, value);
	}

	inline static int32_t get_offset_of_screenPoint_4() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___screenPoint_4)); }
	inline Vector3_t2243707580  get_screenPoint_4() const { return ___screenPoint_4; }
	inline Vector3_t2243707580 * get_address_of_screenPoint_4() { return &___screenPoint_4; }
	inline void set_screenPoint_4(Vector3_t2243707580  value)
	{
		___screenPoint_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___offset_5)); }
	inline Vector3_t2243707580  get_offset_5() const { return ___offset_5; }
	inline Vector3_t2243707580 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t2243707580  value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_selected_6() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___selected_6)); }
	inline bool get_selected_6() const { return ___selected_6; }
	inline bool* get_address_of_selected_6() { return &___selected_6; }
	inline void set_selected_6(bool value)
	{
		___selected_6 = value;
	}

	inline static int32_t get_offset_of_curpos_7() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___curpos_7)); }
	inline Vector3_t2243707580  get_curpos_7() const { return ___curpos_7; }
	inline Vector3_t2243707580 * get_address_of_curpos_7() { return &___curpos_7; }
	inline void set_curpos_7(Vector3_t2243707580  value)
	{
		___curpos_7 = value;
	}

	inline static int32_t get_offset_of_leftflag_8() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___leftflag_8)); }
	inline bool get_leftflag_8() const { return ___leftflag_8; }
	inline bool* get_address_of_leftflag_8() { return &___leftflag_8; }
	inline void set_leftflag_8(bool value)
	{
		___leftflag_8 = value;
	}

	inline static int32_t get_offset_of_rightflag_9() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___rightflag_9)); }
	inline bool get_rightflag_9() const { return ___rightflag_9; }
	inline bool* get_address_of_rightflag_9() { return &___rightflag_9; }
	inline void set_rightflag_9(bool value)
	{
		___rightflag_9 = value;
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___timer_10)); }
	inline float get_timer_10() const { return ___timer_10; }
	inline float* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(float value)
	{
		___timer_10 = value;
	}

	inline static int32_t get_offset_of_neighbors_11() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___neighbors_11)); }
	inline List_1_t1125654279 * get_neighbors_11() const { return ___neighbors_11; }
	inline List_1_t1125654279 ** get_address_of_neighbors_11() { return &___neighbors_11; }
	inline void set_neighbors_11(List_1_t1125654279 * value)
	{
		___neighbors_11 = value;
		Il2CppCodeGenWriteBarrier(&___neighbors_11, value);
	}

	inline static int32_t get_offset_of_nOfWalls_12() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___nOfWalls_12)); }
	inline int32_t get_nOfWalls_12() const { return ___nOfWalls_12; }
	inline int32_t* get_address_of_nOfWalls_12() { return &___nOfWalls_12; }
	inline void set_nOfWalls_12(int32_t value)
	{
		___nOfWalls_12 = value;
	}

	inline static int32_t get_offset_of_moveDistance_13() { return static_cast<int32_t>(offsetof(NewWallScript_t3919459019, ___moveDistance_13)); }
	inline float get_moveDistance_13() const { return ___moveDistance_13; }
	inline float* get_address_of_moveDistance_13() { return &___moveDistance_13; }
	inline void set_moveDistance_13(float value)
	{
		___moveDistance_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
