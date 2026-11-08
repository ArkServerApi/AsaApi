#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UMarketTradeLogPanelWidget : public UPrimalUI
{
public:
	UMarketTradeLogPanelWidget() = delete;
	~UMarketTradeLogPanelWidget() = delete;
	UMarketTradeLogPanelWidget(const UMarketTradeLogPanelWidget&) = delete;
	UMarketTradeLogPanelWidget& operator=(const UMarketTradeLogPanelWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMarketTradeLogPanelWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMarketTradeLogPanelWidget"); }

	UUI_Market*& MarketUIField() { return *GetNativePointerField<UUI_Market**>(this, "UMarketTradeLogPanelWidget.MarketUI"); }
	APrimalStructureMarket*& MarketRefField() { return *GetNativePointerField<APrimalStructureMarket**>(this, "UMarketTradeLogPanelWidget.MarketRef"); }
	UDataListPanel*& TradeLogDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UMarketTradeLogPanelWidget.TradeLogDataList"); }
	UComboBoxString*& OrderTypeFilterComboBoxField() { return *GetNativePointerField<UComboBoxString**>(this, "UMarketTradeLogPanelWidget.OrderTypeFilterComboBox"); }
	UComboBoxString*& SortComboBoxField() { return *GetNativePointerField<UComboBoxString**>(this, "UMarketTradeLogPanelWidget.SortComboBox"); }
	UEditableTextBox*& SearchBoxField() { return *GetNativePointerField<UEditableTextBox**>(this, "UMarketTradeLogPanelWidget.SearchBox"); }
	FName& TradeLogDataListNameField() { return *GetNativePointerField<FName*>(this, "UMarketTradeLogPanelWidget.TradeLogDataListName"); }
	FName& OrderTypeFilterComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTradeLogPanelWidget.OrderTypeFilterComboBoxName"); }
	FName& SortComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTradeLogPanelWidget.SortComboBoxName"); }
	FName& SearchBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTradeLogPanelWidget.SearchBoxName"); }
	TArray<UMarketTradeLogEntryObject*, TSizedDefaultAllocator<32> >& EntryPoolField() { return *GetNativePointerField<TArray<UMarketTradeLogEntryObject*, TSizedDefaultAllocator<32> >*>(this, "UMarketTradeLogPanelWidget.EntryPool"); }
	void OnSearchTextChanged(const FText& Text) { NativeCall<void, const FText&>(this, "UMarketTradeLogPanelWidget.OnSearchTextChanged(FText&)", Text); }
	void BPInit() { NativeCall<void>(this, "UMarketTradeLogPanelWidget.BPInit()"); }
	void Init(UUI_Market* InMarketUI) { NativeCall<void, UUI_Market*>(this, "UMarketTradeLogPanelWidget.Init(UUI_Market*)", InMarketUI); }
	void BPSetupMarket() { NativeCall<void>(this, "UMarketTradeLogPanelWidget.BPSetupMarket()"); }
	void OnTradeLogStartReceiving() { NativeCall<void>(this, "UMarketTradeLogPanelWidget.OnTradeLogStartReceiving()"); }
	void OnTradeLogReceived() { NativeCall<void>(this, "UMarketTradeLogPanelWidget.OnTradeLogReceived()"); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "UMarketTradeLogPanelWidget.GetObject()"); }
	void ShowItems() { NativeCall<void>(this, "UMarketTradeLogPanelWidget.ShowItems()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UMarketTradeLogPanelWidget._getUObject()"); }
	void SetupMarket(APrimalStructureMarket* TheMarket) { NativeCall<void, APrimalStructureMarket*>(this, "UMarketTradeLogPanelWidget.SetupMarket(APrimalStructureMarket*)", TheMarket); }
	void RefreshItemList() { NativeCall<void>(this, "UMarketTradeLogPanelWidget.RefreshItemList()"); }
};
