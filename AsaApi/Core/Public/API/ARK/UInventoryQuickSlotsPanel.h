#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UInventoryQuickSlotsPanel : public UPrimalUI
{
public:
	UInventoryQuickSlotsPanel() = delete;
	~UInventoryQuickSlotsPanel() = delete;
	UInventoryQuickSlotsPanel(const UInventoryQuickSlotsPanel&) = delete;
	UInventoryQuickSlotsPanel& operator=(const UInventoryQuickSlotsPanel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInventoryQuickSlotsPanel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInventoryQuickSlotsPanel"); }

	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UInventoryQuickSlotsPanel.InventoryUI"); }
	UDataListPanel*& QuickSlotDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UInventoryQuickSlotsPanel.QuickSlotDataList"); }
	void GameTick(const FGeometry& MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry&, float>(this, "UInventoryQuickSlotsPanel.GameTick(FGeometry&,float)", MyGeometry, InDeltaTime); }
	UPrimalUI* GetParentPrimalUI() { return NativeCall<UPrimalUI*>(this, "UInventoryQuickSlotsPanel.GetParentPrimalUI()"); }
	void Init(UUI_Inventory* InInventory) { NativeCall<void, UUI_Inventory*>(this, "UInventoryQuickSlotsPanel.Init(UUI_Inventory*)", InInventory); }
	void Show() { NativeCall<void>(this, "UInventoryQuickSlotsPanel.Show()"); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UInventoryQuickSlotsPanel.ClickedButton(UWidget*)", clickedButton); }
	void RefreshPanel(IDataListProviderInterface* ProviderInterface) { NativeCall<void, IDataListProviderInterface*>(this, "UInventoryQuickSlotsPanel.RefreshPanel(IDataListProviderInterface*)", ProviderInterface); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UInventoryQuickSlotsPanel.ConfirmationDialogAccepted()"); }
};
