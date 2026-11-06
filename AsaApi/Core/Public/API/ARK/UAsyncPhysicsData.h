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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	int& ServerFrameField() { return *GetNativePointerField<int*>(this, "UAsyncPhysicsData.ServerFrame"); }
	int& ReplicationRedundancyField() { return *GetNativePointerField<int*>(this, "UAsyncPhysicsData.ReplicationRedundancy"); }
};
