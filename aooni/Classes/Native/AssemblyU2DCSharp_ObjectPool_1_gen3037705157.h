﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3407512455;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPool`1<System.Object>
struct  ObjectPool_1_t3037705157  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<T> ObjectPool`1::pool
	Stack_1_t3407512455 * ___pool_0;
	// System.Int32 ObjectPool`1::capacity
	int32_t ___capacity_1;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3037705157, ___pool_0)); }
	inline Stack_1_t3407512455 * get_pool_0() const { return ___pool_0; }
	inline Stack_1_t3407512455 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(Stack_1_t3407512455 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier(&___pool_0, value);
	}

	inline static int32_t get_offset_of_capacity_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3037705157, ___capacity_1)); }
	inline int32_t get_capacity_1() const { return ___capacity_1; }
	inline int32_t* get_address_of_capacity_1() { return &___capacity_1; }
	inline void set_capacity_1(int32_t value)
	{
		___capacity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
