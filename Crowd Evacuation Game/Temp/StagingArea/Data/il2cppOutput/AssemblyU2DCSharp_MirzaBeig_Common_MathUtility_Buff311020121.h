#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<MirzaBeig.Common.MathUtility/TimeStampedValue`1<System.Object>>
struct List_1_t1950472745;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.Common.MathUtility/Buffer`1<System.Object>
struct  Buffer_1_t311020121  : public Il2CppObject
{
public:
	// System.Single MirzaBeig.Common.MathUtility/Buffer`1::bufferTime
	float ___bufferTime_0;
	// System.Collections.Generic.List`1<MirzaBeig.Common.MathUtility/TimeStampedValue`1<T>> MirzaBeig.Common.MathUtility/Buffer`1::buffer
	List_1_t1950472745 * ___buffer_1;

public:
	inline static int32_t get_offset_of_bufferTime_0() { return static_cast<int32_t>(offsetof(Buffer_1_t311020121, ___bufferTime_0)); }
	inline float get_bufferTime_0() const { return ___bufferTime_0; }
	inline float* get_address_of_bufferTime_0() { return &___bufferTime_0; }
	inline void set_bufferTime_0(float value)
	{
		___bufferTime_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(Buffer_1_t311020121, ___buffer_1)); }
	inline List_1_t1950472745 * get_buffer_1() const { return ___buffer_1; }
	inline List_1_t1950472745 ** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(List_1_t1950472745 * value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
