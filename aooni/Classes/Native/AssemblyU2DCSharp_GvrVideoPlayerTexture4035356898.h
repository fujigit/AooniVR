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
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2265160319;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.UI.Graphic
struct Graphic_t933884113;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// System.Collections.Generic.List`1<System.Action`1<System.Int32>>
struct List_1_t3792826461;
// System.Collections.Generic.List`1<System.Action`2<System.String,System.String>>
struct List_1_t3684180543;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t2145611487;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Action`2<System.String,System.String>
struct Action_2_t2887221574;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoType3336929845.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoResol2928608103.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture
struct  GvrVideoPlayerTexture_t4035356898  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Texture2D[] GvrVideoPlayerTexture::videoTextures
	Texture2DU5BU5D_t2265160319* ___videoTextures_5;
	// System.Int32 GvrVideoPlayerTexture::currentTexture
	int32_t ___currentTexture_6;
	// System.IntPtr GvrVideoPlayerTexture::videoPlayerPtr
	IntPtr_t ___videoPlayerPtr_7;
	// System.Int32 GvrVideoPlayerTexture::videoPlayerEventBase
	int32_t ___videoPlayerEventBase_8;
	// UnityEngine.Texture GvrVideoPlayerTexture::initialTexture
	Texture_t1769722184 * ___initialTexture_9;
	// System.Boolean GvrVideoPlayerTexture::initialized
	bool ___initialized_10;
	// System.Int32 GvrVideoPlayerTexture::texWidth
	int32_t ___texWidth_11;
	// System.Int32 GvrVideoPlayerTexture::texHeight
	int32_t ___texHeight_12;
	// System.Int64 GvrVideoPlayerTexture::lastBufferedPosition
	int64_t ___lastBufferedPosition_13;
	// System.Single GvrVideoPlayerTexture::framecount
	float ___framecount_14;
	// UnityEngine.UI.Graphic GvrVideoPlayerTexture::graphicComponent
	Graphic_t933884113 * ___graphicComponent_15;
	// UnityEngine.Renderer GvrVideoPlayerTexture::rendererComponent
	Renderer_t1092684080 * ___rendererComponent_16;
	// System.IntPtr GvrVideoPlayerTexture::renderEventFunction
	IntPtr_t ___renderEventFunction_17;
	// System.Boolean GvrVideoPlayerTexture::processingRunning
	bool ___processingRunning_18;
	// System.Boolean GvrVideoPlayerTexture::exitProcessing
	bool ___exitProcessing_19;
	// System.Collections.Generic.List`1<System.Action`1<System.Int32>> GvrVideoPlayerTexture::onEventCallbacks
	List_1_t3792826461 * ___onEventCallbacks_20;
	// System.Collections.Generic.List`1<System.Action`2<System.String,System.String>> GvrVideoPlayerTexture::onExceptionCallbacks
	List_1_t3684180543 * ___onExceptionCallbacks_21;
	// UnityEngine.UI.Text GvrVideoPlayerTexture::statusText
	Text_t3286458198 * ___statusText_23;
	// System.Int32 GvrVideoPlayerTexture::bufferSize
	int32_t ___bufferSize_24;
	// GvrVideoPlayerTexture/VideoType GvrVideoPlayerTexture::videoType
	int32_t ___videoType_25;
	// System.String GvrVideoPlayerTexture::videoURL
	String_t* ___videoURL_26;
	// System.String GvrVideoPlayerTexture::videoContentID
	String_t* ___videoContentID_27;
	// System.String GvrVideoPlayerTexture::videoProviderId
	String_t* ___videoProviderId_28;
	// GvrVideoPlayerTexture/VideoResolution GvrVideoPlayerTexture::initialResolution
	int32_t ___initialResolution_29;
	// System.Boolean GvrVideoPlayerTexture::adjustAspectRatio
	bool ___adjustAspectRatio_30;
	// System.Boolean GvrVideoPlayerTexture::useSecurePath
	bool ___useSecurePath_31;

public:
	inline static int32_t get_offset_of_videoTextures_5() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___videoTextures_5)); }
	inline Texture2DU5BU5D_t2265160319* get_videoTextures_5() const { return ___videoTextures_5; }
	inline Texture2DU5BU5D_t2265160319** get_address_of_videoTextures_5() { return &___videoTextures_5; }
	inline void set_videoTextures_5(Texture2DU5BU5D_t2265160319* value)
	{
		___videoTextures_5 = value;
		Il2CppCodeGenWriteBarrier(&___videoTextures_5, value);
	}

	inline static int32_t get_offset_of_currentTexture_6() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___currentTexture_6)); }
	inline int32_t get_currentTexture_6() const { return ___currentTexture_6; }
	inline int32_t* get_address_of_currentTexture_6() { return &___currentTexture_6; }
	inline void set_currentTexture_6(int32_t value)
	{
		___currentTexture_6 = value;
	}

	inline static int32_t get_offset_of_videoPlayerPtr_7() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___videoPlayerPtr_7)); }
	inline IntPtr_t get_videoPlayerPtr_7() const { return ___videoPlayerPtr_7; }
	inline IntPtr_t* get_address_of_videoPlayerPtr_7() { return &___videoPlayerPtr_7; }
	inline void set_videoPlayerPtr_7(IntPtr_t value)
	{
		___videoPlayerPtr_7 = value;
	}

	inline static int32_t get_offset_of_videoPlayerEventBase_8() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___videoPlayerEventBase_8)); }
	inline int32_t get_videoPlayerEventBase_8() const { return ___videoPlayerEventBase_8; }
	inline int32_t* get_address_of_videoPlayerEventBase_8() { return &___videoPlayerEventBase_8; }
	inline void set_videoPlayerEventBase_8(int32_t value)
	{
		___videoPlayerEventBase_8 = value;
	}

	inline static int32_t get_offset_of_initialTexture_9() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___initialTexture_9)); }
	inline Texture_t1769722184 * get_initialTexture_9() const { return ___initialTexture_9; }
	inline Texture_t1769722184 ** get_address_of_initialTexture_9() { return &___initialTexture_9; }
	inline void set_initialTexture_9(Texture_t1769722184 * value)
	{
		___initialTexture_9 = value;
		Il2CppCodeGenWriteBarrier(&___initialTexture_9, value);
	}

	inline static int32_t get_offset_of_initialized_10() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___initialized_10)); }
	inline bool get_initialized_10() const { return ___initialized_10; }
	inline bool* get_address_of_initialized_10() { return &___initialized_10; }
	inline void set_initialized_10(bool value)
	{
		___initialized_10 = value;
	}

	inline static int32_t get_offset_of_texWidth_11() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___texWidth_11)); }
	inline int32_t get_texWidth_11() const { return ___texWidth_11; }
	inline int32_t* get_address_of_texWidth_11() { return &___texWidth_11; }
	inline void set_texWidth_11(int32_t value)
	{
		___texWidth_11 = value;
	}

	inline static int32_t get_offset_of_texHeight_12() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___texHeight_12)); }
	inline int32_t get_texHeight_12() const { return ___texHeight_12; }
	inline int32_t* get_address_of_texHeight_12() { return &___texHeight_12; }
	inline void set_texHeight_12(int32_t value)
	{
		___texHeight_12 = value;
	}

	inline static int32_t get_offset_of_lastBufferedPosition_13() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___lastBufferedPosition_13)); }
	inline int64_t get_lastBufferedPosition_13() const { return ___lastBufferedPosition_13; }
	inline int64_t* get_address_of_lastBufferedPosition_13() { return &___lastBufferedPosition_13; }
	inline void set_lastBufferedPosition_13(int64_t value)
	{
		___lastBufferedPosition_13 = value;
	}

	inline static int32_t get_offset_of_framecount_14() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___framecount_14)); }
	inline float get_framecount_14() const { return ___framecount_14; }
	inline float* get_address_of_framecount_14() { return &___framecount_14; }
	inline void set_framecount_14(float value)
	{
		___framecount_14 = value;
	}

	inline static int32_t get_offset_of_graphicComponent_15() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___graphicComponent_15)); }
	inline Graphic_t933884113 * get_graphicComponent_15() const { return ___graphicComponent_15; }
	inline Graphic_t933884113 ** get_address_of_graphicComponent_15() { return &___graphicComponent_15; }
	inline void set_graphicComponent_15(Graphic_t933884113 * value)
	{
		___graphicComponent_15 = value;
		Il2CppCodeGenWriteBarrier(&___graphicComponent_15, value);
	}

	inline static int32_t get_offset_of_rendererComponent_16() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___rendererComponent_16)); }
	inline Renderer_t1092684080 * get_rendererComponent_16() const { return ___rendererComponent_16; }
	inline Renderer_t1092684080 ** get_address_of_rendererComponent_16() { return &___rendererComponent_16; }
	inline void set_rendererComponent_16(Renderer_t1092684080 * value)
	{
		___rendererComponent_16 = value;
		Il2CppCodeGenWriteBarrier(&___rendererComponent_16, value);
	}

	inline static int32_t get_offset_of_renderEventFunction_17() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___renderEventFunction_17)); }
	inline IntPtr_t get_renderEventFunction_17() const { return ___renderEventFunction_17; }
	inline IntPtr_t* get_address_of_renderEventFunction_17() { return &___renderEventFunction_17; }
	inline void set_renderEventFunction_17(IntPtr_t value)
	{
		___renderEventFunction_17 = value;
	}

	inline static int32_t get_offset_of_processingRunning_18() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___processingRunning_18)); }
	inline bool get_processingRunning_18() const { return ___processingRunning_18; }
	inline bool* get_address_of_processingRunning_18() { return &___processingRunning_18; }
	inline void set_processingRunning_18(bool value)
	{
		___processingRunning_18 = value;
	}

	inline static int32_t get_offset_of_exitProcessing_19() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___exitProcessing_19)); }
	inline bool get_exitProcessing_19() const { return ___exitProcessing_19; }
	inline bool* get_address_of_exitProcessing_19() { return &___exitProcessing_19; }
	inline void set_exitProcessing_19(bool value)
	{
		___exitProcessing_19 = value;
	}

	inline static int32_t get_offset_of_onEventCallbacks_20() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___onEventCallbacks_20)); }
	inline List_1_t3792826461 * get_onEventCallbacks_20() const { return ___onEventCallbacks_20; }
	inline List_1_t3792826461 ** get_address_of_onEventCallbacks_20() { return &___onEventCallbacks_20; }
	inline void set_onEventCallbacks_20(List_1_t3792826461 * value)
	{
		___onEventCallbacks_20 = value;
		Il2CppCodeGenWriteBarrier(&___onEventCallbacks_20, value);
	}

	inline static int32_t get_offset_of_onExceptionCallbacks_21() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___onExceptionCallbacks_21)); }
	inline List_1_t3684180543 * get_onExceptionCallbacks_21() const { return ___onExceptionCallbacks_21; }
	inline List_1_t3684180543 ** get_address_of_onExceptionCallbacks_21() { return &___onExceptionCallbacks_21; }
	inline void set_onExceptionCallbacks_21(List_1_t3684180543 * value)
	{
		___onExceptionCallbacks_21 = value;
		Il2CppCodeGenWriteBarrier(&___onExceptionCallbacks_21, value);
	}

	inline static int32_t get_offset_of_statusText_23() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___statusText_23)); }
	inline Text_t3286458198 * get_statusText_23() const { return ___statusText_23; }
	inline Text_t3286458198 ** get_address_of_statusText_23() { return &___statusText_23; }
	inline void set_statusText_23(Text_t3286458198 * value)
	{
		___statusText_23 = value;
		Il2CppCodeGenWriteBarrier(&___statusText_23, value);
	}

	inline static int32_t get_offset_of_bufferSize_24() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___bufferSize_24)); }
	inline int32_t get_bufferSize_24() const { return ___bufferSize_24; }
	inline int32_t* get_address_of_bufferSize_24() { return &___bufferSize_24; }
	inline void set_bufferSize_24(int32_t value)
	{
		___bufferSize_24 = value;
	}

	inline static int32_t get_offset_of_videoType_25() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___videoType_25)); }
	inline int32_t get_videoType_25() const { return ___videoType_25; }
	inline int32_t* get_address_of_videoType_25() { return &___videoType_25; }
	inline void set_videoType_25(int32_t value)
	{
		___videoType_25 = value;
	}

	inline static int32_t get_offset_of_videoURL_26() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___videoURL_26)); }
	inline String_t* get_videoURL_26() const { return ___videoURL_26; }
	inline String_t** get_address_of_videoURL_26() { return &___videoURL_26; }
	inline void set_videoURL_26(String_t* value)
	{
		___videoURL_26 = value;
		Il2CppCodeGenWriteBarrier(&___videoURL_26, value);
	}

	inline static int32_t get_offset_of_videoContentID_27() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___videoContentID_27)); }
	inline String_t* get_videoContentID_27() const { return ___videoContentID_27; }
	inline String_t** get_address_of_videoContentID_27() { return &___videoContentID_27; }
	inline void set_videoContentID_27(String_t* value)
	{
		___videoContentID_27 = value;
		Il2CppCodeGenWriteBarrier(&___videoContentID_27, value);
	}

	inline static int32_t get_offset_of_videoProviderId_28() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___videoProviderId_28)); }
	inline String_t* get_videoProviderId_28() const { return ___videoProviderId_28; }
	inline String_t** get_address_of_videoProviderId_28() { return &___videoProviderId_28; }
	inline void set_videoProviderId_28(String_t* value)
	{
		___videoProviderId_28 = value;
		Il2CppCodeGenWriteBarrier(&___videoProviderId_28, value);
	}

	inline static int32_t get_offset_of_initialResolution_29() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___initialResolution_29)); }
	inline int32_t get_initialResolution_29() const { return ___initialResolution_29; }
	inline int32_t* get_address_of_initialResolution_29() { return &___initialResolution_29; }
	inline void set_initialResolution_29(int32_t value)
	{
		___initialResolution_29 = value;
	}

	inline static int32_t get_offset_of_adjustAspectRatio_30() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___adjustAspectRatio_30)); }
	inline bool get_adjustAspectRatio_30() const { return ___adjustAspectRatio_30; }
	inline bool* get_address_of_adjustAspectRatio_30() { return &___adjustAspectRatio_30; }
	inline void set_adjustAspectRatio_30(bool value)
	{
		___adjustAspectRatio_30 = value;
	}

	inline static int32_t get_offset_of_useSecurePath_31() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898, ___useSecurePath_31)); }
	inline bool get_useSecurePath_31() const { return ___useSecurePath_31; }
	inline bool* get_address_of_useSecurePath_31() { return &___useSecurePath_31; }
	inline void set_useSecurePath_31(bool value)
	{
		___useSecurePath_31 = value;
	}
};

struct GvrVideoPlayerTexture_t4035356898_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<System.Action> GvrVideoPlayerTexture::ExecuteOnMainThread
	Queue_1_t2145611487 * ___ExecuteOnMainThread_22;
	// System.Action`2<System.String,System.String> GvrVideoPlayerTexture::<>f__am$cache1B
	Action_2_t2887221574 * ___U3CU3Ef__amU24cache1B_32;

public:
	inline static int32_t get_offset_of_ExecuteOnMainThread_22() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898_StaticFields, ___ExecuteOnMainThread_22)); }
	inline Queue_1_t2145611487 * get_ExecuteOnMainThread_22() const { return ___ExecuteOnMainThread_22; }
	inline Queue_1_t2145611487 ** get_address_of_ExecuteOnMainThread_22() { return &___ExecuteOnMainThread_22; }
	inline void set_ExecuteOnMainThread_22(Queue_1_t2145611487 * value)
	{
		___ExecuteOnMainThread_22 = value;
		Il2CppCodeGenWriteBarrier(&___ExecuteOnMainThread_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_32() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t4035356898_StaticFields, ___U3CU3Ef__amU24cache1B_32)); }
	inline Action_2_t2887221574 * get_U3CU3Ef__amU24cache1B_32() const { return ___U3CU3Ef__amU24cache1B_32; }
	inline Action_2_t2887221574 ** get_address_of_U3CU3Ef__amU24cache1B_32() { return &___U3CU3Ef__amU24cache1B_32; }
	inline void set_U3CU3Ef__amU24cache1B_32(Action_2_t2887221574 * value)
	{
		___U3CU3Ef__amU24cache1B_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1B_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
