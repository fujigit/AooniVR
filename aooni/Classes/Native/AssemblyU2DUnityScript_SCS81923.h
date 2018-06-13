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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SCS
struct  SCS_t81923  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform SCS::Player
	Transform_t284553113 * ___Player_2;
	// System.Single SCS::CloudsSpeed
	float ___CloudsSpeed_3;
	// System.Single SCS::distance
	float ___distance_4;
	// System.Int32 SCS::height
	int32_t ___height_5;
	// System.Int32 SCS::heightDamping
	int32_t ___heightDamping_6;
	// System.Int32 SCS::rotationDamping
	int32_t ___rotationDamping_7;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(SCS_t81923, ___Player_2)); }
	inline Transform_t284553113 * get_Player_2() const { return ___Player_2; }
	inline Transform_t284553113 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(Transform_t284553113 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_CloudsSpeed_3() { return static_cast<int32_t>(offsetof(SCS_t81923, ___CloudsSpeed_3)); }
	inline float get_CloudsSpeed_3() const { return ___CloudsSpeed_3; }
	inline float* get_address_of_CloudsSpeed_3() { return &___CloudsSpeed_3; }
	inline void set_CloudsSpeed_3(float value)
	{
		___CloudsSpeed_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(SCS_t81923, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(SCS_t81923, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_heightDamping_6() { return static_cast<int32_t>(offsetof(SCS_t81923, ___heightDamping_6)); }
	inline int32_t get_heightDamping_6() const { return ___heightDamping_6; }
	inline int32_t* get_address_of_heightDamping_6() { return &___heightDamping_6; }
	inline void set_heightDamping_6(int32_t value)
	{
		___heightDamping_6 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_7() { return static_cast<int32_t>(offsetof(SCS_t81923, ___rotationDamping_7)); }
	inline int32_t get_rotationDamping_7() const { return ___rotationDamping_7; }
	inline int32_t* get_address_of_rotationDamping_7() { return &___rotationDamping_7; }
	inline void set_rotationDamping_7(int32_t value)
	{
		___rotationDamping_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
