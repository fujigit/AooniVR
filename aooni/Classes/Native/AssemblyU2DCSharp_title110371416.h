#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Clicker
struct Clicker_t2525177877;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// title
struct  title_t110371416  : public MonoBehaviour_t3012272455
{
public:
	// Clicker title::clicker
	Clicker_t2525177877 * ___clicker_2;

public:
	inline static int32_t get_offset_of_clicker_2() { return static_cast<int32_t>(offsetof(title_t110371416, ___clicker_2)); }
	inline Clicker_t2525177877 * get_clicker_2() const { return ___clicker_2; }
	inline Clicker_t2525177877 ** get_address_of_clicker_2() { return &___clicker_2; }
	inline void set_clicker_2(Clicker_t2525177877 * value)
	{
		___clicker_2 = value;
		Il2CppCodeGenWriteBarrier(&___clicker_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
