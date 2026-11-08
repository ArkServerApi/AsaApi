#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FBodyInstanceAsyncPhysicsTickHandle
{
public:
    Chaos :: FSingleParticlePhysicsProxy * Proxy = nullptr;
    FBodyInstanceAsyncPhysicsTickHandle() = default;
    bool IsValid() { return NativeCall<bool>(this, "FBodyInstanceAsyncPhysicsTickHandle.IsValid()"); }
};
static_assert(sizeof(FBodyInstanceAsyncPhysicsTickHandle) == 8);
static_assert(offsetof(FBodyInstanceAsyncPhysicsTickHandle, Proxy) == 0);
static_assert(sizeof(((FBodyInstanceAsyncPhysicsTickHandle*)nullptr)->Proxy) == 8);
static_assert(std::is_trivially_copyable_v<FBodyInstanceAsyncPhysicsTickHandle>);
