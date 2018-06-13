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

// panel
struct  panel_t106433028  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 panel::number
	int32_t ___number_2;
	// System.Int32 panel::answer
	int32_t ___answer_3;
	// UnityEngine.AudioSource panel::au
	AudioSource_t3628549054 * ___au_4;

public:
	inline static int32_t get_offset_of_number_2() { return static_cast<int32_t>(offsetof(panel_t106433028, ___number_2)); }
	inline int32_t get_number_2() const { return ___number_2; }
	inline int32_t* get_address_of_number_2() { return &___number_2; }
	inline void set_number_2(int32_t value)
	{
		___number_2 = value;
	}

	inline static int32_t get_offset_of_answer_3() { return static_cast<int32_t>(offsetof(panel_t106433028, ___answer_3)); }
	inline int32_t get_answer_3() const { return ___answer_3; }
	inline int32_t* get_address_of_answer_3() { return &___answer_3; }
	inline void set_answer_3(int32_t value)
	{
		___answer_3 = value;
	}

	inline static int32_t get_offset_of_au_4() { return static_cast<int32_t>(offsetof(panel_t106433028, ___au_4)); }
	inline AudioSource_t3628549054 * get_au_4() const { return ___au_4; }
	inline AudioSource_t3628549054 ** get_address_of_au_4() { return &___au_4; }
	inline void set_au_4(AudioSource_t3628549054 * value)
	{
		___au_4 = value;
		Il2CppCodeGenWriteBarrier(&___au_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
