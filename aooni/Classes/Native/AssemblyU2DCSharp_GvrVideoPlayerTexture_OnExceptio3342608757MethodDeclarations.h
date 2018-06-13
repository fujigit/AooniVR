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

// GvrVideoPlayerTexture/OnExceptionCallback
struct OnExceptionCallback_t3342608757;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GvrVideoPlayerTexture/OnExceptionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnExceptionCallback__ctor_m578273439 (OnExceptionCallback_t3342608757 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnExceptionCallback::Invoke(System.String,System.String,System.IntPtr)
extern "C"  void OnExceptionCallback_Invoke_m3725734707 (OnExceptionCallback_t3342608757 * __this, String_t* ___type, String_t* ___msg, IntPtr_t ___cbdata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnExceptionCallback_t3342608757(Il2CppObject* delegate, String_t* ___type, String_t* ___msg, IntPtr_t ___cbdata);
// System.IAsyncResult GvrVideoPlayerTexture/OnExceptionCallback::BeginInvoke(System.String,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnExceptionCallback_BeginInvoke_m3042150892 (OnExceptionCallback_t3342608757 * __this, String_t* ___type, String_t* ___msg, IntPtr_t ___cbdata, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnExceptionCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnExceptionCallback_EndInvoke_m1858755119 (OnExceptionCallback_t3342608757 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
