#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AHoudiniAssetActor : public AActor
{
public:
	AHoudiniAssetActor() = delete;
	~AHoudiniAssetActor() = delete;
	AHoudiniAssetActor(const AHoudiniAssetActor&) = delete;
	AHoudiniAssetActor& operator=(const AHoudiniAssetActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UHoudiniCookable* GetHoudiniCookable() { return NativeCall<UHoudiniCookable*>(this, "AHoudiniAssetActor.GetHoudiniCookable()"); }
};
