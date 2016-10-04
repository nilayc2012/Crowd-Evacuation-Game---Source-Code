#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// WallTransform
struct WallTransform_t2927233092;
// Pos
struct Pos_t774521570;
// Rot
struct Rot_t774521503;
// WallScale
struct WallScale_t2901051958;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_WallTransform2927233092.h"
#include "AssemblyU2DCSharp_WallTransform2927233092MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "AssemblyU2DCSharp_Pos774521570.h"
#include "AssemblyU2DCSharp_Rot774521503.h"
#include "AssemblyU2DCSharp_WallScale2901051958.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "AssemblyU2DCSharp_Pos774521570MethodDeclarations.h"
#include "AssemblyU2DCSharp_Rot774521503MethodDeclarations.h"
#include "AssemblyU2DCSharp_WallScale2901051958MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WallTransform::.ctor()
extern "C"  void WallTransform__ctor_m199112465 (WallTransform_t2927233092 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WallTransform::.ctor(Pos,Rot,WallScale)
extern "C"  void WallTransform__ctor_m2444783036 (WallTransform_t2927233092 * __this, Pos_t774521570 * ___pos0, Rot_t774521503 * ___rot1, WallScale_t2901051958 * ___ws2, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		Pos_t774521570 * L_0 = ___pos0;
		__this->set_pos_0(L_0);
		Rot_t774521503 * L_1 = ___rot1;
		__this->set_rot_1(L_1);
		WallScale_t2901051958 * L_2 = ___ws2;
		__this->set_ws_2(L_2);
		return;
	}
}
// System.Boolean WallTransform::Equals(System.Object)
extern Il2CppClass* WallTransform_t2927233092_il2cpp_TypeInfo_var;
extern const uint32_t WallTransform_Equals_m2456349760_MetadataUsageId;
extern "C"  bool WallTransform_Equals_m2456349760 (WallTransform_t2927233092 * __this, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WallTransform_Equals_m2456349760_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	WallTransform_t2927233092 * V_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		Il2CppObject * L_0 = ___obj0;
		V_0 = ((WallTransform_t2927233092 *)IsInstClass(L_0, WallTransform_t2927233092_il2cpp_TypeInfo_var));
		WallTransform_t2927233092 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		Pos_t774521570 * L_2 = __this->get_pos_0();
		WallTransform_t2927233092 * L_3 = V_0;
		Pos_t774521570 * L_4 = L_3->get_pos_0();
		bool L_5 = VirtFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean Pos::Equals(System.Object) */, L_2, L_4);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		Rot_t774521503 * L_6 = __this->get_rot_1();
		WallTransform_t2927233092 * L_7 = V_0;
		Rot_t774521503 * L_8 = L_7->get_rot_1();
		bool L_9 = VirtFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean Rot::Equals(System.Object) */, L_6, L_8);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		WallScale_t2901051958 * L_10 = __this->get_ws_2();
		WallTransform_t2927233092 * L_11 = V_0;
		WallScale_t2901051958 * L_12 = L_11->get_ws_2();
		bool L_13 = VirtFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean WallScale::Equals(System.Object) */, L_10, L_12);
		G_B6_0 = ((int32_t)(L_13));
		goto IL_004f;
	}

IL_004e:
	{
		G_B6_0 = 0;
	}

