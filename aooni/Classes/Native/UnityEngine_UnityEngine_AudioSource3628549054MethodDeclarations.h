﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t1736867953;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_pinvoke;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"
#include "UnityEngine_UnityEngine_Audio_AudioMixerGroup1736867953.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"
#include "UnityEngine_UnityEngine_AudioSourceCurveType4056246437.h"
#include "UnityEngine_UnityEngine_AnimationCurve3342907448.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode3071838028.h"
#include "UnityEngine_UnityEngine_FFTWindow1124744433.h"

// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1410546616 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m1518407234 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_time()
extern "C"  float AudioSource_get_time_m4113938886 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_time(System.Single)
extern "C"  void AudioSource_set_time_m264562085 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
extern "C"  int32_t AudioSource_get_timeSamples_m1590595257 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
extern "C"  void AudioSource_set_timeSamples_m3782237206 (AudioSource_t3628549054 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t3714538611 * AudioSource_get_clip_m2410835857 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m19502010 (AudioSource_t3628549054 * __this, AudioClip_t3714538611 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
extern "C"  void AudioSource_set_outputAudioMixerGroup_m1793738433 (AudioSource_t3628549054 * __this, AudioMixerGroup_t1736867953 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m3374467819 (AudioSource_t3628549054 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m1360558992 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
extern "C"  void AudioSource_PlayDelayed_m2357889495 (AudioSource_t3628549054 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayScheduled(System.Double)
extern "C"  void AudioSource_PlayScheduled_m2227094787 (AudioSource_t3628549054 * __this, double ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m1454243038 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Pause()
extern "C"  void AudioSource_Pause_m3226052732 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_Pause_m3343215099 (Il2CppObject * __this /* static, unused */, AudioSource_t3628549054 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::UnPause()
extern "C"  void AudioSource_UnPause_m1028494947 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C"  void AudioSource_INTERNAL_CALL_UnPause_m258094196 (Il2CppObject * __this /* static, unused */, AudioSource_t3628549054 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m4213444423 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m823779350 (AudioSource_t3628549054 * __this, AudioClip_t3714538611 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1217449713 (AudioSource_t3628549054 * __this, AudioClip_t3714538611 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C"  void AudioSource_set_loop_m3617666708 (AudioSource_t3628549054 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C"  void AudioSource_set_playOnAwake_m1884534674 (AudioSource_t3628549054 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C"  void AudioSource_set_spatialBlend_m2546548421 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
extern "C"  void AudioSource_set_spatialize_m2549021632 (AudioSource_t3628549054 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::SetCustomCurve(UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)
extern "C"  void AudioSource_SetCustomCurve_m2560283483 (AudioSource_t3628549054 * __this, int32_t ___type, AnimationCurve_t3342907448 * ___curve, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)
extern "C"  void AudioSource_set_bypassReverbZones_m554383373 (AudioSource_t3628549054 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
extern "C"  void AudioSource_set_dopplerLevel_m4264527772 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spread(System.Single)
extern "C"  void AudioSource_set_spread_m4114748479 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
extern "C"  void AudioSource_set_priority_m3031232686 (AudioSource_t3628549054 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
extern "C"  void AudioSource_set_mute_m4040046601 (AudioSource_t3628549054 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
extern "C"  void AudioSource_set_minDistance_m462907 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
extern "C"  void AudioSource_set_maxDistance_m3063168233 (AudioSource_t3628549054 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
extern "C"  void AudioSource_set_rolloffMode_m2308725576 (AudioSource_t3628549054 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetOutputDataHelper(System.Single[],System.Int32)
extern "C"  void AudioSource_GetOutputDataHelper_m1525923523 (AudioSource_t3628549054 * __this, SingleU5BU5D_t1219431280* ___samples, int32_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetOutputData(System.Single[],System.Int32)
extern "C"  void AudioSource_GetOutputData_m2583313397 (AudioSource_t3628549054 * __this, SingleU5BU5D_t1219431280* ___samples, int32_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void AudioSource_GetSpectrumDataHelper_m2191873714 (AudioSource_t3628549054 * __this, SingleU5BU5D_t1219431280* ___samples, int32_t ___channel, int32_t ___window, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetSpectrumData(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void AudioSource_GetSpectrumData_m3618983524 (AudioSource_t3628549054 * __this, SingleU5BU5D_t1219431280* ___samples, int32_t ___channel, int32_t ___window, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)
extern "C"  bool AudioSource_SetSpatializerFloat_m3192603774 (AudioSource_t3628549054 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
