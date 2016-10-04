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

// UnitySampleAssets.Utility.LerpControlledBob
struct  LerpControlledBob_t4212358120  : public Il2CppObject
{
public:
	// System.Single UnitySampleAssets.Utility.LerpControlledBob::BobDuration
	float ___BobDuration_0;
	// System.Single UnitySampleAssets.Utility.LerpControlledBob::BobAmount
	float ___BobAmount_1;
	// System.Single UnitySampleAssets.Utility.LerpControlledBob::offset
	float ___offset_2;

public:
	inline static int32_t get_offset_of_BobDuration_0() { return static_cast<int32_t>(offsetof(LerpControlledBob_t4212358120, ___BobDuration_0)); }
	inline float get_BobDuration_0() const { return ___BobDuration_0; }
	inline float* get_address_of_BobDuration_0() { return &___BobDuration_0; }
	inline void set_BobDuration_0(float value)
	{
		___BobDuration_0 = value;
	}

	inline static int32_t get_offset_of_BobAmount_1() { return static_cast<int32_t>(offsetof(LerpControlledBob_t4212358120, ___BobAmount_1)); }
	inline float get_BobAmount_1() const { return ___BobAmount_1; }
	inline float* get_address_of_BobAmount_1() { return &___BobAmount_1; }
	inline void set_BobAmount_1(float value)
	{
		___BobAmount_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(LerpControlledBob_t4212358120, ___offset_2)); }
	inline float get_offset_2() const { return ___offset_2; }
	inline float* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(float value)
	{
		___offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
