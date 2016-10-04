#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnitySampleAssets.Utility.CurveControlledBob
struct CurveControlledBob_t2717668098;
// UnitySampleAssets.Utility.LerpControlledBob
struct LerpControlledBob_t4212358120;
// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t3298549944;
// UnitySampleAssets.Utility.CameraRefocus
struct CameraRefocus_t3489552324;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.Characters.FirstPerson.HeadBob
struct  HeadBob_t1716398609  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UnitySampleAssets.Characters.FirstPerson.HeadBob::_camera
	Camera_t189460977 * ____camera_2;
	// UnitySampleAssets.Utility.CurveControlledBob UnitySampleAssets.Characters.FirstPerson.HeadBob::motionBob
	CurveControlledBob_t2717668098 * ___motionBob_3;
	// UnitySampleAssets.Utility.LerpControlledBob UnitySampleAssets.Characters.FirstPerson.HeadBob::jumpAndLandingBob
	LerpControlledBob_t4212358120 * ___jumpAndLandingBob_4;
	// UnitySampleAssets.Characters.FirstPerson.RigidbodyFirstPersonController UnitySampleAssets.Characters.FirstPerson.HeadBob::rigidbodyFirstPersonController
	RigidbodyFirstPersonController_t3298549944 * ___rigidbodyFirstPersonController_5;
	// System.Single UnitySampleAssets.Characters.FirstPerson.HeadBob::StrideInterval
	float ___StrideInterval_6;
	// System.Single UnitySampleAssets.Characters.FirstPerson.HeadBob::RunningStrideLengthen
	float ___RunningStrideLengthen_7;
	// UnitySampleAssets.Utility.CameraRefocus UnitySampleAssets.Characters.FirstPerson.HeadBob::cameraRefocus
	CameraRefocus_t3489552324 * ___cameraRefocus_8;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.HeadBob::previouslyGrounded
	bool ___previouslyGrounded_9;
	// UnityEngine.Vector3 UnitySampleAssets.Characters.FirstPerson.HeadBob::originalCameraPosition
	Vector3_t2243707580  ___originalCameraPosition_10;

public:
	inline static int32_t get_offset_of__camera_2() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ____camera_2)); }
	inline Camera_t189460977 * get__camera_2() const { return ____camera_2; }
	inline Camera_t189460977 ** get_address_of__camera_2() { return &____camera_2; }
	inline void set__camera_2(Camera_t189460977 * value)
	{
		____camera_2 = value;
		Il2CppCodeGenWriteBarrier(&____camera_2, value);
	}

	inline static int32_t get_offset_of_motionBob_3() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ___motionBob_3)); }
	inline CurveControlledBob_t2717668098 * get_motionBob_3() const { return ___motionBob_3; }
	inline CurveControlledBob_t2717668098 ** get_address_of_motionBob_3() { return &___motionBob_3; }
	inline void set_motionBob_3(CurveControlledBob_t2717668098 * value)
	{
		___motionBob_3 = value;
		Il2CppCodeGenWriteBarrier(&___motionBob_3, value);
	}

	inline static int32_t get_offset_of_jumpAndLandingBob_4() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ___jumpAndLandingBob_4)); }
	inline LerpControlledBob_t4212358120 * get_jumpAndLandingBob_4() const { return ___jumpAndLandingBob_4; }
	inline LerpControlledBob_t4212358120 ** get_address_of_jumpAndLandingBob_4() { return &___jumpAndLandingBob_4; }
	inline void set_jumpAndLandingBob_4(LerpControlledBob_t4212358120 * value)
	{
		___jumpAndLandingBob_4 = value;
		Il2CppCodeGenWriteBarrier(&___jumpAndLandingBob_4, value);
	}

	inline static int32_t get_offset_of_rigidbodyFirstPersonController_5() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ___rigidbodyFirstPersonController_5)); }
	inline RigidbodyFirstPersonController_t3298549944 * get_rigidbodyFirstPersonController_5() const { return ___rigidbodyFirstPersonController_5; }
	inline RigidbodyFirstPersonController_t3298549944 ** get_address_of_rigidbodyFirstPersonController_5() { return &___rigidbodyFirstPersonController_5; }
	inline void set_rigidbodyFirstPersonController_5(RigidbodyFirstPersonController_t3298549944 * value)
	{
		___rigidbodyFirstPersonController_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbodyFirstPersonController_5, value);
	}

	inline static int32_t get_offset_of_StrideInterval_6() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ___StrideInterval_6)); }
	inline float get_StrideInterval_6() const { return ___StrideInterval_6; }
	inline float* get_address_of_StrideInterval_6() { return &___StrideInterval_6; }
	inline void set_StrideInterval_6(float value)
	{
		___StrideInterval_6 = value;
	}

	inline static int32_t get_offset_of_RunningStrideLengthen_7() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ___RunningStrideLengthen_7)); }
	inline float get_RunningStrideLengthen_7() const { return ___RunningStrideLengthen_7; }
	inline float* get_address_of_RunningStrideLengthen_7() { return &___RunningStrideLengthen_7; }
	inline void set_RunningStrideLengthen_7(float value)
	{
		___RunningStrideLengthen_7 = value;
	}

	inline static int32_t get_offset_of_cameraRefocus_8() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ___cameraRefocus_8)); }
	inline CameraRefocus_t3489552324 * get_cameraRefocus_8() const { return ___cameraRefocus_8; }
	inline CameraRefocus_t3489552324 ** get_address_of_cameraRefocus_8() { return &___cameraRefocus_8; }
	inline void set_cameraRefocus_8(CameraRefocus_t3489552324 * value)
	{
		___cameraRefocus_8 = value;
		Il2CppCodeGenWriteBarrier(&___cameraRefocus_8, value);
	}

	inline static int32_t get_offset_of_previouslyGrounded_9() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ___previouslyGrounded_9)); }
	inline bool get_previouslyGrounded_9() const { return ___previouslyGrounded_9; }
	inline bool* get_address_of_previouslyGrounded_9() { return &___previouslyGrounded_9; }
	inline void set_previouslyGrounded_9(bool value)
	{
		___previouslyGrounded_9 = value;
	}

	inline static int32_t get_offset_of_originalCameraPosition_10() { return static_cast<int32_t>(offsetof(HeadBob_t1716398609, ___originalCameraPosition_10)); }
	inline Vector3_t2243707580  get_originalCameraPosition_10() const { return ___originalCameraPosition_10; }
	inline Vector3_t2243707580 * get_address_of_originalCameraPosition_10() { return &___originalCameraPosition_10; }
	inline void set_originalCameraPosition_10(Vector3_t2243707580  value)
	{
		___originalCameraPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
