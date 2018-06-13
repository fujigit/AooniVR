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

// ObjectPoolManager
struct ObjectPoolManager_t1841565458;
// System.String
struct String_t;
// IObjectPool
struct IObjectPool_t731761956;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ObjectPoolManager::.ctor()
extern "C"  void ObjectPoolManager__ctor_m3780801177 (ObjectPoolManager_t1841565458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectPoolManager ObjectPoolManager::get_Instance()
extern "C"  ObjectPoolManager_t1841565458 * ObjectPoolManager_get_Instance_m2342377224 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectPoolManager::ContainsPool(System.String)
extern "C"  bool ObjectPoolManager_ContainsPool_m934242000 (ObjectPoolManager_t1841565458 * __this, String_t* ___poolName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::AddPool(System.String,IObjectPool)
extern "C"  void ObjectPoolManager_AddPool_m1837175350 (ObjectPoolManager_t1841565458 * __this, String_t* ___poolName, Il2CppObject * ___pool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::RemovePool(System.String)
extern "C"  void ObjectPoolManager_RemovePool_m1966299671 (ObjectPoolManager_t1841565458 * __this, String_t* ___poolName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::RemoveAllPools()
extern "C"  void ObjectPoolManager_RemoveAllPools_m587524069 (ObjectPoolManager_t1841565458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::Awake()
extern "C"  void ObjectPoolManager_Awake_m4018406396 (ObjectPoolManager_t1841565458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::OnDestroy()
extern "C"  void ObjectPoolManager_OnDestroy_m2198819602 (ObjectPoolManager_t1841565458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
