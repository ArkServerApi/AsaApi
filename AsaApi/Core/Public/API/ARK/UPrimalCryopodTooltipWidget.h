#pragma once
#include "BulkForward.h"
#include "UTooltipSmartLayoutWidget.h"

struct UPrimalCryopodTooltipWidget : public UTooltipSmartLayoutWidget
{
public:
	UPrimalCryopodTooltipWidget() = delete;
	~UPrimalCryopodTooltipWidget() = delete;
	UPrimalCryopodTooltipWidget(const UPrimalCryopodTooltipWidget&) = delete;
	UPrimalCryopodTooltipWidget& operator=(const UPrimalCryopodTooltipWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalCryopodTooltipWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalCryopodTooltipWidget"); }

	UTexture2D*& FemaleIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalCryopodTooltipWidget.FemaleIcon"); }
	UTexture2D*& MaleIconField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalCryopodTooltipWidget.MaleIcon"); }
	FLinearColor& FemaleColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalCryopodTooltipWidget.FemaleColor"); }
	FLinearColor& MaleColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalCryopodTooltipWidget.MaleColor"); }
	FString& MatingCDStringField() { return *GetNativePointerField<FString*>(this, "UPrimalCryopodTooltipWidget.MatingCDString"); }
	FString& StoredDinoDescriptionStringField() { return *GetNativePointerField<FString*>(this, "UPrimalCryopodTooltipWidget.StoredDinoDescriptionString"); }
	FSlateColor& StatNoRegenerationColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalCryopodTooltipWidget.StatNoRegenerationColor"); }
	FSlateColor& StatRegenerationColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalCryopodTooltipWidget.StatRegenerationColor"); }
	TArray<FName, TSizedDefaultAllocator<32> >& StoredDinoGeneTraitsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalCryopodTooltipWidget.StoredDinoGeneTraits"); }
	FName& TraitsBoxNameField() { return *GetNativePointerField<FName*>(this, "UPrimalCryopodTooltipWidget.TraitsBoxName"); }
	FSlateFontInfo& TraitsHeaderFontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UPrimalCryopodTooltipWidget.TraitsHeaderFont"); }
	FSlateColor& TraitsHeaderColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalCryopodTooltipWidget.TraitsHeaderColor"); }
	FSlateFontInfo& TraitLabelFontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UPrimalCryopodTooltipWidget.TraitLabelFont"); }
	FSlateColor& TraitLabelColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalCryopodTooltipWidget.TraitLabelColor"); }
	double& MatingReadyTimeField() { return *GetNativePointerField<double*>(this, "UPrimalCryopodTooltipWidget.MatingReadyTime"); }
	TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>& MyItemField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>*>(this, "UPrimalCryopodTooltipWidget.MyItem"); }
	UTextBlock*& DinoNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.DinoNameLabel"); }
	UTextBlock*& ChargeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.ChargeLabel"); }
	UTextBlock*& ItemWeightLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.ItemWeightLabel"); }
	UTextBlock*& StatHealthLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StatHealthLabel"); }
	UTextBlock*& StatStaminaLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StatStaminaLabel"); }
	UTextBlock*& StatOxygenLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StatOxygenLabel"); }
	UTextBlock*& StatFoodLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StatFoodLabel"); }
	UTextBlock*& StatWeightLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StatWeightLabel"); }
	UTextBlock*& StatMeleeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StatMeleeLabel"); }
	UTextBlock*& StatSpeedLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StatSpeedLabel"); }
	UTextBlock*& StatTorporLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StatTorporLabel"); }
	UTextBlock*& MaleMutationsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.MaleMutationsLabel"); }
	UTextBlock*& FemaleMutationsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.FemaleMutationsLabel"); }
	UTextBlock*& TamedEffectivenessLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.TamedEffectivenessLabel"); }
	UTextBlock*& DescriptionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.DescriptionLabel"); }
	UTextBlock*& NeuteredLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.NeuteredLabel"); }
	UTextBlock*& MatingLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.MatingLabel"); }
	UTextBlock*& StoredDinoDescriptionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.StoredDinoDescriptionLabel"); }
	UImage*& IconImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalCryopodTooltipWidget.IconImage"); }
	UImage*& GenderIconImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalCryopodTooltipWidget.GenderIconImage"); }
	UImage*& NeuteredIconField() { return *GetNativePointerField<UImage**>(this, "UPrimalCryopodTooltipWidget.NeuteredIcon"); }
	UBorder*& ColorSwatch_Region0Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalCryopodTooltipWidget.ColorSwatch_Region0"); }
	UBorder*& ColorSwatch_Region1Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalCryopodTooltipWidget.ColorSwatch_Region1"); }
	UBorder*& ColorSwatch_Region2Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalCryopodTooltipWidget.ColorSwatch_Region2"); }
	UBorder*& ColorSwatch_Region3Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalCryopodTooltipWidget.ColorSwatch_Region3"); }
	UBorder*& ColorSwatch_Region4Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalCryopodTooltipWidget.ColorSwatch_Region4"); }
	UBorder*& ColorSwatch_Region5Field() { return *GetNativePointerField<UBorder**>(this, "UPrimalCryopodTooltipWidget.ColorSwatch_Region5"); }
	UTextBlock*& ColorID0Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.ColorID0"); }
	UTextBlock*& ColorID1Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.ColorID1"); }
	UTextBlock*& ColorID2Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.ColorID2"); }
	UTextBlock*& ColorID3Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.ColorID3"); }
	UTextBlock*& ColorID4Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.ColorID4"); }
	UTextBlock*& ColorID5Field() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalCryopodTooltipWidget.ColorID5"); }
	TArray<UBorder*, TSizedDefaultAllocator<32> >& ColorIndexBlocksField() { return *GetNativePointerField<TArray<UBorder*, TSizedDefaultAllocator<32> >*>(this, "UPrimalCryopodTooltipWidget.ColorIndexBlocks"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& ColorIndexLabelsField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalCryopodTooltipWidget.ColorIndexLabels"); }
	UPrimalItemInventoryToolTipWidget*& EmptyCryopodTooltipField() { return *GetNativePointerField<UPrimalItemInventoryToolTipWidget**>(this, "UPrimalCryopodTooltipWidget.EmptyCryopodTooltip"); }
	UWidget*& RightColumnField() { return *GetNativePointerField<UWidget**>(this, "UPrimalCryopodTooltipWidget.RightColumn"); }
	UWidget*& ParentDataBoxField() { return *GetNativePointerField<UWidget**>(this, "UPrimalCryopodTooltipWidget.ParentDataBox"); }
	UWidget*& DescriptionBoxField() { return *GetNativePointerField<UWidget**>(this, "UPrimalCryopodTooltipWidget.DescriptionBox"); }
	UWidget*& StoredDinoPanelField() { return *GetNativePointerField<UWidget**>(this, "UPrimalCryopodTooltipWidget.StoredDinoPanel"); }
	UWidget*& ColorsBoxField() { return *GetNativePointerField<UWidget**>(this, "UPrimalCryopodTooltipWidget.ColorsBox"); }
	UWidget*& MatingCDBoxField() { return *GetNativePointerField<UWidget**>(this, "UPrimalCryopodTooltipWidget.MatingCDBox"); }
	UVerticalBox*& TraitsBoxField() { return *GetNativePointerField<UVerticalBox**>(this, "UPrimalCryopodTooltipWidget.TraitsBox"); }
	AShooterPlayerController*& OwningPlayerField() { return *GetNativePointerField<AShooterPlayerController**>(this, "UPrimalCryopodTooltipWidget.OwningPlayer"); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UPrimalCryopodTooltipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UPrimalCryopodTooltipWidget.NativeTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalCryopodTooltipWidget.UpdateToolTip(float)", DeltaSeconds); }
	void SynchronizeProperties() { NativeCall<void>(this, "UPrimalCryopodTooltipWidget.SynchronizeProperties()"); }
	void InitToolTipBP(AShooterPlayerController* HUDOwner, const FString& ToolTipString, UPrimalItem* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, UPrimalItem*>(this, "UPrimalCryopodTooltipWidget.InitToolTipBP(AShooterPlayerController*,FString&,UPrimalItem*)", HUDOwner, ToolTipString, DataListEntry); }
};
