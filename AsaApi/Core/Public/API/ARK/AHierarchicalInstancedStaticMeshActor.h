#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AHierarchicalInstancedStaticMeshActor : public AActor
{
public:
	AHierarchicalInstancedStaticMeshActor() = delete;
	~AHierarchicalInstancedStaticMeshActor() = delete;
	AHierarchicalInstancedStaticMeshActor(const AHierarchicalInstancedStaticMeshActor&) = delete;
	AHierarchicalInstancedStaticMeshActor& operator=(const AHierarchicalInstancedStaticMeshActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UHierarchicalInstancedStaticMeshComponent*& InstancedStaticMeshComponentField() { return *GetNativePointerField<UHierarchicalInstancedStaticMeshComponent**>(this, "AHierarchicalInstancedStaticMeshActor.InstancedStaticMeshComponent"); }
};
