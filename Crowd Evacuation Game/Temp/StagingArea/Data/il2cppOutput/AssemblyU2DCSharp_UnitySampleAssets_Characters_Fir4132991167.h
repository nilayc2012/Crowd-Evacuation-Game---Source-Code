#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnitySampleAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t2188812752;
// UnitySampleAssets.Utility.FOVKick
struct FOVKick_t1167903421;
// UnitySampleAssets.Utility.CurveControlledBob
struct CurveControlledBob_t2717668098;
// UnitySampleAssets.Utility.LerpControlledBob
struct LerpControlledBob_t4212358120;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Camera
struct Camera_t189460977;
// UnitySampleAssets.Utility.CameraRefocus
struct CameraRefocus_t3489552324;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_CollisionFlags4046947985.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.Characters.FirstPerson.FirstPersonController
struct  FirstPersonController_t4132991167  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_isWalking
	bool ____isWalking_2;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::walkSpeed
	float ___walkSpeed_3;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::runSpeed
	float ___runSpeed_4;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::runstepLenghten
	float ___runstepLenghten_5;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::jumpSpeed
	float ___jumpSpeed_6;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::stickToGroundForce
	float ___stickToGroundForce_7;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_gravityMultiplier
	float ____gravityMultiplier_8;
	// UnitySampleAssets.Characters.FirstPerson.MouseLook UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_mouseLook
	MouseLook_t2188812752 * ____mouseLook_9;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::useFOVKick
	bool ___useFOVKick_10;
	// UnitySampleAssets.Utility.FOVKick UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_fovKick
	FOVKick_t1167903421 * ____fovKick_11;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::useHeadBob
	bool ___useHeadBob_12;
	// UnitySampleAssets.Utility.CurveControlledBob UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_headBob
	CurveControlledBob_t2717668098 * ____headBob_13;
	// UnitySampleAssets.Utility.LerpControlledBob UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_jumpBob
	LerpControlledBob_t4212358120 * ____jumpBob_14;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_stepInterval
	float ____stepInterval_15;
	// UnityEngine.AudioClip[] UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_footstepSounds
	AudioClipU5BU5D_t2203355011* ____footstepSounds_16;
	// UnityEngine.AudioClip UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_jumpSound
	AudioClip_t1932558630 * ____jumpSound_17;
	// UnityEngine.AudioClip UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_landSound
	AudioClip_t1932558630 * ____landSound_18;
	// UnityEngine.Camera UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_camera
	Camera_t189460977 * ____camera_19;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_jump
	bool ____jump_20;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_yRotation
	float ____yRotation_21;
	// UnitySampleAssets.Utility.CameraRefocus UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_cameraRefocus
	CameraRefocus_t3489552324 * ____cameraRefocus_22;
	// UnityEngine.Vector2 UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_input
	Vector2_t2243707579  ____input_23;
	// UnityEngine.Vector3 UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_moveDir
	Vector3_t2243707580  ____moveDir_24;
	// UnityEngine.CharacterController UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_characterController
	CharacterController_t4094781467 * ____characterController_25;
	// UnityEngine.CollisionFlags UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_collisionFlags
	int32_t ____collisionFlags_26;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_previouslyGrounded
	bool ____previouslyGrounded_27;
	// UnityEngine.Vector3 UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_originalCameraPosition
	Vector3_t2243707580  ____originalCameraPosition_28;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_stepCycle
	float ____stepCycle_29;
	// System.Single UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_nextStep
	float ____nextStep_30;
	// System.Boolean UnitySampleAssets.Characters.FirstPerson.FirstPersonController::_jumping
	bool ____jumping_31;

