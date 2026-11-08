#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UMapBuildDataRegistry : public UObject
{
public:
	UMapBuildDataRegistry() = delete;
	~UMapBuildDataRegistry() = delete;
	UMapBuildDataRegistry(const UMapBuildDataRegistry&) = delete;
	UMapBuildDataRegistry& operator=(const UMapBuildDataRegistry&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMapBuildDataRegistry"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMapBuildDataRegistry"); }
	bool& bSetupResourceClustersField() { return *GetNativePointerField<bool*>(this, "UMapBuildDataRegistry.bSetupResourceClusters"); }
	FRenderCommandFence& DestroyFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UMapBuildDataRegistry.DestroyFence"); }
	FVolumetricLightMapGridDesc*& VolumetricLightMapGridDescField() { return *GetNativePointerField<FVolumetricLightMapGridDesc**>(this, "UMapBuildDataRegistry.VolumetricLightMapGridDesc"); }
	FMeshMapBuildData* GetMeshBuildDataDuringBuild(FGuid* MeshId) { if (!MeshId) throw std::invalid_argument("Null native value parameter"); return NativeCall<FMeshMapBuildData *, FGuid>(this, "UMapBuildDataRegistry.GetMeshBuildDataDuringBuild(FGuid)", *MeshId); }
	void BeginDestroy() { NativeCall<void>(this, "UMapBuildDataRegistry.BeginDestroy()"); }
	void SetupLightmapResourceClusters() { NativeCall<void>(this, "UMapBuildDataRegistry.SetupLightmapResourceClusters()"); }
	void RemoveRegistry(UMapBuildDataRegistry* Registry) { NativeCall<void, UMapBuildDataRegistry*>(this, "UMapBuildDataRegistry.RemoveRegistry(UMapBuildDataRegistry*)", Registry); }
	UMapBuildDataRegistry* FindRegistryWorldPartition(const AActor* Actor) { return NativeCall<UMapBuildDataRegistry*, const AActor*>(this, "UMapBuildDataRegistry.FindRegistryWorldPartition(AActor*)", Actor); }
	static UMapBuildDataRegistry* Get(ULevel* OwnerLevel, UWorld* World) { return NativeCall<UMapBuildDataRegistry*, ULevel*, UWorld*>(nullptr, "UMapBuildDataRegistry.Get(ULevel*,UWorld*)", OwnerLevel, World); }
	void AddRegistry(UMapBuildDataRegistry* Registry) { NativeCall<void, UMapBuildDataRegistry*>(this, "UMapBuildDataRegistry.AddRegistry(UMapBuildDataRegistry*)", Registry); }
	void PostLoad() { NativeCall<void>(this, "UMapBuildDataRegistry.PostLoad()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UMapBuildDataRegistry.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	static UMapBuildDataRegistry* Get(const UActorComponent* Component) { return NativeCall<UMapBuildDataRegistry*, const UActorComponent*>(nullptr, "UMapBuildDataRegistry.Get(UActorComponent*)", Component); }
	const FSkyAtmosphereMapBuildData* GetSkyAtmosphereBuildData(const FGuid& Guid) { return NativeCall<const FSkyAtmosphereMapBuildData*, const FGuid&>(this, "UMapBuildDataRegistry.GetSkyAtmosphereBuildData(FGuid&)", Guid); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMapBuildDataRegistry.IsReadyForFinishDestroy()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UMapBuildDataRegistry.Serialize(FArchive&)", Ar); }
	FMeshMapBuildData* GetMeshBuildData(FGuid* MeshId) { if (!MeshId) throw std::invalid_argument("Null native value parameter"); return NativeCall<FMeshMapBuildData *, FGuid>(this, "UMapBuildDataRegistry.GetMeshBuildData(FGuid)", *MeshId); }
	void FinishDestroy() { NativeCall<void>(this, "UMapBuildDataRegistry.FinishDestroy()"); }
	FLightComponentMapBuildData* GetLightBuildData(FGuid* LightId) { if (!LightId) throw std::invalid_argument("Null native value parameter"); return NativeCall<FLightComponentMapBuildData *, FGuid>(this, "UMapBuildDataRegistry.GetLightBuildData(FGuid)", *LightId); }
	void CleanupTransientOverrideMapBuildData() { NativeCall<void>(this, "UMapBuildDataRegistry.CleanupTransientOverrideMapBuildData()"); }
};
