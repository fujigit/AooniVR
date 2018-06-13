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

// GvrPointerGraphicRaycaster
struct GvrPointerGraphicRaycaster_t1071039080;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1756857658;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t1730843082;
// UnityEngine.UI.Graphic
struct Graphic_t933884113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UnityEngine_Canvas3534013893.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic933884113.h"

// System.Void GvrPointerGraphicRaycaster::.ctor()
extern "C"  void GvrPointerGraphicRaycaster__ctor_m4262583091 (GvrPointerGraphicRaycaster_t1071039080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::.cctor()
extern "C"  void GvrPointerGraphicRaycaster__cctor_m2808960730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrPointerGraphicRaycaster::get_eventCamera()
extern "C"  Camera_t3533968274 * GvrPointerGraphicRaycaster_get_eventCamera_m2590403750 (GvrPointerGraphicRaycaster_t1071039080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas GvrPointerGraphicRaycaster::get_canvas()
extern "C"  Canvas_t3534013893 * GvrPointerGraphicRaycaster_get_canvas_m2377637568 (GvrPointerGraphicRaycaster_t1071039080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GvrPointerGraphicRaycaster_Raycast_m2934293161 (GvrPointerGraphicRaycaster_t1071039080 * __this, PointerEventData_t3205101634 * ___eventData, List_1_t1756857658 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Ray,UnityEngine.Camera,System.Single,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>,UnityEngine.Ray&)
extern "C"  void GvrPointerGraphicRaycaster_Raycast_m400807607 (Il2CppObject * __this /* static, unused */, Canvas_t3534013893 * ___canvas, Ray_t1522967639  ___ray, Camera_t3533968274 * ___cam, float ___maxPointerDistance, List_1_t1730843082 * ___results, Ray_t1522967639 * ___finalRay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerGraphicRaycaster::<Raycast>m__5(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C"  int32_t GvrPointerGraphicRaycaster_U3CRaycastU3Em__5_m3340195882 (Il2CppObject * __this /* static, unused */, Graphic_t933884113 * ___g1, Graphic_t933884113 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
