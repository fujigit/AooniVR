#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuHandler
struct  MenuHandler_t3851978955  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] MenuHandler::menuObjects
	GameObjectU5BU5D_t3499186955* ___menuObjects_2;

public:
	inline static int32_t get_offset_of_menuObjects_2() { return static_cast<int32_t>(offsetof(MenuHandler_t3851978955, ___menuObjects_2)); }
	inline GameObjectU5BU5D_t3499186955* get_menuObjects_2() const { return ___menuObjects_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_menuObjects_2() { return &___menuObjects_2; }
	inline void set_menuObjects_2(GameObjectU5BU5D_t3499186955* value)
	{
		___menuObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___menuObjects_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
