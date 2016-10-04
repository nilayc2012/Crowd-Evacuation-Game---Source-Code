#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonTasks/<GetUserID>c__Iterator39
struct  U3CGetUserIDU3Ec__Iterator39_t3082378702  : public Il2CppObject
{
public:
	// System.String ButtonTasks/<GetUserID>c__Iterator39::<url>__0
	String_t* ___U3CurlU3E__0_0;
	// UnityEngine.WWW ButtonTasks/<GetUserID>c__Iterator39::<www>__1
	WWW_t2919945039 * ___U3CwwwU3E__1_1;
	// System.Int32 ButtonTasks/<GetUserID>c__Iterator39::$PC
	int32_t ___U24PC_2;
	// System.Object ButtonTasks/<GetUserID>c__Iterator39::$current
	Il2CppObject * ___U24current_3;

public:
	inline static int32_t get_offset_of_U3CurlU3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetUserIDU3Ec__Iterator39_t3082378702, ___U3CurlU3E__0_0)); }
	inline String_t* get_U3CurlU3E__0_0() const { return ___U3CurlU3E__0_0; }
	inline String_t** get_address_of_U3CurlU3E__0_0() { return &___U3CurlU3E__0_0; }
	inline void set_U3CurlU3E__0_0(String_t* value)
	{
		___U3CurlU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CurlU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetUserIDU3Ec__Iterator39_t3082378702, ___U3CwwwU3E__1_1)); }
	inline WWW_t2919945039 * get_U3CwwwU3E__1_1() const { return ___U3CwwwU3E__1_1; }
	inline WWW_t2919945039 ** get_address_of_U3CwwwU3E__1_1() { return &___U3CwwwU3E__1_1; }
	inline void set_U3CwwwU3E__1_1(WWW_t2919945039 * value)
	{
		___U3CwwwU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CGetUserIDU3Ec__Iterator39_t3082378702, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetUserIDU3Ec__Iterator39_t3082378702, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
