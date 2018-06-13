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


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ObjectPool_1_gen3037705157MethodDeclarations.h"

// System.Void ObjectPool`1<UnityEngine.GameObject>::.ctor()
#define ObjectPool_1__ctor_m977618165(__this, method) ((  void (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1__ctor_m1933459643_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define ObjectPool_1__ctor_m577909446(__this, ___capacity, method) ((  void (*) (ObjectPool_1_t1918326543 *, int32_t, const MethodInfo*))ObjectPool_1__ctor_m2552345996_gshared)(__this, ___capacity, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::.ctor(System.Int32,System.Int32)
#define ObjectPool_1__ctor_m3638303697(__this, ___capacity, ___preAllocateAmount, method) ((  void (*) (ObjectPool_1_t1918326543 *, int32_t, int32_t, const MethodInfo*))ObjectPool_1__ctor_m2843331275_gshared)(__this, ___capacity, ___preAllocateAmount, method)
// System.Int32 ObjectPool`1<UnityEngine.GameObject>::get_NumAllocatedObjects()
#define ObjectPool_1_get_NumAllocatedObjects_m3039687375(__this, method) ((  int32_t (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1_get_NumAllocatedObjects_m503922801_gshared)(__this, method)
// System.Boolean ObjectPool`1<UnityEngine.GameObject>::get_IsPoolEmpty()
#define ObjectPool_1_get_IsPoolEmpty_m1170096125(__this, method) ((  bool (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1_get_IsPoolEmpty_m936605995_gshared)(__this, method)
// System.Boolean ObjectPool`1<UnityEngine.GameObject>::get_IsPoolFull()
#define ObjectPool_1_get_IsPoolFull_m1182011649(__this, method) ((  bool (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1_get_IsPoolFull_m2975595027_gshared)(__this, method)
// T ObjectPool`1<UnityEngine.GameObject>::Borrow()
#define ObjectPool_1_Borrow_m671934499(__this, method) ((  GameObject_t4012695102 * (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1_Borrow_m878045119_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Return(T)
#define ObjectPool_1_Return_m1908850143(__this, ___obj, method) ((  void (*) (ObjectPool_1_t1918326543 *, GameObject_t4012695102 *, const MethodInfo*))ObjectPool_1_Return_m1349509157_gshared)(__this, ___obj, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Clear()
#define ObjectPool_1_Clear_m2678718752(__this, method) ((  void (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1_Clear_m3634560230_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Allocate(System.Int32)
#define ObjectPool_1_Allocate_m2980492797(__this, ___amount, method) ((  void (*) (ObjectPool_1_t1918326543 *, int32_t, const MethodInfo*))ObjectPool_1_Allocate_m3842635127_gshared)(__this, ___amount, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Dispose()
#define ObjectPool_1_Dispose_m3086469106(__this, method) ((  void (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1_Dispose_m2527128120_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Initialize(System.Int32,System.Int32)
#define ObjectPool_1_Initialize_m3901928775(__this, ___capacity, ___preAllocateAmount, method) ((  void (*) (ObjectPool_1_t1918326543 *, int32_t, int32_t, const MethodInfo*))ObjectPool_1_Initialize_m2280477325_gshared)(__this, ___capacity, ___preAllocateAmount, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::OnBorrowed(T)
#define ObjectPool_1_OnBorrowed_m3360504540(__this, ___borrowedObject, method) ((  void (*) (ObjectPool_1_t1918326543 *, GameObject_t4012695102 *, const MethodInfo*))ObjectPool_1_OnBorrowed_m225430050_gshared)(__this, ___borrowedObject, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::OnPooled(T)
#define ObjectPool_1_OnPooled_m190152149(__this, ___returnedObject, method) ((  void (*) (ObjectPool_1_t1918326543 *, GameObject_t4012695102 *, const MethodInfo*))ObjectPool_1_OnPooled_m3829343899_gshared)(__this, ___returnedObject, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::OnUnableToReturn(T)
#define ObjectPool_1_OnUnableToReturn_m203590034(__this, ___returnedObject, method) ((  void (*) (ObjectPool_1_t1918326543 *, GameObject_t4012695102 *, const MethodInfo*))ObjectPool_1_OnUnableToReturn_m2178026584_gshared)(__this, ___returnedObject, method)
// T ObjectPool`1<UnityEngine.GameObject>::AllocateObject()
#define ObjectPool_1_AllocateObject_m3342590026(__this, method) ((  GameObject_t4012695102 * (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1_AllocateObject_m2412348390_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::AddObject()
#define ObjectPool_1_AddObject_m1108233299(__this, method) ((  void (*) (ObjectPool_1_t1918326543 *, const MethodInfo*))ObjectPool_1_AddObject_m452457753_gshared)(__this, method)
