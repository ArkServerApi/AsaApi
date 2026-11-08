#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FAsyncPhysicsTimestamp
{
public:
    int ServerFrame = INDEX_NONE;
    int LocalFrame = INDEX_NONE;
    FAsyncPhysicsTimestamp() = default;
    int& ServerFrameField() { return *GetNativePointerField<int*>(this, "FAsyncPhysicsTimestamp.ServerFrame"); }
    int& LocalFrameField() { return *GetNativePointerField<int*>(this, "FAsyncPhysicsTimestamp.LocalFrame"); }
};
static_assert(sizeof(FAsyncPhysicsTimestamp) == 8);
static_assert(offsetof(FAsyncPhysicsTimestamp, ServerFrame) == 0);
static_assert(offsetof(FAsyncPhysicsTimestamp, LocalFrame) == 4);
static_assert(sizeof(((FAsyncPhysicsTimestamp*)nullptr)->ServerFrame) == 4);
static_assert(sizeof(((FAsyncPhysicsTimestamp*)nullptr)->LocalFrame) == 4);
static_assert(std::is_trivially_copyable_v<FAsyncPhysicsTimestamp>);
