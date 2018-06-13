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

// GvrVideoPlayerTexture/OnVideoEventCallback
struct OnVideoEventCallback_t740301987;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnVideoEventCallback__ctor_m3416820311 (OnVideoEventCallback_t740301987 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::Invoke(System.IntPtr,System.Int32)
extern "C"  void OnVideoEventCallback_Invoke_m4012817204 (OnVideoEventCallback_t740301987 * __this, IntPtr_t ___cbdata, int32_t ___eventId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnVideoEventCallback_t740301987(Il2CppObject* delegate, IntPtr_t ___cbdata, int32_t ___eventId);
// System.IAsyncResult GvrVideoPlayerTexture/OnVideoEventCallback::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnVideoEventCallback_BeginInvoke_m111885129 (OnVideoEventCallback_t740301987 * __this, IntPtr_t ___cbdata, int32_t ___eventId, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnVideoEventCallback_EndInvoke_m4086611943 (OnVideoEventCallback_t740301987 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
