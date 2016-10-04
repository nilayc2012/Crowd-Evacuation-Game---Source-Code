#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GE_FantasySkyboxFREE_Demo/LightAndSky[]
struct LightAndSkyU5BU5D_t3264464105;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GE_FantasySkyboxFREE_Demo
struct  GE_FantasySkyboxFREE_Demo_t2927655501  : public MonoBehaviour_t1158329972
{
public:
	// GE_FantasySkyboxFREE_Demo/LightAndSky[] GE_FantasySkyboxFREE_Demo::m_LightAndSkyList
	LightAndSkyU5BU5D_t3264464105* ___m_LightAndSkyList_2;
	// System.Int32 GE_FantasySkyboxFREE_Demo::m_CurrentSkyBox
	int32_t ___m_CurrentSkyBox_3;

public:
	inline static int32_t get_offset_of_m_LightAndSkyList_2() { return static_cast<int32_t>(offsetof(GE_FantasySkyboxFREE_Demo_t2927655501, ___m_LightAndSkyList_2)); }
	inline LightAndSkyU5BU5D_t3264464105* get_m_LightAndSkyList_2() const { return ___m_LightAndSkyList_2; }
	inline LightAndSkyU5BU5D_t3264464105** get_address_of_m_LightAndSkyList_2() { return &___m_LightAndSkyList_2; }
	inline void set_m_LightAndSkyList_2(LightAndSkyU5BU5D_t3264464105* value)
	{
		___m_LightAndSkyList_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_LightAndSkyList_2, value);
	}

	inline static int32_t get_offset_of_m_CurrentSkyBox_3() { return static_cast<int32_t>(offsetof(GE_FantasySkyboxFREE_Demo_t2927655501, ___m_CurrentSkyBox_3)); }
	inline int32_t get_m_CurrentSkyBox_3() const { return ___m_CurrentSkyBox_3; }
	inline int32_t* get_address_of_m_CurrentSkyBox_3() { return &___m_CurrentSkyBox_3; }
	inline void set_m_CurrentSkyBox_3(int32_t value)
	{
		___m_CurrentSkyBox_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
