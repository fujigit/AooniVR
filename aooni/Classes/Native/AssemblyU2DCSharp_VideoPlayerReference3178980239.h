#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t4035356898;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlayerReference
struct  VideoPlayerReference_t3178980239  : public MonoBehaviour_t3012272455
{
public:
	// GvrVideoPlayerTexture VideoPlayerReference::player
	GvrVideoPlayerTexture_t4035356898 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(VideoPlayerReference_t3178980239, ___player_2)); }
	inline GvrVideoPlayerTexture_t4035356898 * get_player_2() const { return ___player_2; }
	inline GvrVideoPlayerTexture_t4035356898 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GvrVideoPlayerTexture_t4035356898 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
