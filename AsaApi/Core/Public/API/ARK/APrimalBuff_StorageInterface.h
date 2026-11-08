#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalBuff.h"

struct APrimalBuff_StorageInterface : APrimalBuff
{
public:
	APrimalBuff_StorageInterface() = delete;
	~APrimalBuff_StorageInterface() = delete;
	APrimalBuff_StorageInterface(const APrimalBuff_StorageInterface&) = delete;
	APrimalBuff_StorageInterface& operator=(const APrimalBuff_StorageInterface&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_StorageInterface"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_StorageInterface"); }

	bool& bLastLocatedItemClassWasDediOnlyField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_StorageInterface.bLastLocatedItemClassWasDediOnly"); }
	double& LastLocateItemRequestedTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_StorageInterface.LastLocateItemRequestedTime"); }

	void ClientRequestReplicateItemData_Implementation() { NativeCall<void>(this, "APrimalBuff_StorageInterface.ClientRequestReplicateItemData_Implementation()"); }
	void SetPOIsHidden(bool bNewHidden) { NativeCall<void, bool>(this, "APrimalBuff_StorageInterface.SetPOIsHidden(bool)", bNewHidden); }
	AShooterPlayerController* GetShooterController() { return NativeCall<AShooterPlayerController*>(this, "APrimalBuff_StorageInterface.GetShooterController()"); }
	void LocateItemRequested(UPrimalItem* Item) { NativeCall<void, UPrimalItem*>(this, "APrimalBuff_StorageInterface.LocateItemRequested(UPrimalItem*)", Item); }
	void OnInventoryChanged() { NativeCall<void>(this, "APrimalBuff_StorageInterface.OnInventoryChanged()"); }
	void OnRep_LinkedContainer() { NativeCall<void>(this, "APrimalBuff_StorageInterface.OnRep_LinkedContainer()"); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalBuff_StorageInterface.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void SetLinkedContainer(APrimalStructureItemContainer* Container) { NativeCall<void, APrimalStructureItemContainer*>(this, "APrimalBuff_StorageInterface.SetLinkedContainer(APrimalStructureItemContainer*)", Container); }
	void LinkedContainerViewingItemInstancesClassUpdated() { NativeCall<void>(this, "APrimalBuff_StorageInterface.LinkedContainerViewingItemInstancesClassUpdated()"); }
	void InputDismissPOI(APlayerController* ForPC, int Index) { NativeCall<void, APlayerController*, int>(this, "APrimalBuff_StorageInterface.InputDismissPOI(APlayerController*,int)", ForPC, Index); }
	void LinkedContainerDestroyed(AActor* DestroyedContainer) { NativeCall<void, AActor*>(this, "APrimalBuff_StorageInterface.LinkedContainerDestroyed(AActor*)", DestroyedContainer); }
	void ClientRequestReplicateItemData() { NativeCall<void>(this, "APrimalBuff_StorageInterface.ClientRequestReplicateItemData()"); }
	void SetPOIHidden(int Index, bool bNewHidden) { NativeCall<void, int, bool>(this, "APrimalBuff_StorageInterface.SetPOIHidden(int,bool)", Index, bNewHidden); }
	bool CanPlayerAccessLinkedContainer() { return NativeCall<bool>(this, "APrimalBuff_StorageInterface.CanPlayerAccessLinkedContainer()"); }
	void ClearPOIs(bool bClearLastLocatedData) { NativeCall<void, bool>(this, "APrimalBuff_StorageInterface.ClearPOIs(bool)", bClearLastLocatedData); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_StorageInterface.SetupForInstigator()"); }
	void RequestLocateItemsUpdate() { NativeCall<void>(this, "APrimalBuff_StorageInterface.RequestLocateItemsUpdate()"); }
	void InventoryUIClosed() { NativeCall<void>(this, "APrimalBuff_StorageInterface.InventoryUIClosed()"); }

	APrimalStructureItemContainer*& LinkedContainerField() { return *GetNativePointerField<APrimalStructureItemContainer**>(this, "APrimalBuff_StorageInterface.LinkedContainer"); }
	UPrimalInventoryComponent_StorageInterface*& LinkedContainerInventoryField() { return *GetNativePointerField<UPrimalInventoryComponent_StorageInterface**>(this, "APrimalBuff_StorageInterface.LinkedContainerInventory"); }

	FItemNetID& LastLocatedItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "APrimalBuff_StorageInterface.LastLocatedItemID"); }
	FTimerHandle& LocateItemsUpdateTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_StorageInterface.LocateItemsUpdateTimerHandle"); }
	static void GetLinkedContainer_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_StorageInterface.GetLinkedContainer_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetLinkedContainer_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_StorageInterface.SetLinkedContainer_WrapperImpl(void*,void*)", Object, InValue); }
};
