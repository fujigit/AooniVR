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

// GvrAudioListener
struct GvrAudioListener_t2617838119;
// GvrAudioSoundfield
struct GvrAudioSoundfield_t1975836158;
// GvrAudioSource
struct GvrAudioSource_t2139450958;
// GvrAudioRoom
struct GvrAudioRoom_t252475342;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrAudioListener2617838119.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality2315868383.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "AssemblyU2DCSharp_GvrAudioSoundfield1975836158.h"
#include "AssemblyU2DCSharp_GvrAudioSource2139450958.h"
#include "AssemblyU2DCSharp_GvrAudioRoom252475342.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "AssemblyU2DCSharp_GvrAudio_RoomProperties3202392206.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void GvrAudio::.cctor()
extern "C"  void GvrAudio__cctor_m4258904325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_SampleRate()
extern "C"  int32_t GvrAudio_get_SampleRate_m3270880477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_NumChannels()
extern "C"  int32_t GvrAudio_get_NumChannels_m2317404805 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_FramesPerBuffer()
extern "C"  int32_t GvrAudio_get_FramesPerBuffer_m1465030534 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(GvrAudioListener,GvrAudio/Quality)
extern "C"  void GvrAudio_Initialize_m4140574142 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t2617838119 * ___listener, int32_t ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown(GvrAudioListener)
extern "C"  void GvrAudio_Shutdown_m3896450219 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t2617838119 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioListener(System.Single,UnityEngine.LayerMask)
extern "C"  void GvrAudio_UpdateAudioListener_m747879946 (Il2CppObject * __this /* static, unused */, float ___globalGainDb, LayerMask_t1862190090  ___occlusionMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSoundfield()
extern "C"  int32_t GvrAudio_CreateAudioSoundfield_m1964651101 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioSoundfield(System.Int32,GvrAudioSoundfield)
extern "C"  void GvrAudio_UpdateAudioSoundfield_m1370578393 (Il2CppObject * __this /* static, unused */, int32_t ___id, GvrAudioSoundfield_t1975836158 * ___soundfield, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSource(System.Boolean)
extern "C"  int32_t GvrAudio_CreateAudioSource_m1809109092 (Il2CppObject * __this /* static, unused */, bool ___hrtfEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyAudioSource(System.Int32)
extern "C"  void GvrAudio_DestroyAudioSource_m3759383460 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioSource(System.Int32,GvrAudioSource,System.Single)
extern "C"  void GvrAudio_UpdateAudioSource_m2246007774 (Il2CppObject * __this /* static, unused */, int32_t ___id, GvrAudioSource_t2139450958 * ___source, float ___currentOcclusion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioRoom(GvrAudioRoom,System.Boolean)
extern "C"  void GvrAudio_UpdateAudioRoom_m4154358141 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t252475342 * ___room, bool ___roomEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ComputeOcclusion(UnityEngine.Transform)
extern "C"  float GvrAudio_ComputeOcclusion_m4053637503 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___sourceTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ConvertAmplitudeFromDb(System.Single)
extern "C"  float GvrAudio_ConvertAmplitudeFromDb_m1063126027 (Il2CppObject * __this /* static, unused */, float ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GvrAudio::Generate2dPolarPattern(System.Single,System.Single,System.Int32)
extern "C"  Vector2U5BU5D_t2741383957* GvrAudio_Generate2dPolarPattern_m1431210773 (Il2CppObject * __this /* static, unused */, float ___alpha, float ___order, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudio::IsListenerInsideRoom(GvrAudioRoom)
extern "C"  bool GvrAudio_IsListenerInsideRoom_m1548351895 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t252475342 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void GvrAudio_ConvertAudioTransformFromUnity_m448868012 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___position, Quaternion_t1891715979 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrAudio/RoomProperties GvrAudio::GetRoomProperties(GvrAudioRoom)
extern "C"  RoomProperties_t3202392206  GvrAudio_GetRoomProperties_m3565413811 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t252475342 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetListenerGain(System.Single)
extern "C"  void GvrAudio_SetListenerGain_m4290622576 (Il2CppObject * __this /* static, unused */, float ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSoundfield(System.Int32)
extern "C"  int32_t GvrAudio_CreateSoundfield_m4003300002 (Il2CppObject * __this /* static, unused */, int32_t ___numChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSoundObject(System.Boolean)
extern "C"  int32_t GvrAudio_CreateSoundObject_m2181615617 (Il2CppObject * __this /* static, unused */, bool ___enableHrtf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroySource(System.Int32)
extern "C"  void GvrAudio_DestroySource_m3248276492 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceBypassRoomEffects(System.Int32,System.Boolean)
extern "C"  void GvrAudio_SetSourceBypassRoomEffects_m3470739822 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, bool ___bypassRoomEffects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceDirectivity_m275237490 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, float ___alpha, float ___order, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceListenerDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceListenerDirectivity_m3356753950 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, float ___alpha, float ___order, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceOcclusionIntensity(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceOcclusionIntensity_m3150654111 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId, float ___intensity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetRoomProperties(System.IntPtr)
extern "C"  void GvrAudio_SetRoomProperties_m1707827550 (Il2CppObject * __this /* static, unused */, IntPtr_t ___roomProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GvrAudio_Initialize_m930217370 (Il2CppObject * __this /* static, unused */, int32_t ___quality, int32_t ___sampleRate, int32_t ___numChannels, int32_t ___framesPerBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown()
extern "C"  void GvrAudio_Shutdown_m1565365234 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
