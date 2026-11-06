#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FInteriorSettings
{
public:
    bool bIsWorldSettings;
    float ExteriorVolume;
    float ExteriorTime;
    float ExteriorLPF;
    float ExteriorLPFTime;
    float InteriorVolume;
    float InteriorTime;
    float InteriorLPF;
    float InteriorLPFTime;
    FInteriorSettings() { NativeCall<void>(this, "FInteriorSettings.FInteriorSettings()"); }
    bool& bIsWorldSettingsField() { return *GetNativePointerField<bool*>(this, "FInteriorSettings.bIsWorldSettings"); }
    float& ExteriorVolumeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.ExteriorVolume"); }
    float& ExteriorTimeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.ExteriorTime"); }
    float& ExteriorLPFField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.ExteriorLPF"); }
    float& ExteriorLPFTimeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.ExteriorLPFTime"); }
    float& InteriorVolumeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.InteriorVolume"); }
    float& InteriorTimeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.InteriorTime"); }
    float& InteriorLPFField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.InteriorLPF"); }
    float& InteriorLPFTimeField() { return *GetNativePointerField<float*>(this, "FInteriorSettings.InteriorLPFTime"); }
};
static_assert(sizeof(FInteriorSettings) == 36);
static_assert(offsetof(FInteriorSettings, bIsWorldSettings) == 0);
static_assert(offsetof(FInteriorSettings, ExteriorVolume) == 4);
static_assert(offsetof(FInteriorSettings, ExteriorTime) == 8);
static_assert(offsetof(FInteriorSettings, ExteriorLPF) == 12);
static_assert(offsetof(FInteriorSettings, ExteriorLPFTime) == 16);
static_assert(offsetof(FInteriorSettings, InteriorVolume) == 20);
static_assert(offsetof(FInteriorSettings, InteriorTime) == 24);
static_assert(offsetof(FInteriorSettings, InteriorLPF) == 28);
static_assert(offsetof(FInteriorSettings, InteriorLPFTime) == 32);
static_assert(sizeof(((FInteriorSettings*)nullptr)->bIsWorldSettings) == 1);
static_assert(sizeof(((FInteriorSettings*)nullptr)->ExteriorVolume) == 4);
static_assert(sizeof(((FInteriorSettings*)nullptr)->ExteriorTime) == 4);
static_assert(sizeof(((FInteriorSettings*)nullptr)->ExteriorLPF) == 4);
static_assert(sizeof(((FInteriorSettings*)nullptr)->ExteriorLPFTime) == 4);
static_assert(sizeof(((FInteriorSettings*)nullptr)->InteriorVolume) == 4);
static_assert(sizeof(((FInteriorSettings*)nullptr)->InteriorTime) == 4);
static_assert(sizeof(((FInteriorSettings*)nullptr)->InteriorLPF) == 4);
static_assert(sizeof(((FInteriorSettings*)nullptr)->InteriorLPFTime) == 4);
static_assert(std::is_trivially_copyable_v<FInteriorSettings>);
