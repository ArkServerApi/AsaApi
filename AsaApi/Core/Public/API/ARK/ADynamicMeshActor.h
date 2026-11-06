#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADynamicMeshActor : public AActor
{
public:
	ADynamicMeshActor() = delete;
	~ADynamicMeshActor() = delete;
	ADynamicMeshActor(const ADynamicMeshActor&) = delete;
	ADynamicMeshActor& operator=(const ADynamicMeshActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bEnableComputeMeshPoolField() { return *GetNativePointerField<bool*>(this, "ADynamicMeshActor.bEnableComputeMeshPool"); }
	UDynamicMeshPool* GetComputeMeshPool() { return NativeCall<UDynamicMeshPool*>(this, "ADynamicMeshActor.GetComputeMeshPool()"); }
};
