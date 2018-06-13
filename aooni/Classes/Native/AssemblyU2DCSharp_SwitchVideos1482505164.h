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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwitchVideos
struct  SwitchVideos_t1482505164  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SwitchVideos::localVideoSample
	GameObject_t4012695102 * ___localVideoSample_2;
	// UnityEngine.GameObject SwitchVideos::dashVideoSample
	GameObject_t4012695102 * ___dashVideoSample_3;
	// UnityEngine.GameObject SwitchVideos::panoVideoSample
	GameObject_t4012695102 * ___panoVideoSample_4;
	// UnityEngine.GameObject[] SwitchVideos::videoSamples
	GameObjectU5BU5D_t3499186955* ___videoSamples_5;
	// UnityEngine.UI.Text SwitchVideos::missingLibText
	Text_t3286458198 * ___missingLibText_6;

public:
	inline static int32_t get_offset_of_localVideoSample_2() { return static_cast<int32_t>(offsetof(SwitchVideos_t1482505164, ___localVideoSample_2)); }
	inline GameObject_t4012695102 * get_localVideoSample_2() const { return ___localVideoSample_2; }
	inline GameObject_t4012695102 ** get_address_of_localVideoSample_2() { return &___localVideoSample_2; }
	inline void set_localVideoSample_2(GameObject_t4012695102 * value)
	{
		___localVideoSample_2 = value;
		Il2CppCodeGenWriteBarrier(&___localVideoSample_2, value);
	}

	inline static int32_t get_offset_of_dashVideoSample_3() { return static_cast<int32_t>(offsetof(SwitchVideos_t1482505164, ___dashVideoSample_3)); }
	inline GameObject_t4012695102 * get_dashVideoSample_3() const { return ___dashVideoSample_3; }
	inline GameObject_t4012695102 ** get_address_of_dashVideoSample_3() { return &___dashVideoSample_3; }
	inline void set_dashVideoSample_3(GameObject_t4012695102 * value)
	{
		___dashVideoSample_3 = value;
		Il2CppCodeGenWriteBarrier(&___dashVideoSample_3, value);
	}

	inline static int32_t get_offset_of_panoVideoSample_4() { return static_cast<int32_t>(offsetof(SwitchVideos_t1482505164, ___panoVideoSample_4)); }
	inline GameObject_t4012695102 * get_panoVideoSample_4() const { return ___panoVideoSample_4; }
	inline GameObject_t4012695102 ** get_address_of_panoVideoSample_4() { return &___panoVideoSample_4; }
	inline void set_panoVideoSample_4(GameObject_t4012695102 * value)
	{
		___panoVideoSample_4 = value;
		Il2CppCodeGenWriteBarrier(&___panoVideoSample_4, value);
	}

	inline static int32_t get_offset_of_videoSamples_5() { return static_cast<int32_t>(offsetof(SwitchVideos_t1482505164, ___videoSamples_5)); }
	inline GameObjectU5BU5D_t3499186955* get_videoSamples_5() const { return ___videoSamples_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_videoSamples_5() { return &___videoSamples_5; }
	inline void set_videoSamples_5(GameObjectU5BU5D_t3499186955* value)
	{
		___videoSamples_5 = value;
		Il2CppCodeGenWriteBarrier(&___videoSamples_5, value);
	}

	inline static int32_t get_offset_of_missingLibText_6() { return static_cast<int32_t>(offsetof(SwitchVideos_t1482505164, ___missingLibText_6)); }
	inline Text_t3286458198 * get_missingLibText_6() const { return ___missingLibText_6; }
	inline Text_t3286458198 ** get_address_of_missingLibText_6() { return &___missingLibText_6; }
	inline void set_missingLibText_6(Text_t3286458198 * value)
	{
		___missingLibText_6 = value;
		Il2CppCodeGenWriteBarrier(&___missingLibText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
