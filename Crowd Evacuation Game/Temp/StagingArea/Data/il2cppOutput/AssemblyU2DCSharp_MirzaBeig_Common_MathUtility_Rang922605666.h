#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.Common.MathUtility/RangeInt
struct  RangeInt_t922605666  : public Il2CppObject
{
public:
	// System.Int32 MirzaBeig.Common.MathUtility/RangeInt::min
	int32_t ___min_0;
	// System.Int32 MirzaBeig.Common.MathUtility/RangeInt::max
	int32_t ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeInt_t922605666, ___min_0)); }
	inline int32_t get_min_0() const { return ___min_0; }
	inline int32_t* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(int32_t value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeInt_t922605666, ___max_1)); }
	inline int32_t get_max_1() const { return ___max_1; }
	inline int32_t* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(int32_t value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
