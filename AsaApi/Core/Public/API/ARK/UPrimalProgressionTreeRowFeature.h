#pragma once
#include "BulkForward.h"
#include "UPrimalProgressionTreeFeature.h"

struct UPrimalProgressionTreeRowFeature : public UPrimalProgressionTreeFeature
{
public:
	UPrimalProgressionTreeRowFeature() = delete;
	~UPrimalProgressionTreeRowFeature() = delete;
	UPrimalProgressionTreeRowFeature(const UPrimalProgressionTreeRowFeature&) = delete;
	UPrimalProgressionTreeRowFeature& operator=(const UPrimalProgressionTreeRowFeature&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	int GetNodeRow(FName NodeID) { return NativeCall<int, FName>(this, "UPrimalProgressionTreeRowFeature.GetNodeRow(FName)", NodeID); }
};
