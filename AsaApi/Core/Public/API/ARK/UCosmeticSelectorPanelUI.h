#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UCosmeticSelectorPanelUI : public UPrimalUI
{
public:
	UCosmeticSelectorPanelUI() = delete;
	~UCosmeticSelectorPanelUI() = delete;
	UCosmeticSelectorPanelUI(const UCosmeticSelectorPanelUI&) = delete;
	UCosmeticSelectorPanelUI& operator=(const UCosmeticSelectorPanelUI&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCosmeticSelectorPanelUI"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCosmeticSelectorPanelUI"); }

	UDataListPanel*& ItemsDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UCosmeticSelectorPanelUI.ItemsDataList"); }
	UDataListPanel*& CustomCosmeticsDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UCosmeticSelectorPanelUI.CustomCosmeticsDataList"); }
	UPrimalInventoryComponent*& InvCompField() { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "UCosmeticSelectorPanelUI.InvComp"); }
	UUI_Inventory*& InventoryUIField() { return *GetNativePointerField<UUI_Inventory**>(this, "UCosmeticSelectorPanelUI.InventoryUI"); }
	UPrimalItem*& LastSkinSelectedField() { return *GetNativePointerField<UPrimalItem**>(this, "UCosmeticSelectorPanelUI.LastSkinSelected"); }
	UPrimalItem*& LastItemSelectedField() { return *GetNativePointerField<UPrimalItem**>(this, "UCosmeticSelectorPanelUI.LastItemSelected"); }
	UButton*& BackToInventoryButtonField() { return *GetNativePointerField<UButton**>(this, "UCosmeticSelectorPanelUI.BackToInventoryButton"); }
	UBorder*& FilterSelectedCustomCosmeticsField() { return *GetNativePointerField<UBorder**>(this, "UCosmeticSelectorPanelUI.FilterSelectedCustomCosmetics"); }
	UBorder*& FilterSelectedAllowCosmeticField() { return *GetNativePointerField<UBorder**>(this, "UCosmeticSelectorPanelUI.FilterSelectedAllowCosmetic"); }
	UButton*& ClearCustomCosmeticFilterButtonField() { return *GetNativePointerField<UButton**>(this, "UCosmeticSelectorPanelUI.ClearCustomCosmeticFilterButton"); }
	UButton*& ClearAllowCosmeticFilterButtonField() { return *GetNativePointerField<UButton**>(this, "UCosmeticSelectorPanelUI.ClearAllowCosmeticFilterButton"); }
	UTextBlock*& FilterSelectedCustomCosmeticsLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UCosmeticSelectorPanelUI.FilterSelectedCustomCosmeticsLabel"); }
	UTextBlock*& FilterSelectedAllowCosmeticLabelField() { return *GetNativePointerField<UTextBlock**>(this, "UCosmeticSelectorPanelUI.FilterSelectedAllowCosmeticLabel"); }
	UEditableTextBox*& SearchCosmeticTextBoxField() { return *GetNativePointerField<UEditableTextBox**>(this, "UCosmeticSelectorPanelUI.SearchCosmeticTextBox"); }
	UEditableTextBox*& SearchItemTextBoxField() { return *GetNativePointerField<UEditableTextBox**>(this, "UCosmeticSelectorPanelUI.SearchItemTextBox"); }
	UComboBoxString*& FilterCombo_ItemsField() { return *GetNativePointerField<UComboBoxString**>(this, "UCosmeticSelectorPanelUI.FilterCombo_Items"); }
	UComboBoxString*& FilterCombo_CosmeticsField() { return *GetNativePointerField<UComboBoxString**>(this, "UCosmeticSelectorPanelUI.FilterCombo_Cosmetics"); }
	void ClickedButton(UWidget* clickedButton) { NativeCall<void, UWidget*>(this, "UCosmeticSelectorPanelUI.ClickedButton(UWidget*)", clickedButton); }
	void SearchTextChangedCosmetic(const FText& Text) { NativeCall<void, const FText&>(this, "UCosmeticSelectorPanelUI.SearchTextChangedCosmetic(FText&)", Text); }
	void SearchTextChangedItem(const FText& Text) { NativeCall<void, const FText&>(this, "UCosmeticSelectorPanelUI.SearchTextChangedItem(FText&)", Text); }
	void RefreshCosmeticList() { NativeCall<void>(this, "UCosmeticSelectorPanelUI.RefreshCosmeticList()"); }
	void OnInventoryItemDoubleClicked(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UCosmeticSelectorPanelUI.OnInventoryItemDoubleClicked(UDataListEntryButton*)", theButton); }
	void OnInventorySkinSelected(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UCosmeticSelectorPanelUI.OnInventorySkinSelected(UDataListEntryButton*)", theButton); }
	UPrimalItem* GetSelectedItem() { return NativeCall<UPrimalItem*>(this, "UCosmeticSelectorPanelUI.GetSelectedItem()"); }
	void SetupInventory(UPrimalInventoryComponent* InventoryComponent, UUI_Inventory* InInventoryUI) { NativeCall<void, UPrimalInventoryComponent*, UUI_Inventory*>(this, "UCosmeticSelectorPanelUI.SetupInventory(UPrimalInventoryComponent*,UUI_Inventory*)", InventoryComponent, InInventoryUI); }
	UPrimalItem* GetSelectedSkin() { return NativeCall<UPrimalItem*>(this, "UCosmeticSelectorPanelUI.GetSelectedSkin()"); }
	void OnDataListRequestUpdate(UDataListPanel& DataList) { NativeCall<void, UDataListPanel&>(this, "UCosmeticSelectorPanelUI.OnDataListRequestUpdate(UDataListPanel&)", DataList); }
	void OnInventoryItemSelected(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UCosmeticSelectorPanelUI.OnInventoryItemSelected(UDataListEntryButton*)", theButton); }
	UPrimalUI* GetParentPrimalUI() { return NativeCall<UPrimalUI*>(this, "UCosmeticSelectorPanelUI.GetParentPrimalUI()"); }
};
