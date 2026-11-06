#pragma once
#include "BulkForward.h"
#include "UStatsPanelWidget.h"

struct UStatsPanelWidget_Structure : public UStatsPanelWidget
{
public:
	UStatsPanelWidget_Structure() = delete;
	~UStatsPanelWidget_Structure() = delete;
	UStatsPanelWidget_Structure(const UStatsPanelWidget_Structure&) = delete;
	UStatsPanelWidget_Structure& operator=(const UStatsPanelWidget_Structure&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStatsPanelWidget_Structure"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStatsPanelWidget_Structure"); }

	FName& EquipmentDataListPanelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.EquipmentDataListPanelName"); }
	FName& DisabledEquipmentPanelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.DisabledEquipmentPanelName"); }
	FName& StructureNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.StructureNameLabelName"); }
	FName& OwnerLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.OwnerLabelName"); }
	FName& DescriptionLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.DescriptionLabelName"); }
	FName& HealthStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.HealthStatName"); }
	FName& StorageStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.StorageStatName"); }
	FName& WeightStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.WeightStatName"); }
	UCanvasPanel*& DisabledEquipmentPanelField() { return *GetNativePointerField<UCanvasPanel**>(this, "UStatsPanelWidget_Structure.DisabledEquipmentPanel"); }
	UDataListPanel*& EquipmentDataListPanelField() { return *GetNativePointerField<UDataListPanel**>(this, "UStatsPanelWidget_Structure.EquipmentDataListPanel"); }
	UTextBlock*& StructureNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Structure.StructureNameLabel"); }
	UTextBlock*& OwnerLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Structure.OwnerLabel"); }
	UPrimalRichTextBlock*& DescriptionLabelField() { return *GetNativePointerField<UPrimalRichTextBlock**>(this, "UStatsPanelWidget_Structure.DescriptionLabel"); }
	UTextBlock*& ShipWeightLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Structure.ShipWeightLabel"); }
	UTextBlock*& ShipNameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Structure.ShipNameLabel"); }
	UHorizontalBox*& ShipWeightBoxField() { return *GetNativePointerField<UHorizontalBox**>(this, "UStatsPanelWidget_Structure.ShipWeightBox"); }
	UStructureStatWidget*& HealthStatField() { return *GetNativePointerField<UStructureStatWidget**>(this, "UStatsPanelWidget_Structure.HealthStat"); }
	UStructureStatWidget*& StorageStatField() { return *GetNativePointerField<UStructureStatWidget**>(this, "UStatsPanelWidget_Structure.StorageStat"); }
	UStructureStatWidget*& WeightStatField() { return *GetNativePointerField<UStructureStatWidget**>(this, "UStatsPanelWidget_Structure.WeightStat"); }
	UStructureStatWidget*& FuelStatWidgetField() { return *GetNativePointerField<UStructureStatWidget**>(this, "UStatsPanelWidget_Structure.FuelStatWidget"); }
	UImage*& ContainerDeactivatedImageField() { return *GetNativePointerField<UImage**>(this, "UStatsPanelWidget_Structure.ContainerDeactivatedImage"); }
	void UpdateEquipmentList() { NativeCall<void>(this, "UStatsPanelWidget_Structure.UpdateEquipmentList()"); }
	void OnEquipmentSlotDoubleClicked(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UStatsPanelWidget_Structure.OnEquipmentSlotDoubleClicked(UDataListEntryButton*)", theButton); }
	void SetInventoryComp(UPrimalInventoryComponent* InInventoryComponent) { NativeCall<void, UPrimalInventoryComponent*>(this, "UStatsPanelWidget_Structure.SetInventoryComp(UPrimalInventoryComponent*)", InInventoryComponent); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UStatsPanelWidget_Structure.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	UDataListPanel* GetEquipmentDataList() { return NativeCall<UDataListPanel*>(this, "UStatsPanelWidget_Structure.GetEquipmentDataList()"); }
	void RefreshItemLists() { NativeCall<void>(this, "UStatsPanelWidget_Structure.RefreshItemLists()"); }
	void Init(UUI_Inventory* InInventoryUI) { NativeCall<void, UUI_Inventory*>(this, "UStatsPanelWidget_Structure.Init(UUI_Inventory*)", InInventoryUI); }
	void RefreshStats() { NativeCall<void>(this, "UStatsPanelWidget_Structure.RefreshStats()"); }
};
