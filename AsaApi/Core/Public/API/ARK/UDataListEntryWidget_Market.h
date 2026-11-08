#pragma once
#include "BulkForward.h"
#include "UDataListEntryWidget.h"

struct UDataListEntryWidget_Market : public UDataListEntryWidget
{
public:
	UDataListEntryWidget_Market() = delete;
	~UDataListEntryWidget_Market() = delete;
	UDataListEntryWidget_Market(const UDataListEntryWidget_Market&) = delete;
	UDataListEntryWidget_Market& operator=(const UDataListEntryWidget_Market&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataListEntryWidget_Market"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataListEntryWidget_Market"); }

	FName& ItemNameTextNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget_Market.ItemNameTextName"); }
	FName& ItemDistanceTextNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget_Market.ItemDistanceTextName"); }
	FName& PricePerUnitTextNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget_Market.PricePerUnitTextName"); }
	bool& bPressedMarkField() { return *GetNativePointerField<bool*>(this, "UDataListEntryWidget_Market.bPressedMark"); }
	UTextBlock*& ItemNameTextField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryWidget_Market.ItemNameText"); }
	UTextBlock*& ItemDistanceTextField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryWidget_Market.ItemDistanceText"); }
	UTextBlock*& PricePerUnitTextField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryWidget_Market.PricePerUnitText"); }
	void BPInitMarketDataListEntry(APrimalStructureMarket* MarketRef, UUI_Market* MarketUI) { NativeCall<void, APrimalStructureMarket*, UUI_Market*>(this, "UDataListEntryWidget_Market.BPInitMarketDataListEntry(APrimalStructureMarket*,UUI_Market*)", MarketRef, MarketUI); }
	void BPInitMapMarker(APrimalStructureMarket* MarketRef, UUI_Market* MarketUI) { NativeCall<void, APrimalStructureMarket*, UUI_Market*>(this, "UDataListEntryWidget_Market.BPInitMapMarker(APrimalStructureMarket*,UUI_Market*)", MarketRef, MarketUI); }
	void NativeConstruct() { NativeCall<void>(this, "UDataListEntryWidget_Market.NativeConstruct()"); }
	void InitMarketDataListEntry(APrimalStructureMarket* MarketRef, UUI_Market* MarketUI, bool bIsRequestOrder) { NativeCall<void, APrimalStructureMarket*, UUI_Market*, bool>(this, "UDataListEntryWidget_Market.InitMarketDataListEntry(APrimalStructureMarket*,UUI_Market*,bool)", MarketRef, MarketUI, bIsRequestOrder); }
};
