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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADynamicMeshActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADynamicMeshActor"); }

	bool& bEnableComputeMeshPoolField() { return *GetNativePointerField<bool*>(this, "ADynamicMeshActor.bEnableComputeMeshPool"); }
	UDynamicMeshPool* GetComputeMeshPool() { return NativeCall<UDynamicMeshPool*>(this, "ADynamicMeshActor.GetComputeMeshPool()"); }
};
