#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructureItemContainer.h"

struct APrimalStructureMarket : APrimalStructureItemContainer
{
public:
	APrimalStructureMarket() = delete;
	~APrimalStructureMarket() = delete;
	APrimalStructureMarket(const APrimalStructureMarket&) = delete;
	APrimalStructureMarket& operator=(const APrimalStructureMarket&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureMarket"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureMarket"); }

	int& MaxTradeLogEntriesField() { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxTradeLogEntries"); }
	double& LastTimeModifiedTradeLogField() { return *GetNativePointerField<double*>(this, "APrimalStructureMarket.LastTimeModifiedTradeLog"); }
	bool& bReceivingMarketLogField() { return *GetNativePointerField<bool*>(this, "APrimalStructureMarket.bReceivingMarketLog"); }
	int& MaxPricePerUnitField() { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxPricePerUnit"); }
	int& MaxPricePerUnit_RequestsField() { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxPricePerUnit_Requests"); }
	int& MaxOrderTotalPriceField() { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxOrderTotalPrice"); }
	int& MaxRequestQuantityField() { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxRequestQuantity"); }
	int& MaxSellOrderQuantityField() { return *GetNativePointerField<int*>(this, "APrimalStructureMarket.MaxSellOrderQuantity"); }

	bool DoesMySellOrderExistForItem(UPrimalItem* TheItem, bool bOnlyCheckClassIfMultiOrder) { return NativeCall<bool, UPrimalItem*, bool>(this, "APrimalStructureMarket.DoesMySellOrderExistForItem(UPrimalItem*,bool)", TheItem, bOnlyCheckClassIfMultiOrder); }
	void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureMarket.PlacedStructure(AShooterPlayerController*)", PC); }
	bool ValidateMarketCaps(AShooterPlayerController* ForPC, int Quantity, int PricePerUnit, bool bIsRequestOrder) { return NativeCall<bool, AShooterPlayerController*, int, int, bool>(this, "APrimalStructureMarket.ValidateMarketCaps(AShooterPlayerController*,int,int,bool)", ForPC, Quantity, PricePerUnit, bIsRequestOrder); }
	void OnTradeLogStartReceiving(AShooterPlayerController* RequestedByPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureMarket.OnTradeLogStartReceiving(AShooterPlayerController*)", RequestedByPC); }
	void OnGlobalMarketDataReceived(AShooterPlayerController* RequestedByPC, bool bReceivedNewData, bool bReceivedNewDataForThisMarket) { NativeCall<void, AShooterPlayerController*, bool, bool>(this, "APrimalStructureMarket.OnGlobalMarketDataReceived(AShooterPlayerController*,bool,bool)", RequestedByPC, bReceivedNewData, bReceivedNewDataForThisMarket); }
	bool CanCharPlaceSellOrders(APrimalCharacter* TheChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalStructureMarket.CanCharPlaceSellOrders(APrimalCharacter*)", TheChar); }
	void RequestTradeData(AShooterPlayerController* ForPC, double LastTimeReceivedTradeData) { NativeCall<void, AShooterPlayerController*, double>(this, "APrimalStructureMarket.RequestTradeData(AShooterPlayerController*,double)", ForPC, LastTimeReceivedTradeData); }
	int TryTransferItemQuantity(UPrimalInventoryComponent* ToInventory, UPrimalItem* Item, int Quantity) { return NativeCall<int, UPrimalInventoryComponent*, UPrimalItem*, int>(this, "APrimalStructureMarket.TryTransferItemQuantity(UPrimalInventoryComponent*,UPrimalItem*,int)", ToInventory, Item, Quantity); }
	int GetMaxQuantityForUnitPrice(int UnitPrice, bool bIsRequestOrder) { return NativeCall<int, int, bool>(this, "APrimalStructureMarket.GetMaxQuantityForUnitPrice(int,bool)", UnitPrice, bIsRequestOrder); }
	void RequestTradeLog(AShooterPlayerController* ForPC, double LastTimeReceived) { NativeCall<void, AShooterPlayerController*, double>(this, "APrimalStructureMarket.RequestTradeLog(AShooterPlayerController*,double)", ForPC, LastTimeReceived); }
	bool BPAllowUseMarket(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureMarket.BPAllowUseMarket(AShooterPlayerController*)", ForPC); }
	void RemoveUIViewer(APrimalBuff* ViewingBuff) { NativeCall<void, APrimalBuff*>(this, "APrimalStructureMarket.RemoveUIViewer(APrimalBuff*)", ViewingBuff); }
	bool UseItemSpoilingTimeMultipliers() { return NativeCall<bool>(this, "APrimalStructureMarket.UseItemSpoilingTimeMultipliers()"); }
	void CreateSellOrdersFromInventory(AShooterPlayerController* ForPC, int MinPrice, int MaxPrice, bool bUseRandomQuantity) { NativeCall<void, AShooterPlayerController*, int, int, bool>(this, "APrimalStructureMarket.CreateSellOrdersFromInventory(AShooterPlayerController*,int,int,bool)", ForPC, MinPrice, MaxPrice, bUseRandomQuantity); }
	bool CanControllerPlaceRequestOrders(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureMarket.CanControllerPlaceRequestOrders(AShooterPlayerController*)", ForPC); }
	bool CanControllerUseMarket(AShooterPlayerController* ByPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureMarket.CanControllerUseMarket(AShooterPlayerController*)", ByPC); }
	bool CanControllerPlaceSellOrders(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureMarket.CanControllerPlaceSellOrders(AShooterPlayerController*)", ForPC); }
	void AddUIViewer(APrimalBuff* ViewingBuff) { NativeCall<void, APrimalBuff*>(this, "APrimalStructureMarket.AddUIViewer(APrimalBuff*)", ViewingBuff); }
	void BPOnRelevantMarketChange() { NativeCall<void>(this, "APrimalStructureMarket.BPOnRelevantMarketChange()"); }
	int GetMaxUnitPriceForQuantity(int Quantity, bool bIsRequestOrder) { return NativeCall<int, int, bool>(this, "APrimalStructureMarket.GetMaxUnitPriceForQuantity(int,bool)", Quantity, bIsRequestOrder); }
	void MergeReleasedItemIntoInventory(UPrimalItem* ReleasedItem) { NativeCall<void, UPrimalItem*>(this, "APrimalStructureMarket.MergeReleasedItemIntoInventory(UPrimalItem*)", ReleasedItem); }
	void OnTradeLogDataReceived(AShooterPlayerController* RequestedByPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureMarket.OnTradeLogDataReceived(AShooterPlayerController*)", RequestedByPC); }
	void BPOnGlobalMarketTradeDataReceived(AShooterPlayerController* RequestedByPC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureMarket.BPOnGlobalMarketTradeDataReceived(AShooterPlayerController*)", RequestedByPC); }
	void RepopulateTransientTradeData() { NativeCall<void>(this, "APrimalStructureMarket.RepopulateTransientTradeData()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureMarket.BeginPlay()"); }
	int GetEffectiveMaxPricePerUnit(int ConfiguredMaxPricePerUnit) { return NativeCall<int, int>(this, "APrimalStructureMarket.GetEffectiveMaxPricePerUnit(int)", ConfiguredMaxPricePerUnit); }
	bool CanCharPlaceRequestOrders(APrimalCharacter* TheChar) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalStructureMarket.CanCharPlaceRequestOrders(APrimalCharacter*)", TheChar); }
	void RemoveEmptyUIViewers() { NativeCall<void>(this, "APrimalStructureMarket.RemoveEmptyUIViewers()"); }
	void OnRelevantMarketChange() { NativeCall<void>(this, "APrimalStructureMarket.OnRelevantMarketChange()"); }
	bool CanCharUseMarket(APrimalCharacter* TheCharacter) { return NativeCall<bool, APrimalCharacter*>(this, "APrimalStructureMarket.CanCharUseMarket(APrimalCharacter*)", TheCharacter); }

	BitFieldValue<bool, unsigned char> bUseBPAllowUseMarket() { return { this, "APrimalStructureMarket.bUseBPAllowUseMarket"}; }
	BitFieldValue<bool, unsigned char> bIsNonPlayerMarket() { return { this, "APrimalStructureMarket.bIsNonPlayerMarket"}; }

	FMarketTradeData& MyTradeDataField() { return *GetNativePointerField<FMarketTradeData*>(this, "APrimalStructureMarket.MyTradeData"); }
	FMarketInfo& MyMarketInfoField() { return *GetNativePointerField<FMarketInfo*>(this, "APrimalStructureMarket.MyMarketInfo"); }
	FMarketInfo& DefaultMarketInfoField() { return *GetNativePointerField<FMarketInfo*>(this, "APrimalStructureMarket.DefaultMarketInfo"); }
	TArray<TWeakObjectPtr<APrimalBuff, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& UIViewerBuffsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalBuff, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureMarket.UIViewerBuffs"); }
	TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >& RemoteViewingMarketUIControllersField() { return *GetNativePointerField<TArray<AShooterPlayerController*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureMarket.RemoteViewingMarketUIControllers"); }
	TEnumAsByte<EEngramGroup::Type>& TradingRequiresDLCField() { return *GetNativePointerField<TEnumAsByte<EEngramGroup::Type>*>(this, "APrimalStructureMarket.TradingRequiresDLC"); }
	void RefundRequestOrderHexagons(const FMarketRequestOrder& Order) { NativeCall<void, const FMarketRequestOrder&>(this, "APrimalStructureMarket.RefundRequestOrderHexagons(FMarketRequestOrder&)", Order); }
	void ReconcileMultiSellOrder(FMarketSellOrder& Order) { NativeCall<void, FMarketSellOrder&>(this, "APrimalStructureMarket.ReconcileMultiSellOrder(FMarketSellOrder&)", Order); }
	bool VerifyMySellOrder(const FItemNetID& ItemID, int Quantity, int UnitPrice, bool bForBuy, bool bForModify, AShooterPlayerController* ForPC) { return NativeCall<bool, const FItemNetID&, int, int, bool, bool, AShooterPlayerController*>(this, "APrimalStructureMarket.VerifyMySellOrder(FItemNetID&,int,int,bool,bool,AShooterPlayerController*)", ItemID, Quantity, UnitPrice, bForBuy, bForModify, ForPC); }
	bool CanPlayerBuySellOrder(AShooterPlayerController* ForPC, const FItemNetID& ItemID, int Quantity) { return NativeCall<bool, AShooterPlayerController*, const FItemNetID&, int>(this, "APrimalStructureMarket.CanPlayerBuySellOrder(AShooterPlayerController*,FItemNetID&,int)", ForPC, ItemID, Quantity); }
	static bool GetMarketInfo(UObject* WorldContextObject, int MarketID, FMarketInfo& OutMarketInfo) { return NativeCall<bool, UObject*, int, FMarketInfo&>(nullptr, "APrimalStructureMarket.GetMarketInfo(UObject*,int,FMarketInfo&)", WorldContextObject, MarketID, OutMarketInfo); }
	void AddTradeLogEntry(const FMarketTradeLogEntry& Entry) { NativeCall<void, const FMarketTradeLogEntry&>(this, "APrimalStructureMarket.AddTradeLogEntry(FMarketTradeLogEntry&)", Entry); }
	void UpdateMarketInfo(AShooterPlayerController* ByPC, const FMarketInfo& NewInfo) { NativeCall<void, AShooterPlayerController*, const FMarketInfo&>(this, "APrimalStructureMarket.UpdateMarketInfo(AShooterPlayerController*,FMarketInfo&)", ByPC, NewInfo); }
	bool ModifySellOrder(const FItemNetID& ItemID, int NewQuantity, int NewUnitPrice, AShooterPlayerController* ByPC) { return NativeCall<bool, const FItemNetID&, int, int, AShooterPlayerController*>(this, "APrimalStructureMarket.ModifySellOrder(FItemNetID&,int,int,AShooterPlayerController*)", ItemID, NewQuantity, NewUnitPrice, ByPC); }
	void BPOnSellOrderModified(const FItemNetID& ItemID, int NewSellOrderQuantity, int NewSellOrderUnitPrice, AShooterPlayerController* ByPC) { NativeCall<void, const FItemNetID&, int, int, AShooterPlayerController*>(this, "APrimalStructureMarket.BPOnSellOrderModified(FItemNetID&,int,int,AShooterPlayerController*)", ItemID, NewSellOrderQuantity, NewSellOrderUnitPrice, ByPC); }
	void GetMyMarketInfo(FMarketInfo& OutMarketInfo) { NativeCall<void, FMarketInfo&>(this, "APrimalStructureMarket.GetMyMarketInfo(FMarketInfo&)", OutMarketInfo); }
	void CompactOrderStacks(FMarketSellOrder& Order) { NativeCall<void, FMarketSellOrder&>(this, "APrimalStructureMarket.CompactOrderStacks(FMarketSellOrder&)", Order); }
	void BPOnSellOrderCanceled(const FItemNetID& ItemID, AShooterPlayerController* ByPC) { NativeCall<void, const FItemNetID&, AShooterPlayerController*>(this, "APrimalStructureMarket.BPOnSellOrderCanceled(FItemNetID&,AShooterPlayerController*)", ItemID, ByPC); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalStructureMarket.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	static FString* GetSellOrderItemDisplayName(FString* result, UPrimalItem* Item) { return NativeCall<FString*, FString*, UPrimalItem*>(nullptr, "APrimalStructureMarket.GetSellOrderItemDisplayName(UPrimalItem*)", result, Item); }
	const FMarketInfo& GetMyMarketInfo() { return NativeCall<const FMarketInfo&>(this, "APrimalStructureMarket.GetMyMarketInfo()"); }
	bool CancelSellOrder(const FItemNetID& ItemID, AShooterPlayerController* ByPC) { return NativeCall<bool, const FItemNetID&, AShooterPlayerController*>(this, "APrimalStructureMarket.CancelSellOrder(FItemNetID&,AShooterPlayerController*)", ItemID, ByPC); }
	bool ExecuteRequestOrder(AShooterPlayerController* ForPC, const FMarketRequestOrder& TheOrder, int Amount) { return NativeCall<bool, AShooterPlayerController*, const FMarketRequestOrder&, int>(this, "APrimalStructureMarket.ExecuteRequestOrder(AShooterPlayerController*,FMarketRequestOrder&,int)", ForPC, TheOrder, Amount); }
	void BPOnSellOrderCreatedByChar(const FItemNetID& ItemID, int SellOrderQuantity, int SellOrderUnitPrice, APrimalCharacter* ByCharacter) { NativeCall<void, const FItemNetID&, int, int, APrimalCharacter*>(this, "APrimalStructureMarket.BPOnSellOrderCreatedByChar(FItemNetID&,int,int,APrimalCharacter*)", ItemID, SellOrderQuantity, SellOrderUnitPrice, ByCharacter); }
	bool ExecuteSellOrder(AShooterPlayerController* ForPC, FMarketSellOrder& TheOrder, int AmountToBuy) { return NativeCall<bool, AShooterPlayerController*, FMarketSellOrder&, int>(this, "APrimalStructureMarket.ExecuteSellOrder(AShooterPlayerController*,FMarketSellOrder&,int)", ForPC, TheOrder, AmountToBuy); }
	bool CanPlayerCancelSellOrder(AShooterPlayerController* ByPC, const FItemNetID& ItemID) { return NativeCall<bool, AShooterPlayerController*, const FItemNetID&>(this, "APrimalStructureMarket.CanPlayerCancelSellOrder(AShooterPlayerController*,FItemNetID&)", ByPC, ItemID); }
	bool CanItemBeRequested(const FAssetData& AssetData) { return NativeCall<bool, const FAssetData&>(this, "APrimalStructureMarket.CanItemBeRequested(FAssetData&)", AssetData); }
	bool TryModifySellOrder(AShooterPlayerController* ByPC, const FItemNetID& ItemID, int NewQuantity, int NewUnitPrice) { return NativeCall<bool, AShooterPlayerController*, const FItemNetID&, int, int>(this, "APrimalStructureMarket.TryModifySellOrder(AShooterPlayerController*,FItemNetID&,int,int)", ByPC, ItemID, NewQuantity, NewUnitPrice); }
	bool TryExecuteSellOrder(AShooterPlayerController* ForPC, const FItemNetID& ItemID, int AmountToBuy, int SellOrderUnitPrice) { return NativeCall<bool, AShooterPlayerController*, const FItemNetID&, int, int>(this, "APrimalStructureMarket.TryExecuteSellOrder(AShooterPlayerController*,FItemNetID&,int,int)", ForPC, ItemID, AmountToBuy, SellOrderUnitPrice); }
	bool CanPlayerModifySellOrder(AShooterPlayerController* ByPC, const FItemNetID& ItemID, int NewQuantity, int NewUnitPrice) { return NativeCall<bool, AShooterPlayerController*, const FItemNetID&, int, int>(this, "APrimalStructureMarket.CanPlayerModifySellOrder(AShooterPlayerController*,FItemNetID&,int,int)", ByPC, ItemID, NewQuantity, NewUnitPrice); }
	bool TryCancelSellOrder(AShooterPlayerController* ByPC, const FItemNetID& ItemID) { return NativeCall<bool, AShooterPlayerController*, const FItemNetID&>(this, "APrimalStructureMarket.TryCancelSellOrder(AShooterPlayerController*,FItemNetID&)", ByPC, ItemID); }
	void BPOnSellOrderBought(AShooterPlayerController* ByPC, const FItemNetID& ItemID, int BoughtQuantity, int BoughtUnitPrice) { NativeCall<void, AShooterPlayerController*, const FItemNetID&, int, int>(this, "APrimalStructureMarket.BPOnSellOrderBought(AShooterPlayerController*,FItemNetID&,int,int)", ByPC, ItemID, BoughtQuantity, BoughtUnitPrice); }
};
