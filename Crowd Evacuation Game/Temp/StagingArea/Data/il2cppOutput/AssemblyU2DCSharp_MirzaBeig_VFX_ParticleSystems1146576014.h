#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MirzaBeig.VFX.ParticleSystems/onParticleSystemsDeadEventHandler
struct onParticleSystemsDeadEventHandler_t1173655674;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1490986844;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.ParticleSystems
struct  ParticleSystems_t1146576014  : public MonoBehaviour_t1158329972
{
public:
	// MirzaBeig.VFX.ParticleSystems/onParticleSystemsDeadEventHandler MirzaBeig.VFX.ParticleSystems::onParticleSystemsDeadEvent
	onParticleSystemsDeadEventHandler_t1173655674 * ___onParticleSystemsDeadEvent_2;
	// UnityEngine.ParticleSystem[] MirzaBeig.VFX.ParticleSystems::<particleSystems>k__BackingField
	ParticleSystemU5BU5D_t1490986844* ___U3CparticleSystemsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_onParticleSystemsDeadEvent_2() { return static_cast<int32_t>(offsetof(ParticleSystems_t1146576014, ___onParticleSystemsDeadEvent_2)); }
	inline onParticleSystemsDeadEventHandler_t1173655674 * get_onParticleSystemsDeadEvent_2() const { return ___onParticleSystemsDeadEvent_2; }
	inline onParticleSystemsDeadEventHandler_t1173655674 ** get_address_of_onParticleSystemsDeadEvent_2() { return &___onParticleSystemsDeadEvent_2; }
	inline void set_onParticleSystemsDeadEvent_2(onParticleSystemsDeadEventHandler_t1173655674 * value)
	{
		___onParticleSystemsDeadEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___onParticleSystemsDeadEvent_2, value);
	}

	inline static int32_t get_offset_of_U3CparticleSystemsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParticleSystems_t1146576014, ___U3CparticleSystemsU3Ek__BackingField_3)); }
	inline ParticleSystemU5BU5D_t1490986844* get_U3CparticleSystemsU3Ek__BackingField_3() const { return ___U3CparticleSystemsU3Ek__BackingField_3; }
	inline ParticleSystemU5BU5D_t1490986844** get_address_of_U3CparticleSystemsU3Ek__BackingField_3() { return &___U3CparticleSystemsU3Ek__BackingField_3; }
	inline void set_U3CparticleSystemsU3Ek__BackingField_3(ParticleSystemU5BU5D_t1490986844* value)
	{
		___U3CparticleSystemsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CparticleSystemsU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
