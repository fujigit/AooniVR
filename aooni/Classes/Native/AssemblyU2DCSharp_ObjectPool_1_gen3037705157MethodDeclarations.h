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

// ObjectPool`1<System.Object>
struct ObjectPool_1_t3037705157;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ObjectPool`1<System.Object>::.ctor()
extern "C"  void ObjectPool_1__ctor_m1933459643_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1__ctor_m1933459643(__this, method) ((  void (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1__ctor_m1933459643_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::.ctor(System.Int32)
extern "C"  void ObjectPool_1__ctor_m2552345996_gshared (ObjectPool_1_t3037705157 * __this, int32_t ___capacity, const MethodInfo* method);
#define ObjectPool_1__ctor_m2552345996(__this, ___capacity, method) ((  void (*) (ObjectPool_1_t3037705157 *, int32_t, const MethodInfo*))ObjectPool_1__ctor_m2552345996_gshared)(__this, ___capacity, method)
// System.Void ObjectPool`1<System.Object>::.ctor(System.Int32,System.Int32)
extern "C"  void ObjectPool_1__ctor_m2843331275_gshared (ObjectPool_1_t3037705157 * __this, int32_t ___capacity, int32_t ___preAllocateAmount, const MethodInfo* method);
#define ObjectPool_1__ctor_m2843331275(__this, ___capacity, ___preAllocateAmount, method) ((  void (*) (ObjectPool_1_t3037705157 *, int32_t, int32_t, const MethodInfo*))ObjectPool_1__ctor_m2843331275_gshared)(__this, ___capacity, ___preAllocateAmount, method)
// System.Int32 ObjectPool`1<System.Object>::get_NumAllocatedObjects()
extern "C"  int32_t ObjectPool_1_get_NumAllocatedObjects_m503922801_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1_get_NumAllocatedObjects_m503922801(__this, method) ((  int32_t (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1_get_NumAllocatedObjects_m503922801_gshared)(__this, method)
// System.Boolean ObjectPool`1<System.Object>::get_IsPoolEmpty()
extern "C"  bool ObjectPool_1_get_IsPoolEmpty_m936605995_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1_get_IsPoolEmpty_m936605995(__this, method) ((  bool (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1_get_IsPoolEmpty_m936605995_gshared)(__this, method)
// System.Boolean ObjectPool`1<System.Object>::get_IsPoolFull()
extern "C"  bool ObjectPool_1_get_IsPoolFull_m2975595027_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1_get_IsPoolFull_m2975595027(__this, method) ((  bool (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1_get_IsPoolFull_m2975595027_gshared)(__this, method)
// T ObjectPool`1<System.Object>::Borrow()
extern "C"  Il2CppObject * ObjectPool_1_Borrow_m878045119_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1_Borrow_m878045119(__this, method) ((  Il2CppObject * (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1_Borrow_m878045119_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::Return(T)
extern "C"  void ObjectPool_1_Return_m1349509157_gshared (ObjectPool_1_t3037705157 * __this, Il2CppObject * ___obj, const MethodInfo* method);
#define ObjectPool_1_Return_m1349509157(__this, ___obj, method) ((  void (*) (ObjectPool_1_t3037705157 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_Return_m1349509157_gshared)(__this, ___obj, method)
// System.Void ObjectPool`1<System.Object>::Clear()
extern "C"  void ObjectPool_1_Clear_m3634560230_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1_Clear_m3634560230(__this, method) ((  void (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1_Clear_m3634560230_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::Allocate(System.Int32)
extern "C"  void ObjectPool_1_Allocate_m3842635127_gshared (ObjectPool_1_t3037705157 * __this, int32_t ___amount, const MethodInfo* method);
#define ObjectPool_1_Allocate_m3842635127(__this, ___amount, method) ((  void (*) (ObjectPool_1_t3037705157 *, int32_t, const MethodInfo*))ObjectPool_1_Allocate_m3842635127_gshared)(__this, ___amount, method)
// System.Void ObjectPool`1<System.Object>::Dispose()
extern "C"  void ObjectPool_1_Dispose_m2527128120_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1_Dispose_m2527128120(__this, method) ((  void (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1_Dispose_m2527128120_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::Initialize(System.Int32,System.Int32)
extern "C"  void ObjectPool_1_Initialize_m2280477325_gshared (ObjectPool_1_t3037705157 * __this, int32_t ___capacity, int32_t ___preAllocateAmount, const MethodInfo* method);
#define ObjectPool_1_Initialize_m2280477325(__this, ___capacity, ___preAllocateAmount, method) ((  void (*) (ObjectPool_1_t3037705157 *, int32_t, int32_t, const MethodInfo*))ObjectPool_1_Initialize_m2280477325_gshared)(__this, ___capacity, ___preAllocateAmount, method)
// System.Void ObjectPool`1<System.Object>::OnBorrowed(T)
extern "C"  void ObjectPool_1_OnBorrowed_m225430050_gshared (ObjectPool_1_t3037705157 * __this, Il2CppObject * ___borrowedObject, const MethodInfo* method);
#define ObjectPool_1_OnBorrowed_m225430050(__this, ___borrowedObject, method) ((  void (*) (ObjectPool_1_t3037705157 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_OnBorrowed_m225430050_gshared)(__this, ___borrowedObject, method)
// System.Void ObjectPool`1<System.Object>::OnPooled(T)
extern "C"  void ObjectPool_1_OnPooled_m3829343899_gshared (ObjectPool_1_t3037705157 * __this, Il2CppObject * ___returnedObject, const MethodInfo* method);
#define ObjectPool_1_OnPooled_m3829343899(__this, ___returnedObject, method) ((  void (*) (ObjectPool_1_t3037705157 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_OnPooled_m3829343899_gshared)(__this, ___returnedObject, method)
// System.Void ObjectPool`1<System.Object>::OnUnableToReturn(T)
extern "C"  void ObjectPool_1_OnUnableToReturn_m2178026584_gshared (ObjectPool_1_t3037705157 * __this, Il2CppObject * ___returnedObject, const MethodInfo* method);
#define ObjectPool_1_OnUnableToReturn_m2178026584(__this, ___returnedObject, method) ((  void (*) (ObjectPool_1_t3037705157 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_OnUnableToReturn_m2178026584_gshared)(__this, ___returnedObject, method)
// T ObjectPool`1<System.Object>::AllocateObject()
extern "C"  Il2CppObject * ObjectPool_1_AllocateObject_m2412348390_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1_AllocateObject_m2412348390(__this, method) ((  Il2CppObject * (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1_AllocateObject_m2412348390_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::AddObject()
extern "C"  void ObjectPool_1_AddObject_m452457753_gshared (ObjectPool_1_t3037705157 * __this, const MethodInfo* method);
#define ObjectPool_1_AddObject_m452457753(__this, method) ((  void (*) (ObjectPool_1_t3037705157 *, const MethodInfo*))ObjectPool_1_AddObject_m452457753_gshared)(__this, method)
