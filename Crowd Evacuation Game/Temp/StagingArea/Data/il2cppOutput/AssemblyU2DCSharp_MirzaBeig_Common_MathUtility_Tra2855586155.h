#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.Common.MathUtility/TransformContainer
struct  TransformContainer_t2855586155  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 MirzaBeig.Common.MathUtility/TransformContainer::position
	Vector3_t2243707580  ___position_0;
	// UnityEngine.Quaternion MirzaBeig.Common.MathUtility/TransformContainer::rotation
	Quaternion_t4030073918  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TransformContainer_t2855586155, ___position_0)); }
	inline Vector3_t2243707580  get_position_0() const { return ___position_0; }
	inline Vector3_t2243707580 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t2243707580  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(TransformContainer_t2855586155, ___rotation_1)); }
	inline Quaternion_t4030073918  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t4030073918 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t4030073918  value)
	{
		___rotation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
