#pragma once
#include "BulkForward.h"
#include "UToolTipWidget.h"

struct UPrimalItemToolTipWidget : public UToolTipWidget
{
public:
	UPrimalItemToolTipWidget() = delete;
	~UPrimalItemToolTipWidget() = delete;
	UPrimalItemToolTipWidget(const UPrimalItemToolTipWidget&) = delete;
	UPrimalItemToolTipWidget& operator=(const UPrimalItemToolTipWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItemToolTipWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItemToolTipWidget"); }

	FString& ItemNameLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemNameLabelName"); }
	FString& ItemQuantityLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemQuantityLabelName"); }
	FString& ItemDescriptionLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemDescriptionLabelName"); }
	FString& ItemTypeLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemTypeLabelName"); }
	FString& ItemSubTypeLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemSubTypeLabelName"); }
	FString& ItemIconImageNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemIconImageName"); }
	FString& ItemWeightLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemWeightLabelName"); }
	FString& ItemStatsLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemStatsLabelName"); }
	FString& ItemDurabilityLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemDurabilityLabelName"); }
	FString& ItemQualityImageNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemQualityImageName"); }
	FString& ItemSubtypePanelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemSubtypePanelName"); }
	FName& ItemStatsPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemStatsPanelName"); }
	FName& ItemCraftingPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingPanelName"); }
	FName& ItemCraftingRequirementsLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingRequirementsLabelName"); }
	FName& ItemCraftingTitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingTitleLabelName"); }
	FName& ItemCraftingQueueLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingQueueLabelName"); }
	FName& ItemCraftingProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingProgressBarName"); }
	FName& ItemCraftRepairInvReqLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftRepairInvReqLabelName"); }
	FName& SpoilIntoItemPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemPanelName"); }
	FName& SpoilIntoItemNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemNameLabelName"); }
	FName& SpoilIntoItemTimeLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemTimeLabelName"); }
	FName& SpoilIntoItemIconNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemIconName"); }
	UTexture2D*& EngramBgField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemToolTipWidget.EngramBg"); }
	UTexture2D*& BlueprintBgField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemToolTipWidget.BlueprintBg"); }
	UTexture2D*& TekgramBgField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemToolTipWidget.TekgramBg"); }
	UTexture2D*& ItemQualityOverlayField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemToolTipWidget.ItemQualityOverlay"); }
	UTextBlock*& ItemNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemNameLabel"); }
	UTextBlock*& DescomposesTextField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.DescomposesText"); }
	UTextBlock*& ItemQuantityLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemQuantityLabel"); }
	UTextBlock*& DroppedByTextField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.DroppedByText"); }
	UTextBlock*& ItemTypeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemTypeLabel"); }
	UTextBlock*& ItemSubtypeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemSubtypeLabel"); }
	UTextBlock*& ItemWeightLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemWeightLabel"); }
	UTextBlock*& ItemStatsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemStatsLabel"); }
	UTextBlock*& ItemDurabilityLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemDurabilityLabel"); }
	UTextBlock*& ItemCraftingTitleLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemCraftingTitleLabel"); }
	UTextBlock*& ItemCraftingQueueLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemCraftingQueueLabel"); }
	UTextBlock*& ItemCraftRepairInvReqLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemCraftRepairInvReqLabel"); }
	UTextBlock*& SpoilIntoItemNamelLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.SpoilIntoItemNamelLabel"); }
	UTextBlock*& SpoilIntoItemTimeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.SpoilIntoItemTimeLabel"); }
	UTextBlock*& ItemRatingLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemRatingLabel"); }
	UTextBlock*& DurabilityBarLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.DurabilityBarLabel"); }
	UTextBlock*& EggHatchStatusLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.EggHatchStatusLabel"); }
	UTextBlock*& ItemRatingBarLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemRatingBarLabel"); }
	UTextBlock*& ItemRatingBarLabelPercentField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.ItemRatingBarLabelPercent"); }
	UTextBlock*& DurabilityBarLabelPercentField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemToolTipWidget.DurabilityBarLabelPercent"); }
	UPrimalRichTextBlock*& ItemCraftingRequirementsLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalItemToolTipWidget.ItemCraftingRequirementsLabel"); }
	UPrimalRichTextBlock*& ItemDescriptionLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalItemToolTipWidget.ItemDescriptionLabel"); }
	UPanelWidget*& ItemCraftingPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.ItemCraftingPanel"); }
	UPanelWidget*& SpoilIntoItemPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.SpoilIntoItemPanel"); }
	UPanelWidget*& ItemMainPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.ItemMainPanel"); }
	UPanelWidget*& DurabilityBarPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.DurabilityBarPanel"); }
	UPanelWidget*& RatingBarPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.RatingBarPanel"); }
	UPanelWidget*& DurabilityLabelContainerField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.DurabilityLabelContainer"); }
	UPanelWidget*& SpoilIconBorderField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.SpoilIconBorder"); }
	UPanelWidget*& CraftingBarPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.CraftingBarPanel"); }
	UPanelWidget*& CraftingInventoryRequirementsPanelField() { return *GetNativePointerField<UPanelWidget**>(this, "UPrimalItemToolTipWidget.CraftingInventoryRequirementsPanel"); }
	UImage*& ItemIconImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemToolTipWidget.ItemIconImage"); }
	UImage*& ItemQualityImageField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemToolTipWidget.ItemQualityImage"); }
	UImage*& SpoilIntoItemIconField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemToolTipWidget.SpoilIntoItemIcon"); }
	UImage*& ItemIconQualityOverlayField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemToolTipWidget.ItemIconQualityOverlay"); }
	UImage*& ItemIconBackgroundField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemToolTipWidget.ItemIconBackground"); }
	UImage*& TheItemIconCursedBGField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemToolTipWidget.TheItemIconCursedBG"); }
	TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>& MyItemField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>*>(this, "UPrimalItemToolTipWidget.MyItem"); }
	UMultiUseActionWidget*& MultiUseActionWidget_UIField() { return *GetNativePointerField<UMultiUseActionWidget**>(this, "UPrimalItemToolTipWidget.MultiUseActionWidget_UI"); }
	UProgressBar*& ItemCraftingProgressBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalItemToolTipWidget.ItemCraftingProgressBar"); }
	UProgressBar*& DurabilityBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalItemToolTipWidget.DurabilityBar"); }
	UProgressBar*& ItemRatingBarField() { return *GetNativePointerField<UProgressBar**>(this, "UPrimalItemToolTipWidget.ItemRatingBar"); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UPrimalItemToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItemToolTipWidget.UpdateToolTip(float)", DeltaSeconds); }
};
