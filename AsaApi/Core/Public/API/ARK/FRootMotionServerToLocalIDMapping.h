#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FRootMotionServerToLocalIDMapping
{
public:
    unsigned short ServerID;
    unsigned short LocalID;
    float TimeStamp;
    FRootMotionServerToLocalIDMapping() { NativeCall<void>(this, "FRootMotionServerToLocalIDMapping.FRootMotionServerToLocalIDMapping()"); }
    unsigned short& ServerIDField() { return *GetNativePointerField<unsigned short*>(this, "FRootMotionServerToLocalIDMapping.ServerID"); }
    unsigned short& LocalIDField() { return *GetNativePointerField<unsigned short*>(this, "FRootMotionServerToLocalIDMapping.LocalID"); }
    float& TimeStampField() { return *GetNativePointerField<float*>(this, "FRootMotionServerToLocalIDMapping.TimeStamp"); }
    bool IsStillValid(float CurrentTimeStamp) { return NativeCall<bool, float>(this, "FRootMotionServerToLocalIDMapping.IsStillValid(float)", CurrentTimeStamp); }
};
static_assert(sizeof(FRootMotionServerToLocalIDMapping) == 8);
static_assert(offsetof(FRootMotionServerToLocalIDMapping, ServerID) == 0);
static_assert(offsetof(FRootMotionServerToLocalIDMapping, LocalID) == 2);
static_assert(offsetof(FRootMotionServerToLocalIDMapping, TimeStamp) == 4);
static_assert(sizeof(((FRootMotionServerToLocalIDMapping*)nullptr)->ServerID) == 2);
static_assert(sizeof(((FRootMotionServerToLocalIDMapping*)nullptr)->LocalID) == 2);
static_assert(sizeof(((FRootMotionServerToLocalIDMapping*)nullptr)->TimeStamp) == 4);
static_assert(std::is_trivially_copyable_v<FRootMotionServerToLocalIDMapping>);
