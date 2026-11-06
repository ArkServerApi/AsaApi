#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UPrimalTribeData : public UObject
{
public:
	UPrimalTribeData() = delete;
	~UPrimalTribeData() = delete;
	UPrimalTribeData(const UPrimalTribeData&) = delete;
	UPrimalTribeData& operator=(const UPrimalTribeData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalTribeData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalTribeData"); }

	FTribeData& TribeDataField() { return *GetNativePointerField<FTribeData*>(this, "UPrimalTribeData.TribeData"); }
};
