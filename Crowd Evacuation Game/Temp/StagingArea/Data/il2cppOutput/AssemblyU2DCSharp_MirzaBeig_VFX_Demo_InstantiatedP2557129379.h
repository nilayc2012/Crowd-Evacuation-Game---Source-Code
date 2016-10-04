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

#include "AssemblyU2DCSharp_MirzaBeig_VFX_Demo_ParticleManage677230503.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.Demo.InstantiatedParticleManager
struct  InstantiatedParticleManager_t2557129379  : public ParticleManager_t677230503
{
public:
	// UnityEngine.LayerMask MirzaBeig.VFX.Demo.InstantiatedParticleManager::mouseRaycastLayerMask
	LayerMask_t3188175821  ___mouseRaycastLayerMask_9;
	// System.Collections.Generic.List`1<MirzaBeig.VFX.ParticleSystems> MirzaBeig.VFX.Demo.InstantiatedParticleManager::spawnedPrefabs
	List_1_t515697146 * ___spawnedPrefabs_10;
	// System.Boolean MirzaBeig.VFX.Demo.InstantiatedParticleManager::<disableSpawn>k__BackingField
	bool ___U3CdisableSpawnU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_mouseRaycastLayerMask_9() { return static_cast<int32_t>(offsetof(InstantiatedParticleManager_t2557129379, ___mouseRaycastLayerMask_9)); }
	inline LayerMask_t3188175821  get_mouseRaycastLayerMask_9() const { return ___mouseRaycastLayerMask_9; }
	inline LayerMask_t3188175821 * get_address_of_mouseRaycastLayerMask_9() { return &___mouseRaycastLayerMask_9; }
	inline void set_mouseRaycastLayerMask_9(LayerMask_t3188175821  value)
	{
		___mouseRaycastLayerMask_9 = value;
	}

	inline static int32_t get_offset_of_spawnedPrefabs_10() { return static_cast<int32_t>(offsetof(InstantiatedParticleManager_t2557129379, ___spawnedPrefabs_10)); }
	inline List_1_t515697146 * get_spawnedPrefabs_10() const { return ___spawnedPrefabs_10; }
	inline List_1_t515697146 ** get_address_of_spawnedPrefabs_10() { return &___spawnedPrefabs_10; }
	inline void set_spawnedPrefabs_10(List_1_t515697146 * value)
	{
		___spawnedPrefabs_10 = value;
		Il2CppCodeGenWriteBarrier(&___spawnedPrefabs_10, value);
	}

	inline static int32_t get_offset_of_U3CdisableSpawnU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InstantiatedParticleManager_t2557129379, ___U3CdisableSpawnU3Ek__BackingField_11)); }
	inline bool get_U3CdisableSpawnU3Ek__BackingField_11() const { return ___U3CdisableSpawnU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CdisableSpawnU3Ek__BackingField_11() { return &___U3CdisableSpawnU3Ek__BackingField_11; }
	inline void set_U3CdisableSpawnU3Ek__BackingField_11(bool value)
	{
		___U3CdisableSpawnU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
