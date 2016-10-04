#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TrailRenderer[]
struct TrailRendererU5BU5D_t182776078;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyOnTrailsDestroyed
struct  DestroyOnTrailsDestroyed_t3739940343  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean DestroyOnTrailsDestroyed::continousRefresh
	bool ___continousRefresh_2;
	// UnityEngine.TrailRenderer[] DestroyOnTrailsDestroyed::trails
	TrailRendererU5BU5D_t182776078* ___trails_3;

public:
	inline static int32_t get_offset_of_continousRefresh_2() { return static_cast<int32_t>(offsetof(DestroyOnTrailsDestroyed_t3739940343, ___continousRefresh_2)); }
	inline bool get_continousRefresh_2() const { return ___continousRefresh_2; }
	inline bool* get_address_of_continousRefresh_2() { return &___continousRefresh_2; }
	inline void set_continousRefresh_2(bool value)
	{
		___continousRefresh_2 = value;
	}

	inline static int32_t get_offset_of_trails_3() { return static_cast<int32_t>(offsetof(DestroyOnTrailsDestroyed_t3739940343, ___trails_3)); }
	inline TrailRendererU5BU5D_t182776078* get_trails_3() const { return ___trails_3; }
	inline TrailRendererU5BU5D_t182776078** get_address_of_trails_3() { return &___trails_3; }
	inline void set_trails_3(TrailRendererU5BU5D_t182776078* value)
	{
		___trails_3 = value;
		Il2CppCodeGenWriteBarrier(&___trails_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
