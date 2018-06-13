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

#include "UnityEngine_UI_UnityEngine_UI_Dropdown2916437562.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrDropdown
struct  GvrDropdown_t3587886708  : public Dropdown_t2916437562
{
public:
	// UnityEngine.GameObject GvrDropdown::currentBlocker
	GameObject_t4012695102 * ___currentBlocker_30;

public:
	inline static int32_t get_offset_of_currentBlocker_30() { return static_cast<int32_t>(offsetof(GvrDropdown_t3587886708, ___currentBlocker_30)); }
	inline GameObject_t4012695102 * get_currentBlocker_30() const { return ___currentBlocker_30; }
	inline GameObject_t4012695102 ** get_address_of_currentBlocker_30() { return &___currentBlocker_30; }
	inline void set_currentBlocker_30(GameObject_t4012695102 * value)
	{
		___currentBlocker_30 = value;
		Il2CppCodeGenWriteBarrier(&___currentBlocker_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
