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

// MirzaBeig.Common.MathUtility/RangeDouble
struct  RangeDouble_t3332266232  : public Il2CppObject
{
public:
	// System.Double MirzaBeig.Common.MathUtility/RangeDouble::min
	double ___min_0;
	// System.Double MirzaBeig.Common.MathUtility/RangeDouble::max
	double ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeDouble_t3332266232, ___min_0)); }
	inline double get_min_0() const { return ___min_0; }
	inline double* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(double value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeDouble_t3332266232, ___max_1)); }
	inline double get_max_1() const { return ___max_1; }
	inline double* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(double value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
