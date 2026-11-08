#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UPrimalEggToolTipWidget : public UToolTipWidget
{
public:
	UPrimalEggToolTipWidget() = delete;
	~UPrimalEggToolTipWidget() = delete;
	UPrimalEggToolTipWidget(const UPrimalEggToolTipWidget&) = delete;
	UPrimalEggToolTipWidget& operator=(const UPrimalEggToolTipWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalEggToolTipWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalEggToolTipWidget"); }

	FLinearColor& TemperatureColor_PerfectField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_Perfect"); }
	FLinearColor& TemperatureColor_BoostedField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_Boosted"); }
	FLinearColor& TemperatureColor_CoolField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_Cool"); }
	FLinearColor& TemperatureColor_TooColdField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_TooCold"); }
	FLinearColor& TemperatureColor_WarmField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_Warm"); }
	FLinearColor& TemperatureColor_TooHotField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.TemperatureColor_TooHot"); }
	FLinearColor& GenderColor_FemaleField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.GenderColor_Female"); }
	FLinearColor& GenderColor_MaleField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.GenderColor_Male"); }
	FLinearColor& GenderColor_UnknownField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget.GenderColor_Unknown"); }
	UTexture2D*& GenderIcon_FemaleField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalEggToolTipWidget.GenderIcon_Female"); }
	UTexture2D*& GenderIcon_MaleField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalEggToolTipWidget.GenderIcon_Male"); }
	UTexture2D*& GenderIcon_UnknownField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalEggToolTipWidget.GenderIcon_Unknown"); }
	float& RightColumnWidthField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.RightColumnWidth"); }
	float& TemperatureGaugeTotalDegreesToDisplayField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.TemperatureGaugeTotalDegreesToDisplay"); }
	float& TemperatureGaugeIndicatorHorizontalOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.TemperatureGaugeIndicatorHorizontalOffset"); }
	TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>& EggItemField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>*>(this, "UPrimalEggToolTipWidget.EggItem"); }
	TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>& DinoRefField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*>(this, "UPrimalEggToolTipWidget.DinoRef"); }
	UTextBlock*& DinoNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.DinoNameLabel"); }
	UTextBlock*& FatherNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.FatherNameLabel"); }
	UTextBlock*& MotherNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.MotherNameLabel"); }
	UTextBlock*& EggHealthLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggHealthLabel"); }
	UTextBlock*& EggIncubationLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggIncubationLabel"); }
	UTextBlock*& EggIncubationTimerLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggIncubationTimerLabel"); }
	UTextBlock*& EggTempBoundsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggTempBoundsLabel"); }
	UTextBlock*& EggStatHealthLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatHealthLabel"); }
	UTextBlock*& EggStatStaminaLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatStaminaLabel"); }
	UTextBlock*& EggStatOxygenLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatOxygenLabel"); }
	UTextBlock*& EggStatFoodLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatFoodLabel"); }
	UTextBlock*& EggStatWeightLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatWeightLabel"); }
	UTextBlock*& EggStatMeleeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatMeleeLabel"); }
	UTextBlock*& EggStatSpeedLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatSpeedLabel"); }
	UTextBlock*& EggStatCraftingSpeedLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatCraftingSpeedLabel"); }
	UTextBlock*& EggStatTorpidityLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggStatTorpidityLabel"); }
	UTextBlock*& MaleMutationsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.MaleMutationsLabel"); }
	UTextBlock*& FemaleMutationsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.FemaleMutationsLabel"); }
	UTextBlock*& BoostLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.BoostLabel"); }
	UTextBlock*& EggTempRangeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggTempRangeLabel"); }
	UTextBlock*& CurrentTempLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.CurrentTempLabel"); }
	UTextBlock*& EggTamedEffectivenessLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.EggTamedEffectivenessLabel"); }
	UTextBlock*& SlotLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.SlotLabel"); }
	UImage*& EggIconImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalEggToolTipWidget.EggIconImage"); }
	UImage*& GenderIconImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalEggToolTipWidget.GenderIconImage"); }
	UProgressBar*& EggHealthProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalEggToolTipWidget.EggHealthProgressBar"); }
	UProgressBar*& EggIncubationProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalEggToolTipWidget.EggIncubationProgressBar"); }
	UProgressBar*& BoostProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalEggToolTipWidget.BoostProgressBar"); }
	UPanelWidget*& UnpoweredPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget.UnpoweredPanel"); }
	UPanelWidget*& BoostProgressPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget.BoostProgressPanel"); }
	UPanelWidget*& TempRangePanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget.TempRangePanel"); }
	UPanelWidget*& CurrentTempOverlayField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget.CurrentTempOverlay"); }
	UPanelWidget*& ColdRectField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget.ColdRect"); }
	UPanelWidget*& HotRectField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget.HotRect"); }
	UPanelWidget*& EggHealthPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget.EggHealthPanel"); }
	USizeBox*& RightColumnField() { return *GetNativePointerField<USizeBox**>(this, "UPrimalEggToolTipWidget.RightColumn"); }
	UBorder*& ColorSwatch_Region0Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget.ColorSwatch_Region0"); }
	UBorder*& ColorSwatch_Region1Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget.ColorSwatch_Region1"); }
	UBorder*& ColorSwatch_Region2Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget.ColorSwatch_Region2"); }
	UBorder*& ColorSwatch_Region3Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget.ColorSwatch_Region3"); }
	UBorder*& ColorSwatch_Region4Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget.ColorSwatch_Region4"); }
	UBorder*& ColorSwatch_Region5Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget.ColorSwatch_Region5"); }
	UBorder*& InnerCurrentTempOverlayField() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget.InnerCurrentTempOverlay"); }
	UTextBlock*& ColorID0Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.ColorID0"); }
	UTextBlock*& ColorID1Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.ColorID1"); }
	UTextBlock*& ColorID2Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.ColorID2"); }
	UTextBlock*& ColorID3Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.ColorID3"); }
	UTextBlock*& ColorID4Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.ColorID4"); }
	UTextBlock*& ColorID5Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget.ColorID5"); }
	TArray<UBorder*, TSizedDefaultAllocator<32> >& ColorIndexBlocksField() { return *GetNativePointerField<TArray<UBorder*, TSizedDefaultAllocator<32> >*>(this, "UPrimalEggToolTipWidget.ColorIndexBlocks"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& ColorIndexTextField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalEggToolTipWidget.ColorIndexText"); }
	BitFieldValue<bool, unsigned char> bWasPowered() { return { this, "UPrimalEggToolTipWidget.bWasPowered"}; }
	BitFieldValue<bool, unsigned char> bGestationMode() { return { this, "UPrimalEggToolTipWidget.bGestationMode"}; }
	void SetGenderState(bool bUsesGender, int GenderOverrideValue) { NativeCall<void, bool, int>(this, "UPrimalEggToolTipWidget.SetGenderState(bool,int)", bUsesGender, GenderOverrideValue); }
	void SetPoweredState(bool bIsPowered, bool bForceSet) { NativeCall<void, bool, bool>(this, "UPrimalEggToolTipWidget.SetPoweredState(bool,bool)", bIsPowered, bForceSet); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalEggToolTipWidget.UpdateToolTip(float)", DeltaSeconds); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UPrimalEggToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
};