IL_004f:
	{
		return (bool)G_B6_0;
	}
}
// UnityEngine.GameObject WallTransform::convertToUnityGameobject()
extern Il2CppClass* GameObject_t1756533147_il2cpp_TypeInfo_var;
extern const uint32_t WallTransform_convertToUnityGameobject_m2784017586_MetadataUsageId;
extern "C"  GameObject_t1756533147 * WallTransform_convertToUnityGameobject_m2784017586 (WallTransform_t2927233092 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WallTransform_convertToUnityGameobject_m2784017586_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1756533147 * V_0 = NULL;
	{
		GameObject_t1756533147 * L_0 = (GameObject_t1756533147 *)il2cpp_codegen_object_new(GameObject_t1756533147_il2cpp_TypeInfo_var);
		GameObject__ctor_m498247354(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1756533147 * L_1 = V_0;
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		Pos_t774521570 * L_3 = __this->get_pos_0();
		float L_4 = L_3->get_x_0();
		Pos_t774521570 * L_5 = __this->get_pos_0();
		float L_6 = L_5->get_y_1();
		Pos_t774521570 * L_7 = __this->get_pos_0();
		float L_8 = L_7->get_z_2();
		Vector3_t2243707580  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2638739322(&L_9, L_4, L_6, L_8, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_2, L_9, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_10 = V_0;
		Transform_t3275118058 * L_11 = GameObject_get_transform_m909382139(L_10, /*hidden argument*/NULL);
		Rot_t774521503 * L_12 = __this->get_rot_1();
		float L_13 = L_12->get_x_0();
		Rot_t774521503 * L_14 = __this->get_rot_1();
		float L_15 = L_14->get_y_1();
		Rot_t774521503 * L_16 = __this->get_rot_1();
		float L_17 = L_16->get_z_2();
		Vector3_t2243707580  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m2638739322(&L_18, L_13, L_15, L_17, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m2881310872(L_11, L_18, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_19 = V_0;
		Transform_t3275118058 * L_20 = GameObject_get_transform_m909382139(L_19, /*hidden argument*/NULL);
		WallScale_t2901051958 * L_21 = __this->get_ws_2();
		float L_22 = L_21->get_x_0();
		WallScale_t2901051958 * L_23 = __this->get_ws_2();
		float L_24 = L_23->get_y_1();
		WallScale_t2901051958 * L_25 = __this->get_ws_2();
		float L_26 = L_25->get_z_2();
		Vector3_t2243707580  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m2638739322(&L_27, L_22, L_24, L_26, /*hidden argument*/NULL);
		Transform_set_localScale_m2325460848(L_20, L_27, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_28 = V_0;
		return L_28;
	}
}
// System.Void WallTransform::updateDetails()
extern Il2CppClass* Pos_t774521570_il2cpp_TypeInfo_var;
extern Il2CppClass* Rot_t774521503_il2cpp_TypeInfo_var;
extern Il2CppClass* WallScale_t2901051958_il2cpp_TypeInfo_var;
extern const uint32_t WallTransform_updateDetails_m1061348178_MetadataUsageId;
extern "C"  void WallTransform_updateDetails_m1061348178 (WallTransform_t2927233092 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WallTransform_updateDetails_m1061348178_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t4030073918  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Quaternion_t4030073918  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Quaternion_t4030073918  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t2243707580  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t2243707580  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t2243707580  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		GameObject_t1756533147 * L_0 = __this->get_gameObject_3();
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		GameObject_t1756533147 * L_4 = __this->get_gameObject_3();
		Transform_t3275118058 * L_5 = GameObject_get_transform_m909382139(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_y_2();
		GameObject_t1756533147 * L_8 = __this->get_gameObject_3();
		Transform_t3275118058 * L_9 = GameObject_get_transform_m909382139(L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = (&V_2)->get_z_3();
		Pos_t774521570 * L_12 = (Pos_t774521570 *)il2cpp_codegen_object_new(Pos_t774521570_il2cpp_TypeInfo_var);
		Pos__ctor_m870443034(L_12, L_3, L_7, L_11, /*hidden argument*/NULL);
		__this->set_pos_0(L_12);
		GameObject_t1756533147 * L_13 = __this->get_gameObject_3();
		Transform_t3275118058 * L_14 = GameObject_get_transform_m909382139(L_13, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_15 = Transform_get_rotation_m1033555130(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		float L_16 = (&V_3)->get_x_1();
		GameObject_t1756533147 * L_17 = __this->get_gameObject_3();
		Transform_t3275118058 * L_18 = GameObject_get_transform_m909382139(L_17, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_19 = Transform_get_rotation_m1033555130(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		float L_20 = (&V_4)->get_y_2();
		GameObject_t1756533147 * L_21 = __this->get_gameObject_3();
		Transform_t3275118058 * L_22 = GameObject_get_transform_m909382139(L_21, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_23 = Transform_get_rotation_m1033555130(L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		float L_24 = (&V_5)->get_z_3();
		Rot_t774521503 * L_25 = (Rot_t774521503 *)il2cpp_codegen_object_new(Rot_t774521503_il2cpp_TypeInfo_var);
		Rot__ctor_m841446967(L_25, L_16, L_20, L_24, /*hidden argument*/NULL);
		__this->set_rot_1(L_25);
		GameObject_t1756533147 * L_26 = __this->get_gameObject_3();
		Transform_t3275118058 * L_27 = GameObject_get_transform_m909382139(L_26, /*hidden argument*/NULL);
		Vector3_t2243707580  L_28 = Transform_get_localScale_m3074381503(L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		float L_29 = (&V_6)->get_x_1();
		GameObject_t1756533147 * L_30 = __this->get_gameObject_3();
		Transform_t3275118058 * L_31 = GameObject_get_transform_m909382139(L_30, /*hidden argument*/NULL);
		Vector3_t2243707580  L_32 = Transform_get_localScale_m3074381503(L_31, /*hidden argument*/NULL);
		V_7 = L_32;
		float L_33 = (&V_7)->get_y_2();
		GameObject_t1756533147 * L_34 = __this->get_gameObject_3();
		Transform_t3275118058 * L_35 = GameObject_get_transform_m909382139(L_34, /*hidden argument*/NULL);
		Vector3_t2243707580  L_36 = Transform_get_localScale_m3074381503(L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		float L_37 = (&V_8)->get_z_3();
		WallScale_t2901051958 * L_38 = (WallScale_t2901051958 *)il2cpp_codegen_object_new(WallScale_t2901051958_il2cpp_TypeInfo_var);
		WallScale__ctor_m2584008458(L_38, L_29, L_33, L_37, /*hidden argument*/NULL);
		__this->set_ws_2(L_38);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
