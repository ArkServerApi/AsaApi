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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FTribeData& TribeDataField() { return *GetNativePointerField<FTribeData*>(this, "UPrimalTribeData.TribeData"); }
};
