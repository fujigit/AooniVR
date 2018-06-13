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
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t3296505762;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.Animation
struct Animation_t350396337;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// aooniAI
struct  aooniAI_t3472237732  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject aooniAI::taget
	GameObject_t4012695102 * ___taget_2;
	// UnityEngine.NavMeshAgent aooniAI::agent
	NavMeshAgent_t3296505762 * ___agent_3;
	// UnityEngine.GameObject aooniAI::parent
	GameObject_t4012695102 * ___parent_4;
	// UnityEngine.GameObject aooniAI::Playe
	GameObject_t4012695102 * ___Playe_5;
	// UnityEngine.Animator aooniAI::ani
	Animator_t792326996 * ___ani_6;
	// UnityEngine.Animation aooniAI::anim
	Animation_t350396337 * ___anim_7;
	// UnityEngine.AudioSource aooniAI::sound1
	AudioSource_t3628549054 * ___sound1_9;
	// System.Single aooniAI::mode
	float ___mode_11;
	// System.Boolean aooniAI::one
	bool ___one_12;
	// System.Single aooniAI::time
	float ___time_13;

public:
	inline static int32_t get_offset_of_taget_2() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___taget_2)); }
	inline GameObject_t4012695102 * get_taget_2() const { return ___taget_2; }
	inline GameObject_t4012695102 ** get_address_of_taget_2() { return &___taget_2; }
	inline void set_taget_2(GameObject_t4012695102 * value)
	{
		___taget_2 = value;
		Il2CppCodeGenWriteBarrier(&___taget_2, value);
	}

	inline static int32_t get_offset_of_agent_3() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___agent_3)); }
	inline NavMeshAgent_t3296505762 * get_agent_3() const { return ___agent_3; }
	inline NavMeshAgent_t3296505762 ** get_address_of_agent_3() { return &___agent_3; }
	inline void set_agent_3(NavMeshAgent_t3296505762 * value)
	{
		___agent_3 = value;
		Il2CppCodeGenWriteBarrier(&___agent_3, value);
	}

	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___parent_4)); }
	inline GameObject_t4012695102 * get_parent_4() const { return ___parent_4; }
	inline GameObject_t4012695102 ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(GameObject_t4012695102 * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier(&___parent_4, value);
	}

	inline static int32_t get_offset_of_Playe_5() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___Playe_5)); }
	inline GameObject_t4012695102 * get_Playe_5() const { return ___Playe_5; }
	inline GameObject_t4012695102 ** get_address_of_Playe_5() { return &___Playe_5; }
	inline void set_Playe_5(GameObject_t4012695102 * value)
	{
		___Playe_5 = value;
		Il2CppCodeGenWriteBarrier(&___Playe_5, value);
	}

	inline static int32_t get_offset_of_ani_6() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___ani_6)); }
	inline Animator_t792326996 * get_ani_6() const { return ___ani_6; }
	inline Animator_t792326996 ** get_address_of_ani_6() { return &___ani_6; }
	inline void set_ani_6(Animator_t792326996 * value)
	{
		___ani_6 = value;
		Il2CppCodeGenWriteBarrier(&___ani_6, value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___anim_7)); }
	inline Animation_t350396337 * get_anim_7() const { return ___anim_7; }
	inline Animation_t350396337 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animation_t350396337 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}

	inline static int32_t get_offset_of_sound1_9() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___sound1_9)); }
	inline AudioSource_t3628549054 * get_sound1_9() const { return ___sound1_9; }
	inline AudioSource_t3628549054 ** get_address_of_sound1_9() { return &___sound1_9; }
	inline void set_sound1_9(AudioSource_t3628549054 * value)
	{
		___sound1_9 = value;
		Il2CppCodeGenWriteBarrier(&___sound1_9, value);
	}

	inline static int32_t get_offset_of_mode_11() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___mode_11)); }
	inline float get_mode_11() const { return ___mode_11; }
	inline float* get_address_of_mode_11() { return &___mode_11; }
	inline void set_mode_11(float value)
	{
		___mode_11 = value;
	}

	inline static int32_t get_offset_of_one_12() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___one_12)); }
	inline bool get_one_12() const { return ___one_12; }
	inline bool* get_address_of_one_12() { return &___one_12; }
	inline void set_one_12(bool value)
	{
		___one_12 = value;
	}

	inline static int32_t get_offset_of_time_13() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732, ___time_13)); }
	inline float get_time_13() const { return ___time_13; }
	inline float* get_address_of_time_13() { return &___time_13; }
	inline void set_time_13(float value)
	{
		___time_13 = value;
	}
};

struct aooniAI_t3472237732_StaticFields
{
public:
	// System.Boolean aooniAI::stop
	bool ___stop_8;
	// System.Single aooniAI::move
	float ___move_10;

public:
	inline static int32_t get_offset_of_stop_8() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732_StaticFields, ___stop_8)); }
	inline bool get_stop_8() const { return ___stop_8; }
	inline bool* get_address_of_stop_8() { return &___stop_8; }
	inline void set_stop_8(bool value)
	{
		___stop_8 = value;
	}

	inline static int32_t get_offset_of_move_10() { return static_cast<int32_t>(offsetof(aooniAI_t3472237732_StaticFields, ___move_10)); }
	inline float get_move_10() const { return ___move_10; }
	inline float* get_address_of_move_10() { return &___move_10; }
	inline void set_move_10(float value)
	{
		___move_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
