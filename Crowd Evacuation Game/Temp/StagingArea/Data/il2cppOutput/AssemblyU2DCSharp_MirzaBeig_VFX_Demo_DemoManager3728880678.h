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
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t1971649997;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1030026315;
// MirzaBeig.VFX.Demo.PerpetualParticleManager
struct PerpetualParticleManager_t167875647;
// MirzaBeig.VFX.Demo.InstantiatedParticleManager
struct InstantiatedParticleManager_t2557129379;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t3035069757;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_MirzaBeig_VFX_Demo_DemoManager_L2169184466.h"
#include "AssemblyU2DCSharp_MirzaBeig_VFX_Demo_DemoManager_C3175466352.h"
#include "AssemblyU2DCSharp_MirzaBeig_VFX_Demo_DemoManager_Pa658605651.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.Demo.DemoManager
struct  DemoManager_t3728880678  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 MirzaBeig.VFX.Demo.DemoManager::cameraPosition
	Vector3_t2243707580  ___cameraPosition_2;
	// UnityEngine.Vector3 MirzaBeig.VFX.Demo.DemoManager::cameraPosition2
	Vector3_t2243707580  ___cameraPosition2_3;
	// UnityEngine.Vector3 MirzaBeig.VFX.Demo.DemoManager::targetCameraPosition
	Vector3_t2243707580  ___targetCameraPosition_4;
	// UnityEngine.Vector3 MirzaBeig.VFX.Demo.DemoManager::targetCameraContainerRotation
	Vector3_t2243707580  ___targetCameraContainerRotation_5;
	// UnityEngine.Vector3 MirzaBeig.VFX.Demo.DemoManager::cameraContainerRotation
	Vector3_t2243707580  ___cameraContainerRotation_6;
	// System.Single MirzaBeig.VFX.Demo.DemoManager::cameraSpeed
	float ___cameraSpeed_7;
	// System.Single MirzaBeig.VFX.Demo.DemoManager::cameraLerpTime
	float ___cameraLerpTime_8;
	// System.Single MirzaBeig.VFX.Demo.DemoManager::cameraContainerLerpTime
	float ___cameraContainerLerpTime_9;
	// UnityEngine.Vector2 MirzaBeig.VFX.Demo.DemoManager::cameraAngleLimits
	Vector2_t2243707579  ___cameraAngleLimits_10;
	// UnityEngine.GameObject[] MirzaBeig.VFX.Demo.DemoManager::levels
	GameObjectU5BU5D_t3057952154* ___levels_11;
	// MirzaBeig.VFX.Demo.DemoManager/Level MirzaBeig.VFX.Demo.DemoManager::currentLevel
	int32_t ___currentLevel_12;
	// MirzaBeig.VFX.Demo.DemoManager/CameraMode MirzaBeig.VFX.Demo.DemoManager::cameraMode
	int32_t ___cameraMode_13;
	// MirzaBeig.VFX.Demo.DemoManager/ParticleMode MirzaBeig.VFX.Demo.DemoManager::particleMode
	int32_t ___particleMode_14;
	// System.Boolean MirzaBeig.VFX.Demo.DemoManager::lighting
	bool ___lighting_15;
	// System.Boolean MirzaBeig.VFX.Demo.DemoManager::advancedRendering
	bool ___advancedRendering_16;
	// UnityEngine.UI.Toggle MirzaBeig.VFX.Demo.DemoManager::frontFacingCameraModeToggle
	Toggle_t3976754468 * ___frontFacingCameraModeToggle_17;
	// UnityEngine.UI.Toggle MirzaBeig.VFX.Demo.DemoManager::interactiveCameraModeToggle
	Toggle_t3976754468 * ___interactiveCameraModeToggle_18;
	// UnityEngine.UI.Toggle MirzaBeig.VFX.Demo.DemoManager::perpetualParticleModeToggle
	Toggle_t3976754468 * ___perpetualParticleModeToggle_19;
	// UnityEngine.UI.Toggle MirzaBeig.VFX.Demo.DemoManager::instancedParticleModeToggle
	Toggle_t3976754468 * ___instancedParticleModeToggle_20;
	// UnityEngine.UI.Toggle MirzaBeig.VFX.Demo.DemoManager::lightingToggle
	Toggle_t3976754468 * ___lightingToggle_21;
	// UnityEngine.UI.Toggle MirzaBeig.VFX.Demo.DemoManager::advancedRenderingToggle
	Toggle_t3976754468 * ___advancedRenderingToggle_22;
	// UnityEngine.UI.Toggle[] MirzaBeig.VFX.Demo.DemoManager::levelToggles
	ToggleU5BU5D_t1971649997* ___levelToggles_23;
	// UnityEngine.UI.ToggleGroup MirzaBeig.VFX.Demo.DemoManager::levelTogglesContainer
	ToggleGroup_t1030026315 * ___levelTogglesContainer_24;
	// MirzaBeig.VFX.Demo.PerpetualParticleManager MirzaBeig.VFX.Demo.DemoManager::perpetualParticleSystems
	PerpetualParticleManager_t167875647 * ___perpetualParticleSystems_25;
	// MirzaBeig.VFX.Demo.InstantiatedParticleManager MirzaBeig.VFX.Demo.DemoManager::instantiatedParticleSystems
	InstantiatedParticleManager_t2557129379 * ___instantiatedParticleSystems_26;
	// UnityEngine.UI.Text MirzaBeig.VFX.Demo.DemoManager::particleCountText
	Text_t356221433 * ___particleCountText_27;
	// UnityEngine.UI.Text MirzaBeig.VFX.Demo.DemoManager::currentParticleSystemText
	Text_t356221433 * ___currentParticleSystemText_28;
	// UnityEngine.UI.Text MirzaBeig.VFX.Demo.DemoManager::particleSpawnInstructionText
	Text_t356221433 * ___particleSpawnInstructionText_29;
	// UnityEngine.Camera MirzaBeig.VFX.Demo.DemoManager::UICamera
	Camera_t189460977 * ___UICamera_30;
	// UnityEngine.Camera MirzaBeig.VFX.Demo.DemoManager::mainCamera
	Camera_t189460977 * ___mainCamera_31;
	// UnityEngine.Camera MirzaBeig.VFX.Demo.DemoManager::postEffectsCamera
	Camera_t189460977 * ___postEffectsCamera_32;
	// UnityEngine.MonoBehaviour[] MirzaBeig.VFX.Demo.DemoManager::mainCameraPostEffects
	MonoBehaviourU5BU5D_t3035069757* ___mainCameraPostEffects_33;

