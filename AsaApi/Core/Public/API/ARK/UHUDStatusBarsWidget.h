#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UHUDStatusBarsWidget : public UPrimalUserWidget
{
public:
	UHUDStatusBarsWidget() = delete;
	~UHUDStatusBarsWidget() = delete;
	UHUDStatusBarsWidget(const UHUDStatusBarsWidget&) = delete;
	UHUDStatusBarsWidget& operator=(const UHUDStatusBarsWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHUDStatusBarsWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHUDStatusBarsWidget"); }

	TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>& ForPrimalCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalCharacter, FWeakObjectPtr>*>(this, "UHUDStatusBarsWidget.ForPrimalCharacter"); }
	FString& HealthBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.HealthBarName"); }
	FString& StaminaBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.StaminaBarName"); }
	FString& OxygenBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.OxygenBarName"); }
	FString& FoodBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.FoodBarName"); }
	FString& WaterBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.WaterBarName"); }
	FString& WeightBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.WeightBarName"); }
	FString& TorpidityBarNameField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.TorpidityBarName"); }
	FName& XPBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDStatusBarsWidget.XPBarName"); }
	FName& IndoorsImageNameField() { return *GetNativePointerField<FName*>(this, "UHUDStatusBarsWidget.IndoorsImageName"); }
	FName& HarvestableImageNameField() { return *GetNativePointerField<FName*>(this, "UHUDStatusBarsWidget.HarvestableImageName"); }
	FName& CharacterLabelNameField() { return *GetNativePointerField<FName*>(this, "UHUDStatusBarsWidget.CharacterLabelName"); }
	UTexture2D*& UsableHarvestableAllowedField() { return *GetNativePointerField<UTexture2D**>(this, "UHUDStatusBarsWidget.UsableHarvestableAllowed"); }
	UTexture2D*& HarvestableAllowedField() { return *GetNativePointerField<UTexture2D**>(this, "UHUDStatusBarsWidget.HarvestableAllowed"); }
	UTexture2D*& HarvestablePreventedField() { return *GetNativePointerField<UTexture2D**>(this, "UHUDStatusBarsWidget.HarvestablePrevented"); }
	UTexture2D*& UsableHarvestablePreventedField() { return *GetNativePointerField<UTexture2D**>(this, "UHUDStatusBarsWidget.UsableHarvestablePrevented"); }
	FLinearColor& poopFoodColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDStatusBarsWidget.poopFoodColor"); }
	FLinearColor& regularFoodColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDStatusBarsWidget.regularFoodColor"); }
	UProgressBarWidget*& ThreatBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.ThreatBar"); }
	UProgressBarWidget*& StaminaBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.StaminaBar"); }
	UProgressBarWidget*& HealthBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.HealthBar"); }
	UProgressBarWidget*& TorpidityBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.TorpidityBar"); }
	UProgressBarWidget*& OxygenBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.OxygenBar"); }
	UProgressBarWidget*& FoodBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.FoodBar"); }
	UProgressBarWidget*& WaterBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.WaterBar"); }
	UProgressBarWidget*& WeightBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.WeightBar"); }
	UProgressBarWidget*& XPBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.XPBar"); }
	UProgressBarWidget*& BuffProgressBarField() { return *GetNativePointerField<UProgressBarWidget**>(this, "UHUDStatusBarsWidget.BuffProgressBar"); }
	UTextBlock*& CharacterLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UHUDStatusBarsWidget.CharacterLabel"); }
	UImage*& IndoorsImageField() { return *GetNativePointerField<UImage**>(this, "UHUDStatusBarsWidget.IndoorsImage"); }
	UImage*& HarvestableImageField() { return *GetNativePointerField<UImage**>(this, "UHUDStatusBarsWidget.HarvestableImage"); }
	UTexture2D*& LastHarvestableTextureField() { return *GetNativePointerField<UTexture2D**>(this, "UHUDStatusBarsWidget.LastHarvestableTexture"); }
	FString& FoodBarDefaultDisplayStringField() { return *GetNativePointerField<FString*>(this, "UHUDStatusBarsWidget.FoodBarDefaultDisplayString"); }
	UTexture2D*& FoodBarDefaultBackgroundField() { return *GetNativePointerField<UTexture2D**>(this, "UHUDStatusBarsWidget.FoodBarDefaultBackground"); }
	UTexture2D*& FoodBarDefaultForegroundField() { return *GetNativePointerField<UTexture2D**>(this, "UHUDStatusBarsWidget.FoodBarDefaultForeground"); }
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UHUDStatusBarsWidget.NativeTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void InitializeMe(UPrimalUI* ParentUI) { NativeCall<void, UPrimalUI*>(this, "UHUDStatusBarsWidget.InitializeMe(UPrimalUI*)", ParentUI); }
};
