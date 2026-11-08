#pragma once
#include "BulkForward.h"
#include "UStatsPanelWidget.h"

struct UStatsPanelWidget_Obelisk : public UStatsPanelWidget
{
public:
	UStatsPanelWidget_Obelisk() = delete;
	~UStatsPanelWidget_Obelisk() = delete;
	UStatsPanelWidget_Obelisk(const UStatsPanelWidget_Obelisk&) = delete;
	UStatsPanelWidget_Obelisk& operator=(const UStatsPanelWidget_Obelisk&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStatsPanelWidget_Obelisk"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStatsPanelWidget_Obelisk"); }

	FName& NameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.NameLabelName"); }
	FName& DescriptionLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.DescriptionLabelName"); }
	FName& UploadCharacterDataButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.UploadCharacterDataButtonName"); }
	FName& TravelToAnotherServerButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.TravelToAnotherServerButtonName"); }
	FName& RefreshArkButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.RefreshArkButtonName"); }
	FName& ArkStorageStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.ArkStorageStatName"); }
	FName& ArkDinoStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.ArkDinoStatName"); }
	FName& StorageStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.StorageStatName"); }
	UTextBlock*& NameLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Obelisk.NameLabel"); }
	UTextBlock*& DescriptionLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UStatsPanelWidget_Obelisk.DescriptionLabel"); }
	UButton*& UploadCharacterDataButtonField() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget_Obelisk.UploadCharacterDataButton"); }
	UButton*& TravelToAnotherServerButtonField() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget_Obelisk.TravelToAnotherServerButton"); }
	UButton*& RefreshArkField() { return *GetNativePointerField<UButton**>(this, "UStatsPanelWidget_Obelisk.RefreshArk"); }
	UStructureStatWidget*& ArkStorageStatField() { return *GetNativePointerField<UStructureStatWidget**>(this, "UStatsPanelWidget_Obelisk.ArkStorageStat"); }
	UStructureStatWidget*& ArkDinoStatField() { return *GetNativePointerField<UStructureStatWidget**>(this, "UStatsPanelWidget_Obelisk.ArkDinoStat"); }
	UStructureStatWidget*& StorageStatField() { return *GetNativePointerField<UStructureStatWidget**>(this, "UStatsPanelWidget_Obelisk.StorageStat"); }
	void EnableRefreshArkButton() { NativeCall<void>(this, "UStatsPanelWidget_Obelisk.EnableRefreshArkButton()"); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UStatsPanelWidget_Obelisk.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	void SetInventoryComp(UPrimalInventoryComponent* InInventoryComponent) { NativeCall<void, UPrimalInventoryComponent*>(this, "UStatsPanelWidget_Obelisk.SetInventoryComp(UPrimalInventoryComponent*)", InInventoryComponent); }
	void RefreshStats() { NativeCall<void>(this, "UStatsPanelWidget_Obelisk.RefreshStats()"); }
	void DisableRefreshArkButton() { NativeCall<void>(this, "UStatsPanelWidget_Obelisk.DisableRefreshArkButton()"); }
	void Init(UUI_Inventory* InInventoryUI) { NativeCall<void, UUI_Inventory*>(this, "UStatsPanelWidget_Obelisk.Init(UUI_Inventory*)", InInventoryUI); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UStatsPanelWidget_Obelisk.ClickedButton(UWidget*)", clickedButton); }
};
