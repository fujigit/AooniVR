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

// PrefabPageProvider
struct PrefabPageProvider_t1813801316;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"

// System.Void PrefabPageProvider::.ctor()
extern "C"  void PrefabPageProvider__ctor_m3617580983 (PrefabPageProvider_t1813801316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PrefabPageProvider::GetSpacing()
extern "C"  float PrefabPageProvider_GetSpacing_m1911275334 (PrefabPageProvider_t1813801316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PrefabPageProvider::GetNumberOfPages()
extern "C"  int32_t PrefabPageProvider_GetNumberOfPages_m1924716969 (PrefabPageProvider_t1813801316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform PrefabPageProvider::ProvidePage(System.Int32)
extern "C"  RectTransform_t3317474837 * PrefabPageProvider_ProvidePage_m2149133140 (PrefabPageProvider_t1813801316 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPageProvider::RemovePage(System.Int32,UnityEngine.RectTransform)
extern "C"  void PrefabPageProvider_RemovePage_m3544027820 (PrefabPageProvider_t1813801316 * __this, int32_t ___index, RectTransform_t3317474837 * ___page, const MethodInfo* method) IL2CPP_METHOD_ATTR;
