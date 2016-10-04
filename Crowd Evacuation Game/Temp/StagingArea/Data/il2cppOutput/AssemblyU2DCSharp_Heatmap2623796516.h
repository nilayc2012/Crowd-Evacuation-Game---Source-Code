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

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Heatmap
struct  Heatmap_t2623796516  : public ScriptableObject_t1975622470
{
public:

public:
};

struct Heatmap_t2623796516_StaticFields
{
public:
	// UnityEngine.GameObject Heatmap::projectionPlane
	GameObject_t1756533147 * ___projectionPlane_2;
	// System.Int32 Heatmap::RED_THRESHOLD
	int32_t ___RED_THRESHOLD_3;
	// System.Int32 Heatmap::GREEN_THRESHOLD
	int32_t ___GREEN_THRESHOLD_4;
	// System.Int32 Heatmap::BLUE_THRESHOLD
	int32_t ___BLUE_THRESHOLD_5;
	// System.Int32 Heatmap::MINIMUM_THRESHOLD
	int32_t ___MINIMUM_THRESHOLD_6;

public:
	inline static int32_t get_offset_of_projectionPlane_2() { return static_cast<int32_t>(offsetof(Heatmap_t2623796516_StaticFields, ___projectionPlane_2)); }
	inline GameObject_t1756533147 * get_projectionPlane_2() const { return ___projectionPlane_2; }
	inline GameObject_t1756533147 ** get_address_of_projectionPlane_2() { return &___projectionPlane_2; }
	inline void set_projectionPlane_2(GameObject_t1756533147 * value)
	{
		___projectionPlane_2 = value;
		Il2CppCodeGenWriteBarrier(&___projectionPlane_2, value);
	}

	inline static int32_t get_offset_of_RED_THRESHOLD_3() { return static_cast<int32_t>(offsetof(Heatmap_t2623796516_StaticFields, ___RED_THRESHOLD_3)); }
	inline int32_t get_RED_THRESHOLD_3() const { return ___RED_THRESHOLD_3; }
	inline int32_t* get_address_of_RED_THRESHOLD_3() { return &___RED_THRESHOLD_3; }
	inline void set_RED_THRESHOLD_3(int32_t value)
	{
		___RED_THRESHOLD_3 = value;
	}

	inline static int32_t get_offset_of_GREEN_THRESHOLD_4() { return static_cast<int32_t>(offsetof(Heatmap_t2623796516_StaticFields, ___GREEN_THRESHOLD_4)); }
	inline int32_t get_GREEN_THRESHOLD_4() const { return ___GREEN_THRESHOLD_4; }
	inline int32_t* get_address_of_GREEN_THRESHOLD_4() { return &___GREEN_THRESHOLD_4; }
	inline void set_GREEN_THRESHOLD_4(int32_t value)
	{
		___GREEN_THRESHOLD_4 = value;
	}

	inline static int32_t get_offset_of_BLUE_THRESHOLD_5() { return static_cast<int32_t>(offsetof(Heatmap_t2623796516_StaticFields, ___BLUE_THRESHOLD_5)); }
	inline int32_t get_BLUE_THRESHOLD_5() const { return ___BLUE_THRESHOLD_5; }
	inline int32_t* get_address_of_BLUE_THRESHOLD_5() { return &___BLUE_THRESHOLD_5; }
	inline void set_BLUE_THRESHOLD_5(int32_t value)
	{
		___BLUE_THRESHOLD_5 = value;
	}

	inline static int32_t get_offset_of_MINIMUM_THRESHOLD_6() { return static_cast<int32_t>(offsetof(Heatmap_t2623796516_StaticFields, ___MINIMUM_THRESHOLD_6)); }
	inline int32_t get_MINIMUM_THRESHOLD_6() const { return ___MINIMUM_THRESHOLD_6; }
	inline int32_t* get_address_of_MINIMUM_THRESHOLD_6() { return &___MINIMUM_THRESHOLD_6; }
	inline void set_MINIMUM_THRESHOLD_6(int32_t value)
	{
		___MINIMUM_THRESHOLD_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
