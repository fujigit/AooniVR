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

// PooledPageProvider
struct PooledPageProvider_t3379768091;
// GameObjectPool
struct GameObjectPool_t3211601325;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"

// System.Void PooledPageProvider::.ctor()
extern "C"  void PooledPageProvider__ctor_m433202144 (PooledPageProvider_t3379768091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameObjectPool PooledPageProvider::get_Pool()
extern "C"  GameObjectPool_t3211601325 * PooledPageProvider_get_Pool_m1143789305 (PooledPageProvider_t3379768091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PooledPageProvider::Awake()
extern "C"  void PooledPageProvider_Awake_m670807363 (PooledPageProvider_t3379768091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PooledPageProvider::GetSpacing()
extern "C"  float PooledPageProvider_GetSpacing_m1739961533 (PooledPageProvider_t3379768091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PooledPageProvider::GetNumberOfPages()
extern "C"  int32_t PooledPageProvider_GetNumberOfPages_m461150688 (PooledPageProvider_t3379768091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform PooledPageProvider::ProvidePage(System.Int32)
extern "C"  RectTransform_t3317474837 * PooledPageProvider_ProvidePage_m956174141 (PooledPageProvider_t3379768091 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PooledPageProvider::RemovePage(System.Int32,UnityEngine.RectTransform)
extern "C"  void PooledPageProvider_RemovePage_m2254092003 (PooledPageProvider_t3379768091 * __this, int32_t ___index, RectTransform_t3317474837 * ___page, const MethodInfo* method) IL2CPP_METHOD_ATTR;
