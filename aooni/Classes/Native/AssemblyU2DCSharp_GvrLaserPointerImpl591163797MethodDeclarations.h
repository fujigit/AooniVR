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

// GvrLaserPointerImpl
struct GvrLaserPointerImpl_t591163797;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.LineRenderer
struct LineRenderer_t305781060;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_LineRenderer305781060.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Void GvrLaserPointerImpl::.ctor()
extern "C"  void GvrLaserPointerImpl__ctor_m4228880758 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrLaserPointerImpl::get_MainCamera()
extern "C"  Camera_t3533968274 * GvrLaserPointerImpl_get_MainCamera_m1252644756 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_MainCamera(UnityEngine.Camera)
extern "C"  void GvrLaserPointerImpl_set_MainCamera_m2855801005 (GvrLaserPointerImpl_t591163797 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color GvrLaserPointerImpl::get_LaserColor()
extern "C"  Color_t1588175760  GvrLaserPointerImpl_get_LaserColor_m3446168712 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_LaserColor(UnityEngine.Color)
extern "C"  void GvrLaserPointerImpl_set_LaserColor_m1420602787 (GvrLaserPointerImpl_t591163797 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LineRenderer GvrLaserPointerImpl::get_LaserLineRenderer()
extern "C"  LineRenderer_t305781060 * GvrLaserPointerImpl_get_LaserLineRenderer_m2725022556 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_LaserLineRenderer(UnityEngine.LineRenderer)
extern "C"  void GvrLaserPointerImpl_set_LaserLineRenderer_m2895557163 (GvrLaserPointerImpl_t591163797 * __this, LineRenderer_t305781060 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrLaserPointerImpl::get_MaxLaserDistance()
extern "C"  float GvrLaserPointerImpl_get_MaxLaserDistance_m2524214311 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_MaxLaserDistance(System.Single)
extern "C"  void GvrLaserPointerImpl_set_MaxLaserDistance_m854817060 (GvrLaserPointerImpl_t591163797 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrLaserPointerImpl::get_MaxReticleDistance()
extern "C"  float GvrLaserPointerImpl_get_MaxReticleDistance_m1295894736 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_MaxReticleDistance(System.Single)
extern "C"  void GvrLaserPointerImpl_set_MaxReticleDistance_m2407575323 (GvrLaserPointerImpl_t591163797 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrLaserPointerImpl::get_Reticle()
extern "C"  GameObject_t4012695102 * GvrLaserPointerImpl_get_Reticle_m2180462420 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_Reticle(UnityEngine.GameObject)
extern "C"  void GvrLaserPointerImpl_set_Reticle_m1192736035 (GvrLaserPointerImpl_t591163797 * __this, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrLaserPointerImpl::get_PointerIntersection()
extern "C"  Vector3_t3525329789  GvrLaserPointerImpl_get_PointerIntersection_m3327972235 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_PointerIntersection(UnityEngine.Vector3)
extern "C"  void GvrLaserPointerImpl_set_PointerIntersection_m228083996 (GvrLaserPointerImpl_t591163797 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrLaserPointerImpl::get_IsPointerIntersecting()
extern "C"  bool GvrLaserPointerImpl_get_IsPointerIntersecting_m1075055125 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_IsPointerIntersecting(System.Boolean)
extern "C"  void GvrLaserPointerImpl_set_IsPointerIntersecting_m2924777252 (GvrLaserPointerImpl_t591163797 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray GvrLaserPointerImpl::get_PointerIntersectionRay()
extern "C"  Ray_t1522967639  GvrLaserPointerImpl_get_PointerIntersectionRay_m3632588059 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_PointerIntersectionRay(UnityEngine.Ray)
extern "C"  void GvrLaserPointerImpl_set_PointerIntersectionRay_m4089918448 (GvrLaserPointerImpl_t591163797 * __this, Ray_t1522967639  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrLaserPointerImpl::get_LineEndPoint()
extern "C"  Vector3_t3525329789  GvrLaserPointerImpl_get_LineEndPoint_m1836842534 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrLaserPointerImpl::get_MaxPointerDistance()
extern "C"  float GvrLaserPointerImpl_get_MaxPointerDistance_m955847577 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnStart()
extern "C"  void GvrLaserPointerImpl_OnStart_m1841879 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnInputModuleEnabled()
extern "C"  void GvrLaserPointerImpl_OnInputModuleEnabled_m3478598744 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnInputModuleDisabled()
extern "C"  void GvrLaserPointerImpl_OnInputModuleDisabled_m1244801767 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerEnter(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Ray,System.Boolean)
extern "C"  void GvrLaserPointerImpl_OnPointerEnter_m3638446993 (GvrLaserPointerImpl_t591163797 * __this, GameObject_t4012695102 * ___targetObject, Vector3_t3525329789  ___intersectionPosition, Ray_t1522967639  ___intersectionRay, bool ___isInteractive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerHover(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Ray,System.Boolean)
extern "C"  void GvrLaserPointerImpl_OnPointerHover_m2883846829 (GvrLaserPointerImpl_t591163797 * __this, GameObject_t4012695102 * ___targetObject, Vector3_t3525329789  ___intersectionPosition, Ray_t1522967639  ___intersectionRay, bool ___isInteractive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerExit(UnityEngine.GameObject)
extern "C"  void GvrLaserPointerImpl_OnPointerExit_m2092826024 (GvrLaserPointerImpl_t591163797 * __this, GameObject_t4012695102 * ___targetObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerClickDown()
extern "C"  void GvrLaserPointerImpl_OnPointerClickDown_m4226884570 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerClickUp()
extern "C"  void GvrLaserPointerImpl_OnPointerClickUp_m322221395 (GvrLaserPointerImpl_t591163797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::GetPointerRadius(System.Single&,System.Single&)
extern "C"  void GvrLaserPointerImpl_GetPointerRadius_m1145805951 (GvrLaserPointerImpl_t591163797 * __this, float* ___enterRadius, float* ___exitRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