public:
	inline static int32_t get_offset_of__isWalking_2() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____isWalking_2)); }
	inline bool get__isWalking_2() const { return ____isWalking_2; }
	inline bool* get_address_of__isWalking_2() { return &____isWalking_2; }
	inline void set__isWalking_2(bool value)
	{
		____isWalking_2 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_3() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ___walkSpeed_3)); }
	inline float get_walkSpeed_3() const { return ___walkSpeed_3; }
	inline float* get_address_of_walkSpeed_3() { return &___walkSpeed_3; }
	inline void set_walkSpeed_3(float value)
	{
		___walkSpeed_3 = value;
	}

	inline static int32_t get_offset_of_runSpeed_4() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ___runSpeed_4)); }
	inline float get_runSpeed_4() const { return ___runSpeed_4; }
	inline float* get_address_of_runSpeed_4() { return &___runSpeed_4; }
	inline void set_runSpeed_4(float value)
	{
		___runSpeed_4 = value;
	}

	inline static int32_t get_offset_of_runstepLenghten_5() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ___runstepLenghten_5)); }
	inline float get_runstepLenghten_5() const { return ___runstepLenghten_5; }
	inline float* get_address_of_runstepLenghten_5() { return &___runstepLenghten_5; }
	inline void set_runstepLenghten_5(float value)
	{
		___runstepLenghten_5 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_6() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ___jumpSpeed_6)); }
	inline float get_jumpSpeed_6() const { return ___jumpSpeed_6; }
	inline float* get_address_of_jumpSpeed_6() { return &___jumpSpeed_6; }
	inline void set_jumpSpeed_6(float value)
	{
		___jumpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_stickToGroundForce_7() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ___stickToGroundForce_7)); }
	inline float get_stickToGroundForce_7() const { return ___stickToGroundForce_7; }
	inline float* get_address_of_stickToGroundForce_7() { return &___stickToGroundForce_7; }
	inline void set_stickToGroundForce_7(float value)
	{
		___stickToGroundForce_7 = value;
	}

	inline static int32_t get_offset_of__gravityMultiplier_8() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____gravityMultiplier_8)); }
	inline float get__gravityMultiplier_8() const { return ____gravityMultiplier_8; }
	inline float* get_address_of__gravityMultiplier_8() { return &____gravityMultiplier_8; }
	inline void set__gravityMultiplier_8(float value)
	{
		____gravityMultiplier_8 = value;
	}

	inline static int32_t get_offset_of__mouseLook_9() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____mouseLook_9)); }
	inline MouseLook_t2188812752 * get__mouseLook_9() const { return ____mouseLook_9; }
	inline MouseLook_t2188812752 ** get_address_of__mouseLook_9() { return &____mouseLook_9; }
	inline void set__mouseLook_9(MouseLook_t2188812752 * value)
	{
		____mouseLook_9 = value;
		Il2CppCodeGenWriteBarrier(&____mouseLook_9, value);
	}

	inline static int32_t get_offset_of_useFOVKick_10() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ___useFOVKick_10)); }
	inline bool get_useFOVKick_10() const { return ___useFOVKick_10; }
	inline bool* get_address_of_useFOVKick_10() { return &___useFOVKick_10; }
	inline void set_useFOVKick_10(bool value)
	{
		___useFOVKick_10 = value;
	}

	inline static int32_t get_offset_of__fovKick_11() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____fovKick_11)); }
	inline FOVKick_t1167903421 * get__fovKick_11() const { return ____fovKick_11; }
	inline FOVKick_t1167903421 ** get_address_of__fovKick_11() { return &____fovKick_11; }
	inline void set__fovKick_11(FOVKick_t1167903421 * value)
	{
		____fovKick_11 = value;
		Il2CppCodeGenWriteBarrier(&____fovKick_11, value);
	}

	inline static int32_t get_offset_of_useHeadBob_12() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ___useHeadBob_12)); }
	inline bool get_useHeadBob_12() const { return ___useHeadBob_12; }
	inline bool* get_address_of_useHeadBob_12() { return &___useHeadBob_12; }
	inline void set_useHeadBob_12(bool value)
	{
		___useHeadBob_12 = value;
	}

	inline static int32_t get_offset_of__headBob_13() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____headBob_13)); }
	inline CurveControlledBob_t2717668098 * get__headBob_13() const { return ____headBob_13; }
	inline CurveControlledBob_t2717668098 ** get_address_of__headBob_13() { return &____headBob_13; }
	inline void set__headBob_13(CurveControlledBob_t2717668098 * value)
	{
		____headBob_13 = value;
		Il2CppCodeGenWriteBarrier(&____headBob_13, value);
	}

	inline static int32_t get_offset_of__jumpBob_14() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____jumpBob_14)); }
	inline LerpControlledBob_t4212358120 * get__jumpBob_14() const { return ____jumpBob_14; }
	inline LerpControlledBob_t4212358120 ** get_address_of__jumpBob_14() { return &____jumpBob_14; }
	inline void set__jumpBob_14(LerpControlledBob_t4212358120 * value)
	{
		____jumpBob_14 = value;
		Il2CppCodeGenWriteBarrier(&____jumpBob_14, value);
	}

	inline static int32_t get_offset_of__stepInterval_15() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____stepInterval_15)); }
	inline float get__stepInterval_15() const { return ____stepInterval_15; }
	inline float* get_address_of__stepInterval_15() { return &____stepInterval_15; }
	inline void set__stepInterval_15(float value)
	{
		____stepInterval_15 = value;
	}

	inline static int32_t get_offset_of__footstepSounds_16() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____footstepSounds_16)); }
	inline AudioClipU5BU5D_t2203355011* get__footstepSounds_16() const { return ____footstepSounds_16; }
	inline AudioClipU5BU5D_t2203355011** get_address_of__footstepSounds_16() { return &____footstepSounds_16; }
	inline void set__footstepSounds_16(AudioClipU5BU5D_t2203355011* value)
	{
		____footstepSounds_16 = value;
		Il2CppCodeGenWriteBarrier(&____footstepSounds_16, value);
	}

	inline static int32_t get_offset_of__jumpSound_17() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____jumpSound_17)); }
	inline AudioClip_t1932558630 * get__jumpSound_17() const { return ____jumpSound_17; }
	inline AudioClip_t1932558630 ** get_address_of__jumpSound_17() { return &____jumpSound_17; }
	inline void set__jumpSound_17(AudioClip_t1932558630 * value)
	{
		____jumpSound_17 = value;
		Il2CppCodeGenWriteBarrier(&____jumpSound_17, value);
	}

	inline static int32_t get_offset_of__landSound_18() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____landSound_18)); }
	inline AudioClip_t1932558630 * get__landSound_18() const { return ____landSound_18; }
	inline AudioClip_t1932558630 ** get_address_of__landSound_18() { return &____landSound_18; }
	inline void set__landSound_18(AudioClip_t1932558630 * value)
	{
		____landSound_18 = value;
		Il2CppCodeGenWriteBarrier(&____landSound_18, value);
	}

	inline static int32_t get_offset_of__camera_19() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____camera_19)); }
	inline Camera_t189460977 * get__camera_19() const { return ____camera_19; }
	inline Camera_t189460977 ** get_address_of__camera_19() { return &____camera_19; }
	inline void set__camera_19(Camera_t189460977 * value)
	{
		____camera_19 = value;
		Il2CppCodeGenWriteBarrier(&____camera_19, value);
	}

	inline static int32_t get_offset_of__jump_20() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____jump_20)); }
	inline bool get__jump_20() const { return ____jump_20; }
	inline bool* get_address_of__jump_20() { return &____jump_20; }
	inline void set__jump_20(bool value)
	{
		____jump_20 = value;
	}

	inline static int32_t get_offset_of__yRotation_21() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____yRotation_21)); }
	inline float get__yRotation_21() const { return ____yRotation_21; }
	inline float* get_address_of__yRotation_21() { return &____yRotation_21; }
	inline void set__yRotation_21(float value)
	{
		____yRotation_21 = value;
	}

	inline static int32_t get_offset_of__cameraRefocus_22() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____cameraRefocus_22)); }
	inline CameraRefocus_t3489552324 * get__cameraRefocus_22() const { return ____cameraRefocus_22; }
	inline CameraRefocus_t3489552324 ** get_address_of__cameraRefocus_22() { return &____cameraRefocus_22; }
	inline void set__cameraRefocus_22(CameraRefocus_t3489552324 * value)
	{
		____cameraRefocus_22 = value;
		Il2CppCodeGenWriteBarrier(&____cameraRefocus_22, value);
	}

	inline static int32_t get_offset_of__input_23() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____input_23)); }
	inline Vector2_t2243707579  get__input_23() const { return ____input_23; }
	inline Vector2_t2243707579 * get_address_of__input_23() { return &____input_23; }
	inline void set__input_23(Vector2_t2243707579  value)
	{
		____input_23 = value;
	}

	inline static int32_t get_offset_of__moveDir_24() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____moveDir_24)); }
	inline Vector3_t2243707580  get__moveDir_24() const { return ____moveDir_24; }
	inline Vector3_t2243707580 * get_address_of__moveDir_24() { return &____moveDir_24; }
	inline void set__moveDir_24(Vector3_t2243707580  value)
	{
		____moveDir_24 = value;
	}

	inline static int32_t get_offset_of__characterController_25() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____characterController_25)); }
	inline CharacterController_t4094781467 * get__characterController_25() const { return ____characterController_25; }
	inline CharacterController_t4094781467 ** get_address_of__characterController_25() { return &____characterController_25; }
	inline void set__characterController_25(CharacterController_t4094781467 * value)
	{
		____characterController_25 = value;
		Il2CppCodeGenWriteBarrier(&____characterController_25, value);
	}

	inline static int32_t get_offset_of__collisionFlags_26() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____collisionFlags_26)); }
	inline int32_t get__collisionFlags_26() const { return ____collisionFlags_26; }
	inline int32_t* get_address_of__collisionFlags_26() { return &____collisionFlags_26; }
	inline void set__collisionFlags_26(int32_t value)
	{
		____collisionFlags_26 = value;
	}

	inline static int32_t get_offset_of__previouslyGrounded_27() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____previouslyGrounded_27)); }
	inline bool get__previouslyGrounded_27() const { return ____previouslyGrounded_27; }
	inline bool* get_address_of__previouslyGrounded_27() { return &____previouslyGrounded_27; }
	inline void set__previouslyGrounded_27(bool value)
	{
		____previouslyGrounded_27 = value;
	}

	inline static int32_t get_offset_of__originalCameraPosition_28() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____originalCameraPosition_28)); }
	inline Vector3_t2243707580  get__originalCameraPosition_28() const { return ____originalCameraPosition_28; }
	inline Vector3_t2243707580 * get_address_of__originalCameraPosition_28() { return &____originalCameraPosition_28; }
	inline void set__originalCameraPosition_28(Vector3_t2243707580  value)
	{
		____originalCameraPosition_28 = value;
	}

	inline static int32_t get_offset_of__stepCycle_29() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____stepCycle_29)); }
	inline float get__stepCycle_29() const { return ____stepCycle_29; }
	inline float* get_address_of__stepCycle_29() { return &____stepCycle_29; }
	inline void set__stepCycle_29(float value)
	{
		____stepCycle_29 = value;
	}

	inline static int32_t get_offset_of__nextStep_30() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____nextStep_30)); }
	inline float get__nextStep_30() const { return ____nextStep_30; }
	inline float* get_address_of__nextStep_30() { return &____nextStep_30; }
	inline void set__nextStep_30(float value)
	{
		____nextStep_30 = value;
	}

	inline static int32_t get_offset_of__jumping_31() { return static_cast<int32_t>(offsetof(FirstPersonController_t4132991167, ____jumping_31)); }
	inline bool get__jumping_31() const { return ____jumping_31; }
	inline bool* get_address_of__jumping_31() { return &____jumping_31; }
	inline void set__jumping_31(bool value)
	{
		____jumping_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
