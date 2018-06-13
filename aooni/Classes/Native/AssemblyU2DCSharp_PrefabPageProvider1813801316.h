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

// PrefabPageProvider
struct  PrefabPageProvider_t1813801316  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] PrefabPageProvider::prefabs
	GameObjectU5BU5D_t3499186955* ___prefabs_2;
	// System.Single PrefabPageProvider::spacing
	float ___spacing_3;

public:
	inline static int32_t get_offset_of_prefabs_2() { return static_cast<int32_t>(offsetof(PrefabPageProvider_t1813801316, ___prefabs_2)); }
	inline GameObjectU5BU5D_t3499186955* get_prefabs_2() const { return ___prefabs_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_prefabs_2() { return &___prefabs_2; }
	inline void set_prefabs_2(GameObjectU5BU5D_t3499186955* value)
	{
		___prefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefabs_2, value);
	}

	inline static int32_t get_offset_of_spacing_3() { return static_cast<int32_t>(offsetof(PrefabPageProvider_t1813801316, ___spacing_3)); }
	inline float get_spacing_3() const { return ___spacing_3; }
	inline float* get_address_of_spacing_3() { return &___spacing_3; }
	inline void set_spacing_3(float value)
	{
		___spacing_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
