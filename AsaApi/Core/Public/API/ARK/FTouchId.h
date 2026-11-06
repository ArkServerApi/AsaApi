#pragma once
#include "../UE/Misc/CoreMiscDefines.h"
struct FTouchId
{
    FInputDeviceId DeviceId;
    TEnumAsByte<ETouchIndex::Type> TouchIndex;
};
static_assert(sizeof(FTouchId) == 8);
static_assert(offsetof(FTouchId, DeviceId) == 0);
static_assert(offsetof(FTouchId, TouchIndex) == 4);
