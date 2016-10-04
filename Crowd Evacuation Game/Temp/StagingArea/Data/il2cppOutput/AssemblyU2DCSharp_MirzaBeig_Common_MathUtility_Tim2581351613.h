#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.Common.MathUtility/TimeStampedValue`1<System.Object>
struct  TimeStampedValue_1_t2581351613  : public Il2CppObject
{
public:
	// T MirzaBeig.Common.MathUtility/TimeStampedValue`1::value
	Il2CppObject * ___value_0;
	// System.Single MirzaBeig.Common.MathUtility/TimeStampedValue`1::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(TimeStampedValue_1_t2581351613, ___value_0)); }
	inline Il2CppObject * get_value_0() const { return ___value_0; }
	inline Il2CppObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Il2CppObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(TimeStampedValue_1_t2581351613, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
