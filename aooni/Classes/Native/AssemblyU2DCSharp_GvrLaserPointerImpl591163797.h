#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.LineRenderer
struct LineRenderer_t305781060;

#include "AssemblyU2DCSharp_GvrBasePointer3602508009.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrLaserPointerImpl
struct  GvrLaserPointerImpl_t591163797  : public GvrBasePointer_t3602508009
{
public:
	// UnityEngine.GameObject GvrLaserPointerImpl::reticle
	GameObject_t4012695102 * ___reticle_5;
	// System.Single GvrLaserPointerImpl::reticleMeshSizeMeters
	float ___reticleMeshSizeMeters_6;
	// System.Single GvrLaserPointerImpl::reticleMeshSizeRatio
	float ___reticleMeshSizeRatio_7;
	// UnityEngine.Vector3 GvrLaserPointerImpl::lineEndPoint
	Vector3_t3525329789  ___lineEndPoint_8;
	// UnityEngine.Camera GvrLaserPointerImpl::<MainCamera>k__BackingField
	Camera_t3533968274 * ___U3CMainCameraU3Ek__BackingField_9;
	// UnityEngine.Color GvrLaserPointerImpl::<LaserColor>k__BackingField
	Color_t1588175760  ___U3CLaserColorU3Ek__BackingField_10;
	// UnityEngine.LineRenderer GvrLaserPointerImpl::<LaserLineRenderer>k__BackingField
	LineRenderer_t305781060 * ___U3CLaserLineRendererU3Ek__BackingField_11;
	// System.Single GvrLaserPointerImpl::<MaxLaserDistance>k__BackingField
	float ___U3CMaxLaserDistanceU3Ek__BackingField_12;
	// System.Single GvrLaserPointerImpl::<MaxReticleDistance>k__BackingField
	float ___U3CMaxReticleDistanceU3Ek__BackingField_13;
	// UnityEngine.Vector3 GvrLaserPointerImpl::<PointerIntersection>k__BackingField
	Vector3_t3525329789  ___U3CPointerIntersectionU3Ek__BackingField_14;
	// System.Boolean GvrLaserPointerImpl::<IsPointerIntersecting>k__BackingField
	bool ___U3CIsPointerIntersectingU3Ek__BackingField_15;
	// UnityEngine.Ray GvrLaserPointerImpl::<PointerIntersectionRay>k__BackingField
	Ray_t1522967639  ___U3CPointerIntersectionRayU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_reticle_5() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___reticle_5)); }
	inline GameObject_t4012695102 * get_reticle_5() const { return ___reticle_5; }
	inline GameObject_t4012695102 ** get_address_of_reticle_5() { return &___reticle_5; }
	inline void set_reticle_5(GameObject_t4012695102 * value)
	{
		___reticle_5 = value;
		Il2CppCodeGenWriteBarrier(&___reticle_5, value);
	}

	inline static int32_t get_offset_of_reticleMeshSizeMeters_6() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___reticleMeshSizeMeters_6)); }
	inline float get_reticleMeshSizeMeters_6() const { return ___reticleMeshSizeMeters_6; }
	inline float* get_address_of_reticleMeshSizeMeters_6() { return &___reticleMeshSizeMeters_6; }
	inline void set_reticleMeshSizeMeters_6(float value)
	{
		___reticleMeshSizeMeters_6 = value;
	}

	inline static int32_t get_offset_of_reticleMeshSizeRatio_7() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___reticleMeshSizeRatio_7)); }
	inline float get_reticleMeshSizeRatio_7() const { return ___reticleMeshSizeRatio_7; }
	inline float* get_address_of_reticleMeshSizeRatio_7() { return &___reticleMeshSizeRatio_7; }
	inline void set_reticleMeshSizeRatio_7(float value)
	{
		___reticleMeshSizeRatio_7 = value;
	}

	inline static int32_t get_offset_of_lineEndPoint_8() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___lineEndPoint_8)); }
	inline Vector3_t3525329789  get_lineEndPoint_8() const { return ___lineEndPoint_8; }
	inline Vector3_t3525329789 * get_address_of_lineEndPoint_8() { return &___lineEndPoint_8; }
	inline void set_lineEndPoint_8(Vector3_t3525329789  value)
	{
		___lineEndPoint_8 = value;
	}

	inline static int32_t get_offset_of_U3CMainCameraU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___U3CMainCameraU3Ek__BackingField_9)); }
	inline Camera_t3533968274 * get_U3CMainCameraU3Ek__BackingField_9() const { return ___U3CMainCameraU3Ek__BackingField_9; }
	inline Camera_t3533968274 ** get_address_of_U3CMainCameraU3Ek__BackingField_9() { return &___U3CMainCameraU3Ek__BackingField_9; }
	inline void set_U3CMainCameraU3Ek__BackingField_9(Camera_t3533968274 * value)
	{
		___U3CMainCameraU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMainCameraU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CLaserColorU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___U3CLaserColorU3Ek__BackingField_10)); }
	inline Color_t1588175760  get_U3CLaserColorU3Ek__BackingField_10() const { return ___U3CLaserColorU3Ek__BackingField_10; }
	inline Color_t1588175760 * get_address_of_U3CLaserColorU3Ek__BackingField_10() { return &___U3CLaserColorU3Ek__BackingField_10; }
	inline void set_U3CLaserColorU3Ek__BackingField_10(Color_t1588175760  value)
	{
		___U3CLaserColorU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLaserLineRendererU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___U3CLaserLineRendererU3Ek__BackingField_11)); }
	inline LineRenderer_t305781060 * get_U3CLaserLineRendererU3Ek__BackingField_11() const { return ___U3CLaserLineRendererU3Ek__BackingField_11; }
	inline LineRenderer_t305781060 ** get_address_of_U3CLaserLineRendererU3Ek__BackingField_11() { return &___U3CLaserLineRendererU3Ek__BackingField_11; }
	inline void set_U3CLaserLineRendererU3Ek__BackingField_11(LineRenderer_t305781060 * value)
	{
		___U3CLaserLineRendererU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLaserLineRendererU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CMaxLaserDistanceU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___U3CMaxLaserDistanceU3Ek__BackingField_12)); }
	inline float get_U3CMaxLaserDistanceU3Ek__BackingField_12() const { return ___U3CMaxLaserDistanceU3Ek__BackingField_12; }
	inline float* get_address_of_U3CMaxLaserDistanceU3Ek__BackingField_12() { return &___U3CMaxLaserDistanceU3Ek__BackingField_12; }
	inline void set_U3CMaxLaserDistanceU3Ek__BackingField_12(float value)
	{
		___U3CMaxLaserDistanceU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMaxReticleDistanceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___U3CMaxReticleDistanceU3Ek__BackingField_13)); }
	inline float get_U3CMaxReticleDistanceU3Ek__BackingField_13() const { return ___U3CMaxReticleDistanceU3Ek__BackingField_13; }
	inline float* get_address_of_U3CMaxReticleDistanceU3Ek__BackingField_13() { return &___U3CMaxReticleDistanceU3Ek__BackingField_13; }
	inline void set_U3CMaxReticleDistanceU3Ek__BackingField_13(float value)
	{
		___U3CMaxReticleDistanceU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CPointerIntersectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___U3CPointerIntersectionU3Ek__BackingField_14)); }
	inline Vector3_t3525329789  get_U3CPointerIntersectionU3Ek__BackingField_14() const { return ___U3CPointerIntersectionU3Ek__BackingField_14; }
	inline Vector3_t3525329789 * get_address_of_U3CPointerIntersectionU3Ek__BackingField_14() { return &___U3CPointerIntersectionU3Ek__BackingField_14; }
	inline void set_U3CPointerIntersectionU3Ek__BackingField_14(Vector3_t3525329789  value)
	{
		___U3CPointerIntersectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CIsPointerIntersectingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___U3CIsPointerIntersectingU3Ek__BackingField_15)); }
	inline bool get_U3CIsPointerIntersectingU3Ek__BackingField_15() const { return ___U3CIsPointerIntersectingU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIsPointerIntersectingU3Ek__BackingField_15() { return &___U3CIsPointerIntersectingU3Ek__BackingField_15; }
	inline void set_U3CIsPointerIntersectingU3Ek__BackingField_15(bool value)
	{
		___U3CIsPointerIntersectingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CPointerIntersectionRayU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t591163797, ___U3CPointerIntersectionRayU3Ek__BackingField_16)); }
	inline Ray_t1522967639  get_U3CPointerIntersectionRayU3Ek__BackingField_16() const { return ___U3CPointerIntersectionRayU3Ek__BackingField_16; }
	inline Ray_t1522967639 * get_address_of_U3CPointerIntersectionRayU3Ek__BackingField_16() { return &___U3CPointerIntersectionRayU3Ek__BackingField_16; }
	inline void set_U3CPointerIntersectionRayU3Ek__BackingField_16(Ray_t1522967639  value)
	{
		___U3CPointerIntersectionRayU3Ek__BackingField_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
