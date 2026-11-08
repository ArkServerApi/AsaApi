#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FNaniteSettings
{
public:
    bool bAllowMaskedMaterials;
    FNaniteSettings()
	: bAllowMaskedMaterials(true)
	{
	}
    bool& bAllowMaskedMaterialsField() { return *GetNativePointerField<bool*>(this, "FNaniteSettings.bAllowMaskedMaterials"); }
};
static_assert(sizeof(FNaniteSettings) == 1);
static_assert(offsetof(FNaniteSettings, bAllowMaskedMaterials) == 0);
static_assert(sizeof(((FNaniteSettings*)nullptr)->bAllowMaskedMaterials) == 1);
static_assert(std::is_trivially_copyable_v<FNaniteSettings>);
