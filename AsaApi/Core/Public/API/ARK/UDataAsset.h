#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UDataAsset : public UObject
{
public:
	UDataAsset() = delete;
	~UDataAsset() = delete;
	UDataAsset(const UDataAsset&) = delete;
	UDataAsset& operator=(const UDataAsset&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
