#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.Billboard
struct  Billboard_t2866625069  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean MirzaBeig.VFX.Billboard::billboardOnStart
	bool ___billboardOnStart_2;
	// System.Boolean MirzaBeig.VFX.Billboard::alwaysBillboard
	bool ___alwaysBillboard_3;
	// System.Boolean MirzaBeig.VFX.Billboard::startRotationOffset
	bool ___startRotationOffset_4;
	// System.Boolean MirzaBeig.VFX.Billboard::billboardX
	bool ___billboardX_5;
	// System.Boolean MirzaBeig.VFX.Billboard::billboardY
	bool ___billboardY_6;
	// System.Boolean MirzaBeig.VFX.Billboard::billboardZ
	bool ___billboardZ_7;
	// UnityEngine.Quaternion MirzaBeig.VFX.Billboard::startRotation
	Quaternion_t4030073918  ___startRotation_8;
	// UnityEngine.Transform MirzaBeig.VFX.Billboard::billboardTarget
	Transform_t3275118058 * ___billboardTarget_9;

public:
	inline static int32_t get_offset_of_billboardOnStart_2() { return static_cast<int32_t>(offsetof(Billboard_t2866625069, ___billboardOnStart_2)); }
	inline bool get_billboardOnStart_2() const { return ___billboardOnStart_2; }
	inline bool* get_address_of_billboardOnStart_2() { return &___billboardOnStart_2; }
	inline void set_billboardOnStart_2(bool value)
	{
		___billboardOnStart_2 = value;
	}

	inline static int32_t get_offset_of_alwaysBillboard_3() { return static_cast<int32_t>(offsetof(Billboard_t2866625069, ___alwaysBillboard_3)); }
	inline bool get_alwaysBillboard_3() const { return ___alwaysBillboard_3; }
	inline bool* get_address_of_alwaysBillboard_3() { return &___alwaysBillboard_3; }
	inline void set_alwaysBillboard_3(bool value)
	{
		___alwaysBillboard_3 = value;
	}

	inline static int32_t get_offset_of_startRotationOffset_4() { return static_cast<int32_t>(offsetof(Billboard_t2866625069, ___startRotationOffset_4)); }
	inline bool get_startRotationOffset_4() const { return ___startRotationOffset_4; }
	inline bool* get_address_of_startRotationOffset_4() { return &___startRotationOffset_4; }
	inline void set_startRotationOffset_4(bool value)
	{
		___startRotationOffset_4 = value;
	}

	inline static int32_t get_offset_of_billboardX_5() { return static_cast<int32_t>(offsetof(Billboard_t2866625069, ___billboardX_5)); }
	inline bool get_billboardX_5() const { return ___billboardX_5; }
	inline bool* get_address_of_billboardX_5() { return &___billboardX_5; }
	inline void set_billboardX_5(bool value)
	{
		___billboardX_5 = value;
	}

	inline static int32_t get_offset_of_billboardY_6() { return static_cast<int32_t>(offsetof(Billboard_t2866625069, ___billboardY_6)); }
	inline bool get_billboardY_6() const { return ___billboardY_6; }
	inline bool* get_address_of_billboardY_6() { return &___billboardY_6; }
	inline void set_billboardY_6(bool value)
	{
		___billboardY_6 = value;
	}

	inline static int32_t get_offset_of_billboardZ_7() { return static_cast<int32_t>(offsetof(Billboard_t2866625069, ___billboardZ_7)); }
	inline bool get_billboardZ_7() const { return ___billboardZ_7; }
	inline bool* get_address_of_billboardZ_7() { return &___billboardZ_7; }
	inline void set_billboardZ_7(bool value)
	{
		___billboardZ_7 = value;
	}

	inline static int32_t get_offset_of_startRotation_8() { return static_cast<int32_t>(offsetof(Billboard_t2866625069, ___startRotation_8)); }
	inline Quaternion_t4030073918  get_startRotation_8() const { return ___startRotation_8; }
	inline Quaternion_t4030073918 * get_address_of_startRotation_8() { return &___startRotation_8; }
	inline void set_startRotation_8(Quaternion_t4030073918  value)
	{
		___startRotation_8 = value;
	}

	inline static int32_t get_offset_of_billboardTarget_9() { return static_cast<int32_t>(offsetof(Billboard_t2866625069, ___billboardTarget_9)); }
	inline Transform_t3275118058 * get_billboardTarget_9() const { return ___billboardTarget_9; }
	inline Transform_t3275118058 ** get_address_of_billboardTarget_9() { return &___billboardTarget_9; }
	inline void set_billboardTarget_9(Transform_t3275118058 * value)
	{
		___billboardTarget_9 = value;
		Il2CppCodeGenWriteBarrier(&___billboardTarget_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
