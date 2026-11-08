#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UMarketTooltipPanelWidget : public UPrimalUI
{
public:
	UMarketTooltipPanelWidget() = delete;
	~UMarketTooltipPanelWidget() = delete;
	UMarketTooltipPanelWidget(const UMarketTooltipPanelWidget&) = delete;
	UMarketTooltipPanelWidget& operator=(const UMarketTooltipPanelWidget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMarketTooltipPanelWidget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMarketTooltipPanelWidget"); }

	FName& TooltipScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.TooltipScrollBoxName"); }
	FName& TooltipScaleBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.TooltipScaleBoxName"); }
	FName& MarketMapLocationTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.MarketMapLocationTextBoxName"); }
	FName& MarketCoordinatesTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.MarketCoordinatesTextBoxName"); }
	FName& MarketDistanceTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.MarketDistanceTextBoxName"); }
	FName& OwnerNameTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.OwnerNameTextBoxName"); }
	FName& AltMarketMapLocationTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.AltMarketMapLocationTextBoxName"); }
	FName& AltMarketCoordinatesTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.AltMarketCoordinatesTextBoxName"); }
	FName& AltMarketDistanceTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.AltMarketDistanceTextBoxName"); }
	FName& AltOwnerNameTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.AltOwnerNameTextBoxName"); }
	FName& MaxQuantityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.MaxQuantityTextBoxName"); }
	FName& MaxQuantityNumericTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.MaxQuantityNumericTextBoxName"); }
	FName& BuyQuantityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.BuyQuantityTextBoxName"); }
	FName& UnitPriceTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.UnitPriceTextBoxName"); }
	FName& UnitPriceNumericTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.UnitPriceNumericTextBoxName"); }
	FName& TotalPriceTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.TotalPriceTextBoxName"); }
	FName& ItemNameTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.ItemNameTextBoxName"); }
	FName& Button1NameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.Button1Name"); }
	FName& Button2NameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.Button2Name"); }
	FName& Button3NameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.Button3Name"); }
	FName& RequestOrderAvailableItemsDataListNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.RequestOrderAvailableItemsDataListName"); }
	FName& RequestOrderAvailableItemsSearchBoxNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.RequestOrderAvailableItemsSearchBoxName"); }
	FName& ItemIconButtonNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.ItemIconButtonName"); }
	FName& ItemDisplayButtonNameField() { return *GetNativePointerField<FName*>(this, "UMarketTooltipPanelWidget.ItemDisplayButtonName"); }
	FMarketSellOrder& SelectedSellOrderField() { return *GetNativePointerField<FMarketSellOrder*>(this, "UMarketTooltipPanelWidget.SelectedSellOrder"); }
	FMarketRequestOrder& SelectedRequestOrderField() { return *GetNativePointerField<FMarketRequestOrder*>(this, "UMarketTooltipPanelWidget.SelectedRequestOrder"); }
	UNumericEditableTextBox*& BuyQuantityTextBoxField() { return *GetNativePointerField<UNumericEditableTextBox**>(this, "UMarketTooltipPanelWidget.BuyQuantityTextBox"); }
	UNumericEditableTextBox*& UnitPriceNumericTextBoxField() { return *GetNativePointerField<UNumericEditableTextBox**>(this, "UMarketTooltipPanelWidget.UnitPriceNumericTextBox"); }
	UNumericEditableTextBox*& MaxQuantityNumericTextBoxField() { return *GetNativePointerField<UNumericEditableTextBox**>(this, "UMarketTooltipPanelWidget.MaxQuantityNumericTextBox"); }
	APrimalStructureMarket*& MarketRefField() { return *GetNativePointerField<APrimalStructureMarket**>(this, "UMarketTooltipPanelWidget.MarketRef"); }
	UMarketRequestItemInfo*& SelectedRequestItemField() { return *GetNativePointerField<UMarketRequestItemInfo**>(this, "UMarketTooltipPanelWidget.SelectedRequestItem"); }
	int& SelectedMarketIDField() { return *GetNativePointerField<int*>(this, "UMarketTooltipPanelWidget.SelectedMarketID"); }
	UTextBlock*& MarketMapLocationTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.MarketMapLocationTextBox"); }
	UTextBlock*& MarketCoordinatesTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.MarketCoordinatesTextBox"); }
	UTextBlock*& MarketDistanceTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.MarketDistanceTextBox"); }
	UTextBlock*& OwnerNameTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.OwnerNameTextBox"); }
	UTextBlock*& AltMarketMapLocationTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.AltMarketMapLocationTextBox"); }
	UTextBlock*& AltMarketCoordinatesTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.AltMarketCoordinatesTextBox"); }
	UTextBlock*& AltMarketDistanceTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.AltMarketDistanceTextBox"); }
	UTextBlock*& AltOwnerNameTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.AltOwnerNameTextBox"); }
	UTextBlock*& MaxQuantityTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.MaxQuantityTextBox"); }
	UTextBlock*& UnitPriceTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.UnitPriceTextBox"); }
	UTextBlock*& TotalPriceTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.TotalPriceTextBox"); }
	UTextBlock*& ItemNameTextBoxField() { return *GetNativePointerField<UTextBlock**>(this, "UMarketTooltipPanelWidget.ItemNameTextBox"); }
	UButton*& Button1Field() { return *GetNativePointerField<UButton**>(this, "UMarketTooltipPanelWidget.Button1"); }
	UButton*& Button2Field() { return *GetNativePointerField<UButton**>(this, "UMarketTooltipPanelWidget.Button2"); }
	UButton*& Button3Field() { return *GetNativePointerField<UButton**>(this, "UMarketTooltipPanelWidget.Button3"); }
	UScrollBox*& TooltipScrollBoxField() { return *GetNativePointerField<UScrollBox**>(this, "UMarketTooltipPanelWidget.TooltipScrollBox"); }
	UScaleBox*& TooltipScaleBoxField() { return *GetNativePointerField<UScaleBox**>(this, "UMarketTooltipPanelWidget.TooltipScaleBox"); }
	EStretch::Type& SavedTooltipScaleBoxStretchField() { return *GetNativePointerField<EStretch::Type*>(this, "UMarketTooltipPanelWidget.SavedTooltipScaleBoxStretch"); }
	FTimerHandle& TooltipScaleMonitorHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UMarketTooltipPanelWidget.TooltipScaleMonitorHandle"); }
	float& TooltipScalePrevField() { return *GetNativePointerField<float*>(this, "UMarketTooltipPanelWidget.TooltipScalePrev"); }
	float& TooltipScaleLastField() { return *GetNativePointerField<float*>(this, "UMarketTooltipPanelWidget.TooltipScaleLast"); }
	int& TooltipScaleStableCountField() { return *GetNativePointerField<int*>(this, "UMarketTooltipPanelWidget.TooltipScaleStableCount"); }
	int& TooltipScalePollCountField() { return *GetNativePointerField<int*>(this, "UMarketTooltipPanelWidget.TooltipScalePollCount"); }
	UToolTipWidget*& CurrentToolTipPanelWidgetField() { return *GetNativePointerField<UToolTipWidget**>(this, "UMarketTooltipPanelWidget.CurrentToolTipPanelWidget"); }
	UDataListPanel*& RequestOrderAvailableItemsDataListField() { return *GetNativePointerField<UDataListPanel**>(this, "UMarketTooltipPanelWidget.RequestOrderAvailableItemsDataList"); }
	UDataListEntryButton_MarketItemIcon*& ItemIconButtonField() { return *GetNativePointerField<UDataListEntryButton_MarketItemIcon**>(this, "UMarketTooltipPanelWidget.ItemIconButton"); }
	UDataListEntryButton_MarketItemDisplay*& ItemDisplayButtonField() { return *GetNativePointerField<UDataListEntryButton_MarketItemDisplay**>(this, "UMarketTooltipPanelWidget.ItemDisplayButton"); }
	UPrimalUI*& MyMarketUIField() { return *GetNativePointerField<UPrimalUI**>(this, "UMarketTooltipPanelWidget.MyMarketUI"); }
	TArray<UMarketRequestItemInfo*, TSizedDefaultAllocator<32> >& CachedRequestOrderItemsField() { return *GetNativePointerField<TArray<UMarketRequestItemInfo*, TSizedDefaultAllocator<32> >*>(this, "UMarketTooltipPanelWidget.CachedRequestOrderItems"); }
	UEditableTextBox*& RequestOrderAvailableItemsSearchBoxField() { return *GetNativePointerField<UEditableTextBox**>(this, "UMarketTooltipPanelWidget.RequestOrderAvailableItemsSearchBox"); }
	BitFieldValue<bool, unsigned char> bHidePanelIfNoValidOrder() { return { this, "UMarketTooltipPanelWidget.bHidePanelIfNoValidOrder"}; }
	BitFieldValue<bool, unsigned char> bUseLegacyTooltipScaleTimer() { return { this, "UMarketTooltipPanelWidget.bUseLegacyTooltipScaleTimer"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetSelectedQuantity() { return { this, "UMarketTooltipPanelWidget.bUseBPGetSelectedQuantity"}; }
	BitFieldValue<bool, unsigned char> bUseBPGetSelectedUnitPrice() { return { this, "UMarketTooltipPanelWidget.bUseBPGetSelectedUnitPrice"}; }
	void SetupTooltipForButton(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UMarketTooltipPanelWidget.SetupTooltipForButton(UDataListEntryButton*)", theButton); }
	void RefreshPanelVisibility() { NativeCall<void>(this, "UMarketTooltipPanelWidget.RefreshPanelVisibility()"); }
	void OnOrderListRefreshed() { NativeCall<void>(this, "UMarketTooltipPanelWidget.OnOrderListRefreshed()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UMarketTooltipPanelWidget._getUObject()"); }
	void BPOnSelectedSellOrder(const FMarketSellOrder& TheOrder, const FMarketInfo& MarketInfo) { NativeCall<void, const FMarketSellOrder&, const FMarketInfo&>(this, "UMarketTooltipPanelWidget.BPOnSelectedSellOrder(FMarketSellOrder&,FMarketInfo&)", TheOrder, MarketInfo); }
	void HandleItemSearchTextChanged(const FText& Text) { NativeCall<void, const FText&>(this, "UMarketTooltipPanelWidget.HandleItemSearchTextChanged(FText&)", Text); }
	void BPOnViewerInventoryItemUpdate(UPrimalItem* TheItem) { NativeCall<void, UPrimalItem*>(this, "UMarketTooltipPanelWidget.BPOnViewerInventoryItemUpdate(UPrimalItem*)", TheItem); }
	void InitBaseOrderInfo(const FMarketBaseOrder& TheOrder, const FMarketInfo& MarketInfo, int MaxItemQuantity, int MaxUnitPrice) { NativeCall<void, const FMarketBaseOrder&, const FMarketInfo&, int, int>(this, "UMarketTooltipPanelWidget.InitBaseOrderInfo(FMarketBaseOrder&,FMarketInfo&,int,int)", TheOrder, MarketInfo, MaxItemQuantity, MaxUnitPrice); }
	void SetSelectedMarketID(int NewSelectedMarketID) { NativeCall<void, int>(this, "UMarketTooltipPanelWidget.SetSelectedMarketID(int)", NewSelectedMarketID); }
	void BPOnSelectedRequestOrder(const FMarketRequestOrder& TheOrder, const FMarketInfo& MarketInfo) { NativeCall<void, const FMarketRequestOrder&, const FMarketInfo&>(this, "UMarketTooltipPanelWidget.BPOnSelectedRequestOrder(FMarketRequestOrder&,FMarketInfo&)", TheOrder, MarketInfo); }
	void InitSellOrder(const FMarketSellOrder& TheOrder, int MaxItemQuantity) { NativeCall<void, const FMarketSellOrder&, int>(this, "UMarketTooltipPanelWidget.InitSellOrder(FMarketSellOrder&,int)", TheOrder, MaxItemQuantity); }
	void BPInit(UPrimalUI* SellOrdersPanel, UPrimalUI* MarketUI) { NativeCall<void, UPrimalUI*, UPrimalUI*>(this, "UMarketTooltipPanelWidget.BPInit(UPrimalUI*,UPrimalUI*)", SellOrdersPanel, MarketUI); }
	void MonitorTooltipScale() { NativeCall<void>(this, "UMarketTooltipPanelWidget.MonitorTooltipScale()"); }
	void FreezeTooltipScale(float Scale) { NativeCall<void, float>(this, "UMarketTooltipPanelWidget.FreezeTooltipScale(float)", Scale); }
	void BPOnRefreshedPanelVisibility() { NativeCall<void>(this, "UMarketTooltipPanelWidget.BPOnRefreshedPanelVisibility()"); }
	void InitRequestOrder(const FMarketRequestOrder& TheOrder, int MaxItemQuantity) { NativeCall<void, const FMarketRequestOrder&, int>(this, "UMarketTooltipPanelWidget.InitRequestOrder(FMarketRequestOrder&,int)", TheOrder, MaxItemQuantity); }
	void SetUpMarket(APrimalStructureMarket* ForMarket) { NativeCall<void, APrimalStructureMarket*>(this, "UMarketTooltipPanelWidget.SetUpMarket(APrimalStructureMarket*)", ForMarket); }
	void FillOutMarketInfo(const FMarketInfo& MarketInfo) { NativeCall<void, const FMarketInfo&>(this, "UMarketTooltipPanelWidget.FillOutMarketInfo(FMarketInfo&)", MarketInfo); }
	void BPOnSelectedMarketIDChanged(int NewSelectedMarketID) { NativeCall<void, int>(this, "UMarketTooltipPanelWidget.BPOnSelectedMarketIDChanged(int)", NewSelectedMarketID); }
	void NativeConstruct() { NativeCall<void>(this, "UMarketTooltipPanelWidget.NativeConstruct()"); }
	void ClearSelectedRequestOrder() { NativeCall<void>(this, "UMarketTooltipPanelWidget.ClearSelectedRequestOrder()"); }
	void BPOnOrderListRefreshed() { NativeCall<void>(this, "UMarketTooltipPanelWidget.BPOnOrderListRefreshed()"); }
	void UpdateMaxQuantityTextBox(const FMarketBaseOrder& ForOrder) { NativeCall<void, const FMarketBaseOrder&>(this, "UMarketTooltipPanelWidget.UpdateMaxQuantityTextBox(FMarketBaseOrder&)", ForOrder); }
	int BPGetSelectedQuantity() { return NativeCall<int>(this, "UMarketTooltipPanelWidget.BPGetSelectedQuantity()"); }
	void BPOnSetUpMarket(APrimalStructureMarket* ForMarket) { NativeCall<void, APrimalStructureMarket*>(this, "UMarketTooltipPanelWidget.BPOnSetUpMarket(APrimalStructureMarket*)", ForMarket); }
	void ClearSelectedSellOrder() { NativeCall<void>(this, "UMarketTooltipPanelWidget.ClearSelectedSellOrder()"); }
	void HandleUnitPriceChanged(float NewValue) { NativeCall<void, float>(this, "UMarketTooltipPanelWidget.HandleUnitPriceChanged(float)", NewValue); }
	void BPOnOrderWidgetPressed(UDataListEntryWidget* SellOrderWidget) { NativeCall<void, UDataListEntryWidget*>(this, "UMarketTooltipPanelWidget.BPOnOrderWidgetPressed(UDataListEntryWidget*)", SellOrderWidget); }
	void OnItemClassManuallySelected(UDataListEntryButton* theButton) { NativeCall<void, UDataListEntryButton*>(this, "UMarketTooltipPanelWidget.OnItemClassManuallySelected(UDataListEntryButton*)", theButton); }
	int BPGetSelectedUnitPrice() { return NativeCall<int>(this, "UMarketTooltipPanelWidget.BPGetSelectedUnitPrice()"); }
	void PopulateItemCache() { NativeCall<void>(this, "UMarketTooltipPanelWidget.PopulateItemCache()"); }
	void Init(UPrimalUI* SellOrdersPanel, UPrimalUI* MarketUI) { NativeCall<void, UPrimalUI*, UPrimalUI*>(this, "UMarketTooltipPanelWidget.Init(UPrimalUI*,UPrimalUI*)", SellOrdersPanel, MarketUI); }
	UObject* GetObject() { return NativeCall<UObject*>(this, "UMarketTooltipPanelWidget.GetObject()"); }
	void HandleBuyQuantityChanged(float NewValue) { NativeCall<void, float>(this, "UMarketTooltipPanelWidget.HandleBuyQuantityChanged(float)", NewValue); }
	void BPOnSelectedRequestItem(UMarketRequestItemInfo* TheItem) { NativeCall<void, UMarketRequestItemInfo*>(this, "UMarketTooltipPanelWidget.BPOnSelectedRequestItem(UMarketRequestItemInfo*)", TheItem); }
};
