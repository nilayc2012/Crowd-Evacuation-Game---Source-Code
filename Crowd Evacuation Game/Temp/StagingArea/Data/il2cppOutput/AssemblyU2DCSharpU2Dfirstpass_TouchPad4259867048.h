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
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TouchPad_AxisOption1063957101.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TouchPad_ControlStyl3894503601.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchPad
struct  TouchPad_t4259867048  : public MonoBehaviour_t1158329972
{
public:
	// TouchPad/AxisOption TouchPad::axesToUse
	int32_t ___axesToUse_2;
	// TouchPad/ControlStyle TouchPad::controlStyle
	int32_t ___controlStyle_3;
	// System.String TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String TouchPad::verticalAxisName
	String_t* ___verticalAxisName_5;
	// System.Single TouchPad::sensitivity
	float ___sensitivity_6;
	// UnityEngine.Vector3 TouchPad::startPos
	Vector3_t2243707580  ___startPos_7;
	// UnityEngine.Vector2 TouchPad::previousDelta
	Vector2_t2243707579  ___previousDelta_8;
	// UnityEngine.Vector3 TouchPad::m_JoytickOutput
	Vector3_t2243707580  ___m_JoytickOutput_9;
	// System.Boolean TouchPad::useX
	bool ___useX_10;
	// System.Boolean TouchPad::useY
	bool ___useY_11;
	// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis TouchPad::horizontalVirtualAxis
	VirtualAxis_t3312055674 * ___horizontalVirtualAxis_12;
	// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis TouchPad::verticalVirtualAxis
	VirtualAxis_t3312055674 * ___verticalVirtualAxis_13;
	// System.Boolean TouchPad::dragging
	bool ___dragging_14;
	// System.Int32 TouchPad::id
	int32_t ___id_15;
	// UnityEngine.Vector3 TouchPad::center
	Vector3_t2243707580  ___center_16;
	// UnityEngine.UI.Image TouchPad::image
	Image_t2042527209 * ___image_17;
	// UnityEngine.Vector2 TouchPad::previousTouchPos
	Vector2_t2243707579  ___previousTouchPos_18;

public:
	inline static int32_t get_offset_of_axesToUse_2() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___axesToUse_2)); }
	inline int32_t get_axesToUse_2() const { return ___axesToUse_2; }
	inline int32_t* get_address_of_axesToUse_2() { return &___axesToUse_2; }
	inline void set_axesToUse_2(int32_t value)
	{
		___axesToUse_2 = value;
	}

	inline static int32_t get_offset_of_controlStyle_3() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___controlStyle_3)); }
	inline int32_t get_controlStyle_3() const { return ___controlStyle_3; }
	inline int32_t* get_address_of_controlStyle_3() { return &___controlStyle_3; }
	inline void set_controlStyle_3(int32_t value)
	{
		___controlStyle_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_4, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_5, value);
	}

	inline static int32_t get_offset_of_sensitivity_6() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___sensitivity_6)); }
	inline float get_sensitivity_6() const { return ___sensitivity_6; }
	inline float* get_address_of_sensitivity_6() { return &___sensitivity_6; }
	inline void set_sensitivity_6(float value)
	{
		___sensitivity_6 = value;
	}

	inline static int32_t get_offset_of_startPos_7() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___startPos_7)); }
	inline Vector3_t2243707580  get_startPos_7() const { return ___startPos_7; }
	inline Vector3_t2243707580 * get_address_of_startPos_7() { return &___startPos_7; }
	inline void set_startPos_7(Vector3_t2243707580  value)
	{
		___startPos_7 = value;
	}

	inline static int32_t get_offset_of_previousDelta_8() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___previousDelta_8)); }
	inline Vector2_t2243707579  get_previousDelta_8() const { return ___previousDelta_8; }
	inline Vector2_t2243707579 * get_address_of_previousDelta_8() { return &___previousDelta_8; }
	inline void set_previousDelta_8(Vector2_t2243707579  value)
	{
		___previousDelta_8 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_9() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___m_JoytickOutput_9)); }
	inline Vector3_t2243707580  get_m_JoytickOutput_9() const { return ___m_JoytickOutput_9; }
	inline Vector3_t2243707580 * get_address_of_m_JoytickOutput_9() { return &___m_JoytickOutput_9; }
	inline void set_m_JoytickOutput_9(Vector3_t2243707580  value)
	{
		___m_JoytickOutput_9 = value;
	}

	inline static int32_t get_offset_of_useX_10() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___useX_10)); }
	inline bool get_useX_10() const { return ___useX_10; }
	inline bool* get_address_of_useX_10() { return &___useX_10; }
	inline void set_useX_10(bool value)
	{
		___useX_10 = value;
	}

	inline static int32_t get_offset_of_useY_11() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___useY_11)); }
	inline bool get_useY_11() const { return ___useY_11; }
	inline bool* get_address_of_useY_11() { return &___useY_11; }
	inline void set_useY_11(bool value)
	{
		___useY_11 = value;
	}

	inline static int32_t get_offset_of_horizontalVirtualAxis_12() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___horizontalVirtualAxis_12)); }
	inline VirtualAxis_t3312055674 * get_horizontalVirtualAxis_12() const { return ___horizontalVirtualAxis_12; }
	inline VirtualAxis_t3312055674 ** get_address_of_horizontalVirtualAxis_12() { return &___horizontalVirtualAxis_12; }
	inline void set_horizontalVirtualAxis_12(VirtualAxis_t3312055674 * value)
	{
		___horizontalVirtualAxis_12 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalVirtualAxis_12, value);
	}

	inline static int32_t get_offset_of_verticalVirtualAxis_13() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___verticalVirtualAxis_13)); }
	inline VirtualAxis_t3312055674 * get_verticalVirtualAxis_13() const { return ___verticalVirtualAxis_13; }
	inline VirtualAxis_t3312055674 ** get_address_of_verticalVirtualAxis_13() { return &___verticalVirtualAxis_13; }
	inline void set_verticalVirtualAxis_13(VirtualAxis_t3312055674 * value)
	{
		___verticalVirtualAxis_13 = value;
		Il2CppCodeGenWriteBarrier(&___verticalVirtualAxis_13, value);
	}

	inline static int32_t get_offset_of_dragging_14() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___dragging_14)); }
	inline bool get_dragging_14() const { return ___dragging_14; }
	inline bool* get_address_of_dragging_14() { return &___dragging_14; }
	inline void set_dragging_14(bool value)
	{
		___dragging_14 = value;
	}

	inline static int32_t get_offset_of_id_15() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___id_15)); }
	inline int32_t get_id_15() const { return ___id_15; }
	inline int32_t* get_address_of_id_15() { return &___id_15; }
	inline void set_id_15(int32_t value)
	{
		___id_15 = value;
	}

	inline static int32_t get_offset_of_center_16() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___center_16)); }
	inline Vector3_t2243707580  get_center_16() const { return ___center_16; }
	inline Vector3_t2243707580 * get_address_of_center_16() { return &___center_16; }
	inline void set_center_16(Vector3_t2243707580  value)
	{
		___center_16 = value;
	}

	inline static int32_t get_offset_of_image_17() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___image_17)); }
	inline Image_t2042527209 * get_image_17() const { return ___image_17; }
	inline Image_t2042527209 ** get_address_of_image_17() { return &___image_17; }
	inline void set_image_17(Image_t2042527209 * value)
	{
		___image_17 = value;
		Il2CppCodeGenWriteBarrier(&___image_17, value);
	}

	inline static int32_t get_offset_of_previousTouchPos_18() { return static_cast<int32_t>(offsetof(TouchPad_t4259867048, ___previousTouchPos_18)); }
	inline Vector2_t2243707579  get_previousTouchPos_18() const { return ___previousTouchPos_18; }
	inline Vector2_t2243707579 * get_address_of_previousTouchPos_18() { return &___previousTouchPos_18; }
	inline void set_previousTouchPos_18(Vector2_t2243707579  value)
	{
		___previousTouchPos_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
