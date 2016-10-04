#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSwitch
struct  CameraSwitch_t2061834593  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] CameraSwitch::objects
	GameObjectU5BU5D_t3057952154* ___objects_2;
	// System.Int32 CameraSwitch::currentActiveObject
	int32_t ___currentActiveObject_3;
	// UnityEngine.UI.Text CameraSwitch::text
	Text_t356221433 * ___text_4;

public:
	inline static int32_t get_offset_of_objects_2() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___objects_2)); }
	inline GameObjectU5BU5D_t3057952154* get_objects_2() const { return ___objects_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objects_2() { return &___objects_2; }
	inline void set_objects_2(GameObjectU5BU5D_t3057952154* value)
	{
		___objects_2 = value;
		Il2CppCodeGenWriteBarrier(&___objects_2, value);
	}

	inline static int32_t get_offset_of_currentActiveObject_3() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___currentActiveObject_3)); }
	inline int32_t get_currentActiveObject_3() const { return ___currentActiveObject_3; }
	inline int32_t* get_address_of_currentActiveObject_3() { return &___currentActiveObject_3; }
	inline void set_currentActiveObject_3(int32_t value)
	{
		___currentActiveObject_3 = value;
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___text_4)); }
	inline Text_t356221433 * get_text_4() const { return ___text_4; }
	inline Text_t356221433 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t356221433 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
