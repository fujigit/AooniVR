﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// GvrBasePointer
struct GvrBasePointer_t3602508009;
// IGvrGazeResponder
struct IGvrGazeResponder_t4177935811;
// UnityEngine.Camera
struct Camera_t3533968274;
// System.Func`2<GvrBasePointer,GvrBasePointer>
struct Func_2_t1768554564;
// System.Func`2<GvrBasePointer,System.Boolean>
struct Func_2_t2672019192;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrGaze
struct  GvrGaze_t2073985384  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject GvrGaze::pointerObject
	GameObject_t4012695102 * ___pointerObject_2;
	// GvrBasePointer GvrGaze::pointer
	GvrBasePointer_t3602508009 * ___pointer_3;
	// UnityEngine.LayerMask GvrGaze::mask
	LayerMask_t1862190090  ___mask_4;
	// IGvrGazeResponder GvrGaze::currentTarget
	Il2CppObject * ___currentTarget_5;
	// UnityEngine.GameObject GvrGaze::currentGazeObject
	GameObject_t4012695102 * ___currentGazeObject_6;
	// UnityEngine.Vector3 GvrGaze::lastIntersectPosition
	Vector3_t3525329789  ___lastIntersectPosition_7;
	// UnityEngine.Ray GvrGaze::lastIntersectionRay
	Ray_t1522967639  ___lastIntersectionRay_8;
	// System.Boolean GvrGaze::isTriggered
	bool ___isTriggered_9;
	// UnityEngine.Camera GvrGaze::<cam>k__BackingField
	Camera_t3533968274 * ___U3CcamU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_pointerObject_2() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___pointerObject_2)); }
	inline GameObject_t4012695102 * get_pointerObject_2() const { return ___pointerObject_2; }
	inline GameObject_t4012695102 ** get_address_of_pointerObject_2() { return &___pointerObject_2; }
	inline void set_pointerObject_2(GameObject_t4012695102 * value)
	{
		___pointerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointerObject_2, value);
	}

	inline static int32_t get_offset_of_pointer_3() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___pointer_3)); }
	inline GvrBasePointer_t3602508009 * get_pointer_3() const { return ___pointer_3; }
	inline GvrBasePointer_t3602508009 ** get_address_of_pointer_3() { return &___pointer_3; }
	inline void set_pointer_3(GvrBasePointer_t3602508009 * value)
	{
		___pointer_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_3, value);
	}

	inline static int32_t get_offset_of_mask_4() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___mask_4)); }
	inline LayerMask_t1862190090  get_mask_4() const { return ___mask_4; }
	inline LayerMask_t1862190090 * get_address_of_mask_4() { return &___mask_4; }
	inline void set_mask_4(LayerMask_t1862190090  value)
	{
		___mask_4 = value;
	}

	inline static int32_t get_offset_of_currentTarget_5() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___currentTarget_5)); }
	inline Il2CppObject * get_currentTarget_5() const { return ___currentTarget_5; }
	inline Il2CppObject ** get_address_of_currentTarget_5() { return &___currentTarget_5; }
	inline void set_currentTarget_5(Il2CppObject * value)
	{
		___currentTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentTarget_5, value);
	}

	inline static int32_t get_offset_of_currentGazeObject_6() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___currentGazeObject_6)); }
	inline GameObject_t4012695102 * get_currentGazeObject_6() const { return ___currentGazeObject_6; }
	inline GameObject_t4012695102 ** get_address_of_currentGazeObject_6() { return &___currentGazeObject_6; }
	inline void set_currentGazeObject_6(GameObject_t4012695102 * value)
	{
		___currentGazeObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentGazeObject_6, value);
	}

	inline static int32_t get_offset_of_lastIntersectPosition_7() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___lastIntersectPosition_7)); }
	inline Vector3_t3525329789  get_lastIntersectPosition_7() const { return ___lastIntersectPosition_7; }
	inline Vector3_t3525329789 * get_address_of_lastIntersectPosition_7() { return &___lastIntersectPosition_7; }
	inline void set_lastIntersectPosition_7(Vector3_t3525329789  value)
	{
		___lastIntersectPosition_7 = value;
	}

	inline static int32_t get_offset_of_lastIntersectionRay_8() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___lastIntersectionRay_8)); }
	inline Ray_t1522967639  get_lastIntersectionRay_8() const { return ___lastIntersectionRay_8; }
	inline Ray_t1522967639 * get_address_of_lastIntersectionRay_8() { return &___lastIntersectionRay_8; }
	inline void set_lastIntersectionRay_8(Ray_t1522967639  value)
	{
		___lastIntersectionRay_8 = value;
	}

	inline static int32_t get_offset_of_isTriggered_9() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___isTriggered_9)); }
	inline bool get_isTriggered_9() const { return ___isTriggered_9; }
	inline bool* get_address_of_isTriggered_9() { return &___isTriggered_9; }
	inline void set_isTriggered_9(bool value)
	{
		___isTriggered_9 = value;
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384, ___U3CcamU3Ek__BackingField_10)); }
	inline Camera_t3533968274 * get_U3CcamU3Ek__BackingField_10() const { return ___U3CcamU3Ek__BackingField_10; }
	inline Camera_t3533968274 ** get_address_of_U3CcamU3Ek__BackingField_10() { return &___U3CcamU3Ek__BackingField_10; }
	inline void set_U3CcamU3Ek__BackingField_10(Camera_t3533968274 * value)
	{
		___U3CcamU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_10, value);
	}
};

struct GvrGaze_t2073985384_StaticFields
{
public:
	// System.Func`2<GvrBasePointer,GvrBasePointer> GvrGaze::<>f__am$cache9
	Func_2_t1768554564 * ___U3CU3Ef__amU24cache9_11;
	// System.Func`2<GvrBasePointer,System.Boolean> GvrGaze::<>f__am$cacheA
	Func_2_t2672019192 * ___U3CU3Ef__amU24cacheA_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_11() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384_StaticFields, ___U3CU3Ef__amU24cache9_11)); }
	inline Func_2_t1768554564 * get_U3CU3Ef__amU24cache9_11() const { return ___U3CU3Ef__amU24cache9_11; }
	inline Func_2_t1768554564 ** get_address_of_U3CU3Ef__amU24cache9_11() { return &___U3CU3Ef__amU24cache9_11; }
	inline void set_U3CU3Ef__amU24cache9_11(Func_2_t1768554564 * value)
	{
		___U3CU3Ef__amU24cache9_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_12() { return static_cast<int32_t>(offsetof(GvrGaze_t2073985384_StaticFields, ___U3CU3Ef__amU24cacheA_12)); }
	inline Func_2_t2672019192 * get_U3CU3Ef__amU24cacheA_12() const { return ___U3CU3Ef__amU24cacheA_12; }
	inline Func_2_t2672019192 ** get_address_of_U3CU3Ef__amU24cacheA_12() { return &___U3CU3Ef__amU24cacheA_12; }
	inline void set_U3CU3Ef__amU24cacheA_12(Func_2_t2672019192 * value)
	{
		___U3CU3Ef__amU24cacheA_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
