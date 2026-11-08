#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UModelComponent : public UPrimitiveComponent
{
public:
	UModelComponent() = delete;
	~UModelComponent() = delete;
	UModelComponent(const UModelComponent&) = delete;
	UModelComponent& operator=(const UModelComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UModelComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UModelComponent"); }

	int& ComponentIndexField() { return *GetNativePointerField<int*>(this, "UModelComponent.ComponentIndex"); }
	TArray<unsigned short, TSizedDefaultAllocator<32> >& NodesField() { return *GetNativePointerField<TArray<unsigned short, TSizedDefaultAllocator<32> >*>(this, "UModelComponent.Nodes"); }
	void PropagateLightingScenarioChange() { NativeCall<void>(this, "UModelComponent.PropagateLightingScenarioChange()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UModelComponent.DestroyRenderState_Concurrent()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UModelComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	bool IsPrecomputedLightingValid() { return NativeCall<bool>(this, "UModelComponent.IsPrecomputedLightingValid()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UModelComponent.Serialize(FArchive&)", Ar); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UModelComponent._getUObject()"); }
	UMaterialInterface* GetMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UModelComponent.GetMaterial(int)", MaterialIndex); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UModelComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	bool GetPhysicsTriMeshData(FTriMeshCollisionData* CollisionData, bool InUseAllTriData) { return NativeCall<bool, FTriMeshCollisionData*, bool>(this, "UModelComponent.GetPhysicsTriMeshData(FTriMeshCollisionData*,bool)", CollisionData, InUseAllTriData); }
	UMaterialInterface* GetMaterialFromCollisionFaceIndex(int FaceIndex, int& SectionIndex) { return NativeCall<UMaterialInterface*, int, int&>(this, "UModelComponent.GetMaterialFromCollisionFaceIndex(int,int&)", FaceIndex, SectionIndex); }
	void BuildRenderData() { NativeCall<void>(this, "UModelComponent.BuildRenderData()"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UModelComponent.IsNameStableForNetworking()"); }
	bool SupportsStaticLighting() { return NativeCall<bool>(this, "UModelComponent.SupportsStaticLighting()"); }
	void PostLoad() { NativeCall<void>(this, "UModelComponent.PostLoad()"); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UModelComponent.GetBodySetup()"); }
	bool GetLightMapResolution(int& Width, int& Height) { return NativeCall<bool, int&, int&>(this, "UModelComponent.GetLightMapResolution(int&,int&)", Width, Height); }
	int GetNumMaterials() { return NativeCall<int>(this, "UModelComponent.GetNumMaterials()"); }
	bool GetTriMeshSizeEstimates(FTriMeshCollisionDataEstimates& OutTriMeshEstimates, bool bInUseAllTriData) { return NativeCall<bool, FTriMeshCollisionDataEstimates&, bool>(this, "UModelComponent.GetTriMeshSizeEstimates(FTriMeshCollisionDataEstimates&,bool)", OutTriMeshEstimates, bInUseAllTriData); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UModelComponent.CreateSceneProxy()"); }
	bool ContainsPhysicsTriMeshData(bool InUseAllTriData) { return NativeCall<bool, bool>(this, "UModelComponent.ContainsPhysicsTriMeshData(bool)", InUseAllTriData); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UModelComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	int GetStaticLightMapResolution() { return NativeCall<int>(this, "UModelComponent.GetStaticLightMapResolution()"); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "UModelComponent.ShouldRecreateProxyOnUpdateTransform()"); }
	void GetLightAndShadowMapMemoryUsage(int& LightMapMemoryUsage, int& ShadowMapMemoryUsage) { NativeCall<void, int&, int&>(this, "UModelComponent.GetLightAndShadowMapMemoryUsage(int&,int&)", LightMapMemoryUsage, ShadowMapMemoryUsage); }
	ELightMapInteractionType GetStaticLightingType() { return NativeCall<ELightMapInteractionType>(this, "UModelComponent.GetStaticLightingType()"); }
	bool WantsNegXTriMesh() { return NativeCall<bool>(this, "UModelComponent.WantsNegXTriMesh()"); }
	void CommitSurfaces() { NativeCall<void>(this, "UModelComponent.CommitSurfaces()"); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UModelComponent.InvalidateLightingCacheDetailed(bool,bool)", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
};
