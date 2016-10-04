#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.Common.RandomObject`1<System.Object>
struct  RandomObject_1_t1239955595  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<T> MirzaBeig.Common.RandomObject`1::objects
	List_1_t2058570427 * ___objects_0;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(RandomObject_1_t1239955595, ___objects_0)); }
	inline List_1_t2058570427 * get_objects_0() const { return ___objects_0; }
	inline List_1_t2058570427 ** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(List_1_t2058570427 * value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier(&___objects_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
