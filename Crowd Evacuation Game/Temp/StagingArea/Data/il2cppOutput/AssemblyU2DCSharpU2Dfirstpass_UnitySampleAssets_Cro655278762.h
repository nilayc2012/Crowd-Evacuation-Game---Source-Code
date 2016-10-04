#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnitySampleAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t2475396235;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t655278762  : public Il2CppObject
{
public:

public:
};

struct CrossPlatformInputManager_t655278762_StaticFields
{
public:
	// UnitySampleAssets.CrossPlatformInput.VirtualInput UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::virtualInput
	VirtualInput_t2475396235 * ___virtualInput_0;

public:
	inline static int32_t get_offset_of_virtualInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t655278762_StaticFields, ___virtualInput_0)); }
	inline VirtualInput_t2475396235 * get_virtualInput_0() const { return ___virtualInput_0; }
	inline VirtualInput_t2475396235 ** get_address_of_virtualInput_0() { return &___virtualInput_0; }
	inline void set_virtualInput_0(VirtualInput_t2475396235 * value)
	{
		___virtualInput_0 = value;
		Il2CppCodeGenWriteBarrier(&___virtualInput_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