public:
	inline static int32_t get_offset_of_cameraPosition_2() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___cameraPosition_2)); }
	inline Vector3_t2243707580  get_cameraPosition_2() const { return ___cameraPosition_2; }
	inline Vector3_t2243707580 * get_address_of_cameraPosition_2() { return &___cameraPosition_2; }
	inline void set_cameraPosition_2(Vector3_t2243707580  value)
	{
		___cameraPosition_2 = value;
	}

	inline static int32_t get_offset_of_cameraPosition2_3() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___cameraPosition2_3)); }
	inline Vector3_t2243707580  get_cameraPosition2_3() const { return ___cameraPosition2_3; }
	inline Vector3_t2243707580 * get_address_of_cameraPosition2_3() { return &___cameraPosition2_3; }
	inline void set_cameraPosition2_3(Vector3_t2243707580  value)
	{
		___cameraPosition2_3 = value;
	}

	inline static int32_t get_offset_of_targetCameraPosition_4() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___targetCameraPosition_4)); }
	inline Vector3_t2243707580  get_targetCameraPosition_4() const { return ___targetCameraPosition_4; }
	inline Vector3_t2243707580 * get_address_of_targetCameraPosition_4() { return &___targetCameraPosition_4; }
	inline void set_targetCameraPosition_4(Vector3_t2243707580  value)
	{
		___targetCameraPosition_4 = value;
	}

	inline static int32_t get_offset_of_targetCameraContainerRotation_5() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___targetCameraContainerRotation_5)); }
	inline Vector3_t2243707580  get_targetCameraContainerRotation_5() const { return ___targetCameraContainerRotation_5; }
	inline Vector3_t2243707580 * get_address_of_targetCameraContainerRotation_5() { return &___targetCameraContainerRotation_5; }
	inline void set_targetCameraContainerRotation_5(Vector3_t2243707580  value)
	{
		___targetCameraContainerRotation_5 = value;
	}

	inline static int32_t get_offset_of_cameraContainerRotation_6() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___cameraContainerRotation_6)); }
	inline Vector3_t2243707580  get_cameraContainerRotation_6() const { return ___cameraContainerRotation_6; }
	inline Vector3_t2243707580 * get_address_of_cameraContainerRotation_6() { return &___cameraContainerRotation_6; }
	inline void set_cameraContainerRotation_6(Vector3_t2243707580  value)
	{
		___cameraContainerRotation_6 = value;
	}

	inline static int32_t get_offset_of_cameraSpeed_7() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___cameraSpeed_7)); }
	inline float get_cameraSpeed_7() const { return ___cameraSpeed_7; }
	inline float* get_address_of_cameraSpeed_7() { return &___cameraSpeed_7; }
	inline void set_cameraSpeed_7(float value)
	{
		___cameraSpeed_7 = value;
	}

	inline static int32_t get_offset_of_cameraLerpTime_8() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___cameraLerpTime_8)); }
	inline float get_cameraLerpTime_8() const { return ___cameraLerpTime_8; }
	inline float* get_address_of_cameraLerpTime_8() { return &___cameraLerpTime_8; }
	inline void set_cameraLerpTime_8(float value)
	{
		___cameraLerpTime_8 = value;
	}

	inline static int32_t get_offset_of_cameraContainerLerpTime_9() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___cameraContainerLerpTime_9)); }
	inline float get_cameraContainerLerpTime_9() const { return ___cameraContainerLerpTime_9; }
	inline float* get_address_of_cameraContainerLerpTime_9() { return &___cameraContainerLerpTime_9; }
	inline void set_cameraContainerLerpTime_9(float value)
	{
		___cameraContainerLerpTime_9 = value;
	}

	inline static int32_t get_offset_of_cameraAngleLimits_10() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___cameraAngleLimits_10)); }
	inline Vector2_t2243707579  get_cameraAngleLimits_10() const { return ___cameraAngleLimits_10; }
	inline Vector2_t2243707579 * get_address_of_cameraAngleLimits_10() { return &___cameraAngleLimits_10; }
	inline void set_cameraAngleLimits_10(Vector2_t2243707579  value)
	{
		___cameraAngleLimits_10 = value;
	}

	inline static int32_t get_offset_of_levels_11() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___levels_11)); }
	inline GameObjectU5BU5D_t3057952154* get_levels_11() const { return ___levels_11; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_levels_11() { return &___levels_11; }
	inline void set_levels_11(GameObjectU5BU5D_t3057952154* value)
	{
		___levels_11 = value;
		Il2CppCodeGenWriteBarrier(&___levels_11, value);
	}

	inline static int32_t get_offset_of_currentLevel_12() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___currentLevel_12)); }
	inline int32_t get_currentLevel_12() const { return ___currentLevel_12; }
	inline int32_t* get_address_of_currentLevel_12() { return &___currentLevel_12; }
	inline void set_currentLevel_12(int32_t value)
	{
		___currentLevel_12 = value;
	}

	inline static int32_t get_offset_of_cameraMode_13() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___cameraMode_13)); }
	inline int32_t get_cameraMode_13() const { return ___cameraMode_13; }
	inline int32_t* get_address_of_cameraMode_13() { return &___cameraMode_13; }
	inline void set_cameraMode_13(int32_t value)
	{
		___cameraMode_13 = value;
	}

	inline static int32_t get_offset_of_particleMode_14() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___particleMode_14)); }
	inline int32_t get_particleMode_14() const { return ___particleMode_14; }
	inline int32_t* get_address_of_particleMode_14() { return &___particleMode_14; }
	inline void set_particleMode_14(int32_t value)
	{
		___particleMode_14 = value;
	}

	inline static int32_t get_offset_of_lighting_15() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___lighting_15)); }
	inline bool get_lighting_15() const { return ___lighting_15; }
	inline bool* get_address_of_lighting_15() { return &___lighting_15; }
	inline void set_lighting_15(bool value)
	{
		___lighting_15 = value;
	}

	inline static int32_t get_offset_of_advancedRendering_16() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___advancedRendering_16)); }
	inline bool get_advancedRendering_16() const { return ___advancedRendering_16; }
	inline bool* get_address_of_advancedRendering_16() { return &___advancedRendering_16; }
	inline void set_advancedRendering_16(bool value)
	{
		___advancedRendering_16 = value;
	}

	inline static int32_t get_offset_of_frontFacingCameraModeToggle_17() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___frontFacingCameraModeToggle_17)); }
	inline Toggle_t3976754468 * get_frontFacingCameraModeToggle_17() const { return ___frontFacingCameraModeToggle_17; }
	inline Toggle_t3976754468 ** get_address_of_frontFacingCameraModeToggle_17() { return &___frontFacingCameraModeToggle_17; }
	inline void set_frontFacingCameraModeToggle_17(Toggle_t3976754468 * value)
	{
		___frontFacingCameraModeToggle_17 = value;
		Il2CppCodeGenWriteBarrier(&___frontFacingCameraModeToggle_17, value);
	}

	inline static int32_t get_offset_of_interactiveCameraModeToggle_18() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___interactiveCameraModeToggle_18)); }
	inline Toggle_t3976754468 * get_interactiveCameraModeToggle_18() const { return ___interactiveCameraModeToggle_18; }
	inline Toggle_t3976754468 ** get_address_of_interactiveCameraModeToggle_18() { return &___interactiveCameraModeToggle_18; }
	inline void set_interactiveCameraModeToggle_18(Toggle_t3976754468 * value)
	{
		___interactiveCameraModeToggle_18 = value;
		Il2CppCodeGenWriteBarrier(&___interactiveCameraModeToggle_18, value);
	}

	inline static int32_t get_offset_of_perpetualParticleModeToggle_19() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___perpetualParticleModeToggle_19)); }
	inline Toggle_t3976754468 * get_perpetualParticleModeToggle_19() const { return ___perpetualParticleModeToggle_19; }
	inline Toggle_t3976754468 ** get_address_of_perpetualParticleModeToggle_19() { return &___perpetualParticleModeToggle_19; }
	inline void set_perpetualParticleModeToggle_19(Toggle_t3976754468 * value)
	{
		___perpetualParticleModeToggle_19 = value;
		Il2CppCodeGenWriteBarrier(&___perpetualParticleModeToggle_19, value);
	}

	inline static int32_t get_offset_of_instancedParticleModeToggle_20() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___instancedParticleModeToggle_20)); }
	inline Toggle_t3976754468 * get_instancedParticleModeToggle_20() const { return ___instancedParticleModeToggle_20; }
	inline Toggle_t3976754468 ** get_address_of_instancedParticleModeToggle_20() { return &___instancedParticleModeToggle_20; }
	inline void set_instancedParticleModeToggle_20(Toggle_t3976754468 * value)
	{
		___instancedParticleModeToggle_20 = value;
		Il2CppCodeGenWriteBarrier(&___instancedParticleModeToggle_20, value);
	}

	inline static int32_t get_offset_of_lightingToggle_21() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___lightingToggle_21)); }
	inline Toggle_t3976754468 * get_lightingToggle_21() const { return ___lightingToggle_21; }
	inline Toggle_t3976754468 ** get_address_of_lightingToggle_21() { return &___lightingToggle_21; }
	inline void set_lightingToggle_21(Toggle_t3976754468 * value)
	{
		___lightingToggle_21 = value;
		Il2CppCodeGenWriteBarrier(&___lightingToggle_21, value);
	}

	inline static int32_t get_offset_of_advancedRenderingToggle_22() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___advancedRenderingToggle_22)); }
	inline Toggle_t3976754468 * get_advancedRenderingToggle_22() const { return ___advancedRenderingToggle_22; }
	inline Toggle_t3976754468 ** get_address_of_advancedRenderingToggle_22() { return &___advancedRenderingToggle_22; }
	inline void set_advancedRenderingToggle_22(Toggle_t3976754468 * value)
	{
		___advancedRenderingToggle_22 = value;
		Il2CppCodeGenWriteBarrier(&___advancedRenderingToggle_22, value);
	}

	inline static int32_t get_offset_of_levelToggles_23() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___levelToggles_23)); }
	inline ToggleU5BU5D_t1971649997* get_levelToggles_23() const { return ___levelToggles_23; }
	inline ToggleU5BU5D_t1971649997** get_address_of_levelToggles_23() { return &___levelToggles_23; }
	inline void set_levelToggles_23(ToggleU5BU5D_t1971649997* value)
	{
		___levelToggles_23 = value;
		Il2CppCodeGenWriteBarrier(&___levelToggles_23, value);
	}

	inline static int32_t get_offset_of_levelTogglesContainer_24() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___levelTogglesContainer_24)); }
	inline ToggleGroup_t1030026315 * get_levelTogglesContainer_24() const { return ___levelTogglesContainer_24; }
	inline ToggleGroup_t1030026315 ** get_address_of_levelTogglesContainer_24() { return &___levelTogglesContainer_24; }
	inline void set_levelTogglesContainer_24(ToggleGroup_t1030026315 * value)
	{
		___levelTogglesContainer_24 = value;
		Il2CppCodeGenWriteBarrier(&___levelTogglesContainer_24, value);
	}

	inline static int32_t get_offset_of_perpetualParticleSystems_25() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___perpetualParticleSystems_25)); }
	inline PerpetualParticleManager_t167875647 * get_perpetualParticleSystems_25() const { return ___perpetualParticleSystems_25; }
	inline PerpetualParticleManager_t167875647 ** get_address_of_perpetualParticleSystems_25() { return &___perpetualParticleSystems_25; }
	inline void set_perpetualParticleSystems_25(PerpetualParticleManager_t167875647 * value)
	{
		___perpetualParticleSystems_25 = value;
		Il2CppCodeGenWriteBarrier(&___perpetualParticleSystems_25, value);
	}

	inline static int32_t get_offset_of_instantiatedParticleSystems_26() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___instantiatedParticleSystems_26)); }
	inline InstantiatedParticleManager_t2557129379 * get_instantiatedParticleSystems_26() const { return ___instantiatedParticleSystems_26; }
	inline InstantiatedParticleManager_t2557129379 ** get_address_of_instantiatedParticleSystems_26() { return &___instantiatedParticleSystems_26; }
	inline void set_instantiatedParticleSystems_26(InstantiatedParticleManager_t2557129379 * value)
	{
		___instantiatedParticleSystems_26 = value;
		Il2CppCodeGenWriteBarrier(&___instantiatedParticleSystems_26, value);
	}

	inline static int32_t get_offset_of_particleCountText_27() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___particleCountText_27)); }
	inline Text_t356221433 * get_particleCountText_27() const { return ___particleCountText_27; }
	inline Text_t356221433 ** get_address_of_particleCountText_27() { return &___particleCountText_27; }
	inline void set_particleCountText_27(Text_t356221433 * value)
	{
		___particleCountText_27 = value;
		Il2CppCodeGenWriteBarrier(&___particleCountText_27, value);
	}

	inline static int32_t get_offset_of_currentParticleSystemText_28() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___currentParticleSystemText_28)); }
	inline Text_t356221433 * get_currentParticleSystemText_28() const { return ___currentParticleSystemText_28; }
	inline Text_t356221433 ** get_address_of_currentParticleSystemText_28() { return &___currentParticleSystemText_28; }
	inline void set_currentParticleSystemText_28(Text_t356221433 * value)
	{
		___currentParticleSystemText_28 = value;
		Il2CppCodeGenWriteBarrier(&___currentParticleSystemText_28, value);
	}

	inline static int32_t get_offset_of_particleSpawnInstructionText_29() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___particleSpawnInstructionText_29)); }
	inline Text_t356221433 * get_particleSpawnInstructionText_29() const { return ___particleSpawnInstructionText_29; }
	inline Text_t356221433 ** get_address_of_particleSpawnInstructionText_29() { return &___particleSpawnInstructionText_29; }
	inline void set_particleSpawnInstructionText_29(Text_t356221433 * value)
	{
		___particleSpawnInstructionText_29 = value;
		Il2CppCodeGenWriteBarrier(&___particleSpawnInstructionText_29, value);
	}

	inline static int32_t get_offset_of_UICamera_30() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___UICamera_30)); }
	inline Camera_t189460977 * get_UICamera_30() const { return ___UICamera_30; }
	inline Camera_t189460977 ** get_address_of_UICamera_30() { return &___UICamera_30; }
	inline void set_UICamera_30(Camera_t189460977 * value)
	{
		___UICamera_30 = value;
		Il2CppCodeGenWriteBarrier(&___UICamera_30, value);
	}

	inline static int32_t get_offset_of_mainCamera_31() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___mainCamera_31)); }
	inline Camera_t189460977 * get_mainCamera_31() const { return ___mainCamera_31; }
	inline Camera_t189460977 ** get_address_of_mainCamera_31() { return &___mainCamera_31; }
	inline void set_mainCamera_31(Camera_t189460977 * value)
	{
		___mainCamera_31 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_31, value);
	}

	inline static int32_t get_offset_of_postEffectsCamera_32() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___postEffectsCamera_32)); }
	inline Camera_t189460977 * get_postEffectsCamera_32() const { return ___postEffectsCamera_32; }
	inline Camera_t189460977 ** get_address_of_postEffectsCamera_32() { return &___postEffectsCamera_32; }
	inline void set_postEffectsCamera_32(Camera_t189460977 * value)
	{
		___postEffectsCamera_32 = value;
		Il2CppCodeGenWriteBarrier(&___postEffectsCamera_32, value);
	}

	inline static int32_t get_offset_of_mainCameraPostEffects_33() { return static_cast<int32_t>(offsetof(DemoManager_t3728880678, ___mainCameraPostEffects_33)); }
	inline MonoBehaviourU5BU5D_t3035069757* get_mainCameraPostEffects_33() const { return ___mainCameraPostEffects_33; }
	inline MonoBehaviourU5BU5D_t3035069757** get_address_of_mainCameraPostEffects_33() { return &___mainCameraPostEffects_33; }
	inline void set_mainCameraPostEffects_33(MonoBehaviourU5BU5D_t3035069757* value)
	{
		___mainCameraPostEffects_33 = value;
		Il2CppCodeGenWriteBarrier(&___mainCameraPostEffects_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
