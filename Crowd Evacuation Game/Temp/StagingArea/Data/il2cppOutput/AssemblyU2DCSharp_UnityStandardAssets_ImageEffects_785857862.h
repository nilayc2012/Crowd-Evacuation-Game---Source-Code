#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects2152133263.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_859433922.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.EdgeDetection
struct  EdgeDetection_t785857862  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::mode
	int32_t ___mode_5;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityDepth
	float ___sensitivityDepth_6;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityNormals
	float ___sensitivityNormals_7;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::lumThreshold
	float ___lumThreshold_8;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgeExp
	float ___edgeExp_9;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sampleDist
	float ___sampleDist_10;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnly
	float ___edgesOnly_11;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnlyBgColor
	Color_t2020392075  ___edgesOnlyBgColor_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectShader
	Shader_t2430389951 * ___edgeDetectShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectMaterial
	Material_t193706927 * ___edgeDetectMaterial_14;
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::oldMode
	int32_t ___oldMode_15;

public:
	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_sensitivityDepth_6() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___sensitivityDepth_6)); }
	inline float get_sensitivityDepth_6() const { return ___sensitivityDepth_6; }
	inline float* get_address_of_sensitivityDepth_6() { return &___sensitivityDepth_6; }
	inline void set_sensitivityDepth_6(float value)
	{
		___sensitivityDepth_6 = value;
	}

	inline static int32_t get_offset_of_sensitivityNormals_7() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___sensitivityNormals_7)); }
	inline float get_sensitivityNormals_7() const { return ___sensitivityNormals_7; }
	inline float* get_address_of_sensitivityNormals_7() { return &___sensitivityNormals_7; }
	inline void set_sensitivityNormals_7(float value)
	{
		___sensitivityNormals_7 = value;
	}

	inline static int32_t get_offset_of_lumThreshold_8() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___lumThreshold_8)); }
	inline float get_lumThreshold_8() const { return ___lumThreshold_8; }
	inline float* get_address_of_lumThreshold_8() { return &___lumThreshold_8; }
	inline void set_lumThreshold_8(float value)
	{
		___lumThreshold_8 = value;
	}

	inline static int32_t get_offset_of_edgeExp_9() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgeExp_9)); }
	inline float get_edgeExp_9() const { return ___edgeExp_9; }
	inline float* get_address_of_edgeExp_9() { return &___edgeExp_9; }
	inline void set_edgeExp_9(float value)
	{
		___edgeExp_9 = value;
	}

	inline static int32_t get_offset_of_sampleDist_10() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___sampleDist_10)); }
	inline float get_sampleDist_10() const { return ___sampleDist_10; }
	inline float* get_address_of_sampleDist_10() { return &___sampleDist_10; }
	inline void set_sampleDist_10(float value)
	{
		___sampleDist_10 = value;
	}

	inline static int32_t get_offset_of_edgesOnly_11() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgesOnly_11)); }
	inline float get_edgesOnly_11() const { return ___edgesOnly_11; }
	inline float* get_address_of_edgesOnly_11() { return &___edgesOnly_11; }
	inline void set_edgesOnly_11(float value)
	{
		___edgesOnly_11 = value;
	}

	inline static int32_t get_offset_of_edgesOnlyBgColor_12() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgesOnlyBgColor_12)); }
	inline Color_t2020392075  get_edgesOnlyBgColor_12() const { return ___edgesOnlyBgColor_12; }
	inline Color_t2020392075 * get_address_of_edgesOnlyBgColor_12() { return &___edgesOnlyBgColor_12; }
	inline void set_edgesOnlyBgColor_12(Color_t2020392075  value)
	{
		___edgesOnlyBgColor_12 = value;
	}

	inline static int32_t get_offset_of_edgeDetectShader_13() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgeDetectShader_13)); }
	inline Shader_t2430389951 * get_edgeDetectShader_13() const { return ___edgeDetectShader_13; }
	inline Shader_t2430389951 ** get_address_of_edgeDetectShader_13() { return &___edgeDetectShader_13; }
	inline void set_edgeDetectShader_13(Shader_t2430389951 * value)
	{
		___edgeDetectShader_13 = value;
		Il2CppCodeGenWriteBarrier(&___edgeDetectShader_13, value);
	}

	inline static int32_t get_offset_of_edgeDetectMaterial_14() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___edgeDetectMaterial_14)); }
	inline Material_t193706927 * get_edgeDetectMaterial_14() const { return ___edgeDetectMaterial_14; }
	inline Material_t193706927 ** get_address_of_edgeDetectMaterial_14() { return &___edgeDetectMaterial_14; }
	inline void set_edgeDetectMaterial_14(Material_t193706927 * value)
	{
		___edgeDetectMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___edgeDetectMaterial_14, value);
	}

	inline static int32_t get_offset_of_oldMode_15() { return static_cast<int32_t>(offsetof(EdgeDetection_t785857862, ___oldMode_15)); }
	inline int32_t get_oldMode_15() const { return ___oldMode_15; }
	inline int32_t* get_address_of_oldMode_15() { return &___oldMode_15; }
	inline void set_oldMode_15(int32_t value)
	{
		___oldMode_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
