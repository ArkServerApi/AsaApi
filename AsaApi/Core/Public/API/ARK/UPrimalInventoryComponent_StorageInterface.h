#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalInventoryComponent.h"

struct UPrimalInventoryComponent_StorageInterface : UPrimalInventoryComponent
{
public:
	UPrimalInventoryComponent_StorageInterface() = delete;
	~UPrimalInventoryComponent_StorageInterface() = delete;
	UPrimalInventoryComponent_StorageInterface(const UPrimalInventoryComponent_StorageInterface&) = delete;
	UPrimalInventoryComponent_StorageInterface& operator=(const UPrimalInventoryComponent_StorageInterface&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalInventoryComponent_StorageInterface"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalInventoryComponent_StorageInterface"); }

	int& MaxThresholdSizeField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.MaxThresholdSize"); }
	double& LastUpdatedWirelessItemsTimeField() { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_StorageInterface.LastUpdatedWirelessItemsTime"); }
	int& CurrentRangeSettingIndexField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.CurrentRangeSettingIndex"); }
	int& LinkedContainerCountField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.LinkedContainerCount"); }
	bool& bEnableDebugField() { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent_StorageInterface.bEnableDebug"); }
	int& ItemDisplayDecimalsField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.ItemDisplayDecimals"); }
	int& MaxLinkedContainersField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.MaxLinkedContainers"); }
	float& LinkedContainerItemQuantityUpdateTimerLengthField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.LinkedContainerItemQuantityUpdateTimerLength"); }
	float& CachedItemUpdateDeltaProcessingTimerLengthField() { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_StorageInterface.CachedItemUpdateDeltaProcessingTimerLength"); }
	int& LastWithdrawItemRequestedQuantityField() { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_StorageInterface.LastWithdrawItemRequestedQuantity"); }

	void TryLinkContainer(APrimalStructureItemContainer* Container, bool bUpdateLinkedContainerCount) { NativeCall<void, APrimalStructureItemContainer*, bool>(this, "UPrimalInventoryComponent_StorageInterface.TryLinkContainer(APrimalStructureItemContainer*,bool)", Container, bUpdateLinkedContainerCount); }
	void RequestRemoveThreshold(AShooterPlayerController* ForPC, UPrimalItem* Item) { NativeCall<void, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalInventoryComponent_StorageInterface.RequestRemoveThreshold(AShooterPlayerController*,UPrimalItem*)", ForPC, Item); }
	void BackFolderFilter() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.BackFolderFilter()"); }
	void OnLinkedInventoryItemAdded(UPrimalInventoryComponent* Inventory, UPrimalItem* Item, int AmountAdded, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, int, bool>(this, "UPrimalInventoryComponent_StorageInterface.OnLinkedInventoryItemAdded(UPrimalInventoryComponent*,UPrimalItem*,int,bool)", Inventory, Item, AmountAdded, bEquippedItem); }
	void UpdateItemsForContainer(APrimalStructureItemContainer* Container, bool bAddingContainer) { NativeCall<void, APrimalStructureItemContainer*, bool>(this, "UPrimalInventoryComponent_StorageInterface.UpdateItemsForContainer(APrimalStructureItemContainer*,bool)", Container, bAddingContainer); }
	bool GetTransferAllEnabled() { return NativeCall<bool>(this, "UPrimalInventoryComponent_StorageInterface.GetTransferAllEnabled()"); }
	void BeginPlay() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.BeginPlay()"); }
	bool DeactivateBuffForPlayer(AShooterCharacter* Player) { return NativeCall<bool, AShooterCharacter*>(this, "UPrimalInventoryComponent_StorageInterface.DeactivateBuffForPlayer(AShooterCharacter*)", Player); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "UPrimalInventoryComponent_StorageInterface.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void OnRep_LinkedContainerCount() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.OnRep_LinkedContainerCount()"); }
	bool IsValidItem(UPrimalItem* Item, bool bAllowBlueprints) { return NativeCall<bool, UPrimalItem*, bool>(this, "UPrimalInventoryComponent_StorageInterface.IsValidItem(UPrimalItem*,bool)", Item, bAllowBlueprints); }
	bool OverrideHandleInventoryUIConfirmationDialogAccepted(AShooterPlayerController* ForPC, int ConfirmationDialogType) { return NativeCall<bool, AShooterPlayerController*, int>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIConfirmationDialogAccepted(AShooterPlayerController*,int)", ForPC, ConfirmationDialogType); }
	bool OverrideHandleInventoryUIItemUse(AShooterPlayerController* ForPC, UPrimalItem* Item) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemUse(AShooterPlayerController*,UPrimalItem*)", ForPC, Item); }
	bool OverrideHandleInventoryUIItemDragFromRemoteInventory(AShooterPlayerController* ForPC, UPrimalItem* Item, bool bShiftHeld, bool bCtrlHeld) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, bool, bool>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemDragFromRemoteInventory(AShooterPlayerController*,UPrimalItem*,bool,bool)", ForPC, Item, bShiftHeld, bCtrlHeld); }
	void UnlinkContainer(APrimalStructureItemContainer* Container, bool bUnbindEvents, bool bUpdateItems, bool bUpdateLinkedContainerCount) { NativeCall<void, APrimalStructureItemContainer*, bool, bool, bool>(this, "UPrimalInventoryComponent_StorageInterface.UnlinkContainer(APrimalStructureItemContainer*,bool,bool,bool)", Container, bUnbindEvents, bUpdateItems, bUpdateLinkedContainerCount); }
	bool CanPlayerAccess(AShooterPlayerController* Player) { return NativeCall<bool, AShooterPlayerController*>(this, "UPrimalInventoryComponent_StorageInterface.CanPlayerAccess(AShooterPlayerController*)", Player); }
	void OnLinkedInventoryItemRemoved(UPrimalInventoryComponent* Inventory, UPrimalItem* Item, int AmountRemoved) { NativeCall<void, UPrimalInventoryComponent*, UPrimalItem*, int>(this, "UPrimalInventoryComponent_StorageInterface.OnLinkedInventoryItemRemoved(UPrimalInventoryComponent*,UPrimalItem*,int)", Inventory, Item, AmountRemoved); }
	void RequestSetThreshold(AShooterPlayerController* ForPC, UPrimalItem* Item, int Amount) { NativeCall<void, AShooterPlayerController*, UPrimalItem*, int>(this, "UPrimalInventoryComponent_StorageInterface.RequestSetThreshold(AShooterPlayerController*,UPrimalItem*,int)", ForPC, Item, Amount); }
	void Unstasised() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.Unstasised()"); }
	void SetWirelessItemUpdateTimer(float TimerLengthMultiplier) { NativeCall<void, float>(this, "UPrimalInventoryComponent_StorageInterface.SetWirelessItemUpdateTimer(float)", TimerLengthMultiplier); }
	bool ForceShowAlertSymbolInInventory() { return NativeCall<bool>(this, "UPrimalInventoryComponent_StorageInterface.ForceShowAlertSymbolInInventory()"); }
	bool TryAddBuffToPlayer(AShooterCharacter* Player) { return NativeCall<bool, AShooterCharacter*>(this, "UPrimalInventoryComponent_StorageInterface.TryAddBuffToPlayer(AShooterCharacter*)", Player); }
	void TimerUpdateWirelessItems() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.TimerUpdateWirelessItems()"); }
	bool OverrideHandleInventoryUIItemCraftAll(AShooterPlayerController* ForPC, UPrimalItem* Item) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemCraftAll(AShooterPlayerController*,UPrimalItem*)", ForPC, Item); }
	void GenerateItemsFromItemsToSerialize() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.GenerateItemsFromItemsToSerialize()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UPrimalInventoryComponent_StorageInterface.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void ItemContainerUpdatedNearby(APrimalStructureItemContainer* Container) { NativeCall<void, APrimalStructureItemContainer*>(this, "UPrimalInventoryComponent_StorageInterface.ItemContainerUpdatedNearby(APrimalStructureItemContainer*)", Container); }
	float GetWirelessItemRange() { return NativeCall<float>(this, "UPrimalInventoryComponent_StorageInterface.GetWirelessItemRange()"); }
	void ClientFinishReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent_StorageInterface.ClientFinishReceivingItems(bool)", bEquippedItems); }
	void TrySwitchViewingItemClassMode(UPrimalItem* ForItem) { NativeCall<void, UPrimalItem*>(this, "UPrimalInventoryComponent_StorageInterface.TrySwitchViewingItemClassMode(UPrimalItem*)", ForItem); }
	void RequestWithdrawItemsOfClass(AShooterPlayerController* ForPC, UPrimalItem* Item, int Amount, bool bPreventWithdrawingFuelItems) { NativeCall<void, AShooterPlayerController*, UPrimalItem*, int, bool>(this, "UPrimalInventoryComponent_StorageInterface.RequestWithdrawItemsOfClass(AShooterPlayerController*,UPrimalItem*,int,bool)", ForPC, Item, Amount, bPreventWithdrawingFuelItems); }
	bool CanLinkToContainer(APrimalStructureItemContainer* Container) { return NativeCall<bool, APrimalStructureItemContainer*>(this, "UPrimalInventoryComponent_StorageInterface.CanLinkToContainer(APrimalStructureItemContainer*)", Container); }
	void OnLinkedContainerDestroyed(AActor* Container) { NativeCall<void, AActor*>(this, "UPrimalInventoryComponent_StorageInterface.OnLinkedContainerDestroyed(AActor*)", Container); }
	void UpdateLinkedContainerCount() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.UpdateLinkedContainerCount()"); }
	void OnRep_CurrentRangeSettingIndex() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.OnRep_CurrentRangeSettingIndex()"); }
	void RequestLocateItem(AShooterPlayerController* ForPC, UPrimalItem* Item) { NativeCall<void, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalInventoryComponent_StorageInterface.RequestLocateItem(AShooterPlayerController*,UPrimalItem*)", ForPC, Item); }
	bool OverrideHandleInventoryUIItemTransfer(AShooterPlayerController* ForPC, UPrimalItem* Item) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemTransfer(AShooterPlayerController*,UPrimalItem*)", ForPC, Item); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "UPrimalInventoryComponent_StorageInterface.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void UpdateWirelessItems() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.UpdateWirelessItems()"); }
	bool OverrideHandleInventoryUIItemDoubleClicked(AShooterPlayerController* ForPC, UPrimalItem* Item, int TransferRequestedQuantity) { return NativeCall<bool, AShooterPlayerController*, UPrimalItem*, int>(this, "UPrimalInventoryComponent_StorageInterface.OverrideHandleInventoryUIItemDoubleClicked(AShooterPlayerController*,UPrimalItem*,int)", ForPC, Item, TransferRequestedQuantity); }
	void ClientStartReceivingItems(bool bEquippedItems) { NativeCall<void, bool>(this, "UPrimalInventoryComponent_StorageInterface.ClientStartReceivingItems(bool)", bEquippedItems); }
	void ProcessCachedWirelessItemUpdateDeltas() { NativeCall<void>(this, "UPrimalInventoryComponent_StorageInterface.ProcessCachedWirelessItemUpdateDeltas()"); }

	FTimerHandle& CachedItemUpdateHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalInventoryComponent_StorageInterface.CachedItemUpdateHandle"); }
	TArray<float, TSizedDefaultAllocator<32> >& WirelessItemRangesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent_StorageInterface.WirelessItemRanges"); }
	TArray<FString, TSizedDefaultAllocator<32> >& WirelessItemRangeStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UPrimalInventoryComponent_StorageInterface.WirelessItemRangeStrings"); }
	FTimerHandle& WirelessItemUpdateTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalInventoryComponent_StorageInterface.WirelessItemUpdateTimerHandle"); }
	FItemsUpdated& OnItemsUpdatedField() { return *GetNativePointerField<FItemsUpdated*>(this, "UPrimalInventoryComponent_StorageInterface.OnItemsUpdated"); }
	FViewingItemClassChanged& OnViewingItemClassChangedField() { return *GetNativePointerField<FViewingItemClassChanged*>(this, "UPrimalInventoryComponent_StorageInterface.OnViewingItemClassChanged"); }
	FRequestedWithdrawFromDedicatedStorage& OnWithdrawFromDedicatedStorageRequestedField() { return *GetNativePointerField<FRequestedWithdrawFromDedicatedStorage*>(this, "UPrimalInventoryComponent_StorageInterface.OnWithdrawFromDedicatedStorageRequested"); }
	FRequestedWithdrawAllItemsOfClass& OnWithdrawAllItemsOfClassRequestedField() { return *GetNativePointerField<FRequestedWithdrawAllItemsOfClass*>(this, "UPrimalInventoryComponent_StorageInterface.OnWithdrawAllItemsOfClassRequested"); }
	FRequestedSetThreshold& OnSetThresholdRequestedField() { return *GetNativePointerField<FRequestedSetThreshold*>(this, "UPrimalInventoryComponent_StorageInterface.OnSetThresholdRequested"); }
	FRequestedWithdrawItemsOfClass& OnWithdrawItemsOfClassRequestedField() { return *GetNativePointerField<FRequestedWithdrawItemsOfClass*>(this, "UPrimalInventoryComponent_StorageInterface.OnWithdrawItemsOfClassRequested"); }
	FRequestedRemoveThreshold& OnRemoveThresholdRequestedField() { return *GetNativePointerField<FRequestedRemoveThreshold*>(this, "UPrimalInventoryComponent_StorageInterface.OnRemoveThresholdRequested"); }
	FClientInventoryChanged& OnClientInventoryChangedField() { return *GetNativePointerField<FClientInventoryChanged*>(this, "UPrimalInventoryComponent_StorageInterface.OnClientInventoryChanged"); }
	FWirelessItemRangeUpdated& OnWirelessItemRangeUpdatedField() { return *GetNativePointerField<FWirelessItemRangeUpdated*>(this, "UPrimalInventoryComponent_StorageInterface.OnWirelessItemRangeUpdated"); }
	FRequestedLocateItem& OnLocateItemRequestedField() { return *GetNativePointerField<FRequestedLocateItem*>(this, "UPrimalInventoryComponent_StorageInterface.OnLocateItemRequested"); }
	FClientFinishedReceivingItemData& OnClientFinishedReceivingItemDataField() { return *GetNativePointerField<FClientFinishedReceivingItemData*>(this, "UPrimalInventoryComponent_StorageInterface.OnClientFinishedReceivingItemData"); }
	FName& StorageInterfaceCustomItemDataNameField() { return *GetNativePointerField<FName*>(this, "UPrimalInventoryComponent_StorageInterface.StorageInterfaceCustomItemDataName"); }
	void TransferAllFromRemoteInventory(AShooterPlayerController* ForPC, const FString& CurrentCustomFolderFilter, const FString& CurrentNameFilter, const FString& CurrentDestinationFolder, bool bNoFolderView) { NativeCall<void, AShooterPlayerController*, const FString&, const FString&, const FString&, bool>(this, "UPrimalInventoryComponent_StorageInterface.TransferAllFromRemoteInventory(AShooterPlayerController*,FString&,FString&,FString&,bool)", ForPC, CurrentCustomFolderFilter, CurrentNameFilter, CurrentDestinationFolder, bNoFolderView); }
	UPrimalItem* FindItem(const FItemNetID& ItemID, bool bEquippedItems, bool bAllItems, int* itemIdx) { return NativeCall<UPrimalItem*, const FItemNetID&, bool, bool, int*>(this, "UPrimalInventoryComponent_StorageInterface.FindItem(FItemNetID&,bool,bool,int*)", ItemID, bEquippedItems, bAllItems, itemIdx); }
	bool IsInWirelessItemRange(UE::Math::TVector<double>* Location) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >>(this, "UPrimalInventoryComponent_StorageInterface.IsInWirelessItemRange(UE::Math::TVector<double>)", *Location); }
	bool RemoveItem(const FItemNetID& itemID, bool bDoDrop, bool bSecondryAction, bool bForceRemoval, bool showHUDMessage) { return NativeCall<bool, const FItemNetID&, bool, bool, bool, bool>(this, "UPrimalInventoryComponent_StorageInterface.RemoveItem(FItemNetID&,bool,bool,bool,bool)", itemID, bDoDrop, bSecondryAction, bForceRemoval, showHUDMessage); }
	void SwapInventoryItems(FItemNetID& itemID1, FItemNetID& itemID2) { NativeCall<void, FItemNetID&, FItemNetID&>(this, "UPrimalInventoryComponent_StorageInterface.SwapInventoryItems(FItemNetID&,FItemNetID&)", itemID1, itemID2); }
};
