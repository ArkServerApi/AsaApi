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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimaryDataAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimaryDataAsset"); }

};
