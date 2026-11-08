#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include <API/UE/Math/Sphere.h>
#include "UInstancedStaticMeshComponent.h"

struct UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	UHierarchicalInstancedStaticMeshComponent() = delete;
	~UHierarchicalInstancedStaticMeshComponent() = delete;
	UHierarchicalInstancedStaticMeshComponent(const UHierarchicalInstancedStaticMeshComponent&) = delete;
	UHierarchicalInstancedStaticMeshComponent& operator=(const UHierarchicalInstancedStaticMeshComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHierarchicalInstancedStaticMeshComponent"); }

	UE::Math::TVector<double>& TranslatedInstanceSpaceOriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UHierarchicalInstancedStaticMeshComponent.TranslatedInstanceSpaceOrigin"); }
	TArray<int, TSizedDefaultAllocator<32> >& SortedInstancesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UHierarchicalInstancedStaticMeshComponent.SortedInstances"); }
	int& NumBuiltInstancesField() { return *GetNativePointerField<int*>(this, "UHierarchicalInstancedStaticMeshComponent.NumBuiltInstances"); }
	int& NumBuiltRenderInstancesField() { return *GetNativePointerField<int*>(this, "UHierarchicalInstancedStaticMeshComponent.NumBuiltRenderInstances"); }
	float& CurrentDensityScalingField() { return *GetNativePointerField<float*>(this, "UHierarchicalInstancedStaticMeshComponent.CurrentDensityScaling"); }
	int& OcclusionLayerNumNodesField() { return *GetNativePointerField<int*>(this, "UHierarchicalInstancedStaticMeshComponent.OcclusionLayerNumNodes"); }
	UE::Math::TBoxSphereBounds<double, double>& CacheMeshExtendedBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UHierarchicalInstancedStaticMeshComponent.CacheMeshExtendedBounds"); }
	int& InstanceCountToRenderField() { return *GetNativePointerField<int*>(this, "UHierarchicalInstancedStaticMeshComponent.InstanceCountToRender"); }
	EHISMViewRelevanceType& ViewRelevanceTypeField() { return *GetNativePointerField<EHISMViewRelevanceType*>(this, "UHierarchicalInstancedStaticMeshComponent.ViewRelevanceType"); }
	BitFieldValue<bool, unsigned __int32> bUseTranslatedInstanceSpace() { return { this, "UHierarchicalInstancedStaticMeshComponent.bUseTranslatedInstanceSpace"}; }
	BitFieldValue<bool, unsigned __int32> bEnableDensityScaling() { return { this, "UHierarchicalInstancedStaticMeshComponent.bEnableDensityScaling"}; }
	BitFieldValue<bool, unsigned char> bIsAsyncBuilding() { return { this, "UHierarchicalInstancedStaticMeshComponent.bIsAsyncBuilding"}; }
	BitFieldValue<bool, unsigned char> bIsOutOfDate() { return { this, "UHierarchicalInstancedStaticMeshComponent.bIsOutOfDate"}; }
	BitFieldValue<bool, unsigned char> bConcurrentChanges() { return { this, "UHierarchicalInstancedStaticMeshComponent.bConcurrentChanges"}; }
	BitFieldValue<bool, unsigned char> bAutoRebuildTreeOnInstanceChanges() { return { this, "UHierarchicalInstancedStaticMeshComponent.bAutoRebuildTreeOnInstanceChanges"}; }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UHierarchicalInstancedStaticMeshComponent.Serialize(FArchive&)", Ar); }
	void PostEditImport() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.PostEditImport()"); }
	TArray<int, TSizedDefaultAllocator<32> >* GetInstancesOverlappingSphere(TArray<int, TSizedDefaultAllocator<32> >* result, const UE::Math::TVector<double>& Center, float Radius, bool bSphereInWorldSpace) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*, const UE::Math::TVector<double>&, float, bool>(this, "UHierarchicalInstancedStaticMeshComponent.GetInstancesOverlappingSphere(UE::Math::TVector<double>&,float,bool)", result, Center, Radius, bSphereInWorldSpace); }
	APrimalDestructibleActor* HideInstanceWithoutRemoval(int InstanceIndex, UE::Math::TVector<double>* HitDirection, float Damage, float TotalHealth, float DontSpawnDestructibleBelowScale) { if (!HitDirection) throw std::invalid_argument("Null native value parameter"); return NativeCall<APrimalDestructibleActor *, int, UE :: Math :: TVector < double >, float, float, float>(this, "UHierarchicalInstancedStaticMeshComponent.HideInstanceWithoutRemoval(int,UE::Math::TVector<double>,float,float,float)", InstanceIndex, *HitDirection, Damage, TotalHealth, DontSpawnDestructibleBelowScale); }
	void ApplyComponentInstanceData(FInstancedStaticMeshComponentInstanceData* InstancedMeshData) { NativeCall<void, FInstancedStaticMeshComponentInstanceData*>(this, "UHierarchicalInstancedStaticMeshComponent.ApplyComponentInstanceData(FInstancedStaticMeshComponentInstanceData*)", InstancedMeshData); }
	void PostLoad() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.PostLoad()"); }
	void OnPostLoadPerInstanceData() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.OnPostLoadPerInstanceData()"); }
	UE::Math::TVector<double>* GetTranslatedInstanceSpaceOrigin(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UHierarchicalInstancedStaticMeshComponent.GetTranslatedInstanceSpaceOrigin()", result); }
	void PostBuildStats() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.PostBuildStats()"); }
	bool SupportsRemoveSwap() { return NativeCall<bool>(this, "UHierarchicalInstancedStaticMeshComponent.SupportsRemoveSwap()"); }
	void ApplyEmpty() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.ApplyEmpty()"); }
	bool BatchUpdateInstancesData(int StartInstanceIndex, int NumInstances, FInstancedStaticMeshInstanceData* StartInstanceData, bool bMarkRenderStateDirty, bool bTeleport) { return NativeCall<bool, int, int, FInstancedStaticMeshInstanceData*, bool, bool>(this, "UHierarchicalInstancedStaticMeshComponent.BatchUpdateInstancesData(int,int,FInstancedStaticMeshInstanceData*,bool,bool)", StartInstanceIndex, NumInstances, StartInstanceData, bMarkRenderStateDirty, bTeleport); }
	bool BuildTreeIfOutdated(bool Async, bool ForceUpdate) { return NativeCall<bool, bool, bool>(this, "UHierarchicalInstancedStaticMeshComponent.BuildTreeIfOutdated(bool,bool)", Async, ForceUpdate); }
	int GetOverlappingSphereCount(const UE::Math::TSphere<double>& Sphere) { return NativeCall<int, const UE::Math::TSphere<double>&>(this, "UHierarchicalInstancedStaticMeshComponent.GetOverlappingSphereCount(UE::Math::TSphere<double>&)", Sphere); }
	void PreAllocateInstancesMemory(int AddedInstanceCount) { NativeCall<void, int>(this, "UHierarchicalInstancedStaticMeshComponent.PreAllocateInstancesMemory(int)", AddedInstanceCount); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UHierarchicalInstancedStaticMeshComponent.CreateSceneProxy()"); }
	bool RemoveInstances(const TArray<int, TSizedDefaultAllocator<32> >& InstancesToRemove) { return NativeCall<bool, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "UHierarchicalInstancedStaticMeshComponent.RemoveInstances(TArray<int,TSizedDefaultAllocator<32>>&)", InstancesToRemove); }
	int GetNumRenderInstances() { return NativeCall<int>(this, "UHierarchicalInstancedStaticMeshComponent.GetNumRenderInstances()"); }
	bool SetCustomDataValue(int InstanceIndex, int CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty) { return NativeCall<bool, int, int, float, bool>(this, "UHierarchicalInstancedStaticMeshComponent.SetCustomDataValue(int,int,float,bool)", InstanceIndex, CustomDataIndex, CustomDataValue, bMarkRenderStateDirty); }
	void PropagateLightingScenarioChange() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.PropagateLightingScenarioChange()"); }
	bool RemoveInstance(int InstanceIndex, const UE::Math::TVector<double>& HitDirection, float Damage, float TotalHealth) { return NativeCall<bool, int, const UE::Math::TVector<double>&, float, float>(this, "UHierarchicalInstancedStaticMeshComponent.RemoveInstance(int,UE::Math::TVector<double>&,float,float)", InstanceIndex, HitDirection, Damage, TotalHealth); }
	void ClearInstances() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.ClearInstances()"); }
	void BuildTreeAsync() { NativeCall<void>(this, "UHierarchicalInstancedStaticMeshComponent.BuildTreeAsync()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UHierarchicalInstancedStaticMeshComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	UE::Math::TVector<double>* CalcTranslatedInstanceSpaceOrigin(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UHierarchicalInstancedStaticMeshComponent.CalcTranslatedInstanceSpaceOrigin()", result); }
	void BuildComponentInstanceData(ERHIFeatureLevel::Type FeatureLevel, FInstanceUpdateComponentDesc& OutData) { NativeCall<void, ERHIFeatureLevel::Type, FInstanceUpdateComponentDesc&>(this, "UHierarchicalInstancedStaticMeshComponent.BuildComponentInstanceData(ERHIFeatureLevel::Type,FInstanceUpdateComponentDesc&)", FeatureLevel, OutData); }
	void BuildComponentInstanceData(EShaderPlatform InShaderPlatform, FInstanceUpdateComponentDesc& OutData) { NativeCall<void, EShaderPlatform, FInstanceUpdateComponentDesc&>(this, "UHierarchicalInstancedStaticMeshComponent.BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc&)", InShaderPlatform, OutData); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHierarchicalInstancedStaticMeshComponent"); }
	int DesiredInstancesPerLeaf() { return NativeCall<int>(this, "UHierarchicalInstancedStaticMeshComponent.DesiredInstancesPerLeaf()"); }
	bool RemoveInstances(const TArray<int, TSizedDefaultAllocator<32> >& InstancesToRemove, bool bInstanceArrayAlreadySortedInReverseOrder) { return NativeCall<bool, const TArray<int, TSizedDefaultAllocator<32> >&, bool>(this, "UHierarchicalInstancedStaticMeshComponent.RemoveInstances(TArray<int,TSizedDefaultAllocator<32>>&,bool)", InstancesToRemove, bInstanceArrayAlreadySortedInReverseOrder); }
};
