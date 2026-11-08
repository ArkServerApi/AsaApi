#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FPrimitiveMaterialInfo
{
public:
    const UMaterialInterface * Material;
    const FMeshUVChannelInfo * UVChannelData;
    unsigned int PackedRelativeBox;
    FPrimitiveMaterialInfo() : Material(nullptr), UVChannelData(nullptr), PackedRelativeBox(0) {}
    const UMaterialInterface*& MaterialField() { return *GetNativePointerField<const UMaterialInterface**>(this, "FPrimitiveMaterialInfo.Material"); }
    const FMeshUVChannelInfo*& UVChannelDataField() { return *GetNativePointerField<const FMeshUVChannelInfo**>(this, "FPrimitiveMaterialInfo.UVChannelData"); }
    unsigned int& PackedRelativeBoxField() { return *GetNativePointerField<unsigned int*>(this, "FPrimitiveMaterialInfo.PackedRelativeBox"); }
};
static_assert(sizeof(FPrimitiveMaterialInfo) == 24);
static_assert(offsetof(FPrimitiveMaterialInfo, Material) == 0);
static_assert(offsetof(FPrimitiveMaterialInfo, UVChannelData) == 8);
static_assert(offsetof(FPrimitiveMaterialInfo, PackedRelativeBox) == 16);
static_assert(sizeof(((FPrimitiveMaterialInfo*)nullptr)->Material) == 8);
static_assert(sizeof(((FPrimitiveMaterialInfo*)nullptr)->UVChannelData) == 8);
static_assert(sizeof(((FPrimitiveMaterialInfo*)nullptr)->PackedRelativeBox) == 4);
static_assert(std::is_trivially_copyable_v<FPrimitiveMaterialInfo>);
