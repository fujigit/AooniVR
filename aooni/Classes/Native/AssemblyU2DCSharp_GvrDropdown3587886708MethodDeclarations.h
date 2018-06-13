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

// GvrDropdown
struct GvrDropdown_t3587886708;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3547103726;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// GvrPointerGraphicRaycaster
struct GvrPointerGraphicRaycaster_t1071039080;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD3547103726.h"
#include "UnityEngine_UnityEngine_Canvas3534013893.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster1071039080.h"

// System.Void GvrDropdown::.ctor()
extern "C"  void GvrDropdown__ctor_m1021292407 (GvrDropdown_t3587886708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void GvrDropdown_OnPointerClick_m1330892071 (GvrDropdown_t3587886708 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void GvrDropdown_OnSubmit_m3810484574 (GvrDropdown_t3587886708 * __this, BaseEventData_t3547103726 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::FixTemplateAndBlockerRaycasters()
extern "C"  void GvrDropdown_FixTemplateAndBlockerRaycasters_m3695125764 (GvrDropdown_t3587886708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrDropdown::CreateBlocker(UnityEngine.Canvas)
extern "C"  GameObject_t4012695102 * GvrDropdown_CreateBlocker_m3957325433 (GvrDropdown_t3587886708 * __this, Canvas_t3534013893 * ___rootCanvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrDropdown::CreateDropdownList(UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * GvrDropdown_CreateDropdownList_m1839642043 (GvrDropdown_t3587886708 * __this, GameObject_t4012695102 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::FixRaycaster(UnityEngine.GameObject,System.Boolean)
extern "C"  void GvrDropdown_FixRaycaster_m372532951 (GvrDropdown_t3587886708 * __this, GameObject_t4012695102 * ___go, bool ___shouldCopyProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrPointerGraphicRaycaster GvrDropdown::GetTemplateRaycaster()
extern "C"  GvrPointerGraphicRaycaster_t1071039080 * GvrDropdown_GetTemplateRaycaster_m1072237054 (GvrDropdown_t3587886708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::CopyRaycasterProperties(GvrPointerGraphicRaycaster,GvrPointerGraphicRaycaster)
extern "C"  void GvrDropdown_CopyRaycasterProperties_m2689280541 (GvrDropdown_t3587886708 * __this, GvrPointerGraphicRaycaster_t1071039080 * ___source, GvrPointerGraphicRaycaster_t1071039080 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
