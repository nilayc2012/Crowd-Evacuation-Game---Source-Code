#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// GETweenItem
struct GETweenItem_t3020157540;

#include "mscorlib_System_Array3829468939.h"
#include "GETween_GETweenItem3020157540.h"

#pragma once
// GETweenItem[]
struct GETweenItemU5BU5D_t611033997  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GETweenItem_t3020157540 * m_Items[1];

public:
	inline GETweenItem_t3020157540 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GETweenItem_t3020157540 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GETweenItem_t3020157540 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
