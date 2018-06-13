#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectPoolManager
struct ObjectPoolManager_t1841565458;
// System.Collections.Generic.Dictionary`2<System.String,IObjectPool>
struct Dictionary_2_t2369459860;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPoolManager
struct  ObjectPoolManager_t1841565458  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,IObjectPool> ObjectPoolManager::pools
	Dictionary_2_t2369459860 * ___pools_3;

public:
	inline static int32_t get_offset_of_pools_3() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t1841565458, ___pools_3)); }
	inline Dictionary_2_t2369459860 * get_pools_3() const { return ___pools_3; }
	inline Dictionary_2_t2369459860 ** get_address_of_pools_3() { return &___pools_3; }
	inline void set_pools_3(Dictionary_2_t2369459860 * value)
	{
		___pools_3 = value;
		Il2CppCodeGenWriteBarrier(&___pools_3, value);
	}
};

struct ObjectPoolManager_t1841565458_StaticFields
{
public:
	// ObjectPoolManager ObjectPoolManager::instance
	ObjectPoolManager_t1841565458 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t1841565458_StaticFields, ___instance_2)); }
	inline ObjectPoolManager_t1841565458 * get_instance_2() const { return ___instance_2; }
	inline ObjectPoolManager_t1841565458 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ObjectPoolManager_t1841565458 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
