﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m2129424870 (WWWForm_t3950226929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m1334606983 (WWWForm_t3950226929 * __this, String_t* ___fieldName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C"  void WWWForm_AddField_m1016126514 (WWWForm_t3950226929 * __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t663144255 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[])
extern "C"  void WWWForm_AddBinaryData_m1683642891 (WWWForm_t3950226929 * __this, String_t* ___fieldName0, ByteU5BU5D_t3397334013* ___contents1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C"  void WWWForm_AddBinaryData_m321832523 (WWWForm_t3950226929 * __this, String_t* ___fieldName0, ByteU5BU5D_t3397334013* ___contents1, String_t* ___fileName2, String_t* ___mimeType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C"  Dictionary_2_t3943999495 * WWWForm_get_headers_m3744493569 (WWWForm_t3950226929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C"  ByteU5BU5D_t3397334013* WWWForm_get_data_m1788094649 (WWWForm_t3950226929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
