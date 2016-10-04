#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MirzaBeig.Common.MathUtility/Buffer`1<System.Object>
struct Buffer_1_t311020121;
// MirzaBeig.Common.MathUtility/TimeStampedValue`1<System.Object>
struct TimeStampedValue_1_t2581351613;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void MirzaBeig.Common.MathUtility/Buffer`1<System.Object>::.ctor()
extern "C"  void Buffer_1__ctor_m3774866526_gshared (Buffer_1_t311020121 * __this, const MethodInfo* method);
#define Buffer_1__ctor_m3774866526(__this, method) ((  void (*) (Buffer_1_t311020121 *, const MethodInfo*))Buffer_1__ctor_m3774866526_gshared)(__this, method)
// MirzaBeig.Common.MathUtility/TimeStampedValue`1<T> MirzaBeig.Common.MathUtility/Buffer`1<System.Object>::getFirstElement()
extern "C"  TimeStampedValue_1_t2581351613 * Buffer_1_getFirstElement_m3121253248_gshared (Buffer_1_t311020121 * __this, const MethodInfo* method);
#define Buffer_1_getFirstElement_m3121253248(__this, method) ((  TimeStampedValue_1_t2581351613 * (*) (Buffer_1_t311020121 *, const MethodInfo*))Buffer_1_getFirstElement_m3121253248_gshared)(__this, method)
// System.Void MirzaBeig.Common.MathUtility/Buffer`1<System.Object>::add(T,System.Single)
extern "C"  void Buffer_1_add_m1229987442_gshared (Buffer_1_t311020121 * __this, Il2CppObject * ___value0, float ___time1, const MethodInfo* method);
#define Buffer_1_add_m1229987442(__this, ___value0, ___time1, method) ((  void (*) (Buffer_1_t311020121 *, Il2CppObject *, float, const MethodInfo*))Buffer_1_add_m1229987442_gshared)(__this, ___value0, ___time1, method)
// System.Void MirzaBeig.Common.MathUtility/Buffer`1<System.Object>::update(System.Single)
extern "C"  void Buffer_1_update_m48787234_gshared (Buffer_1_t311020121 * __this, float ___currentTime0, const MethodInfo* method);
#define Buffer_1_update_m48787234(__this, ___currentTime0, method) ((  void (*) (Buffer_1_t311020121 *, float, const MethodInfo*))Buffer_1_update_m48787234_gshared)(__this, ___currentTime0, method)
