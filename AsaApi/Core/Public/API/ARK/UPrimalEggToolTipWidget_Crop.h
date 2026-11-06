#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UPrimalEggToolTipWidget_Crop : public UToolTipWidget
{
public:
	UPrimalEggToolTipWidget_Crop() = delete;
	~UPrimalEggToolTipWidget_Crop() = delete;
	UPrimalEggToolTipWidget_Crop(const UPrimalEggToolTipWidget_Crop&) = delete;
	UPrimalEggToolTipWidget_Crop& operator=(const UPrimalEggToolTipWidget_Crop&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalEggToolTipWidget_Crop"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalEggToolTipWidget_Crop"); }

	FLinearColor& TemperatureColor_PerfectField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_Perfect"); }
	FLinearColor& TemperatureColor_BoostedField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_Boosted"); }
	FLinearColor& TemperatureColor_CoolField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_Cool"); }
	FLinearColor& TemperatureColor_TooColdField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_TooCold"); }
	FLinearColor& TemperatureColor_WarmField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_Warm"); }
	FLinearColor& TemperatureColor_TooHotField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_TooHot"); }
	FLinearColor& GenderColor_FemaleField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.GenderColor_Female"); }
	FLinearColor& GenderColor_MaleField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.GenderColor_Male"); }
	FLinearColor& GenderColor_UnknownField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalEggToolTipWidget_Crop.GenderColor_Unknown"); }
	UTexture2D*& GenderIcon_FemaleField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalEggToolTipWidget_Crop.GenderIcon_Female"); }
	UTexture2D*& GenderIcon_MaleField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalEggToolTipWidget_Crop.GenderIcon_Male"); }
	UTexture2D*& GenderIcon_UnknownField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalEggToolTipWidget_Crop.GenderIcon_Unknown"); }
	float& RightColumnWidthField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.RightColumnWidth"); }
	float& TemperatureGaugeTotalDegreesToDisplayField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureGaugeTotalDegreesToDisplay"); }
	float& TemperatureGaugeIndicatorHorizontalOffsetField() { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureGaugeIndicatorHorizontalOffset"); }
	TWeakObjectPtr<APrimalStructureItemContainer_CropPlot, FWeakObjectPtr>& CropPlotField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureItemContainer_CropPlot, FWeakObjectPtr>*>(this, "UPrimalEggToolTipWidget_Crop.CropPlot"); }
	UTextBlock*& DinoNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.DinoNameLabel"); }
	UTextBlock*& FatherNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.FatherNameLabel"); }
	UTextBlock*& MotherNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.MotherNameLabel"); }
	UTextBlock*& EggHealthLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggHealthLabel"); }
	UTextBlock*& EggIncubationLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggIncubationLabel"); }
	UTextBlock*& EggIncubationTimerLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggIncubationTimerLabel"); }
	UTextBlock*& EggTempBoundsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggTempBoundsLabel"); }
	UTextBlock*& EggStatHealthLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggStatHealthLabel"); }
	UTextBlock*& EggStatStaminaLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggStatStaminaLabel"); }
	UTextBlock*& EggStatOxygenLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggStatOxygenLabel"); }
	UTextBlock*& EggStatFoodLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggStatFoodLabel"); }
	UTextBlock*& EggStatWeightLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggStatWeightLabel"); }
	UTextBlock*& EggStatMeleeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggStatMeleeLabel"); }
	UTextBlock*& EggStatSpeedLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggStatSpeedLabel"); }
	UTextBlock*& MaleMutationsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.MaleMutationsLabel"); }
	UTextBlock*& FemaleMutationsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.FemaleMutationsLabel"); }
	UTextBlock*& BoostLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.BoostLabel"); }
	UTextBlock*& EggTempRangeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggTempRangeLabel"); }
	UTextBlock*& CurrentTempLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.CurrentTempLabel"); }
	UTextBlock*& EggTamedEffectivenessLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.EggTamedEffectivenessLabel"); }
	UTextBlock*& SlotLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.SlotLabel"); }
	UImage*& EggIconImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalEggToolTipWidget_Crop.EggIconImage"); }
	UImage*& GenderIconImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalEggToolTipWidget_Crop.GenderIconImage"); }
	UProgressBar*& EggHealthProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalEggToolTipWidget_Crop.EggHealthProgressBar"); }
	UProgressBar*& EggIncubationProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalEggToolTipWidget_Crop.EggIncubationProgressBar"); }
	UProgressBar*& BoostProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalEggToolTipWidget_Crop.BoostProgressBar"); }
	UPanelWidget*& UnpoweredPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget_Crop.UnpoweredPanel"); }
	UPanelWidget*& BoostProgressPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget_Crop.BoostProgressPanel"); }
	UPanelWidget*& TempRangePanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget_Crop.TempRangePanel"); }
	UPanelWidget*& CurrentTempOverlayField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget_Crop.CurrentTempOverlay"); }
	UPanelWidget*& ColdRectField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget_Crop.ColdRect"); }
	UPanelWidget*& HotRectField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget_Crop.HotRect"); }
	UPanelWidget*& EggHealthPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalEggToolTipWidget_Crop.EggHealthPanel"); }
	USizeBox*& RightColumnField() { return *GetNativePointerField<USizeBox**>(this, "UPrimalEggToolTipWidget_Crop.RightColumn"); }
	UBorder*& ColorSwatch_Region0Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget_Crop.ColorSwatch_Region0"); }
	UBorder*& ColorSwatch_Region1Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget_Crop.ColorSwatch_Region1"); }
	UBorder*& ColorSwatch_Region2Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget_Crop.ColorSwatch_Region2"); }
	UBorder*& ColorSwatch_Region3Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget_Crop.ColorSwatch_Region3"); }
	UBorder*& ColorSwatch_Region4Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget_Crop.ColorSwatch_Region4"); }
	UBorder*& ColorSwatch_Region5Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget_Crop.ColorSwatch_Region5"); }
	UBorder*& InnerCurrentTempOverlayField() { return *GetNativePointerField<UBorder**>(this, "UPrimalEggToolTipWidget_Crop.InnerCurrentTempOverlay"); }
	UTextBlock*& ColorID0Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.ColorID0"); }
	UTextBlock*& ColorID1Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.ColorID1"); }
	UTextBlock*& ColorID2Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.ColorID2"); }
	UTextBlock*& ColorID3Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.ColorID3"); }
	UTextBlock*& ColorID4Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.ColorID4"); }
	UTextBlock*& ColorID5Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalEggToolTipWidget_Crop.ColorID5"); }
	TArray<UBorder*, TSizedDefaultAllocator<32> >& ColorIndexBlocksField() { return *GetNativePointerField<TArray<UBorder*, TSizedDefaultAllocator<32> >*>(this, "UPrimalEggToolTipWidget_Crop.ColorIndexBlocks"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& ColorIndexTextField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalEggToolTipWidget_Crop.ColorIndexText"); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UPrimalEggToolTipWidget_Crop.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalEggToolTipWidget_Crop.UpdateToolTip(float)", DeltaSeconds); }
};
