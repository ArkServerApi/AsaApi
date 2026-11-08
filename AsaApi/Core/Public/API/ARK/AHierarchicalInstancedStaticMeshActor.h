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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AHierarchicalInstancedStaticMeshActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHierarchicalInstancedStaticMeshActor"); }

	UHierarchicalInstancedStaticMeshComponent*& InstancedStaticMeshComponentField() { return *GetNativePointerField<UHierarchicalInstancedStaticMeshComponent**>(this, "AHierarchicalInstancedStaticMeshActor.InstancedStaticMeshComponent"); }
};
