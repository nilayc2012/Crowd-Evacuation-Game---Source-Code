#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.Utility.CurveControlledBob
struct  CurveControlledBob_t2717668098  : public Il2CppObject
{
public:
	// System.Single UnitySampleAssets.Utility.CurveControlledBob::_bobBaseInterval
	float ____bobBaseInterval_0;
	// UnityEngine.Vector3 UnitySampleAssets.Utility.CurveControlledBob::_originalCameraPosition
	Vector3_t2243707580  ____originalCameraPosition_1;
	// System.Single UnitySampleAssets.Utility.CurveControlledBob::_time
	float ____time_2;
	// System.Single UnitySampleAssets.Utility.CurveControlledBob::HorizontalBobRange
	float ___HorizontalBobRange_3;
	// System.Single UnitySampleAssets.Utility.CurveControlledBob::VerticalBobRange
	float ___VerticalBobRange_4;
	// UnityEngine.AnimationCurve UnitySampleAssets.Utility.CurveControlledBob::Bobcurve
	AnimationCurve_t3306541151 * ___Bobcurve_5;
	// System.Single UnitySampleAssets.Utility.CurveControlledBob::_cyclePositionX
	float ____cyclePositionX_6;
	// System.Single UnitySampleAssets.Utility.CurveControlledBob::_cyclePositionY
	float ____cyclePositionY_7;
	// System.Single UnitySampleAssets.Utility.CurveControlledBob::VerticaltoHorizontalRatio
	float ___VerticaltoHorizontalRatio_8;

public:
	inline static int32_t get_offset_of__bobBaseInterval_0() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ____bobBaseInterval_0)); }
	inline float get__bobBaseInterval_0() const { return ____bobBaseInterval_0; }
	inline float* get_address_of__bobBaseInterval_0() { return &____bobBaseInterval_0; }
	inline void set__bobBaseInterval_0(float value)
	{
		____bobBaseInterval_0 = value;
	}

	inline static int32_t get_offset_of__originalCameraPosition_1() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ____originalCameraPosition_1)); }
	inline Vector3_t2243707580  get__originalCameraPosition_1() const { return ____originalCameraPosition_1; }
	inline Vector3_t2243707580 * get_address_of__originalCameraPosition_1() { return &____originalCameraPosition_1; }
	inline void set__originalCameraPosition_1(Vector3_t2243707580  value)
	{
		____originalCameraPosition_1 = value;
	}

	inline static int32_t get_offset_of__time_2() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ____time_2)); }
	inline float get__time_2() const { return ____time_2; }
	inline float* get_address_of__time_2() { return &____time_2; }
	inline void set__time_2(float value)
	{
		____time_2 = value;
	}

	inline static int32_t get_offset_of_HorizontalBobRange_3() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ___HorizontalBobRange_3)); }
	inline float get_HorizontalBobRange_3() const { return ___HorizontalBobRange_3; }
	inline float* get_address_of_HorizontalBobRange_3() { return &___HorizontalBobRange_3; }
	inline void set_HorizontalBobRange_3(float value)
	{
		___HorizontalBobRange_3 = value;
	}

	inline static int32_t get_offset_of_VerticalBobRange_4() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ___VerticalBobRange_4)); }
	inline float get_VerticalBobRange_4() const { return ___VerticalBobRange_4; }
	inline float* get_address_of_VerticalBobRange_4() { return &___VerticalBobRange_4; }
	inline void set_VerticalBobRange_4(float value)
	{
		___VerticalBobRange_4 = value;
	}

	inline static int32_t get_offset_of_Bobcurve_5() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ___Bobcurve_5)); }
	inline AnimationCurve_t3306541151 * get_Bobcurve_5() const { return ___Bobcurve_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_Bobcurve_5() { return &___Bobcurve_5; }
	inline void set_Bobcurve_5(AnimationCurve_t3306541151 * value)
	{
		___Bobcurve_5 = value;
		Il2CppCodeGenWriteBarrier(&___Bobcurve_5, value);
	}

	inline static int32_t get_offset_of__cyclePositionX_6() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ____cyclePositionX_6)); }
	inline float get__cyclePositionX_6() const { return ____cyclePositionX_6; }
	inline float* get_address_of__cyclePositionX_6() { return &____cyclePositionX_6; }
	inline void set__cyclePositionX_6(float value)
	{
		____cyclePositionX_6 = value;
	}

	inline static int32_t get_offset_of__cyclePositionY_7() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ____cyclePositionY_7)); }
	inline float get__cyclePositionY_7() const { return ____cyclePositionY_7; }
	inline float* get_address_of__cyclePositionY_7() { return &____cyclePositionY_7; }
	inline void set__cyclePositionY_7(float value)
	{
		____cyclePositionY_7 = value;
	}

	inline static int32_t get_offset_of_VerticaltoHorizontalRatio_8() { return static_cast<int32_t>(offsetof(CurveControlledBob_t2717668098, ___VerticaltoHorizontalRatio_8)); }
	inline float get_VerticaltoHorizontalRatio_8() const { return ___VerticaltoHorizontalRatio_8; }
	inline float* get_address_of_VerticaltoHorizontalRatio_8() { return &___VerticaltoHorizontalRatio_8; }
	inline void set_VerticaltoHorizontalRatio_8(float value)
	{
		___VerticaltoHorizontalRatio_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
