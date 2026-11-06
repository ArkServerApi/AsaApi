#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FLightmassLightSettings
{
public:
    float IndirectLightingSaturation;
    float ShadowExponent;
    bool bUseAreaShadowsForStationaryLight;
    FLightmassLightSettings()
		: IndirectLightingSaturation(1.0f)
		, ShadowExponent(2.0f)
		, bUseAreaShadowsForStationaryLight(false)
	{ }
    float& IndirectLightingSaturationField() { return *GetNativePointerField<float*>(this, "FLightmassLightSettings.IndirectLightingSaturation"); }
    float& ShadowExponentField() { return *GetNativePointerField<float*>(this, "FLightmassLightSettings.ShadowExponent"); }
    bool& bUseAreaShadowsForStationaryLightField() { return *GetNativePointerField<bool*>(this, "FLightmassLightSettings.bUseAreaShadowsForStationaryLight"); }
};
static_assert(sizeof(FLightmassLightSettings) == 12);
static_assert(offsetof(FLightmassLightSettings, IndirectLightingSaturation) == 0);
static_assert(offsetof(FLightmassLightSettings, ShadowExponent) == 4);
static_assert(offsetof(FLightmassLightSettings, bUseAreaShadowsForStationaryLight) == 8);
static_assert(sizeof(((FLightmassLightSettings*)nullptr)->IndirectLightingSaturation) == 4);
static_assert(sizeof(((FLightmassLightSettings*)nullptr)->ShadowExponent) == 4);
static_assert(sizeof(((FLightmassLightSettings*)nullptr)->bUseAreaShadowsForStationaryLight) == 1);
static_assert(std::is_trivially_copyable_v<FLightmassLightSettings>);
