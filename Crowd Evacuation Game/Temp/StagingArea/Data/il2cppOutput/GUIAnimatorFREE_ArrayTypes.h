#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// GUIAnimFREE
struct GUIAnimFREE_t2360261712;

#include "mscorlib_System_Array3829468939.h"
#include "GUIAnimatorFREE_GUIAnimFREE2360261712.h"

#pragma once
// GUIAnimFREE[]
struct GUIAnimFREEU5BU5D_t2462431345  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GUIAnimFREE_t2360261712 * m_Items[1];

public:
	inline GUIAnimFREE_t2360261712 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GUIAnimFREE_t2360261712 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GUIAnimFREE_t2360261712 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
