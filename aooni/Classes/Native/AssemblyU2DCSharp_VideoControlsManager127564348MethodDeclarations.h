#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// VideoControlsManager
struct VideoControlsManager_t127564348;
// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t4035356898;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture4035356898.h"

// System.Void VideoControlsManager::.ctor()
extern "C"  void VideoControlsManager__ctor_m1038984159 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::set_Player(GvrVideoPlayerTexture)
extern "C"  void VideoControlsManager_set_Player_m4158448525 (VideoControlsManager_t127564348 * __this, GvrVideoPlayerTexture_t4035356898 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrVideoPlayerTexture VideoControlsManager::get_Player()
extern "C"  GvrVideoPlayerTexture_t4035356898 * VideoControlsManager_get_Player_m2159346912 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::Awake()
extern "C"  void VideoControlsManager_Awake_m1276589378 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::Start()
extern "C"  void VideoControlsManager_Start_m4281089247 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::Update()
extern "C"  void VideoControlsManager_Update_m3870599950 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnVolumeUp()
extern "C"  void VideoControlsManager_OnVolumeUp_m3347156953 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnVolumeDown()
extern "C"  void VideoControlsManager_OnVolumeDown_m3497096416 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnToggleVolume()
extern "C"  void VideoControlsManager_OnToggleVolume_m2994436178 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnToggleSettings()
extern "C"  void VideoControlsManager_OnToggleSettings_m1575116123 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnPlayPause()
extern "C"  void VideoControlsManager_OnPlayPause_m199814976 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnVolumePositionChanged(System.Single)
extern "C"  void VideoControlsManager_OnVolumePositionChanged_m3069844060 (VideoControlsManager_t127564348 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::CloseSubPanels()
extern "C"  void VideoControlsManager_CloseSubPanels_m3482236156 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::Fade(System.Boolean)
extern "C"  void VideoControlsManager_Fade_m711923896 (VideoControlsManager_t127564348 * __this, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoControlsManager::DoAppear()
extern "C"  Il2CppObject * VideoControlsManager_DoAppear_m3478028237 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoControlsManager::DoFade()
extern "C"  Il2CppObject * VideoControlsManager_DoFade_m1035345076 (VideoControlsManager_t127564348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VideoControlsManager::FormatTime(System.Int64)
extern "C"  String_t* VideoControlsManager_FormatTime_m3127894302 (VideoControlsManager_t127564348 * __this, int64_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
