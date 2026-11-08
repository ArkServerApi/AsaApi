#pragma once
#include "BulkForward.h"
#include "UTooltipSmartLayoutWidget.h"

struct UPrimalItemInventoryToolTipWidget : public UTooltipSmartLayoutWidget
{
public:
	UPrimalItemInventoryToolTipWidget() = delete;
	~UPrimalItemInventoryToolTipWidget() = delete;
	UPrimalItemInventoryToolTipWidget(const UPrimalItemInventoryToolTipWidget&) = delete;
	UPrimalItemInventoryToolTipWidget& operator=(const UPrimalItemInventoryToolTipWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItemInventoryToolTipWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItemInventoryToolTipWidget"); }

	FName& fnameMainInfo_SwitcherField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Switcher"); }
	FName& fnameMainInfo_Full_IconField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Full_Icon"); }
	FName& fnameMainInfo_Full_DescriptionLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Full_DescriptionLabel"); }
	FName& fnameMainInfo_DescOnly_DescriptionLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_DescOnly_DescriptionLabel"); }
	FSlateColor& MainInfoColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.MainInfoColor"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameGeneral_LabelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.fnameGeneral_LabelNames"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameGeneral_GroupNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.fnameGeneral_GroupNames"); }
	float& General_GroupFreqField() { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.General_GroupFreq"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameStat_LabelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.fnameStat_LabelNames"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameStat_GroupNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.fnameStat_GroupNames"); }
	float& Stat_GroupFreqField() { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.Stat_GroupFreq"); }
	FName& fnameCraftPanelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraftPanel"); }
	FName& fnameCraftTitleLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraftTitleLabel"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameCraft_RequirementLabelsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_RequirementLabels"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameCraft_RequirementIconsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_RequirementIcons"); }
	TArray<FName, TSizedDefaultAllocator<32> >& fnameCraft_GroupNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_GroupNames"); }
	float& Craft_GroupFreqField() { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.Craft_GroupFreq"); }
	FSlateColor& Craft_RequirementsMetField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementsMet"); }
	FSlateColor& Craft_RequirementsUnmetField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementsUnmet"); }
	FSlateColor& DurabilityAboveMaxColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.DurabilityAboveMaxColor"); }
	FSlateColor& NormalTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.NormalTextColor"); }
	FSlateColor& NormalSecondTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.NormalSecondTextColor"); }
	FSlateColor& NormalGeneralTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.NormalGeneralTextColor"); }
	UTexture2D*& EngramBgField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemInventoryToolTipWidget.EngramBg"); }
	UTexture2D*& BlueprintBgField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemInventoryToolTipWidget.BlueprintBg"); }
	UTexture2D*& TekgramBgField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemInventoryToolTipWidget.TekgramBg"); }
	UTexture2D*& ItemQualityOverlayField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItemInventoryToolTipWidget.ItemQualityOverlay"); }
	UTextBlock*& CraftingRequirementsCustomLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemInventoryToolTipWidget.CraftingRequirementsCustomLabel"); }
	FName& TraitGroupNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.TraitGroupName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TraitLabelNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.TraitLabelNames"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TraitIconNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.TraitIconNames"); }
	int& framesField() { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget.frames"); }
	TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>& MyItemField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>*>(this, "UPrimalItemInventoryToolTipWidget.MyItem"); }
	UPrimalRichTextBlock*& theItemDescField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalItemInventoryToolTipWidget.theItemDesc"); }
	UWidgetSwitcher*& MainInfo_SwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Switcher"); }
	UImage*& MainInfo_Full_IconField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Full_Icon"); }
	UImage*& MainInfo_Full_Icon_BGField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Full_Icon_BG"); }
	UImage*& MainInfo_Full_Icon_QualityOverlayField() { return *GetNativePointerField<UImage**>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Full_Icon_QualityOverlay"); }
	UPrimalRichTextBlock*& MainInfo_Full_DescriptionLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Full_DescriptionLabel"); }
	UPrimalRichTextBlock*& MainInfo_DescOnly_DescriptionLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_DescOnly_DescriptionLabel"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& General_TextBlocksField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.General_TextBlocks"); }
	TArray<UWidget*, TSizedDefaultAllocator<32> >& General_GroupsField() { return *GetNativePointerField<TArray<UWidget*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.General_Groups"); }
	UWidget*& NotGrindableGroupField() { return *GetNativePointerField<UWidget**>(this, "UPrimalItemInventoryToolTipWidget.NotGrindableGroup"); }
	UWidget*& ClubARKGroupField() { return *GetNativePointerField<UWidget**>(this, "UPrimalItemInventoryToolTipWidget.ClubARKGroup"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& Stat_TextBlocksField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.Stat_TextBlocks"); }
	TArray<UWidget*, TSizedDefaultAllocator<32> >& Stat_GroupsField() { return *GetNativePointerField<TArray<UWidget*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.Stat_Groups"); }
	UWidget*& Craft_PanelField() { return *GetNativePointerField<UWidget**>(this, "UPrimalItemInventoryToolTipWidget.Craft_Panel"); }
	UTextBlock*& Craft_TitleLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemInventoryToolTipWidget.Craft_TitleLabel"); }
	UTextBlock*& MoreOptionsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UPrimalItemInventoryToolTipWidget.MoreOptionsLabel"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& Craft_RequirementTextBlocksField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementTextBlocks"); }
	TArray<UImage*, TSizedDefaultAllocator<32> >& Craft_RequirementItemIconsField() { return *GetNativePointerField<TArray<UImage*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementItemIcons"); }
	TArray<UWidget*, TSizedDefaultAllocator<32> >& Craft_GroupsField() { return *GetNativePointerField<TArray<UWidget*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.Craft_Groups"); }
	UVerticalBox*& MouseRightClickReminderVerticalBoxField() { return *GetNativePointerField<UVerticalBox**>(this, "UPrimalItemInventoryToolTipWidget.MouseRightClickReminderVerticalBox"); }
	TArray<UTextBlock*, TSizedDefaultAllocator<32> >& Trait_TextBlocksField() { return *GetNativePointerField<TArray<UTextBlock*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.Trait_TextBlocks"); }
	TArray<UImage*, TSizedDefaultAllocator<32> >& Trait_IconsField() { return *GetNativePointerField<TArray<UImage*, TSizedDefaultAllocator<32> >*>(this, "UPrimalItemInventoryToolTipWidget.Trait_Icons"); }
	UWidget*& TraitGroupField() { return *GetNativePointerField<UWidget**>(this, "UPrimalItemInventoryToolTipWidget.TraitGroup"); }
	UPrimalEngramEntry*& MyEngramEntryField() { return *GetNativePointerField<UPrimalEngramEntry**>(this, "UPrimalItemInventoryToolTipWidget.MyEngramEntry"); }
	void UpdateMainInfo(UPrimalItem& item) { NativeCall<void, UPrimalItem&>(this, "UPrimalItemInventoryToolTipWidget.UpdateMainInfo(UPrimalItem&)", item); }
	void UpdateTraitsInfo(UPrimalItem& item) { NativeCall<void, UPrimalItem&>(this, "UPrimalItemInventoryToolTipWidget.UpdateTraitsInfo(UPrimalItem&)", item); }
	void ResetColors() { NativeCall<void>(this, "UPrimalItemInventoryToolTipWidget.ResetColors()"); }
	void SynchronizeProperties() { NativeCall<void>(this, "UPrimalItemInventoryToolTipWidget.SynchronizeProperties()"); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItemInventoryToolTipWidget.UpdateToolTip(float)", DeltaSeconds); }
	void UpdateGeneralInfo(UPrimalItem& item) { NativeCall<void, UPrimalItem&>(this, "UPrimalItemInventoryToolTipWidget.UpdateGeneralInfo(UPrimalItem&)", item); }
	void UpdateStatsInfo(UPrimalItem& item) { NativeCall<void, UPrimalItem&>(this, "UPrimalItemInventoryToolTipWidget.UpdateStatsInfo(UPrimalItem&)", item); }
	void InitToolTipBP(AShooterPlayerController* HUDOwner, const FString& ToolTipString, UPrimalItem* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, UPrimalItem*>(this, "UPrimalItemInventoryToolTipWidget.InitToolTipBP(AShooterPlayerController*,FString&,UPrimalItem*)", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateCraftInfo(UPrimalItem& item) { NativeCall<void, UPrimalItem&>(this, "UPrimalItemInventoryToolTipWidget.UpdateCraftInfo(UPrimalItem&)", item); }
	void UpdateTitleBar(UPrimalItem& item) { NativeCall<void, UPrimalItem&>(this, "UPrimalItemInventoryToolTipWidget.UpdateTitleBar(UPrimalItem&)", item); }
	void InitToolTip(AShooterPlayerController* HUDOwner, const FString& ToolTipString, IDataListEntryInterface* DataListEntry) { NativeCall<void, AShooterPlayerController*, const FString&, IDataListEntryInterface*>(this, "UPrimalItemInventoryToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", HUDOwner, ToolTipString, DataListEntry); }
	bool GetItemSpoilTimeFormatted(FString& Out, UPrimalItem& item) { return NativeCall<bool, FString&, UPrimalItem&>(this, "UPrimalItemInventoryToolTipWidget.GetItemSpoilTimeFormatted(FString&,UPrimalItem&)", Out, item); }
};
