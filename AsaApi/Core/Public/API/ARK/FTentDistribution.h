#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FTentDistribution
{
public:
    float TipAltitude = 0.0f;
    float TipValue = 0.0f;
    float Width = 1.0f;
    FTentDistribution() = default;
    float& TipAltitudeField() { return *GetNativePointerField<float*>(this, "FTentDistribution.TipAltitude"); }
    float& TipValueField() { return *GetNativePointerField<float*>(this, "FTentDistribution.TipValue"); }
    float& WidthField() { return *GetNativePointerField<float*>(this, "FTentDistribution.Width"); }
};
static_assert(sizeof(FTentDistribution) == 12);
static_assert(offsetof(FTentDistribution, TipAltitude) == 0);
static_assert(offsetof(FTentDistribution, TipValue) == 4);
static_assert(offsetof(FTentDistribution, Width) == 8);
static_assert(sizeof(((FTentDistribution*)nullptr)->TipAltitude) == 4);
static_assert(sizeof(((FTentDistribution*)nullptr)->TipValue) == 4);
static_assert(sizeof(((FTentDistribution*)nullptr)->Width) == 4);
static_assert(std::is_trivially_copyable_v<FTentDistribution>);
