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

// GvrPointerScrollInput
struct GvrPointerScrollInput_t500692259;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// GvrPointerScrollInput/ScrollInfo
struct ScrollInfo_t2059431227;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_GvrPointerScrollInput_ScrollInfo2059431227.h"

// System.Void GvrPointerScrollInput::.ctor()
extern "C"  void GvrPointerScrollInput__ctor_m1992104872 (GvrPointerScrollInput_t500692259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::HandleScroll(UnityEngine.GameObject,UnityEngine.EventSystems.PointerEventData,System.Boolean)
extern "C"  void GvrPointerScrollInput_HandleScroll_m99771580 (GvrPointerScrollInput_t500692259 * __this, GameObject_t4012695102 * ___currentGameObject, PointerEventData_t3205101634 * ___pointerData, bool ___isPointerActiveAndAvailable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::OnTouchingScrollHandler(UnityEngine.GameObject,UnityEngine.EventSystems.PointerEventData,UnityEngine.Vector2)
extern "C"  void GvrPointerScrollInput_OnTouchingScrollHandler_m1011731077 (GvrPointerScrollInput_t500692259 * __this, GameObject_t4012695102 * ___currentScrollHandler, PointerEventData_t3205101634 * ___pointerData, Vector2_t3525329788  ___currentScroll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::OnReleaseScrollHandler(UnityEngine.GameObject)
extern "C"  void GvrPointerScrollInput_OnReleaseScrollHandler_m2373738185 (GvrPointerScrollInput_t500692259 * __this, GameObject_t4012695102 * ___currentScrollHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::UpdateVelocity(GvrPointerScrollInput/ScrollInfo,UnityEngine.Vector2)
extern "C"  void GvrPointerScrollInput_UpdateVelocity_m2640958287 (GvrPointerScrollInput_t500692259 * __this, ScrollInfo_t2059431227 * ___scrollInfo, Vector2_t3525329788  ___currentScroll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::StopScrollingIfNecessary(System.Boolean,UnityEngine.GameObject)
extern "C"  void GvrPointerScrollInput_StopScrollingIfNecessary_m3058502412 (GvrPointerScrollInput_t500692259 * __this, bool ___touching, GameObject_t4012695102 * ___currentScrollHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::UpdateInertiaScrollHandlers(System.Boolean,UnityEngine.GameObject,UnityEngine.EventSystems.PointerEventData)
extern "C"  void GvrPointerScrollInput_UpdateInertiaScrollHandlers_m3925028306 (GvrPointerScrollInput_t500692259 * __this, bool ___touching, GameObject_t4012695102 * ___currentScrollHandler, PointerEventData_t3205101634 * ___pointerData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrPointerScrollInput/ScrollInfo GvrPointerScrollInput::AddScrollHandler(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  ScrollInfo_t2059431227 * GvrPointerScrollInput_AddScrollHandler_m800016366 (GvrPointerScrollInput_t500692259 * __this, GameObject_t4012695102 * ___scrollHandler, Vector2_t3525329788  ___currentScroll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::RemoveScrollHandler(UnityEngine.GameObject)
extern "C"  void GvrPointerScrollInput_RemoveScrollHandler_m2821551511 (GvrPointerScrollInput_t500692259 * __this, GameObject_t4012695102 * ___scrollHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrPointerScrollInput::CanScrollStart(GvrPointerScrollInput/ScrollInfo,UnityEngine.Vector2)
extern "C"  bool GvrPointerScrollInput_CanScrollStart_m2955084218 (Il2CppObject * __this /* static, unused */, ScrollInfo_t2059431227 * ___scrollInfo, Vector2_t3525329788  ___currentScroll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
