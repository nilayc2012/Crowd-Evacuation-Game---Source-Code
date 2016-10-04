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

// GetHeatMap
struct  GetHeatMap_t3051052852  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GetHeatMap::heatMapPlane
	GameObject_t1756533147 * ___heatMapPlane_2;
	// UnityEngine.GameObject GetHeatMap::heatPlane
	GameObject_t1756533147 * ___heatPlane_3;
	// UnityEngine.GameObject GetHeatMap::light
	GameObject_t1756533147 * ___light_4;
	// UnityEngine.GameObject GetHeatMap::mainCam
	GameObject_t1756533147 * ___mainCam_5;

public:
	inline static int32_t get_offset_of_heatMapPlane_2() { return static_cast<int32_t>(offsetof(GetHeatMap_t3051052852, ___heatMapPlane_2)); }
	inline GameObject_t1756533147 * get_heatMapPlane_2() const { return ___heatMapPlane_2; }
	inline GameObject_t1756533147 ** get_address_of_heatMapPlane_2() { return &___heatMapPlane_2; }
	inline void set_heatMapPlane_2(GameObject_t1756533147 * value)
	{
		___heatMapPlane_2 = value;
		Il2CppCodeGenWriteBarrier(&___heatMapPlane_2, value);
	}

	inline static int32_t get_offset_of_heatPlane_3() { return static_cast<int32_t>(offsetof(GetHeatMap_t3051052852, ___heatPlane_3)); }
	inline GameObject_t1756533147 * get_heatPlane_3() const { return ___heatPlane_3; }
	inline GameObject_t1756533147 ** get_address_of_heatPlane_3() { return &___heatPlane_3; }
	inline void set_heatPlane_3(GameObject_t1756533147 * value)
	{
		___heatPlane_3 = value;
		Il2CppCodeGenWriteBarrier(&___heatPlane_3, value);
	}

	inline static int32_t get_offset_of_light_4() { return static_cast<int32_t>(offsetof(GetHeatMap_t3051052852, ___light_4)); }
	inline GameObject_t1756533147 * get_light_4() const { return ___light_4; }
	inline GameObject_t1756533147 ** get_address_of_light_4() { return &___light_4; }
	inline void set_light_4(GameObject_t1756533147 * value)
	{
		___light_4 = value;
		Il2CppCodeGenWriteBarrier(&___light_4, value);
	}

	inline static int32_t get_offset_of_mainCam_5() { return static_cast<int32_t>(offsetof(GetHeatMap_t3051052852, ___mainCam_5)); }
	inline GameObject_t1756533147 * get_mainCam_5() const { return ___mainCam_5; }
	inline GameObject_t1756533147 ** get_address_of_mainCam_5() { return &___mainCam_5; }
	inline void set_mainCam_5(GameObject_t1756533147 * value)
	{
		___mainCam_5 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
