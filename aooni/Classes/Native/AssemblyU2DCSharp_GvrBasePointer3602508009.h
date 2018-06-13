#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrBasePointer
struct  GvrBasePointer_t3602508009  : public Il2CppObject
{
public:
	// System.Boolean GvrBasePointer::<ShouldUseExitRadiusForRaycast>k__BackingField
	bool ___U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0;
	// UnityEngine.Transform GvrBasePointer::<PointerTransform>k__BackingField
	Transform_t284553113 * ___U3CPointerTransformU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GvrBasePointer_t3602508009, ___U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0)); }
	inline bool get_U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0() const { return ___U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0() { return &___U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0; }
	inline void set_U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0(bool value)
	{
		___U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointerTransformU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GvrBasePointer_t3602508009, ___U3CPointerTransformU3Ek__BackingField_1)); }
	inline Transform_t284553113 * get_U3CPointerTransformU3Ek__BackingField_1() const { return ___U3CPointerTransformU3Ek__BackingField_1; }
	inline Transform_t284553113 ** get_address_of_U3CPointerTransformU3Ek__BackingField_1() { return &___U3CPointerTransformU3Ek__BackingField_1; }
	inline void set_U3CPointerTransformU3Ek__BackingField_1(Transform_t284553113 * value)
	{
		___U3CPointerTransformU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPointerTransformU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
