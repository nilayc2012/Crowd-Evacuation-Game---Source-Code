#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.Animation.Rotator
struct  Rotator_t617549573  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 MirzaBeig.Animation.Rotator::worldRotationSpeed
	Vector3_t2243707580  ___worldRotationSpeed_2;
	// UnityEngine.Vector3 MirzaBeig.Animation.Rotator::localRotationSpeed
	Vector3_t2243707580  ___localRotationSpeed_3;

public:
	inline static int32_t get_offset_of_worldRotationSpeed_2() { return static_cast<int32_t>(offsetof(Rotator_t617549573, ___worldRotationSpeed_2)); }
	inline Vector3_t2243707580  get_worldRotationSpeed_2() const { return ___worldRotationSpeed_2; }
	inline Vector3_t2243707580 * get_address_of_worldRotationSpeed_2() { return &___worldRotationSpeed_2; }
	inline void set_worldRotationSpeed_2(Vector3_t2243707580  value)
	{
		___worldRotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_localRotationSpeed_3() { return static_cast<int32_t>(offsetof(Rotator_t617549573, ___localRotationSpeed_3)); }
	inline Vector3_t2243707580  get_localRotationSpeed_3() const { return ___localRotationSpeed_3; }
	inline Vector3_t2243707580 * get_address_of_localRotationSpeed_3() { return &___localRotationSpeed_3; }
	inline void set_localRotationSpeed_3(Vector3_t2243707580  value)
	{
		___localRotationSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
