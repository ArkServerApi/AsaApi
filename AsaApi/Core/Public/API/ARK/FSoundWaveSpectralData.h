#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FSoundWaveSpectralData
{
public:
    float FrequencyHz = 0.0f;
    float Magnitude = 0.0f;
    float NormalizedMagnitude = 0.0f;
    FSoundWaveSpectralData() = default;
    float& FrequencyHzField() { return *GetNativePointerField<float*>(this, "FSoundWaveSpectralData.FrequencyHz"); }
    float& MagnitudeField() { return *GetNativePointerField<float*>(this, "FSoundWaveSpectralData.Magnitude"); }
    float& NormalizedMagnitudeField() { return *GetNativePointerField<float*>(this, "FSoundWaveSpectralData.NormalizedMagnitude"); }
};
static_assert(sizeof(FSoundWaveSpectralData) == 12);
static_assert(offsetof(FSoundWaveSpectralData, FrequencyHz) == 0);
static_assert(offsetof(FSoundWaveSpectralData, Magnitude) == 4);
static_assert(offsetof(FSoundWaveSpectralData, NormalizedMagnitude) == 8);
static_assert(sizeof(((FSoundWaveSpectralData*)nullptr)->FrequencyHz) == 4);
static_assert(sizeof(((FSoundWaveSpectralData*)nullptr)->Magnitude) == 4);
static_assert(sizeof(((FSoundWaveSpectralData*)nullptr)->NormalizedMagnitude) == 4);
static_assert(std::is_trivially_copyable_v<FSoundWaveSpectralData>);
