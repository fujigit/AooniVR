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
// UnityEngine.UI.Slider
struct Slider_t1468074762;
// UnityEngine.UI.Text
struct Text_t3286458198;
// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t4035356898;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoControlsManager
struct  VideoControlsManager_t127564348  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject VideoControlsManager::pauseSprite
	GameObject_t4012695102 * ___pauseSprite_2;
	// UnityEngine.GameObject VideoControlsManager::playSprite
	GameObject_t4012695102 * ___playSprite_3;
	// UnityEngine.UI.Slider VideoControlsManager::videoScrubber
	Slider_t1468074762 * ___videoScrubber_4;
	// UnityEngine.UI.Slider VideoControlsManager::volumeSlider
	Slider_t1468074762 * ___volumeSlider_5;
	// UnityEngine.GameObject VideoControlsManager::volumeWidget
	GameObject_t4012695102 * ___volumeWidget_6;
	// UnityEngine.GameObject VideoControlsManager::settingsPanel
	GameObject_t4012695102 * ___settingsPanel_7;
	// UnityEngine.GameObject VideoControlsManager::bufferedBackground
	GameObject_t4012695102 * ___bufferedBackground_8;
	// UnityEngine.Vector3 VideoControlsManager::basePosition
	Vector3_t3525329789  ___basePosition_9;
	// UnityEngine.UI.Text VideoControlsManager::videoPosition
	Text_t3286458198 * ___videoPosition_10;
	// UnityEngine.UI.Text VideoControlsManager::videoDuration
	Text_t3286458198 * ___videoDuration_11;
	// GvrVideoPlayerTexture VideoControlsManager::<Player>k__BackingField
	GvrVideoPlayerTexture_t4035356898 * ___U3CPlayerU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_pauseSprite_2() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___pauseSprite_2)); }
	inline GameObject_t4012695102 * get_pauseSprite_2() const { return ___pauseSprite_2; }
	inline GameObject_t4012695102 ** get_address_of_pauseSprite_2() { return &___pauseSprite_2; }
	inline void set_pauseSprite_2(GameObject_t4012695102 * value)
	{
		___pauseSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___pauseSprite_2, value);
	}

	inline static int32_t get_offset_of_playSprite_3() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___playSprite_3)); }
	inline GameObject_t4012695102 * get_playSprite_3() const { return ___playSprite_3; }
	inline GameObject_t4012695102 ** get_address_of_playSprite_3() { return &___playSprite_3; }
	inline void set_playSprite_3(GameObject_t4012695102 * value)
	{
		___playSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___playSprite_3, value);
	}

	inline static int32_t get_offset_of_videoScrubber_4() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___videoScrubber_4)); }
	inline Slider_t1468074762 * get_videoScrubber_4() const { return ___videoScrubber_4; }
	inline Slider_t1468074762 ** get_address_of_videoScrubber_4() { return &___videoScrubber_4; }
	inline void set_videoScrubber_4(Slider_t1468074762 * value)
	{
		___videoScrubber_4 = value;
		Il2CppCodeGenWriteBarrier(&___videoScrubber_4, value);
	}

	inline static int32_t get_offset_of_volumeSlider_5() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___volumeSlider_5)); }
	inline Slider_t1468074762 * get_volumeSlider_5() const { return ___volumeSlider_5; }
	inline Slider_t1468074762 ** get_address_of_volumeSlider_5() { return &___volumeSlider_5; }
	inline void set_volumeSlider_5(Slider_t1468074762 * value)
	{
		___volumeSlider_5 = value;
		Il2CppCodeGenWriteBarrier(&___volumeSlider_5, value);
	}

	inline static int32_t get_offset_of_volumeWidget_6() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___volumeWidget_6)); }
	inline GameObject_t4012695102 * get_volumeWidget_6() const { return ___volumeWidget_6; }
	inline GameObject_t4012695102 ** get_address_of_volumeWidget_6() { return &___volumeWidget_6; }
	inline void set_volumeWidget_6(GameObject_t4012695102 * value)
	{
		___volumeWidget_6 = value;
		Il2CppCodeGenWriteBarrier(&___volumeWidget_6, value);
	}

	inline static int32_t get_offset_of_settingsPanel_7() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___settingsPanel_7)); }
	inline GameObject_t4012695102 * get_settingsPanel_7() const { return ___settingsPanel_7; }
	inline GameObject_t4012695102 ** get_address_of_settingsPanel_7() { return &___settingsPanel_7; }
	inline void set_settingsPanel_7(GameObject_t4012695102 * value)
	{
		___settingsPanel_7 = value;
		Il2CppCodeGenWriteBarrier(&___settingsPanel_7, value);
	}

	inline static int32_t get_offset_of_bufferedBackground_8() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___bufferedBackground_8)); }
	inline GameObject_t4012695102 * get_bufferedBackground_8() const { return ___bufferedBackground_8; }
	inline GameObject_t4012695102 ** get_address_of_bufferedBackground_8() { return &___bufferedBackground_8; }
	inline void set_bufferedBackground_8(GameObject_t4012695102 * value)
	{
		___bufferedBackground_8 = value;
		Il2CppCodeGenWriteBarrier(&___bufferedBackground_8, value);
	}

	inline static int32_t get_offset_of_basePosition_9() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___basePosition_9)); }
	inline Vector3_t3525329789  get_basePosition_9() const { return ___basePosition_9; }
	inline Vector3_t3525329789 * get_address_of_basePosition_9() { return &___basePosition_9; }
	inline void set_basePosition_9(Vector3_t3525329789  value)
	{
		___basePosition_9 = value;
	}

	inline static int32_t get_offset_of_videoPosition_10() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___videoPosition_10)); }
	inline Text_t3286458198 * get_videoPosition_10() const { return ___videoPosition_10; }
	inline Text_t3286458198 ** get_address_of_videoPosition_10() { return &___videoPosition_10; }
	inline void set_videoPosition_10(Text_t3286458198 * value)
	{
		___videoPosition_10 = value;
		Il2CppCodeGenWriteBarrier(&___videoPosition_10, value);
	}

	inline static int32_t get_offset_of_videoDuration_11() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___videoDuration_11)); }
	inline Text_t3286458198 * get_videoDuration_11() const { return ___videoDuration_11; }
	inline Text_t3286458198 ** get_address_of_videoDuration_11() { return &___videoDuration_11; }
	inline void set_videoDuration_11(Text_t3286458198 * value)
	{
		___videoDuration_11 = value;
		Il2CppCodeGenWriteBarrier(&___videoDuration_11, value);
	}

	inline static int32_t get_offset_of_U3CPlayerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(VideoControlsManager_t127564348, ___U3CPlayerU3Ek__BackingField_12)); }
	inline GvrVideoPlayerTexture_t4035356898 * get_U3CPlayerU3Ek__BackingField_12() const { return ___U3CPlayerU3Ek__BackingField_12; }
	inline GvrVideoPlayerTexture_t4035356898 ** get_address_of_U3CPlayerU3Ek__BackingField_12() { return &___U3CPlayerU3Ek__BackingField_12; }
	inline void set_U3CPlayerU3Ek__BackingField_12(GvrVideoPlayerTexture_t4035356898 * value)
	{
		___U3CPlayerU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPlayerU3Ek__BackingField_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
