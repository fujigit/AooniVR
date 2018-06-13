#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_t2288133841;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectPoolController
struct  GameObjectPoolController_t1684009257  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> GameObjectPoolController::toReparentStack
	Stack_1_t2288133841 * ___toReparentStack_2;

public:
	inline static int32_t get_offset_of_toReparentStack_2() { return static_cast<int32_t>(offsetof(GameObjectPoolController_t1684009257, ___toReparentStack_2)); }
	inline Stack_1_t2288133841 * get_toReparentStack_2() const { return ___toReparentStack_2; }
	inline Stack_1_t2288133841 ** get_address_of_toReparentStack_2() { return &___toReparentStack_2; }
	inline void set_toReparentStack_2(Stack_1_t2288133841 * value)
	{
		___toReparentStack_2 = value;
		Il2CppCodeGenWriteBarrier(&___toReparentStack_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
