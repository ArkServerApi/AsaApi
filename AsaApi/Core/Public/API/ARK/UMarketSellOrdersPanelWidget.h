#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UMarketSellOrdersPanelWidget : public UPrimalUI
{
public:
	UMarketSellOrdersPanelWidget() = delete;
	~UMarketSellOrdersPanelWidget() = delete;
	UMarketSellOrdersPanelWidget(const UMarketSellOrdersPanelWidget&) = delete;
	UMarketSellOrdersPanelWidget& operator=(const UMarketSellOrdersPanelWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMarketSellOrdersPanelWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMarketSellOrdersPanelWidget"); }

	UUI_Market*& MarketUIField() { return *GetNativePointerField<UUI_Market**>(this, "UMarketSellOrdersPanelWidget.MarketUI"); }
	APrimalStructureMarket*& MarketRefField() { return *GetNativePointerField<APrimalStructureMarket**>(this, "UMarketSellOrdersPanelWidget.MarketRef"); }
	UDataListPanel*& SellOrdersDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UMarketSellOrdersPanelWidget.SellOrdersDataList"); }
	UEditableTextBox*& SearchTextBoxField() { return *GetNativePointerField<UEditableTextBox**>(this, "UMarketSellOrdersPanelWidget.SearchTextBox"); }
	UComboBoxString*& SortingComboBoxField() { return *GetNativePointerField<UComboBoxString**>(this, "UMarketSellOrdersPanelWidget.SortingComboBox"); }
	UComboBoxString*& FilterComboBoxField() { return *GetNativePointerField<UComboBoxString**>(this, "UMarketSellOrdersPanelWidget.FilterComboBox"); }
	USizeBox*& TooltipPanelSizeBoxField() { return *GetNativePointerField<USizeBox**>(this, "UMarketSellOrdersPanelWidget.TooltipPanelSizeBox"); }
	UMarketTooltipPanelWidget*& TooltipPanelWidgetField() { return *GetNativePointerField<UMarketTooltipPanelWidget**>(this, "UMarketSellOrdersPanelWidget.TooltipPanelWidget"); }
	FName& SellOrdersDataListNameField() { return *GetNativePointerField<FName*>(this, "UMarketSellOrdersPanelWidget.SellOrdersDataListName"); }
	FName& SearchTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketSellOrdersPanelWidget.SearchTextBoxName"); }
	FName& SortingComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketSellOrdersPanelWidget.SortingComboBoxName"); }
	FName& FilterComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketSellOrdersPanelWidget.FilterComboBoxName"); }
	FName& TooltipPanelSizeBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketSellOrdersPanelWidget.TooltipPanelSizeBoxName"); }
	int& SelectedMarketIDField() { return *GetNativePointerField<int*>(this, "UMarketSellOrdersPanelWidget.SelectedMarketID"); }
	FString& LastValidFilterOptionField() { return *GetNativePointerField<FString*>(this, "UMarketSellOrdersPanelWidget.LastValidFilterOption"); }
	int& MarketFilterOptionIndexField() { return *GetNativePointerField<int*>(this, "UMarketSellOrdersPanelWidget.MarketFilterOptionIndex"); }
	bool& bSortInitializedField() { return *GetNativePointerField<bool*>(this, "UMarketSellOrdersPanelWidget.bSortInitialized"); }
	bool& bMarketFilterEnabledField() { return *GetNativePointerField<bool*>(this, "UMarketSellOrdersPanelWidget.bMarketFilterEnabled"); }
	bool& bRebuildingFilterOptionsField() { return *GetNativePointerField<bool*>(this, "UMarketSellOrdersPanelWidget.bRebuildingFilterOptions"); }
	TArray<UMarketRequestOrderListEntry*, TSizedDefaultAllocator<32> >& RequestOrderPoolField() { return *GetNativePointerField<TArray<UMarketRequestOrderListEntry*, TSizedDefaultAllocator<32> >*>(this, "UMarketSellOrdersPanelWidget.RequestOrderPool"); }
	void ClearSelectedRequestOrder() { NativeCall<void>(this, "UMarketSellOrdersPanelWidget.ClearSelectedRequestOrder()"); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "UMarketSellOrdersPanelWidget.GetObject()"); }
	void RefreshItemLists() { NativeCall<void>(this, "UMarketSellOrdersPanelWidget.RefreshItemLists()"); }
	void InitTooltipPanel() { NativeCall<void>(this, "UMarketSellOrdersPanelWidget.InitTooltipPanel()"); }
	void Init(UUI_Market* InMarketUI) { NativeCall<void, UUI_Market*>(this, "UMarketSellOrdersPanelWidget.Init(UUI_Market*)", InMarketUI); }
	void SetSelectedMarketID(int NewSelectedMarketID, bool bRefreshItemList) { NativeCall<void, int, bool>(this, "UMarketSellOrdersPanelWidget.SetSelectedMarketID(int,bool)", NewSelectedMarketID, bRefreshItemList); }
	bool GetSelectedSellOrder(FMarketSellOrder& OutOrder) { return NativeCall<bool, FMarketSellOrder&>(this, "UMarketSellOrdersPanelWidget.GetSelectedSellOrder(FMarketSellOrder&)", OutOrder); }
	void SetupMarket(APrimalStructureMarket* TheMarket) { NativeCall<void, APrimalStructureMarket*>(this, "UMarketSellOrdersPanelWidget.SetupMarket(APrimalStructureMarket*)", TheMarket); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UMarketSellOrdersPanelWidget._getUObject()"); }
	void ClearSelectedSellOrder() { NativeCall<void>(this, "UMarketSellOrdersPanelWidget.ClearSelectedSellOrder()"); }
	void OnRequestItemSelected(UMarketRequestItemInfo* TheItem) { NativeCall<void, UMarketRequestItemInfo*>(this, "UMarketSellOrdersPanelWidget.OnRequestItemSelected(UMarketRequestItemInfo*)", TheItem); }
	void UpdateSortingComboBox() { NativeCall<void>(this, "UMarketSellOrdersPanelWidget.UpdateSortingComboBox()"); }
	void OnTooltipPanelButtonPressed(UWidget* TheButton) { NativeCall<void, UWidget*>(this, "UMarketSellOrdersPanelWidget.OnTooltipPanelButtonPressed(UWidget*)", TheButton); }
	void ShowItems() { NativeCall<void>(this, "UMarketSellOrdersPanelWidget.ShowItems()"); }
	void BPOnTooltipPanelButtonPressed(int ButtonIndex) { NativeCall<void, int>(this, "UMarketSellOrdersPanelWidget.BPOnTooltipPanelButtonPressed(int)", ButtonIndex); }
	int GetSelectedNumericMaxQuantity() { return NativeCall<int>(this, "UMarketSellOrdersPanelWidget.GetSelectedNumericMaxQuantity()"); }
	void BPInit(UUI_Market* InMarketUI) { NativeCall<void, UUI_Market*>(this, "UMarketSellOrdersPanelWidget.BPInit(UUI_Market*)", InMarketUI); }
	void BPOnRequestItemSelected(UMarketRequestItemInfo* TheItem) { NativeCall<void, UMarketRequestItemInfo*>(this, "UMarketSellOrdersPanelWidget.BPOnRequestItemSelected(UMarketRequestItemInfo*)", TheItem); }
	bool GetSelectedRequestOrder(FMarketRequestOrder& OutOrder) { return NativeCall<bool, FMarketRequestOrder&>(this, "UMarketSellOrdersPanelWidget.GetSelectedRequestOrder(FMarketRequestOrder&)", OutOrder); }
	void SetMarketFilterEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UMarketSellOrdersPanelWidget.SetMarketFilterEnabled(bool)", bEnabled); }
	void BPOnOrderWidgetPressed(UDataListEntryWidget* SellOrderWidget) { NativeCall<void, UDataListEntryWidget*>(this, "UMarketSellOrdersPanelWidget.BPOnOrderWidgetPressed(UDataListEntryWidget*)", SellOrderWidget); }
	void OnViewerInventoryItemUpdate(UPrimalItem* TheItem) { NativeCall<void, UPrimalItem*>(this, "UMarketSellOrdersPanelWidget.OnViewerInventoryItemUpdate(UPrimalItem*)", TheItem); }
	int GetSelectedBuyQuantity() { return NativeCall<int>(this, "UMarketSellOrdersPanelWidget.GetSelectedBuyQuantity()"); }
	void OnSellOrderManuallySelected(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UMarketSellOrdersPanelWidget.OnSellOrderManuallySelected(UDataListEntryButton*)", theButton); }
	bool PassesOrderItemFilter(UPrimalItem* OrderItem, FName OwnerName, const FString& NameFilterStr, int ItemTypeFilter) { return NativeCall<bool, UPrimalItem*, FName, const FString&, int>(this, "UMarketSellOrdersPanelWidget.PassesOrderItemFilter(UPrimalItem*,FName,FString&,int)", OrderItem, OwnerName, NameFilterStr, ItemTypeFilter); }
	void SearchTextChanged(const FText& Text) { NativeCall<void, const FText&>(this, "UMarketSellOrdersPanelWidget.SearchTextChanged(FText&)", Text); }
	int GetSelectedNumericUnitPrice() { return NativeCall<int>(this, "UMarketSellOrdersPanelWidget.GetSelectedNumericUnitPrice()"); }
};
