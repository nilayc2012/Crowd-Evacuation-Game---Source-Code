#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<MirzaBeig.VFX.ParticleSystems>
struct List_1_t515697146;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.Demo.ParticleManager
struct  ParticleManager_t677230503  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<MirzaBeig.VFX.ParticleSystems> MirzaBeig.VFX.Demo.ParticleManager::particlePrefabs
	List_1_t515697146 * ___particlePrefabs_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MirzaBeig.VFX.Demo.ParticleManager::particlePrefabLightGameObjects
	List_1_t1125654279 * ___particlePrefabLightGameObjects_3;
	// System.Collections.Generic.List`1<MirzaBeig.VFX.ParticleSystems> MirzaBeig.VFX.Demo.ParticleManager::particlePrefabsAppend
	List_1_t515697146 * ___particlePrefabsAppend_4;
	// System.Int32 MirzaBeig.VFX.Demo.ParticleManager::prefabNameUnderscoreCountCutoff
	int32_t ___prefabNameUnderscoreCountCutoff_5;
	// System.Boolean MirzaBeig.VFX.Demo.ParticleManager::disableChildrenAtStart
	bool ___disableChildrenAtStart_6;
	// System.Boolean MirzaBeig.VFX.Demo.ParticleManager::initialized
	bool ___initialized_7;
	// System.Int32 MirzaBeig.VFX.Demo.ParticleManager::<currentParticlePrefab>k__BackingField
	int32_t ___U3CcurrentParticlePrefabU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_particlePrefabs_2() { return static_cast<int32_t>(offsetof(ParticleManager_t677230503, ___particlePrefabs_2)); }
	inline List_1_t515697146 * get_particlePrefabs_2() const { return ___particlePrefabs_2; }
	inline List_1_t515697146 ** get_address_of_particlePrefabs_2() { return &___particlePrefabs_2; }
	inline void set_particlePrefabs_2(List_1_t515697146 * value)
	{
		___particlePrefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___particlePrefabs_2, value);
	}

	inline static int32_t get_offset_of_particlePrefabLightGameObjects_3() { return static_cast<int32_t>(offsetof(ParticleManager_t677230503, ___particlePrefabLightGameObjects_3)); }
	inline List_1_t1125654279 * get_particlePrefabLightGameObjects_3() const { return ___particlePrefabLightGameObjects_3; }
	inline List_1_t1125654279 ** get_address_of_particlePrefabLightGameObjects_3() { return &___particlePrefabLightGameObjects_3; }
	inline void set_particlePrefabLightGameObjects_3(List_1_t1125654279 * value)
	{
		___particlePrefabLightGameObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___particlePrefabLightGameObjects_3, value);
	}

	inline static int32_t get_offset_of_particlePrefabsAppend_4() { return static_cast<int32_t>(offsetof(ParticleManager_t677230503, ___particlePrefabsAppend_4)); }
	inline List_1_t515697146 * get_particlePrefabsAppend_4() const { return ___particlePrefabsAppend_4; }
	inline List_1_t515697146 ** get_address_of_particlePrefabsAppend_4() { return &___particlePrefabsAppend_4; }
	inline void set_particlePrefabsAppend_4(List_1_t515697146 * value)
	{
		___particlePrefabsAppend_4 = value;
		Il2CppCodeGenWriteBarrier(&___particlePrefabsAppend_4, value);
	}

	inline static int32_t get_offset_of_prefabNameUnderscoreCountCutoff_5() { return static_cast<int32_t>(offsetof(ParticleManager_t677230503, ___prefabNameUnderscoreCountCutoff_5)); }
	inline int32_t get_prefabNameUnderscoreCountCutoff_5() const { return ___prefabNameUnderscoreCountCutoff_5; }
	inline int32_t* get_address_of_prefabNameUnderscoreCountCutoff_5() { return &___prefabNameUnderscoreCountCutoff_5; }
	inline void set_prefabNameUnderscoreCountCutoff_5(int32_t value)
	{
		___prefabNameUnderscoreCountCutoff_5 = value;
	}

	inline static int32_t get_offset_of_disableChildrenAtStart_6() { return static_cast<int32_t>(offsetof(ParticleManager_t677230503, ___disableChildrenAtStart_6)); }
	inline bool get_disableChildrenAtStart_6() const { return ___disableChildrenAtStart_6; }
	inline bool* get_address_of_disableChildrenAtStart_6() { return &___disableChildrenAtStart_6; }
	inline void set_disableChildrenAtStart_6(bool value)
	{
		___disableChildrenAtStart_6 = value;
	}

	inline static int32_t get_offset_of_initialized_7() { return static_cast<int32_t>(offsetof(ParticleManager_t677230503, ___initialized_7)); }
	inline bool get_initialized_7() const { return ___initialized_7; }
	inline bool* get_address_of_initialized_7() { return &___initialized_7; }
	inline void set_initialized_7(bool value)
	{
		___initialized_7 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentParticlePrefabU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ParticleManager_t677230503, ___U3CcurrentParticlePrefabU3Ek__BackingField_8)); }
	inline int32_t get_U3CcurrentParticlePrefabU3Ek__BackingField_8() const { return ___U3CcurrentParticlePrefabU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CcurrentParticlePrefabU3Ek__BackingField_8() { return &___U3CcurrentParticlePrefabU3Ek__BackingField_8; }
	inline void set_U3CcurrentParticlePrefabU3Ek__BackingField_8(int32_t value)
	{
		___U3CcurrentParticlePrefabU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
