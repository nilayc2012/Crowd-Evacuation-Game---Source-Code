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

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct  VirtualButton_t1481111999  : public Il2CppObject
{
public:
	// System.Int32 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::lastPressedFrame
	int32_t ___lastPressedFrame_0;
	// System.Int32 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::releasedFrame
	int32_t ___releasedFrame_1;
	// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::pressed
	bool ___pressed_2;
	// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_3;
	// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_lastPressedFrame_0() { return static_cast<int32_t>(offsetof(VirtualButton_t1481111999, ___lastPressedFrame_0)); }
	inline int32_t get_lastPressedFrame_0() const { return ___lastPressedFrame_0; }
	inline int32_t* get_address_of_lastPressedFrame_0() { return &___lastPressedFrame_0; }
	inline void set_lastPressedFrame_0(int32_t value)
	{
		___lastPressedFrame_0 = value;
	}

	inline static int32_t get_offset_of_releasedFrame_1() { return static_cast<int32_t>(offsetof(VirtualButton_t1481111999, ___releasedFrame_1)); }
	inline int32_t get_releasedFrame_1() const { return ___releasedFrame_1; }
	inline int32_t* get_address_of_releasedFrame_1() { return &___releasedFrame_1; }
	inline void set_releasedFrame_1(int32_t value)
	{
		___releasedFrame_1 = value;
	}

	inline static int32_t get_offset_of_pressed_2() { return static_cast<int32_t>(offsetof(VirtualButton_t1481111999, ___pressed_2)); }
	inline bool get_pressed_2() const { return ___pressed_2; }
	inline bool* get_address_of_pressed_2() { return &___pressed_2; }
	inline void set_pressed_2(bool value)
	{
		___pressed_2 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VirtualButton_t1481111999, ___U3CnameU3Ek__BackingField_3)); }
	inline String_t* get_U3CnameU3Ek__BackingField_3() const { return ___U3CnameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_3() { return &___U3CnameU3Ek__BackingField_3; }
	inline void set_U3CnameU3Ek__BackingField_3(String_t* value)
	{
		___U3CnameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VirtualButton_t1481111999, ___U3CmatchWithInputManagerU3Ek__BackingField_4)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_4() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_4() { return &___U3CmatchWithInputManagerU3Ek__BackingField_4; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_4(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
