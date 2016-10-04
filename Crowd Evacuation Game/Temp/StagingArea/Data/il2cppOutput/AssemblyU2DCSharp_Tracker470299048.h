#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Single>
struct Dictionary_2_t3035027248;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tracker
struct  Tracker_t470299048  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Tracker::logsPerSecond
	float ___logsPerSecond_2;
	// System.Single Tracker::logSplit
	float ___logSplit_3;
	// System.Single Tracker::timer
	float ___timer_4;
	// UnityEngine.GameObject Tracker::mainCam
	GameObject_t1756533147 * ___mainCam_5;
	// UnityEngine.Camera Tracker::cam
	Camera_t189460977 * ___cam_6;
	// UnityEngine.GameObject Tracker::plane
	GameObject_t1756533147 * ___plane_7;
	// System.Int32 Tracker::firstMovement
	int32_t ___firstMovement_8;
	// System.Single Tracker::bottomLeftX
	float ___bottomLeftX_9;
	// System.Single Tracker::bottomLeftZ
	float ___bottomLeftZ_10;
	// System.Int32 Tracker::maxX
	int32_t ___maxX_11;
	// System.Int32 Tracker::maxY
	int32_t ___maxY_12;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Single> Tracker::allData
	Dictionary_2_t3035027248 * ___allData_13;
	// System.Int32 Tracker::radius
	int32_t ___radius_14;
	// UnityEngine.Vector3 Tracker::originalPosition
	Vector3_t2243707580  ___originalPosition_15;

public:
	inline static int32_t get_offset_of_logsPerSecond_2() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___logsPerSecond_2)); }
	inline float get_logsPerSecond_2() const { return ___logsPerSecond_2; }
	inline float* get_address_of_logsPerSecond_2() { return &___logsPerSecond_2; }
	inline void set_logsPerSecond_2(float value)
	{
		___logsPerSecond_2 = value;
	}

	inline static int32_t get_offset_of_logSplit_3() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___logSplit_3)); }
	inline float get_logSplit_3() const { return ___logSplit_3; }
	inline float* get_address_of_logSplit_3() { return &___logSplit_3; }
	inline void set_logSplit_3(float value)
	{
		___logSplit_3 = value;
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_mainCam_5() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___mainCam_5)); }
	inline GameObject_t1756533147 * get_mainCam_5() const { return ___mainCam_5; }
	inline GameObject_t1756533147 ** get_address_of_mainCam_5() { return &___mainCam_5; }
	inline void set_mainCam_5(GameObject_t1756533147 * value)
	{
		___mainCam_5 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_5, value);
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___cam_6)); }
	inline Camera_t189460977 * get_cam_6() const { return ___cam_6; }
	inline Camera_t189460977 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Camera_t189460977 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___cam_6, value);
	}

	inline static int32_t get_offset_of_plane_7() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___plane_7)); }
	inline GameObject_t1756533147 * get_plane_7() const { return ___plane_7; }
	inline GameObject_t1756533147 ** get_address_of_plane_7() { return &___plane_7; }
	inline void set_plane_7(GameObject_t1756533147 * value)
	{
		___plane_7 = value;
		Il2CppCodeGenWriteBarrier(&___plane_7, value);
	}

	inline static int32_t get_offset_of_firstMovement_8() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___firstMovement_8)); }
	inline int32_t get_firstMovement_8() const { return ___firstMovement_8; }
	inline int32_t* get_address_of_firstMovement_8() { return &___firstMovement_8; }
	inline void set_firstMovement_8(int32_t value)
	{
		___firstMovement_8 = value;
	}

	inline static int32_t get_offset_of_bottomLeftX_9() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___bottomLeftX_9)); }
	inline float get_bottomLeftX_9() const { return ___bottomLeftX_9; }
	inline float* get_address_of_bottomLeftX_9() { return &___bottomLeftX_9; }
	inline void set_bottomLeftX_9(float value)
	{
		___bottomLeftX_9 = value;
	}

	inline static int32_t get_offset_of_bottomLeftZ_10() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___bottomLeftZ_10)); }
	inline float get_bottomLeftZ_10() const { return ___bottomLeftZ_10; }
	inline float* get_address_of_bottomLeftZ_10() { return &___bottomLeftZ_10; }
	inline void set_bottomLeftZ_10(float value)
	{
		___bottomLeftZ_10 = value;
	}

	inline static int32_t get_offset_of_maxX_11() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___maxX_11)); }
	inline int32_t get_maxX_11() const { return ___maxX_11; }
	inline int32_t* get_address_of_maxX_11() { return &___maxX_11; }
	inline void set_maxX_11(int32_t value)
	{
		___maxX_11 = value;
	}

	inline static int32_t get_offset_of_maxY_12() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___maxY_12)); }
	inline int32_t get_maxY_12() const { return ___maxY_12; }
	inline int32_t* get_address_of_maxY_12() { return &___maxY_12; }
	inline void set_maxY_12(int32_t value)
	{
		___maxY_12 = value;
	}

	inline static int32_t get_offset_of_allData_13() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___allData_13)); }
	inline Dictionary_2_t3035027248 * get_allData_13() const { return ___allData_13; }
	inline Dictionary_2_t3035027248 ** get_address_of_allData_13() { return &___allData_13; }
	inline void set_allData_13(Dictionary_2_t3035027248 * value)
	{
		___allData_13 = value;
		Il2CppCodeGenWriteBarrier(&___allData_13, value);
	}

	inline static int32_t get_offset_of_radius_14() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___radius_14)); }
	inline int32_t get_radius_14() const { return ___radius_14; }
	inline int32_t* get_address_of_radius_14() { return &___radius_14; }
	inline void set_radius_14(int32_t value)
	{
		___radius_14 = value;
	}

	inline static int32_t get_offset_of_originalPosition_15() { return static_cast<int32_t>(offsetof(Tracker_t470299048, ___originalPosition_15)); }
	inline Vector3_t2243707580  get_originalPosition_15() const { return ___originalPosition_15; }
	inline Vector3_t2243707580 * get_address_of_originalPosition_15() { return &___originalPosition_15; }
	inline void set_originalPosition_15(Vector3_t2243707580  value)
	{
		___originalPosition_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
