#pragma once
#include "BulkForward.h"
#include "UPrimalUserWidget.h"

struct UDyeItemSelector : public UPrimalUserWidget
{
public:
	UDyeItemSelector() = delete;
	~UDyeItemSelector() = delete;
	UDyeItemSelector(const UDyeItemSelector&) = delete;
	UDyeItemSelector& operator=(const UDyeItemSelector&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDyeItemSelector"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDyeItemSelector"); }

	UDataListPanel*& DyeItemsDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UDyeItemSelector.DyeItemsDataList"); }
	UEditableTextBox*& DyeSearchBoxField() { return *GetNativePointerField<UEditableTextBox**>(this, "UDyeItemSelector.DyeSearchBox"); }
	FName& DyeDataListNameField() { return *GetNativePointerField<FName*>(this, "UDyeItemSelector.DyeDataListName"); }
	FName& DyeSearchBoxNameField() { return *GetNativePointerField<FName*>(this, "UDyeItemSelector.DyeSearchBoxName"); }
	UPrimalUI*& OwnerUIField() { return *GetNativePointerField<UPrimalUI**>(this, "UDyeItemSelector.OwnerUI"); }
	bool& bAllowPaintingWithoutResourcesField() { return *GetNativePointerField<bool*>(this, "UDyeItemSelector.bAllowPaintingWithoutResources"); }
	void InitDyeSelector(UPrimalUI* PrimalUI) { NativeCall<void, UPrimalUI*>(this, "UDyeItemSelector.InitDyeSelector(UPrimalUI*)", PrimalUI); }
	void HandleOnSearchTextChanged(const FText& Text) { NativeCall<void, const FText&>(this, "UDyeItemSelector.HandleOnSearchTextChanged(FText&)", Text); }
	void UpdateDyeSelector() { NativeCall<void>(this, "UDyeItemSelector.UpdateDyeSelector()"); }
	UDataListPanel* GetDataListPanel() { return NativeCall<UDataListPanel*>(this, "UDyeItemSelector.GetDataListPanel()"); }
};
