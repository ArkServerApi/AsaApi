#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UMassVisualizationComponent : public UActorComponent
{
public:
	UMassVisualizationComponent() = delete;
	~UMassVisualizationComponent() = delete;
	UMassVisualizationComponent(const UMassVisualizationComponent&) = delete;
	UMassVisualizationComponent& operator=(const UMassVisualizationComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMassVisualizationComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMassVisualizationComponent"); }

	FMassISMCSharedDataMap& ISMCSharedDataField() { return *GetNativePointerField<FMassISMCSharedDataMap*>(this, "UMassVisualizationComponent.ISMCSharedData"); }
	FMassInstancedSkinnedMeshComponentSharedDataMap& InstancedSkinnedMeshComponentSharedDataField() { return *GetNativePointerField<FMassInstancedSkinnedMeshComponentSharedDataMap*>(this, "UMassVisualizationComponent.InstancedSkinnedMeshComponentSharedData"); }
	void ConstructStaticMeshComponents() { NativeCall<void>(this, "UMassVisualizationComponent.ConstructStaticMeshComponents()"); }
	void ProcessRemovesForComponent(UInstancedSkinnedMeshComponent& InstancedSkinnedMeshComponent, FMassInstancedSkinnedMeshComponentSharedData& SharedData) { NativeCall<void, UInstancedSkinnedMeshComponent&, FMassInstancedSkinnedMeshComponentSharedData&>(this, "UMassVisualizationComponent.ProcessRemovesForComponent(UInstancedSkinnedMeshComponent&,FMassInstancedSkinnedMeshComponentSharedData&)", InstancedSkinnedMeshComponent, SharedData); }
	void PostInitProperties() { NativeCall<void>(this, "UMassVisualizationComponent.PostInitProperties()"); }
	void ProcessRemoves(UInstancedStaticMeshComponent& ISMComponent, FMassISMCSharedData& SharedData, bool bUpdateNavigation) { NativeCall<void, UInstancedStaticMeshComponent&, FMassISMCSharedData&, bool>(this, "UMassVisualizationComponent.ProcessRemoves(UInstancedStaticMeshComponent&,FMassISMCSharedData&,bool)", ISMComponent, SharedData, bUpdateNavigation); }
	void ConstructSkinnedMeshComponents() { NativeCall<void>(this, "UMassVisualizationComponent.ConstructSkinnedMeshComponents()"); }
	void HandleChangesWithExternalIDTrackingForComponent(UInstancedSkinnedMeshComponent& InstancedSkinnedMeshComponent, FMassInstancedSkinnedMeshComponentSharedData& SharedData) { NativeCall<void, UInstancedSkinnedMeshComponent&, FMassInstancedSkinnedMeshComponentSharedData&>(this, "UMassVisualizationComponent.HandleChangesWithExternalIDTrackingForComponent(UInstancedSkinnedMeshComponent&,FMassInstancedSkinnedMeshComponentSharedData&)", InstancedSkinnedMeshComponent, SharedData); }
	void EndVisualChanges() { NativeCall<void>(this, "UMassVisualizationComponent.EndVisualChanges()"); }
	void HandleChangesWithExternalIDTracking(UInstancedStaticMeshComponent& ISMComponent, FMassISMCSharedData& SharedData) { NativeCall<void, UInstancedStaticMeshComponent&, FMassISMCSharedData&>(this, "UMassVisualizationComponent.HandleChangesWithExternalIDTracking(UInstancedStaticMeshComponent&,FMassISMCSharedData&)", ISMComponent, SharedData); }
};
