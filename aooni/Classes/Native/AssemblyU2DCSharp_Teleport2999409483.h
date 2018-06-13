#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleport
struct  Teleport_t2999409483  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 Teleport::startingPosition
	Vector3_t3525329789  ___startingPosition_2;
	// UnityEngine.Material Teleport::inactiveMaterial
	Material_t1886596500 * ___inactiveMaterial_3;
	// UnityEngine.Material Teleport::gazedAtMaterial
	Material_t1886596500 * ___gazedAtMaterial_4;

public:
	inline static int32_t get_offset_of_startingPosition_2() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ___startingPosition_2)); }
	inline Vector3_t3525329789  get_startingPosition_2() const { return ___startingPosition_2; }
	inline Vector3_t3525329789 * get_address_of_startingPosition_2() { return &___startingPosition_2; }
	inline void set_startingPosition_2(Vector3_t3525329789  value)
	{
		___startingPosition_2 = value;
	}

	inline static int32_t get_offset_of_inactiveMaterial_3() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ___inactiveMaterial_3)); }
	inline Material_t1886596500 * get_inactiveMaterial_3() const { return ___inactiveMaterial_3; }
	inline Material_t1886596500 ** get_address_of_inactiveMaterial_3() { return &___inactiveMaterial_3; }
	inline void set_inactiveMaterial_3(Material_t1886596500 * value)
	{
		___inactiveMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___inactiveMaterial_3, value);
	}

	inline static int32_t get_offset_of_gazedAtMaterial_4() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ___gazedAtMaterial_4)); }
	inline Material_t1886596500 * get_gazedAtMaterial_4() const { return ___gazedAtMaterial_4; }
	inline Material_t1886596500 ** get_address_of_gazedAtMaterial_4() { return &___gazedAtMaterial_4; }
	inline void set_gazedAtMaterial_4(Material_t1886596500 * value)
	{
		___gazedAtMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___gazedAtMaterial_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
