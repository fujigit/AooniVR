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

// GvrPointerPhysicsRaycaster
struct GvrPointerPhysicsRaycaster_t1923475945;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1756857658;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

// System.Void GvrPointerPhysicsRaycaster::.ctor()
extern "C"  void GvrPointerPhysicsRaycaster__ctor_m3445658834 (GvrPointerPhysicsRaycaster_t1923475945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrPointerPhysicsRaycaster::get_eventCamera()
extern "C"  Camera_t3533968274 * GvrPointerPhysicsRaycaster_get_eventCamera_m3748457349 (GvrPointerPhysicsRaycaster_t1923475945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerPhysicsRaycaster::get_finalEventMask()
extern "C"  int32_t GvrPointerPhysicsRaycaster_get_finalEventMask_m480169977 (GvrPointerPhysicsRaycaster_t1923475945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask GvrPointerPhysicsRaycaster::get_eventMask()
extern "C"  LayerMask_t1862190090  GvrPointerPhysicsRaycaster_get_eventMask_m2361992864 (GvrPointerPhysicsRaycaster_t1923475945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerPhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C"  void GvrPointerPhysicsRaycaster_set_eventMask_m1851449523 (GvrPointerPhysicsRaycaster_t1923475945 * __this, LayerMask_t1862190090  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerPhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GvrPointerPhysicsRaycaster_Raycast_m1299039850 (GvrPointerPhysicsRaycaster_t1923475945 * __this, PointerEventData_t3205101634 * ___eventData, List_1_t1756857658 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerPhysicsRaycaster::<Raycast>m__6(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C"  int32_t GvrPointerPhysicsRaycaster_U3CRaycastU3Em__6_m1297241418 (Il2CppObject * __this /* static, unused */, RaycastHit_t46221527  ___r1, RaycastHit_t46221527  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
