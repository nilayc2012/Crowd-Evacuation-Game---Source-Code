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
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t3312055674;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Joystick_AxisOption1467568959.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick
struct  Joystick_t549888914  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Joystick::MovementRange
	int32_t ___MovementRange_2;
	// Joystick/AxisOption Joystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String Joystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Vector3 Joystick::startPos
	Vector3_t2243707580  ___startPos_6;
	// System.Boolean Joystick::useX
	bool ___useX_7;
	// System.Boolean Joystick::useY
	bool ___useY_8;
	// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis Joystick::horizontalVirtualAxis
	VirtualAxis_t3312055674 * ___horizontalVirtualAxis_9;
	// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis Joystick::verticalVirtualAxis
	VirtualAxis_t3312055674 * ___verticalVirtualAxis_10;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___MovementRange_2)); }
	inline int32_t get_MovementRange_2() const { return ___MovementRange_2; }
	inline int32_t* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(int32_t value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_axesToUse_3() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___axesToUse_3)); }
	inline int32_t get_axesToUse_3() const { return ___axesToUse_3; }
	inline int32_t* get_address_of_axesToUse_3() { return &___axesToUse_3; }
	inline void set_axesToUse_3(int32_t value)
	{
		___axesToUse_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_4, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_5, value);
	}

	inline static int32_t get_offset_of_startPos_6() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___startPos_6)); }
	inline Vector3_t2243707580  get_startPos_6() const { return ___startPos_6; }
	inline Vector3_t2243707580 * get_address_of_startPos_6() { return &___startPos_6; }
	inline void set_startPos_6(Vector3_t2243707580  value)
	{
		___startPos_6 = value;
	}

	inline static int32_t get_offset_of_useX_7() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___useX_7)); }
	inline bool get_useX_7() const { return ___useX_7; }
	inline bool* get_address_of_useX_7() { return &___useX_7; }
	inline void set_useX_7(bool value)
	{
		___useX_7 = value;
	}

	inline static int32_t get_offset_of_useY_8() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___useY_8)); }
	inline bool get_useY_8() const { return ___useY_8; }
	inline bool* get_address_of_useY_8() { return &___useY_8; }
	inline void set_useY_8(bool value)
	{
		___useY_8 = value;
	}

	inline static int32_t get_offset_of_horizontalVirtualAxis_9() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___horizontalVirtualAxis_9)); }
	inline VirtualAxis_t3312055674 * get_horizontalVirtualAxis_9() const { return ___horizontalVirtualAxis_9; }
	inline VirtualAxis_t3312055674 ** get_address_of_horizontalVirtualAxis_9() { return &___horizontalVirtualAxis_9; }
	inline void set_horizontalVirtualAxis_9(VirtualAxis_t3312055674 * value)
	{
		___horizontalVirtualAxis_9 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalVirtualAxis_9, value);
	}

	inline static int32_t get_offset_of_verticalVirtualAxis_10() { return static_cast<int32_t>(offsetof(Joystick_t549888914, ___verticalVirtualAxis_10)); }
	inline VirtualAxis_t3312055674 * get_verticalVirtualAxis_10() const { return ___verticalVirtualAxis_10; }
	inline VirtualAxis_t3312055674 ** get_address_of_verticalVirtualAxis_10() { return &___verticalVirtualAxis_10; }
	inline void set_verticalVirtualAxis_10(VirtualAxis_t3312055674 * value)
	{
		___verticalVirtualAxis_10 = value;
		Il2CppCodeGenWriteBarrier(&___verticalVirtualAxis_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
