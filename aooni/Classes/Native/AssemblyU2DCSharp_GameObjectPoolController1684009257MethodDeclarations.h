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

// GameObjectPoolController
struct GameObjectPoolController_t1684009257;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void GameObjectPoolController::.ctor()
extern "C"  void GameObjectPoolController__ctor_m3674463122 (GameObjectPoolController_t1684009257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPoolController::Initialize(System.Int32)
extern "C"  void GameObjectPoolController_Initialize_m65620115 (GameObjectPoolController_t1684009257 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPoolController::OnBorrowed(UnityEngine.GameObject)
extern "C"  void GameObjectPoolController_OnBorrowed_m3897779197 (GameObjectPoolController_t1684009257 * __this, GameObject_t4012695102 * ___borrowedObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPoolController::OnPooled(UnityEngine.GameObject)
extern "C"  void GameObjectPoolController_OnPooled_m863230820 (GameObjectPoolController_t1684009257 * __this, GameObject_t4012695102 * ___pooledObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPoolController::LateUpdate()
extern "C"  void GameObjectPoolController_LateUpdate_m3055933953 (GameObjectPoolController_t1684009257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
