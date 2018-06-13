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

// GameObjectPool
struct GameObjectPool_t3211601325;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void GameObjectPool::.ctor(UnityEngine.GameObject,System.Int32)
extern "C"  void GameObjectPool__ctor_m3572136977 (GameObjectPool_t3211601325 * __this, GameObject_t4012695102 * ___prefab, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::.ctor(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void GameObjectPool__ctor_m1406960742 (GameObjectPool_t3211601325 * __this, GameObject_t4012695102 * ___prefab, int32_t ___capacity, int32_t ___preAllocateAmount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::Dispose()
extern "C"  void GameObjectPool_Dispose_m1546353227 (GameObjectPool_t3211601325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::OnBorrowed(UnityEngine.GameObject)
extern "C"  void GameObjectPool_OnBorrowed_m282372225 (GameObjectPool_t3211601325 * __this, GameObject_t4012695102 * ___borrowedObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::OnPooled(UnityEngine.GameObject)
extern "C"  void GameObjectPool_OnPooled_m2915332328 (GameObjectPool_t3211601325 * __this, GameObject_t4012695102 * ___pooledObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::OnUnableToReturn(UnityEngine.GameObject)
extern "C"  void GameObjectPool_OnUnableToReturn_m2770638411 (GameObjectPool_t3211601325 * __this, GameObject_t4012695102 * ___returnedObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GameObjectPool::AllocateObject()
extern "C"  GameObject_t4012695102 * GameObjectPool_AllocateObject_m2550716487 (GameObjectPool_t3211601325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
