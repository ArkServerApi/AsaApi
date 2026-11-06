#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FExponentialHeightFogData
{
public:
    float FogDensity = 0.02f;
    float FogHeightFalloff = 0.2f;
    float FogHeightOffset = 0.0f;
    FExponentialHeightFogData() = default;
    float& FogDensityField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogData.FogDensity"); }
    float& FogHeightFalloffField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogData.FogHeightFalloff"); }
    float& FogHeightOffsetField() { return *GetNativePointerField<float*>(this, "FExponentialHeightFogData.FogHeightOffset"); }
};
static_assert(sizeof(FExponentialHeightFogData) == 12);
static_assert(offsetof(FExponentialHeightFogData, FogDensity) == 0);
static_assert(offsetof(FExponentialHeightFogData, FogHeightFalloff) == 4);
static_assert(offsetof(FExponentialHeightFogData, FogHeightOffset) == 8);
static_assert(sizeof(((FExponentialHeightFogData*)nullptr)->FogDensity) == 4);
static_assert(sizeof(((FExponentialHeightFogData*)nullptr)->FogHeightFalloff) == 4);
static_assert(sizeof(((FExponentialHeightFogData*)nullptr)->FogHeightOffset) == 4);
static_assert(std::is_trivially_copyable_v<FExponentialHeightFogData>);
