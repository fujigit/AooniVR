#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GvrPointerScrollInput/ScrollInfo>
struct Dictionary_2_t4239445843;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerScrollInput
struct  GvrPointerScrollInput_t500692259  : public Il2CppObject
{
public:
	// System.Boolean GvrPointerScrollInput::inertia
	bool ___inertia_13;
	// System.Single GvrPointerScrollInput::decelerationRate
	float ___decelerationRate_14;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GvrPointerScrollInput/ScrollInfo> GvrPointerScrollInput::scrollHandlers
	Dictionary_2_t4239445843 * ___scrollHandlers_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GvrPointerScrollInput::scrollingObjects
	List_1_t514686775 * ___scrollingObjects_16;

public:
	inline static int32_t get_offset_of_inertia_13() { return static_cast<int32_t>(offsetof(GvrPointerScrollInput_t500692259, ___inertia_13)); }
	inline bool get_inertia_13() const { return ___inertia_13; }
	inline bool* get_address_of_inertia_13() { return &___inertia_13; }
	inline void set_inertia_13(bool value)
	{
		___inertia_13 = value;
	}

	inline static int32_t get_offset_of_decelerationRate_14() { return static_cast<int32_t>(offsetof(GvrPointerScrollInput_t500692259, ___decelerationRate_14)); }
	inline float get_decelerationRate_14() const { return ___decelerationRate_14; }
	inline float* get_address_of_decelerationRate_14() { return &___decelerationRate_14; }
	inline void set_decelerationRate_14(float value)
	{
		___decelerationRate_14 = value;
	}

	inline static int32_t get_offset_of_scrollHandlers_15() { return static_cast<int32_t>(offsetof(GvrPointerScrollInput_t500692259, ___scrollHandlers_15)); }
	inline Dictionary_2_t4239445843 * get_scrollHandlers_15() const { return ___scrollHandlers_15; }
	inline Dictionary_2_t4239445843 ** get_address_of_scrollHandlers_15() { return &___scrollHandlers_15; }
	inline void set_scrollHandlers_15(Dictionary_2_t4239445843 * value)
	{
		___scrollHandlers_15 = value;
		Il2CppCodeGenWriteBarrier(&___scrollHandlers_15, value);
	}

	inline static int32_t get_offset_of_scrollingObjects_16() { return static_cast<int32_t>(offsetof(GvrPointerScrollInput_t500692259, ___scrollingObjects_16)); }
	inline List_1_t514686775 * get_scrollingObjects_16() const { return ___scrollingObjects_16; }
	inline List_1_t514686775 ** get_address_of_scrollingObjects_16() { return &___scrollingObjects_16; }
	inline void set_scrollingObjects_16(List_1_t514686775 * value)
	{
		___scrollingObjects_16 = value;
		Il2CppCodeGenWriteBarrier(&___scrollingObjects_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
