#pragma once
#include "BulkForward.h"
#include "UDataAsset.h"

struct UPrimaryDataAsset : public UDataAsset
{
public:
	UPrimaryDataAsset() = delete;
	~UPrimaryDataAsset() = delete;
	UPrimaryDataAsset(const UPrimaryDataAsset&) = delete;
	UPrimaryDataAsset& operator=(const UPrimaryDataAsset&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
