#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FPrimitiveMaterialPropertyDescriptor
{
public:
    UE :: Math :: TVector2 < float > MinMaxMaterialDisplacement = FVector2f::ZeroVector;
    float MaxWorldPositionOffsetDisplacement = 0.0f;
    bool bAnyMaterialHasWorldPositionOffset = false;
    bool bAnyMaterialHasPixelAnimation = false;
    bool bAnyMaterialHasPerInstanceCustomData = false;
    bool bAnyMaterialHasPerInstanceRandom = false;
    FPrimitiveMaterialPropertyDescriptor() = default;
    UE::Math::TVector2<float>& MinMaxMaterialDisplacementField() { return *GetNativePointerField<UE::Math::TVector2<float>*>(this, "FPrimitiveMaterialPropertyDescriptor.MinMaxMaterialDisplacement"); }
    float& MaxWorldPositionOffsetDisplacementField() { return *GetNativePointerField<float*>(this, "FPrimitiveMaterialPropertyDescriptor.MaxWorldPositionOffsetDisplacement"); }
    bool& bAnyMaterialHasWorldPositionOffsetField() { return *GetNativePointerField<bool*>(this, "FPrimitiveMaterialPropertyDescriptor.bAnyMaterialHasWorldPositionOffset"); }
    bool& bAnyMaterialHasPixelAnimationField() { return *GetNativePointerField<bool*>(this, "FPrimitiveMaterialPropertyDescriptor.bAnyMaterialHasPixelAnimation"); }
    bool& bAnyMaterialHasPerInstanceCustomDataField() { return *GetNativePointerField<bool*>(this, "FPrimitiveMaterialPropertyDescriptor.bAnyMaterialHasPerInstanceCustomData"); }
    bool& bAnyMaterialHasPerInstanceRandomField() { return *GetNativePointerField<bool*>(this, "FPrimitiveMaterialPropertyDescriptor.bAnyMaterialHasPerInstanceRandom"); }
};
static_assert(sizeof(FPrimitiveMaterialPropertyDescriptor) == 16);
static_assert(offsetof(FPrimitiveMaterialPropertyDescriptor, MinMaxMaterialDisplacement) == 0);
static_assert(offsetof(FPrimitiveMaterialPropertyDescriptor, MaxWorldPositionOffsetDisplacement) == 8);
static_assert(offsetof(FPrimitiveMaterialPropertyDescriptor, bAnyMaterialHasWorldPositionOffset) == 12);
static_assert(offsetof(FPrimitiveMaterialPropertyDescriptor, bAnyMaterialHasPixelAnimation) == 13);
static_assert(offsetof(FPrimitiveMaterialPropertyDescriptor, bAnyMaterialHasPerInstanceCustomData) == 14);
static_assert(offsetof(FPrimitiveMaterialPropertyDescriptor, bAnyMaterialHasPerInstanceRandom) == 15);
static_assert(sizeof(((FPrimitiveMaterialPropertyDescriptor*)nullptr)->MinMaxMaterialDisplacement) == 8);
static_assert(sizeof(((FPrimitiveMaterialPropertyDescriptor*)nullptr)->MaxWorldPositionOffsetDisplacement) == 4);
static_assert(sizeof(((FPrimitiveMaterialPropertyDescriptor*)nullptr)->bAnyMaterialHasWorldPositionOffset) == 1);
static_assert(sizeof(((FPrimitiveMaterialPropertyDescriptor*)nullptr)->bAnyMaterialHasPixelAnimation) == 1);
static_assert(sizeof(((FPrimitiveMaterialPropertyDescriptor*)nullptr)->bAnyMaterialHasPerInstanceCustomData) == 1);
static_assert(sizeof(((FPrimitiveMaterialPropertyDescriptor*)nullptr)->bAnyMaterialHasPerInstanceRandom) == 1);
static_assert(std::is_trivially_copyable_v<FPrimitiveMaterialPropertyDescriptor>);
