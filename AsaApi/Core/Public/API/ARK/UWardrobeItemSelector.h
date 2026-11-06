#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UWardrobeItemSelector : public UPrimalUserWidget
{
public:
	UWardrobeItemSelector() = delete;
	~UWardrobeItemSelector() = delete;
	UWardrobeItemSelector(const UWardrobeItemSelector&) = delete;
	UWardrobeItemSelector& operator=(const UWardrobeItemSelector&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWardrobeItemSelector"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWardrobeItemSelector"); }

	UDataListPanel*& WardrobeItemsDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UWardrobeItemSelector.WardrobeItemsDataList"); }
	UDataListPanel*& WardrobeItemsDataListCCField() { return *GetNativePointerField<UDataListPanel**>(this, "UWardrobeItemSelector.WardrobeItemsDataListCC"); }
	UEditableTextBox*& WardrobeSearchBoxField() { return *GetNativePointerField<UEditableTextBox**>(this, "UWardrobeItemSelector.WardrobeSearchBox"); }
	UButton*& ClearCustomCosmeticField() { return *GetNativePointerField<UButton**>(this, "UWardrobeItemSelector.ClearCustomCosmetic"); }
	AShooterCharacter*& PlayerCharacterField() { return *GetNativePointerField<AShooterCharacter**>(this, "UWardrobeItemSelector.PlayerCharacter"); }
	UPrimalUI*& OwnerUIField() { return *GetNativePointerField<UPrimalUI**>(this, "UWardrobeItemSelector.OwnerUI"); }
	FOnCosmeticSelected& OnCosmeticUpdatedField() { return *GetNativePointerField<FOnCosmeticSelected*>(this, "UWardrobeItemSelector.OnCosmeticUpdated"); }
	TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>& LastItemSelectedField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem, FWeakObjectPtr>*>(this, "UWardrobeItemSelector.LastItemSelected"); }
	BitFieldValue<bool, unsigned char> bInitializedBefore() { return { this, "UWardrobeItemSelector.bInitializedBefore"}; }
	BitFieldValue<bool, unsigned char> bIsCustomCosmetics() { return { this, "UWardrobeItemSelector.bIsCustomCosmetics"}; }
	void OnInventoryItemDoubleClicked(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UWardrobeItemSelector.OnInventoryItemDoubleClicked(UDataListEntryButton*)", theButton); }
	void InitWardrobeSelector(UPrimalUI* PrimalUI, AShooterCharacter* SC) { NativeCall<void, UPrimalUI*, AShooterCharacter*>(this, "UWardrobeItemSelector.InitWardrobeSelector(UPrimalUI*,AShooterCharacter*)", PrimalUI, SC); }
	void OnDataListRequestUpdate(UDataListPanel& DataList) { NativeCall<void, UDataListPanel&>(this, "UWardrobeItemSelector.OnDataListRequestUpdate(UDataListPanel&)", DataList); }
	void HandleOnSearchTextChanged(const FText& Text) { NativeCall<void, const FText&>(this, "UWardrobeItemSelector.HandleOnSearchTextChanged(FText&)", Text); }
	void UpdateWardrobeSelector() { NativeCall<void>(this, "UWardrobeItemSelector.UpdateWardrobeSelector()"); }
	void ClickedButton(UWidget* clickedWidget) { NativeCall<void, UWidget*>(this, "UWardrobeItemSelector.ClickedButton(UWidget*)", clickedWidget); }
	void OnInventoryItemSelected(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UWardrobeItemSelector.OnInventoryItemSelected(UDataListEntryButton*)", theButton); }
	UDataListPanel* GetDataListPanel() { return NativeCall<UDataListPanel*>(this, "UWardrobeItemSelector.GetDataListPanel()"); }
};
