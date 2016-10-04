#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CrowdConfiguration
struct  CrowdConfiguration_t154978663  : public Il2CppObject
{
public:
	// System.String CrowdConfiguration::los
	String_t* ___los_0;
	// System.String CrowdConfiguration::loa
	String_t* ___loa_1;
	// System.String CrowdConfiguration::loh
	String_t* ___loh_2;

public:
	inline static int32_t get_offset_of_los_0() { return static_cast<int32_t>(offsetof(CrowdConfiguration_t154978663, ___los_0)); }
	inline String_t* get_los_0() const { return ___los_0; }
	inline String_t** get_address_of_los_0() { return &___los_0; }
	inline void set_los_0(String_t* value)
	{
		___los_0 = value;
		Il2CppCodeGenWriteBarrier(&___los_0, value);
	}

	inline static int32_t get_offset_of_loa_1() { return static_cast<int32_t>(offsetof(CrowdConfiguration_t154978663, ___loa_1)); }
	inline String_t* get_loa_1() const { return ___loa_1; }
	inline String_t** get_address_of_loa_1() { return &___loa_1; }
	inline void set_loa_1(String_t* value)
	{
		___loa_1 = value;
		Il2CppCodeGenWriteBarrier(&___loa_1, value);
	}

	inline static int32_t get_offset_of_loh_2() { return static_cast<int32_t>(offsetof(CrowdConfiguration_t154978663, ___loh_2)); }
	inline String_t* get_loh_2() const { return ___loh_2; }
	inline String_t** get_address_of_loh_2() { return &___loh_2; }
	inline void set_loh_2(String_t* value)
	{
		___loh_2 = value;
		Il2CppCodeGenWriteBarrier(&___loh_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
