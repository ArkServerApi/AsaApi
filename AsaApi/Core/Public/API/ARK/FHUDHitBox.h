#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

class FHUDHitBox
{
public:
    UE :: Math :: TVector2 < double > Coords;
    UE :: Math :: TVector2 < double > Size;
    FName Name;
    bool bConsumesInput;
    int Priority;
    FHUDHitBox() = delete;
    FHUDHitBox( FVector2D InCoords, FVector2D InSize, const FName& InName, bool bInConsumesInput, int32 InPriority ) { NativeCall<void, FVector2D, FVector2D, const FName &, bool, int>(this, "FHUDHitBox.FHUDHitBox(UE::Math::TVector2<double>,UE::Math::TVector2<double>,FName&,bool,int)", InCoords, InSize, InName, bInConsumesInput, InPriority); }
    UE::Math::TVector2<double>& CoordsField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FHUDHitBox.Coords"); }
    UE::Math::TVector2<double>& SizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FHUDHitBox.Size"); }
    FName& NameField() { return *GetNativePointerField<FName*>(this, "FHUDHitBox.Name"); }
    bool& bConsumesInputField() { return *GetNativePointerField<bool*>(this, "FHUDHitBox.bConsumesInput"); }
    int& PriorityField() { return *GetNativePointerField<int*>(this, "FHUDHitBox.Priority"); }
    bool Contains(UE::Math::TVector2<double>* InCoords) { if (!InCoords) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector2 < double >>(this, "FHUDHitBox.Contains(UE::Math::TVector2<double>)", *InCoords); }
    void Draw(FCanvas* InCanvas, const FLinearColor& InColor) { NativeCall<void, FCanvas*, const FLinearColor&>(this, "FHUDHitBox.Draw(FCanvas*,FLinearColor&)", InCanvas, InColor); }
};
static_assert(sizeof(FHUDHitBox) == 48);
static_assert(offsetof(FHUDHitBox, Coords) == 0);
static_assert(offsetof(FHUDHitBox, Size) == 16);
static_assert(offsetof(FHUDHitBox, Name) == 32);
static_assert(offsetof(FHUDHitBox, bConsumesInput) == 40);
static_assert(offsetof(FHUDHitBox, Priority) == 44);
static_assert(sizeof(((FHUDHitBox*)nullptr)->Coords) == 16);
static_assert(sizeof(((FHUDHitBox*)nullptr)->Size) == 16);
static_assert(sizeof(((FHUDHitBox*)nullptr)->Name) == 8);
static_assert(sizeof(((FHUDHitBox*)nullptr)->bConsumesInput) == 1);
static_assert(sizeof(((FHUDHitBox*)nullptr)->Priority) == 4);
static_assert(std::is_trivially_copyable_v<FHUDHitBox>);
