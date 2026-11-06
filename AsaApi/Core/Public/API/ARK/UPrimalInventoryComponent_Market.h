#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalInventoryComponent.h"

struct UPrimalInventoryComponent_Market : UPrimalInventoryComponent
{
public:
	UPrimalInventoryComponent_Market() = delete;
	~UPrimalInventoryComponent_Market() = delete;
	UPrimalInventoryComponent_Market(const UPrimalInventoryComponent_Market&) = delete;
	UPrimalInventoryComponent_Market& operator=(const UPrimalInventoryComponent_Market&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalInventoryComponent_Market"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalInventoryComponent_Market"); }



	bool ShouldApplyItemSpoilingTimeMultipliers(UPrimalItem* anItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalInventoryComponent_Market.ShouldApplyItemSpoilingTimeMultipliers(UPrimalItem*)", anItem); }
	void OnRegister() { NativeCall<void>(this, "UPrimalInventoryComponent_Market.OnRegister()"); }
	void RefreshDataListSellOrderOverlays(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalInventoryComponent_Market.RefreshDataListSellOrderOverlays(AShooterPlayerController*)", ForPC); }
	void OnInventoryDataListRefreshed() { NativeCall<void>(this, "UPrimalInventoryComponent_Market.OnInventoryDataListRefreshed()"); }

	TWeakObjectPtr<APrimalStructureMarket, FWeakObjectPtr>& MyMarketField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureMarket, FWeakObjectPtr>*>(this, "UPrimalInventoryComponent_Market.MyMarket"); }
};
