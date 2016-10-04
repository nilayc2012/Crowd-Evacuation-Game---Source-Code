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
// UnityEngine.Light
struct Light_t494725636;
// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GE_FantasySkyboxFREE_Demo/LightAndSky
struct  LightAndSky_t756612920  : public Il2CppObject
{
public:
	// System.String GE_FantasySkyboxFREE_Demo/LightAndSky::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.Light GE_FantasySkyboxFREE_Demo/LightAndSky::m_Light
	Light_t494725636 * ___m_Light_1;
	// UnityEngine.Material GE_FantasySkyboxFREE_Demo/LightAndSky::m_Skybox
	Material_t193706927 * ___m_Skybox_2;
	// UnityEngine.Color GE_FantasySkyboxFREE_Demo/LightAndSky::m_FogColor
	Color_t2020392075  ___m_FogColor_3;
	// UnityEngine.Color GE_FantasySkyboxFREE_Demo/LightAndSky::m_AmbientLight
	Color_t2020392075  ___m_AmbientLight_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(LightAndSky_t756612920, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Name_0, value);
	}

	inline static int32_t get_offset_of_m_Light_1() { return static_cast<int32_t>(offsetof(LightAndSky_t756612920, ___m_Light_1)); }
	inline Light_t494725636 * get_m_Light_1() const { return ___m_Light_1; }
	inline Light_t494725636 ** get_address_of_m_Light_1() { return &___m_Light_1; }
	inline void set_m_Light_1(Light_t494725636 * value)
	{
		___m_Light_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Light_1, value);
	}

	inline static int32_t get_offset_of_m_Skybox_2() { return static_cast<int32_t>(offsetof(LightAndSky_t756612920, ___m_Skybox_2)); }
	inline Material_t193706927 * get_m_Skybox_2() const { return ___m_Skybox_2; }
	inline Material_t193706927 ** get_address_of_m_Skybox_2() { return &___m_Skybox_2; }
	inline void set_m_Skybox_2(Material_t193706927 * value)
	{
		___m_Skybox_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Skybox_2, value);
	}

	inline static int32_t get_offset_of_m_FogColor_3() { return static_cast<int32_t>(offsetof(LightAndSky_t756612920, ___m_FogColor_3)); }
	inline Color_t2020392075  get_m_FogColor_3() const { return ___m_FogColor_3; }
	inline Color_t2020392075 * get_address_of_m_FogColor_3() { return &___m_FogColor_3; }
	inline void set_m_FogColor_3(Color_t2020392075  value)
	{
		___m_FogColor_3 = value;
	}

	inline static int32_t get_offset_of_m_AmbientLight_4() { return static_cast<int32_t>(offsetof(LightAndSky_t756612920, ___m_AmbientLight_4)); }
	inline Color_t2020392075  get_m_AmbientLight_4() const { return ___m_AmbientLight_4; }
	inline Color_t2020392075 * get_address_of_m_AmbientLight_4() { return &___m_AmbientLight_4; }
	inline void set_m_AmbientLight_4(Color_t2020392075  value)
	{
		___m_AmbientLight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
