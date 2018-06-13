#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrPointerScrollInput
struct GvrPointerScrollInput_t500692259;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM3800378272.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerInputModule
struct  GvrPointerInputModule_t2267916028  : public BaseInputModule_t3800378272
{
public:
	// System.Boolean GvrPointerInputModule::vrModeOnly
	bool ___vrModeOnly_6;
	// GvrPointerScrollInput GvrPointerInputModule::scrollInput
	GvrPointerScrollInput_t500692259 * ___scrollInput_7;
	// UnityEngine.EventSystems.PointerEventData GvrPointerInputModule::pointerData
	PointerEventData_t3205101634 * ___pointerData_8;
	// UnityEngine.Vector2 GvrPointerInputModule::lastPose
	Vector2_t3525329788  ___lastPose_9;
	// System.Boolean GvrPointerInputModule::isPointerHovering
	bool ___isPointerHovering_10;
	// System.Boolean GvrPointerInputModule::isActive
	bool ___isActive_11;

public:
	inline static int32_t get_offset_of_vrModeOnly_6() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___vrModeOnly_6)); }
	inline bool get_vrModeOnly_6() const { return ___vrModeOnly_6; }
	inline bool* get_address_of_vrModeOnly_6() { return &___vrModeOnly_6; }
	inline void set_vrModeOnly_6(bool value)
	{
		___vrModeOnly_6 = value;
	}

	inline static int32_t get_offset_of_scrollInput_7() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___scrollInput_7)); }
	inline GvrPointerScrollInput_t500692259 * get_scrollInput_7() const { return ___scrollInput_7; }
	inline GvrPointerScrollInput_t500692259 ** get_address_of_scrollInput_7() { return &___scrollInput_7; }
	inline void set_scrollInput_7(GvrPointerScrollInput_t500692259 * value)
	{
		___scrollInput_7 = value;
		Il2CppCodeGenWriteBarrier(&___scrollInput_7, value);
	}

	inline static int32_t get_offset_of_pointerData_8() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___pointerData_8)); }
	inline PointerEventData_t3205101634 * get_pointerData_8() const { return ___pointerData_8; }
	inline PointerEventData_t3205101634 ** get_address_of_pointerData_8() { return &___pointerData_8; }
	inline void set_pointerData_8(PointerEventData_t3205101634 * value)
	{
		___pointerData_8 = value;
		Il2CppCodeGenWriteBarrier(&___pointerData_8, value);
	}

	inline static int32_t get_offset_of_lastPose_9() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___lastPose_9)); }
	inline Vector2_t3525329788  get_lastPose_9() const { return ___lastPose_9; }
	inline Vector2_t3525329788 * get_address_of_lastPose_9() { return &___lastPose_9; }
	inline void set_lastPose_9(Vector2_t3525329788  value)
	{
		___lastPose_9 = value;
	}

	inline static int32_t get_offset_of_isPointerHovering_10() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___isPointerHovering_10)); }
	inline bool get_isPointerHovering_10() const { return ___isPointerHovering_10; }
	inline bool* get_address_of_isPointerHovering_10() { return &___isPointerHovering_10; }
	inline void set_isPointerHovering_10(bool value)
	{
		___isPointerHovering_10 = value;
	}

	inline static int32_t get_offset_of_isActive_11() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t2267916028, ___isActive_11)); }
	inline bool get_isActive_11() const { return ___isActive_11; }
	inline bool* get_address_of_isActive_11() { return &___isActive_11; }
	inline void set_isActive_11(bool value)
	{
		___isActive_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
