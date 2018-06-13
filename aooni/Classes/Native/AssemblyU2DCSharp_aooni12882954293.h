#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t350396337;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// aooni1
struct  aooni1_t2882954293  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animation aooni1::animation
	Animation_t350396337 * ___animation_2;
	// System.Boolean aooni1::one
	bool ___one_3;
	// System.Boolean aooni1::two
	bool ___two_4;
	// System.Single aooni1::time
	float ___time_5;

public:
	inline static int32_t get_offset_of_animation_2() { return static_cast<int32_t>(offsetof(aooni1_t2882954293, ___animation_2)); }
	inline Animation_t350396337 * get_animation_2() const { return ___animation_2; }
	inline Animation_t350396337 ** get_address_of_animation_2() { return &___animation_2; }
	inline void set_animation_2(Animation_t350396337 * value)
	{
		___animation_2 = value;
		Il2CppCodeGenWriteBarrier(&___animation_2, value);
	}

	inline static int32_t get_offset_of_one_3() { return static_cast<int32_t>(offsetof(aooni1_t2882954293, ___one_3)); }
	inline bool get_one_3() const { return ___one_3; }
	inline bool* get_address_of_one_3() { return &___one_3; }
	inline void set_one_3(bool value)
	{
		___one_3 = value;
	}

	inline static int32_t get_offset_of_two_4() { return static_cast<int32_t>(offsetof(aooni1_t2882954293, ___two_4)); }
	inline bool get_two_4() const { return ___two_4; }
	inline bool* get_address_of_two_4() { return &___two_4; }
	inline void set_two_4(bool value)
	{
		___two_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(aooni1_t2882954293, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
