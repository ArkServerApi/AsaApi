#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalGlobalUIData : UObject
{
public:
	UPrimalGlobalUIData() = delete;
	~UPrimalGlobalUIData() = delete;
	UPrimalGlobalUIData(const UPrimalGlobalUIData&) = delete;
	UPrimalGlobalUIData& operator=(const UPrimalGlobalUIData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalGlobalUIData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalGlobalUIData"); }

	float& MutagenGoodToGreatThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalGlobalUIData.MutagenGoodToGreatThreshold"); }



	UTexture2D*& SpacebarButtonIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.SpacebarButtonIcon"); }
	UTexture2D*& RightMouseButtonIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.RightMouseButtonIcon"); }
	UTexture2D*& LeftMouseButtonIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.LeftMouseButtonIcon"); }
	UTexture2D*& MiddleMouseButtonIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.MiddleMouseButtonIcon"); }
	UTexture2D*& GamepadLeftBumperField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.GamepadLeftBumper"); }
	UTexture2D*& GamepadRightBumperField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.GamepadRightBumper"); }
	UTexture2D*& LeftTriggerIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.LeftTriggerIcon"); }
	UTexture2D*& RightTriggerIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.RightTriggerIcon"); }
	UTexture2D*& GamepadFaceButtonBottomField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.GamepadFaceButtonBottom"); }
	UTexture2D*& GamepadFaceButtonTopField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.GamepadFaceButtonTop"); }
	UTexture2D*& GamepadFaceButtonLeftField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.GamepadFaceButtonLeft"); }
	UTexture2D*& GamepadFaceButtonRightField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.GamepadFaceButtonRight"); }
	UTexture2D*& DPadUpIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.DPadUpIcon"); }
	UTexture2D*& DPadGenericIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.DPadGenericIcon"); }
	UTexture2D*& DPadDownIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.DPadDownIcon"); }
	UTexture2D*& DPadLeftIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.DPadLeftIcon"); }
	UTexture2D*& DPadRightIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.DPadRightIcon"); }
	UTexture2D*& RightThumbstickIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.RightThumbstickIcon"); }
	UTexture2D*& LeftThumbstickIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.LeftThumbstickIcon"); }
	UTexture2D*& SpecialLeftIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.SpecialLeftIcon"); }
	UTexture2D*& SpecialRightIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.SpecialRightIcon"); }
	UTexture2D*& MutagenIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.MutagenIcon"); }
	UTexture2D*& DinoDotField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGlobalUIData.DinoDot"); }

	FLinearColor& StatusColorGoodField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.StatusColorGood"); }
	FLinearColor& StatusColorWarningField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.StatusColorWarning"); }
	FLinearColor& StatusColorBadField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.StatusColorBad"); }
	FLinearColor& MutagenGoodColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.MutagenGoodColor"); }
	FLinearColor& MutagenGreatColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.MutagenGreatColor"); }
	UTexture2D* GetIconForKeyName(const FString& ActionKeyName, bool bReInitializeMap) { return NativeCall<UTexture2D*, const FString&, bool>(this, "UPrimalGlobalUIData.GetIconForKeyName(FString&,bool)", ActionKeyName, bReInitializeMap); }
};
