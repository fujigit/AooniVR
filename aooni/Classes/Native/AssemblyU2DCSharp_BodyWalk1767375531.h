#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeadLookWalk
struct HeadLookWalk_t3974368040;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodyWalk
struct  BodyWalk_t1767375531  : public MonoBehaviour_t3012272455
{
public:
	// HeadLookWalk BodyWalk::lookWalk
	HeadLookWalk_t3974368040 * ___lookWalk_2;
	// UnityEngine.AudioSource BodyWalk::footsteps
	AudioSource_t3628549054 * ___footsteps_3;
	// UnityEngine.Transform BodyWalk::head
	Transform_t284553113 * ___head_4;
	// UnityEngine.Transform BodyWalk::body
	Transform_t284553113 * ___body_5;
	// UnityEngine.AudioSource BodyWalk::footsteps2
	AudioSource_t3628549054 * ___footsteps2_7;

public:
	inline static int32_t get_offset_of_lookWalk_2() { return static_cast<int32_t>(offsetof(BodyWalk_t1767375531, ___lookWalk_2)); }
	inline HeadLookWalk_t3974368040 * get_lookWalk_2() const { return ___lookWalk_2; }
	inline HeadLookWalk_t3974368040 ** get_address_of_lookWalk_2() { return &___lookWalk_2; }
	inline void set_lookWalk_2(HeadLookWalk_t3974368040 * value)
	{
		___lookWalk_2 = value;
		Il2CppCodeGenWriteBarrier(&___lookWalk_2, value);
	}

	inline static int32_t get_offset_of_footsteps_3() { return static_cast<int32_t>(offsetof(BodyWalk_t1767375531, ___footsteps_3)); }
	inline AudioSource_t3628549054 * get_footsteps_3() const { return ___footsteps_3; }
	inline AudioSource_t3628549054 ** get_address_of_footsteps_3() { return &___footsteps_3; }
	inline void set_footsteps_3(AudioSource_t3628549054 * value)
	{
		___footsteps_3 = value;
		Il2CppCodeGenWriteBarrier(&___footsteps_3, value);
	}

	inline static int32_t get_offset_of_head_4() { return static_cast<int32_t>(offsetof(BodyWalk_t1767375531, ___head_4)); }
	inline Transform_t284553113 * get_head_4() const { return ___head_4; }
	inline Transform_t284553113 ** get_address_of_head_4() { return &___head_4; }
	inline void set_head_4(Transform_t284553113 * value)
	{
		___head_4 = value;
		Il2CppCodeGenWriteBarrier(&___head_4, value);
	}

	inline static int32_t get_offset_of_body_5() { return static_cast<int32_t>(offsetof(BodyWalk_t1767375531, ___body_5)); }
	inline Transform_t284553113 * get_body_5() const { return ___body_5; }
	inline Transform_t284553113 ** get_address_of_body_5() { return &___body_5; }
	inline void set_body_5(Transform_t284553113 * value)
	{
		___body_5 = value;
		Il2CppCodeGenWriteBarrier(&___body_5, value);
	}

	inline static int32_t get_offset_of_footsteps2_7() { return static_cast<int32_t>(offsetof(BodyWalk_t1767375531, ___footsteps2_7)); }
	inline AudioSource_t3628549054 * get_footsteps2_7() const { return ___footsteps2_7; }
	inline AudioSource_t3628549054 ** get_address_of_footsteps2_7() { return &___footsteps2_7; }
	inline void set_footsteps2_7(AudioSource_t3628549054 * value)
	{
		___footsteps2_7 = value;
		Il2CppCodeGenWriteBarrier(&___footsteps2_7, value);
	}
};

struct BodyWalk_t1767375531_StaticFields
{
public:
	// System.Boolean BodyWalk::escape
	bool ___escape_6;

public:
	inline static int32_t get_offset_of_escape_6() { return static_cast<int32_t>(offsetof(BodyWalk_t1767375531_StaticFields, ___escape_6)); }
	inline bool get_escape_6() const { return ___escape_6; }
	inline bool* get_address_of_escape_6() { return &___escape_6; }
	inline void set_escape_6(bool value)
	{
		___escape_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
