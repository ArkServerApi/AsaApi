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
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UDataAsset.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
