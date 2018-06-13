#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Move
struct  Move_t2404337  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animator Move::animation
	Animator_t792326996 * ___animation_2;
	// System.Single Move::ability
	float ___ability_3;
	// UnityEngine.AudioSource Move::door
	AudioSource_t3628549054 * ___door_4;
	// System.Boolean Move::one
	bool ___one_5;

public:
	inline static int32_t get_offset_of_animation_2() { return static_cast<int32_t>(offsetof(Move_t2404337, ___animation_2)); }
	inline Animator_t792326996 * get_animation_2() const { return ___animation_2; }
	inline Animator_t792326996 ** get_address_of_animation_2() { return &___animation_2; }
	inline void set_animation_2(Animator_t792326996 * value)
	{
		___animation_2 = value;
		Il2CppCodeGenWriteBarrier(&___animation_2, value);
	}

	inline static int32_t get_offset_of_ability_3() { return static_cast<int32_t>(offsetof(Move_t2404337, ___ability_3)); }
	inline float get_ability_3() const { return ___ability_3; }
	inline float* get_address_of_ability_3() { return &___ability_3; }
	inline void set_ability_3(float value)
	{
		___ability_3 = value;
	}

	inline static int32_t get_offset_of_door_4() { return static_cast<int32_t>(offsetof(Move_t2404337, ___door_4)); }
	inline AudioSource_t3628549054 * get_door_4() const { return ___door_4; }
	inline AudioSource_t3628549054 ** get_address_of_door_4() { return &___door_4; }
	inline void set_door_4(AudioSource_t3628549054 * value)
	{
		___door_4 = value;
		Il2CppCodeGenWriteBarrier(&___door_4, value);
	}

	inline static int32_t get_offset_of_one_5() { return static_cast<int32_t>(offsetof(Move_t2404337, ___one_5)); }
	inline bool get_one_5() const { return ___one_5; }
	inline bool* get_address_of_one_5() { return &___one_5; }
	inline void set_one_5(bool value)
	{
		___one_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
