#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "AssemblyU2DCSharp_GvrBasePointer3602508009.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrReticlePointerImpl
struct  GvrReticlePointerImpl_t1175772108  : public GvrBasePointer_t3602508009
{
public:
	// UnityEngine.Vector3 GvrReticlePointerImpl::targetPoint
	Vector3_t3525329789  ___targetPoint_7;
	// System.Single GvrReticlePointerImpl::<ReticleGrowthSpeed>k__BackingField
	float ___U3CReticleGrowthSpeedU3Ek__BackingField_8;
	// UnityEngine.Material GvrReticlePointerImpl::<MaterialComp>k__BackingField
	Material_t1886596500 * ___U3CMaterialCompU3Ek__BackingField_9;
	// System.Single GvrReticlePointerImpl::<ReticleInnerAngle>k__BackingField
	float ___U3CReticleInnerAngleU3Ek__BackingField_10;
	// System.Single GvrReticlePointerImpl::<ReticleOuterAngle>k__BackingField
	float ___U3CReticleOuterAngleU3Ek__BackingField_11;
	// System.Single GvrReticlePointerImpl::<ReticleDistanceInMeters>k__BackingField
	float ___U3CReticleDistanceInMetersU3Ek__BackingField_12;
	// System.Single GvrReticlePointerImpl::<ReticleInnerDiameter>k__BackingField
	float ___U3CReticleInnerDiameterU3Ek__BackingField_13;
	// System.Single GvrReticlePointerImpl::<ReticleOuterDiameter>k__BackingField
	float ___U3CReticleOuterDiameterU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_targetPoint_7() { return static_cast<int32_t>(offsetof(GvrReticlePointerImpl_t1175772108, ___targetPoint_7)); }
	inline Vector3_t3525329789  get_targetPoint_7() const { return ___targetPoint_7; }
	inline Vector3_t3525329789 * get_address_of_targetPoint_7() { return &___targetPoint_7; }
	inline void set_targetPoint_7(Vector3_t3525329789  value)
	{
		___targetPoint_7 = value;
	}

	inline static int32_t get_offset_of_U3CReticleGrowthSpeedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GvrReticlePointerImpl_t1175772108, ___U3CReticleGrowthSpeedU3Ek__BackingField_8)); }
	inline float get_U3CReticleGrowthSpeedU3Ek__BackingField_8() const { return ___U3CReticleGrowthSpeedU3Ek__BackingField_8; }
	inline float* get_address_of_U3CReticleGrowthSpeedU3Ek__BackingField_8() { return &___U3CReticleGrowthSpeedU3Ek__BackingField_8; }
	inline void set_U3CReticleGrowthSpeedU3Ek__BackingField_8(float value)
	{
		___U3CReticleGrowthSpeedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaterialCompU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GvrReticlePointerImpl_t1175772108, ___U3CMaterialCompU3Ek__BackingField_9)); }
	inline Material_t1886596500 * get_U3CMaterialCompU3Ek__BackingField_9() const { return ___U3CMaterialCompU3Ek__BackingField_9; }
	inline Material_t1886596500 ** get_address_of_U3CMaterialCompU3Ek__BackingField_9() { return &___U3CMaterialCompU3Ek__BackingField_9; }
	inline void set_U3CMaterialCompU3Ek__BackingField_9(Material_t1886596500 * value)
	{
		___U3CMaterialCompU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMaterialCompU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CReticleInnerAngleU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GvrReticlePointerImpl_t1175772108, ___U3CReticleInnerAngleU3Ek__BackingField_10)); }
	inline float get_U3CReticleInnerAngleU3Ek__BackingField_10() const { return ___U3CReticleInnerAngleU3Ek__BackingField_10; }
	inline float* get_address_of_U3CReticleInnerAngleU3Ek__BackingField_10() { return &___U3CReticleInnerAngleU3Ek__BackingField_10; }
	inline void set_U3CReticleInnerAngleU3Ek__BackingField_10(float value)
	{
		___U3CReticleInnerAngleU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CReticleOuterAngleU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GvrReticlePointerImpl_t1175772108, ___U3CReticleOuterAngleU3Ek__BackingField_11)); }
	inline float get_U3CReticleOuterAngleU3Ek__BackingField_11() const { return ___U3CReticleOuterAngleU3Ek__BackingField_11; }
	inline float* get_address_of_U3CReticleOuterAngleU3Ek__BackingField_11() { return &___U3CReticleOuterAngleU3Ek__BackingField_11; }
	inline void set_U3CReticleOuterAngleU3Ek__BackingField_11(float value)
	{
		___U3CReticleOuterAngleU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CReticleDistanceInMetersU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GvrReticlePointerImpl_t1175772108, ___U3CReticleDistanceInMetersU3Ek__BackingField_12)); }
	inline float get_U3CReticleDistanceInMetersU3Ek__BackingField_12() const { return ___U3CReticleDistanceInMetersU3Ek__BackingField_12; }
	inline float* get_address_of_U3CReticleDistanceInMetersU3Ek__BackingField_12() { return &___U3CReticleDistanceInMetersU3Ek__BackingField_12; }
	inline void set_U3CReticleDistanceInMetersU3Ek__BackingField_12(float value)
	{
		___U3CReticleDistanceInMetersU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CReticleInnerDiameterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GvrReticlePointerImpl_t1175772108, ___U3CReticleInnerDiameterU3Ek__BackingField_13)); }
	inline float get_U3CReticleInnerDiameterU3Ek__BackingField_13() const { return ___U3CReticleInnerDiameterU3Ek__BackingField_13; }
	inline float* get_address_of_U3CReticleInnerDiameterU3Ek__BackingField_13() { return &___U3CReticleInnerDiameterU3Ek__BackingField_13; }
	inline void set_U3CReticleInnerDiameterU3Ek__BackingField_13(float value)
	{
		___U3CReticleInnerDiameterU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CReticleOuterDiameterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GvrReticlePointerImpl_t1175772108, ___U3CReticleOuterDiameterU3Ek__BackingField_14)); }
	inline float get_U3CReticleOuterDiameterU3Ek__BackingField_14() const { return ___U3CReticleOuterDiameterU3Ek__BackingField_14; }
	inline float* get_address_of_U3CReticleOuterDiameterU3Ek__BackingField_14() { return &___U3CReticleOuterDiameterU3Ek__BackingField_14; }
	inline void set_U3CReticleOuterDiameterU3Ek__BackingField_14(float value)
	{
		___U3CReticleOuterDiameterU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
