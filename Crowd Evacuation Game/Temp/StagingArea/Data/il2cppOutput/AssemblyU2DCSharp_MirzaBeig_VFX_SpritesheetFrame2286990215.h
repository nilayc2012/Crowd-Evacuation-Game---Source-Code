#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MirzaBeig.Common.MathUtility/RangeInt
struct RangeInt_t922605666;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirzaBeig.VFX.SpritesheetFrame
struct  SpritesheetFrame_t2286990215  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 MirzaBeig.VFX.SpritesheetFrame::columns
	int32_t ___columns_2;
	// System.Int32 MirzaBeig.VFX.SpritesheetFrame::rows
	int32_t ___rows_3;
	// MirzaBeig.Common.MathUtility/RangeInt MirzaBeig.VFX.SpritesheetFrame::frameRange
	RangeInt_t922605666 * ___frameRange_4;
	// UnityEngine.Renderer MirzaBeig.VFX.SpritesheetFrame::renderer
	Renderer_t257310565 * ___renderer_5;
	// UnityEngine.Material MirzaBeig.VFX.SpritesheetFrame::materialCopy
	Material_t193706927 * ___materialCopy_6;

public:
	inline static int32_t get_offset_of_columns_2() { return static_cast<int32_t>(offsetof(SpritesheetFrame_t2286990215, ___columns_2)); }
	inline int32_t get_columns_2() const { return ___columns_2; }
	inline int32_t* get_address_of_columns_2() { return &___columns_2; }
	inline void set_columns_2(int32_t value)
	{
		___columns_2 = value;
	}

	inline static int32_t get_offset_of_rows_3() { return static_cast<int32_t>(offsetof(SpritesheetFrame_t2286990215, ___rows_3)); }
	inline int32_t get_rows_3() const { return ___rows_3; }
	inline int32_t* get_address_of_rows_3() { return &___rows_3; }
	inline void set_rows_3(int32_t value)
	{
		___rows_3 = value;
	}

	inline static int32_t get_offset_of_frameRange_4() { return static_cast<int32_t>(offsetof(SpritesheetFrame_t2286990215, ___frameRange_4)); }
	inline RangeInt_t922605666 * get_frameRange_4() const { return ___frameRange_4; }
	inline RangeInt_t922605666 ** get_address_of_frameRange_4() { return &___frameRange_4; }
	inline void set_frameRange_4(RangeInt_t922605666 * value)
	{
		___frameRange_4 = value;
		Il2CppCodeGenWriteBarrier(&___frameRange_4, value);
	}

	inline static int32_t get_offset_of_renderer_5() { return static_cast<int32_t>(offsetof(SpritesheetFrame_t2286990215, ___renderer_5)); }
	inline Renderer_t257310565 * get_renderer_5() const { return ___renderer_5; }
	inline Renderer_t257310565 ** get_address_of_renderer_5() { return &___renderer_5; }
	inline void set_renderer_5(Renderer_t257310565 * value)
	{
		___renderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___renderer_5, value);
	}

	inline static int32_t get_offset_of_materialCopy_6() { return static_cast<int32_t>(offsetof(SpritesheetFrame_t2286990215, ___materialCopy_6)); }
	inline Material_t193706927 * get_materialCopy_6() const { return ___materialCopy_6; }
	inline Material_t193706927 ** get_address_of_materialCopy_6() { return &___materialCopy_6; }
	inline void set_materialCopy_6(Material_t193706927 * value)
	{
		___materialCopy_6 = value;
		Il2CppCodeGenWriteBarrier(&___materialCopy_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
