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

// Heatmap
struct Heatmap_t2623796516;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Single>
struct Dictionary_2_t3035027248;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void Heatmap::.ctor()
extern "C"  void Heatmap__ctor_m2113115699 (Heatmap_t2623796516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Heatmap::.cctor()
extern "C"  void Heatmap__cctor_m2044026130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Heatmap::CreateHeatmap(System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Single>,UnityEngine.Camera,UnityEngine.GameObject)
extern "C"  Texture2D_t3542995729 * Heatmap_CreateHeatmap_m1315608514 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3035027248 * ___speedAndPos0, Camera_t189460977 * ___cam1, GameObject_t1756533147 * ___plane2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Heatmap::CreateRenderPlane(UnityEngine.Texture2D)
extern "C"  void Heatmap_CreateRenderPlane_m2601243757 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___map0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Heatmap::CreateRenderPlane(UnityEngine.Texture2D,UnityEngine.Camera)
extern "C"  void Heatmap_CreateRenderPlane_m2823382271 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___map0, Camera_t189460977 * ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Heatmap::Screenshot(System.String)
extern "C"  String_t* Heatmap_Screenshot_m1512972774 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Heatmap::Screenshot(System.String,UnityEngine.Camera)
extern "C"  String_t* Heatmap_Screenshot_m3768567740 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Camera_t189460977 * ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] Heatmap::ColorArray(UnityEngine.Color,System.Int32)
extern "C"  ColorU5BU5D_t672350442* Heatmap_ColorArray_m2338253647 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___col0, int32_t ___arraySize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] Heatmap::Colorize(UnityEngine.Color[])
extern "C"  ColorU5BU5D_t672350442* Heatmap_Colorize_m714742803 (Il2CppObject * __this /* static, unused */, ColorU5BU5D_t672350442* ___pixels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Heatmap::NormalizeColor(UnityEngine.Color)
extern "C"  Color_t2020392075  Heatmap_NormalizeColor_m2920815108 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
