#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// goal
struct  goal_t3178259  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource goal::au
	AudioSource_t3628549054 * ___au_2;

public:
	inline static int32_t get_offset_of_au_2() { return static_cast<int32_t>(offsetof(goal_t3178259, ___au_2)); }
	inline AudioSource_t3628549054 * get_au_2() const { return ___au_2; }
	inline AudioSource_t3628549054 ** get_address_of_au_2() { return &___au_2; }
	inline void set_au_2(AudioSource_t3628549054 * value)
	{
		___au_2 = value;
		Il2CppCodeGenWriteBarrier(&___au_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
