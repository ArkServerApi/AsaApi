#pragma once
#include "BulkForward.h"
#include "UStatsPanelWidget.h"

struct UStatsPanelWidget_Character : public UStatsPanelWidget
{
public:
	UStatsPanelWidget_Character() = delete;
	~UStatsPanelWidget_Character() = delete;
	UStatsPanelWidget_Character(const UStatsPanelWidget_Character&) = delete;
	UStatsPanelWidget_Character& operator=(const UStatsPanelWidget_Character&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStatsPanelWidget_Character"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStatsPanelWidget_Character"); }

	FName& PlayerStatusBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.PlayerStatusBoxName"); }
	FName& ExperienceBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ExperienceBoxName"); }
	FName& UpgradesBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.UpgradesBoxName"); }
	FName& EquipmentDataListPanelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.EquipmentDataListPanelName"); }
	FName& DisabledEquipmentPanelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.DisabledEquipmentPanelName"); }
	FName& GenderSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.GenderSwitcherName"); }
	FName& NameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.NameLabelName"); }
	FName& LevelLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.LevelLabelName"); }
	FName& TribeLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.TribeLabelName"); }
	FName& BiomeRegionLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.BiomeRegionLabelName"); }
	FName& SpawnRegionLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.SpawnRegionLabelName"); }
	FName& TameLimitLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.TameLimitLabelName"); }
	FName& ArmorLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ArmorLabelName"); }
	FName& HypothermalInsulationLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HypothermalInsulationLabelName"); }
	FName& HyperthermalInsulationLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HyperthermalInsulationLabelName"); }
	FName& HypothermalInsulationNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HypothermalInsulationNameLabelName"); }
	FName& HyperthermalInsulationNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HyperthermalInsulationNameLabelName"); }
	FName& ExperienceBarNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ExperienceBarName"); }
	FName& ExperienceLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ExperienceLabelName"); }
	FName& ImprintingStatWidgetNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ImprintingStatWidgetName"); }
	FName& ShowAncestorsButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ShowAncestorsButtonName"); }
	FName& ShowTraitsButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ShowTraitsButtonName"); }
	FName& NumUpgradePointsAvailableLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.NumUpgradePointsAvailableLabelName"); }
	FName& HyperthermalInsulationBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HyperthermalInsulationBoxName"); }
	FName& HypothermalInsulationBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HypothermalInsulationBoxName"); }
	FName& TameLimitBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.TameLimitBoxName"); }
	FName& StatDayValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.StatDayValueTextBlockName"); }
	FName& StatTimeValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.StatTimeValueTextBlockName"); }
	FName& StatTmpValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.StatTmpValueTextBlockName"); }
	FName& StatWindValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.StatWindValueTextBlockName"); }
	UCanvasPanel*& DisabledEquipmentPanelField() { return *GetNativePointerField<UCanvasPanel**>(this, "UStatsPanelWidget_Character.DisabledEquipmentPanel"); }
	UDataListPanel*& EquipmentDataListPanelField() { return *GetNativePointerField<UDataListPanel**>(this, "UStatsPanelWidget_Character.EquipmentDataListPanel"); }
	UWidgetSwitcher*& GenderSwitcherField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UStatsPanelWidget_Character.GenderSwitcher"); }
	UTextBlock*& NameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.NameLabel"); }
	UTextBlock*& LevelTitleLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.LevelTitleLabel"); }
	UTextBlock*& LevelLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.LevelLabel"); }
	UTextBlock*& TribeLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.TribeLabel"); }
	UTextBlock*& BiomeRegionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.BiomeRegionLabel"); }
	UTextBlock*& SpawnRegionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.SpawnRegionLabel"); }
	UTextBlock*& TameLimitLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.TameLimitLabel"); }
	UTextBlock*& ArmorLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.ArmorLabel"); }
	UTextBlock*& ArmorTitleLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.ArmorTitleLabel"); }
	UTextBlock*& HypothermalInsulationNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.HypothermalInsulationNameLabel"); }
	UTextBlock*& HyperthermalInsulationNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.HyperthermalInsulationNameLabel"); }
	UTextBlock*& HypothermalInsulationValueLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.HypothermalInsulationValueLabel"); }
	UTextBlock*& HyperthermalInsulationValueLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.HyperthermalInsulationValueLabel"); }
	UTextBlock*& NumUpgradePointsAvailableLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.NumUpgradePointsAvailableLabel"); }
	UTextBlock*& PointsAvailableLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.PointsAvailableLabel"); }
	UTextBlock*& StatDayValueTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.StatDayValueTextBlock"); }
	UTextBlock*& StatTimeValueTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.StatTimeValueTextBlock"); }
	UTextBlock*& StatTmpValueTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.StatTmpValueTextBlock"); }
	UTextBlock*& StatWindValueTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.StatWindValueTextBlock"); }
	UTextBlock*& StatWindTitleTextBlockField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.StatWindTitleTextBlock"); }
	UCharacterViewPanelWidget*& CharacterViewPanelWidgetField() { return *GetNativePointerField<UCharacterViewPanelWidget**>(this, "UStatsPanelWidget_Character.CharacterViewPanelWidget"); }
	UBorder*& BorderCharacterPreviewField() { return *GetNativePointerField<UBorder**>(this, "UStatsPanelWidget_Character.BorderCharacterPreview"); }
	UProgressBar*& ExperienceBarField() { return *GetNativePointerField<UProgressBar**>(this, "UStatsPanelWidget_Character.ExperienceBar"); }
	UTextBlock*& ExperienceLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Character.ExperienceLabel"); }
	UWidget*& PlayerStatusBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.PlayerStatusBox"); }
	UWidget*& ExperienceBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.ExperienceBox"); }
	UWidget*& UpgradesBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.UpgradesBox"); }
	UWidget*& HyperthermalInsulationBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.HyperthermalInsulationBox"); }
	UWidget*& HypothermalInsulationBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.HypothermalInsulationBox"); }
	UWidget*& TameLimitBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.TameLimitBox"); }
	UWidget*& WindStatBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.WindStatBox"); }
	UButton*& ShowAncestorsButtonField() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget_Character.ShowAncestorsButton"); }
	UButton*& ShowTraitsButtonField() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget_Character.ShowTraitsButton"); }
	UWidget*& StatInfoBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.StatInfoBox"); }
	UImage*& MutagenIconField() { return *GetNativePointerField<UImage**>(this, "UStatsPanelWidget_Character.MutagenIcon"); }
	UWidget*& MutagenBoxField() { return *GetNativePointerField<UWidget**>(this, "UStatsPanelWidget_Character.MutagenBox"); }
	UWidgetSwitcher*& WidgetSwitcherBuffField() { return *GetNativePointerField<UWidgetSwitcher**>(this, "UStatsPanelWidget_Character.WidgetSwitcherBuff"); }
	UScrollBox*& ScrollBoxBuffsField() { return *GetNativePointerField<UScrollBox**>(this, "UStatsPanelWidget_Character.ScrollBoxBuffs"); }
	UStructureStatWidget*& ImprintingStatField() { return *GetNativePointerField<UStructureStatWidget**>(this, "UStatsPanelWidget_Character.ImprintingStat"); }
	UButton*& ToggleCharacterPreviewField() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget_Character.ToggleCharacterPreview"); }
	bool& bIsOnBuffTabField() { return *GetNativePointerField<bool*>(this, "UStatsPanelWidget_Character.bIsOnBuffTab"); }
	bool& bForceShowPetEquipmentSlotField() { return *GetNativePointerField<bool*>(this, "UStatsPanelWidget_Character.bForceShowPetEquipmentSlot"); }
	UPrimalCharacterStatusComponent*& StatusCharacterField() { return *GetNativePointerField<UPrimalCharacterStatusComponent**>(this, "UStatsPanelWidget_Character.StatusCharacter"); }
	TArray<UPanelBuffTypeUI*, TSizedDefaultAllocator<32> >& BuffPanelsField() { return *GetNativePointerField<TArray<UPanelBuffTypeUI*, TSizedDefaultAllocator<32> >*>(this, "UStatsPanelWidget_Character.BuffPanels"); }
	bool& bIsOnCustomCosmeticTabField() { return *GetNativePointerField<bool*>(this, "UStatsPanelWidget_Character.bIsOnCustomCosmeticTab"); }
	void SwitchTabStats(int TabIndex) { NativeCall<void, int>(this, "UStatsPanelWidget_Character.SwitchTabStats(int)", TabIndex); }
	void RemoveFromViewport() { NativeCall<void>(this, "UStatsPanelWidget_Character.RemoveFromViewport()"); }
	void SetInventoryComp(UPrimalInventoryComponent* InInventoryComponent) { NativeCall<void, UPrimalInventoryComponent*>(this, "UStatsPanelWidget_Character.SetInventoryComp(UPrimalInventoryComponent*)", InInventoryComponent); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UStatsPanelWidget_Character.ClickedButton(UWidget*)", clickedButton); }
	void ShowCustomCosmeticTab(bool Show) { NativeCall<void, bool>(this, "UStatsPanelWidget_Character.ShowCustomCosmeticTab(bool)", Show); }
	void OnSwitchTabStatsBP(int TabIndex) { NativeCall<void, int>(this, "UStatsPanelWidget_Character.OnSwitchTabStatsBP(int)", TabIndex); }
	void RefreshStats() { NativeCall<void>(this, "UStatsPanelWidget_Character.RefreshStats()"); }
	UCharacterViewPanelWidget* GetCharacterPanelPreview() { return NativeCall<UCharacterViewPanelWidget*>(this, "UStatsPanelWidget_Character.GetCharacterPanelPreview()"); }
	void RefreshItemLists() { NativeCall<void>(this, "UStatsPanelWidget_Character.RefreshItemLists()"); }
	UDataListPanel* GetEquipmentDataList() { return NativeCall<UDataListPanel*>(this, "UStatsPanelWidget_Character.GetEquipmentDataList()"); }
	void SetupSpecialWidgetAdjacents(UWidget* InWidget) { NativeCall<void, UWidget*>(this, "UStatsPanelWidget_Character.SetupSpecialWidgetAdjacents(UWidget*)", InWidget); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UStatsPanelWidget_Character.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void OnSwitchTabStatsBuffBP(bool bShowingStats) { NativeCall<void, bool>(this, "UStatsPanelWidget_Character.OnSwitchTabStatsBuffBP(bool)", bShowingStats); }
	void OnEquipmentSlotDoubleClicked(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UStatsPanelWidget_Character.OnEquipmentSlotDoubleClicked(UDataListEntryButton*)", theButton); }
	void RefreshBuffsTab() { NativeCall<void>(this, "UStatsPanelWidget_Character.RefreshBuffsTab()"); }
	void UpdateLinkedCharacterStatus() { NativeCall<void>(this, "UStatsPanelWidget_Character.UpdateLinkedCharacterStatus()"); }
	void Init(UUI_Inventory* InInventoryUI) { NativeCall<void, UUI_Inventory*>(this, "UStatsPanelWidget_Character.Init(UUI_Inventory*)", InInventoryUI); }
	void SwitchTabStatsBuff(bool bShowStats) { NativeCall<void, bool>(this, "UStatsPanelWidget_Character.SwitchTabStatsBuff(bool)", bShowStats); }
};
