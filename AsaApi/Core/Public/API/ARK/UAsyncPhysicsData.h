#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UAsyncPhysicsData : public UObject
{
public:
	UAsyncPhysicsData() = delete;
	~UAsyncPhysicsData() = delete;
	UAsyncPhysicsData(const UAsyncPhysicsData&) = delete;
	UAsyncPhysicsData& operator=(const UAsyncPhysicsData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAsyncPhysicsData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAsyncPhysicsData"); }
	int& ServerFrameField() { return *GetNativePointerField<int*>(this, "UAsyncPhysicsData.ServerFrame"); }
	int& ReplicationRedundancyField() { return *GetNativePointerField<int*>(this, "UAsyncPhysicsData.ReplicationRedundancy"); }
};
