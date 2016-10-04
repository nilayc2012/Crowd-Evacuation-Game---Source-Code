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

// MirzaBeig.Common.MathUtility/DualContainer`1<System.Object>
struct  DualContainer_1_t188051494  : public Il2CppObject
{
public:
	// T MirzaBeig.Common.MathUtility/DualContainer`1::a
	Il2CppObject * ___a_0;
	// T MirzaBeig.Common.MathUtility/DualContainer`1::b
	Il2CppObject * ___b_1;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(DualContainer_1_t188051494, ___a_0)); }
	inline Il2CppObject * get_a_0() const { return ___a_0; }
	inline Il2CppObject ** get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(Il2CppObject * value)
	{
		___a_0 = value;
		Il2CppCodeGenWriteBarrier(&___a_0, value);
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(DualContainer_1_t188051494, ___b_1)); }
	inline Il2CppObject * get_b_1() const { return ___b_1; }
	inline Il2CppObject ** get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(Il2CppObject * value)
	{
		___b_1 = value;
		Il2CppCodeGenWriteBarrier(&___b_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
