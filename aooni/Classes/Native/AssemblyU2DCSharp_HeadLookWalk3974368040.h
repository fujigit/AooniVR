#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// Clicker
struct Clicker_t2525177877;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeadLookWalk
struct  HeadLookWalk_t3974368040  : public MonoBehaviour_t3012272455
{
public:
	// System.Single HeadLookWalk::velocity
	float ___velocity_2;
	// System.Boolean HeadLookWalk::isWalking
	bool ___isWalking_3;
	// UnityEngine.CharacterController HeadLookWalk::controller
	CharacterController_t2029520850 * ___controller_5;
	// Clicker HeadLookWalk::clicker
	Clicker_t2525177877 * ___clicker_6;
	// UnityEngine.GameObject HeadLookWalk::a
	GameObject_t4012695102 * ___a_8;
	// UnityEngine.GameObject HeadLookWalk::audio
	GameObject_t4012695102 * ___audio_9;
	// UnityEngine.GameObject HeadLookWalk::b
	GameObject_t4012695102 * ___b_11;
	// UnityEngine.AudioSource HeadLookWalk::footsteps
	AudioSource_t3628549054 * ___footsteps_12;
	// System.Boolean HeadLookWalk::escape
	bool ___escape_13;
	// System.Single HeadLookWalk::timeleft
	float ___timeleft_14;

public:
	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___velocity_2)); }
	inline float get_velocity_2() const { return ___velocity_2; }
	inline float* get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(float value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_isWalking_3() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___isWalking_3)); }
	inline bool get_isWalking_3() const { return ___isWalking_3; }
	inline bool* get_address_of_isWalking_3() { return &___isWalking_3; }
	inline void set_isWalking_3(bool value)
	{
		___isWalking_3 = value;
	}

	inline static int32_t get_offset_of_controller_5() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___controller_5)); }
	inline CharacterController_t2029520850 * get_controller_5() const { return ___controller_5; }
	inline CharacterController_t2029520850 ** get_address_of_controller_5() { return &___controller_5; }
	inline void set_controller_5(CharacterController_t2029520850 * value)
	{
		___controller_5 = value;
		Il2CppCodeGenWriteBarrier(&___controller_5, value);
	}

	inline static int32_t get_offset_of_clicker_6() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___clicker_6)); }
	inline Clicker_t2525177877 * get_clicker_6() const { return ___clicker_6; }
	inline Clicker_t2525177877 ** get_address_of_clicker_6() { return &___clicker_6; }
	inline void set_clicker_6(Clicker_t2525177877 * value)
	{
		___clicker_6 = value;
		Il2CppCodeGenWriteBarrier(&___clicker_6, value);
	}

	inline static int32_t get_offset_of_a_8() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___a_8)); }
	inline GameObject_t4012695102 * get_a_8() const { return ___a_8; }
	inline GameObject_t4012695102 ** get_address_of_a_8() { return &___a_8; }
	inline void set_a_8(GameObject_t4012695102 * value)
	{
		___a_8 = value;
		Il2CppCodeGenWriteBarrier(&___a_8, value);
	}

	inline static int32_t get_offset_of_audio_9() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___audio_9)); }
	inline GameObject_t4012695102 * get_audio_9() const { return ___audio_9; }
	inline GameObject_t4012695102 ** get_address_of_audio_9() { return &___audio_9; }
	inline void set_audio_9(GameObject_t4012695102 * value)
	{
		___audio_9 = value;
		Il2CppCodeGenWriteBarrier(&___audio_9, value);
	}

	inline static int32_t get_offset_of_b_11() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___b_11)); }
	inline GameObject_t4012695102 * get_b_11() const { return ___b_11; }
	inline GameObject_t4012695102 ** get_address_of_b_11() { return &___b_11; }
	inline void set_b_11(GameObject_t4012695102 * value)
	{
		___b_11 = value;
		Il2CppCodeGenWriteBarrier(&___b_11, value);
	}

	inline static int32_t get_offset_of_footsteps_12() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___footsteps_12)); }
	inline AudioSource_t3628549054 * get_footsteps_12() const { return ___footsteps_12; }
	inline AudioSource_t3628549054 ** get_address_of_footsteps_12() { return &___footsteps_12; }
	inline void set_footsteps_12(AudioSource_t3628549054 * value)
	{
		___footsteps_12 = value;
		Il2CppCodeGenWriteBarrier(&___footsteps_12, value);
	}

	inline static int32_t get_offset_of_escape_13() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___escape_13)); }
	inline bool get_escape_13() const { return ___escape_13; }
	inline bool* get_address_of_escape_13() { return &___escape_13; }
	inline void set_escape_13(bool value)
	{
		___escape_13 = value;
	}

	inline static int32_t get_offset_of_timeleft_14() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040, ___timeleft_14)); }
	inline float get_timeleft_14() const { return ___timeleft_14; }
	inline float* get_address_of_timeleft_14() { return &___timeleft_14; }
	inline void set_timeleft_14(float value)
	{
		___timeleft_14 = value;
	}
};

struct HeadLookWalk_t3974368040_StaticFields
{
public:
	// System.Single HeadLookWalk::dd
	float ___dd_4;
	// System.Single HeadLookWalk::reg
	float ___reg_7;
	// System.Boolean HeadLookWalk::gameclear
	bool ___gameclear_10;

public:
	inline static int32_t get_offset_of_dd_4() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040_StaticFields, ___dd_4)); }
	inline float get_dd_4() const { return ___dd_4; }
	inline float* get_address_of_dd_4() { return &___dd_4; }
	inline void set_dd_4(float value)
	{
		___dd_4 = value;
	}

	inline static int32_t get_offset_of_reg_7() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040_StaticFields, ___reg_7)); }
	inline float get_reg_7() const { return ___reg_7; }
	inline float* get_address_of_reg_7() { return &___reg_7; }
	inline void set_reg_7(float value)
	{
		___reg_7 = value;
	}

	inline static int32_t get_offset_of_gameclear_10() { return static_cast<int32_t>(offsetof(HeadLookWalk_t3974368040_StaticFields, ___gameclear_10)); }
	inline bool get_gameclear_10() const { return ___gameclear_10; }
	inline bool* get_address_of_gameclear_10() { return &___gameclear_10; }
	inline void set_gameclear_10(bool value)
	{
		___gameclear_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
