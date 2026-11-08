#pragma once
#include "BulkForward.h"
#include "UDataAsset.h"

struct UPrimalWirelessExchangeData : public UDataAsset
{
public:
	UPrimalWirelessExchangeData() = delete;
	~UPrimalWirelessExchangeData() = delete;
	UPrimalWirelessExchangeData(const UPrimalWirelessExchangeData&) = delete;
	UPrimalWirelessExchangeData& operator=(const UPrimalWirelessExchangeData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalWirelessExchangeData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalWirelessExchangeData"); }

	EWirelessTransmissionType& WirelessTypeField() { return *GetNativePointerField<EWirelessTransmissionType*>(this, "UPrimalWirelessExchangeData.WirelessType"); }
	FName& WirelessTagField() { return *GetNativePointerField<FName*>(this, "UPrimalWirelessExchangeData.WirelessTag"); }
	TArray<FName, TSizedDefaultAllocator<32> >& WirelessTagOverridesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalWirelessExchangeData.WirelessTagOverrides"); }
	float& SupplyRangeField() { return *GetNativePointerField<float*>(this, "UPrimalWirelessExchangeData.SupplyRange"); }
	float& SupplyLinkRangeField() { return *GetNativePointerField<float*>(this, "UPrimalWirelessExchangeData.SupplyLinkRange"); }
	float& ConsumeRangeField() { return *GetNativePointerField<float*>(this, "UPrimalWirelessExchangeData.ConsumeRange"); }
	bool& bShowPlacementPreviewField() { return *GetNativePointerField<bool*>(this, "UPrimalWirelessExchangeData.bShowPlacementPreview"); }
	int& MaxConnectedSourcesField() { return *GetNativePointerField<int*>(this, "UPrimalWirelessExchangeData.MaxConnectedSources"); }
	int& MaxConnectedConsumersField() { return *GetNativePointerField<int*>(this, "UPrimalWirelessExchangeData.MaxConnectedConsumers"); }
	bool& bIsManualConnectionField() { return *GetNativePointerField<bool*>(this, "UPrimalWirelessExchangeData.bIsManualConnection"); }
	UPrimalWirelessExchangeData* GetMatchingExchange(const TArray<UPrimalWirelessExchangeData*, TSizedDefaultAllocator<32> >& ExchangeList) { return NativeCall<UPrimalWirelessExchangeData*, const TArray<UPrimalWirelessExchangeData*, TSizedDefaultAllocator<32> >&>(this, "UPrimalWirelessExchangeData.GetMatchingExchange(TArray<UPrimalWirelessExchangeData*,TSizedDefaultAllocator<32>>&)", ExchangeList); }
	bool IsAtMaxNumConnectedConsumers(const FPrimalWirelessReferences& WirelessRef) { return NativeCall<bool, const FPrimalWirelessReferences&>(this, "UPrimalWirelessExchangeData.IsAtMaxNumConnectedConsumers(FPrimalWirelessReferences&)", WirelessRef); }
	bool IsAtMaxNumConnectedSources(const FPrimalWirelessReferences& WirelessRef) { return NativeCall<bool, const FPrimalWirelessReferences&>(this, "UPrimalWirelessExchangeData.IsAtMaxNumConnectedSources(FPrimalWirelessReferences&)", WirelessRef); }
};
