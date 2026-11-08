#pragma once
#include "BulkForward.h"
#include "UBaseDynamicMeshComponent.h"

struct UDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	UDynamicMeshComponent() = delete;
	~UDynamicMeshComponent() = delete;
	UDynamicMeshComponent(const UDynamicMeshComponent&) = delete;
	UDynamicMeshComponent& operator=(const UDynamicMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDynamicMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDynamicMeshComponent"); }

	bool& bInvalidateProxyOnChangeField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bInvalidateProxyOnChange"); }
	FDelegateHandle& MeshObjectChangedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UDynamicMeshComponent.MeshObjectChangedHandle"); }
	bool& bIsEditableField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bIsEditable"); }
	bool& bAllowsGeometrySelectionField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bAllowsGeometrySelection"); }
	EDynamicMeshComponentTangentsMode& TangentsTypeField() { return *GetNativePointerField<EDynamicMeshComponentTangentsMode*>(this, "UDynamicMeshComponent.TangentsType"); }
	bool& bAutoCalculatedTangentsValidField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bAutoCalculatedTangentsValid"); }
	bool& bUseAsyncCookingField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bUseAsyncCooking"); }
	bool& bEnableComplexCollisionField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bEnableComplexCollision"); }
	bool& bDeferCollisionUpdatesField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bDeferCollisionUpdates"); }
	bool& bDisableMeshUVHitResultsField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bDisableMeshUVHitResults"); }
	bool& bTransientDeferCollisionUpdatesField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bTransientDeferCollisionUpdates"); }
	bool& bCollisionUpdatePendingField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bCollisionUpdatePending"); }
	FKAggregateGeom& AggGeomField() { return *GetNativePointerField<FKAggregateGeom*>(this, "UDynamicMeshComponent.AggGeom"); }
	bool& bProxyValidField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bProxyValid"); }
	bool& bProxyVerifyUsedMaterialsField() { return *GetNativePointerField<bool*>(this, "UDynamicMeshComponent.bProxyVerifyUsedMaterials"); }
	void NotifyMeshModified() { NativeCall<void>(this, "UDynamicMeshComponent.NotifyMeshModified()"); }
	bool GetPhysicsTriMeshData(FTriMeshCollisionData* CollisionData, bool InUseAllTriData) { return NativeCall<bool, FTriMeshCollisionData*, bool>(this, "UDynamicMeshComponent.GetPhysicsTriMeshData(FTriMeshCollisionData*,bool)", CollisionData, InUseAllTriData); }
	void FastNotifyVertexAttributesUpdated(bool bNormals, bool bColors, bool bUVs) { NativeCall<void, bool, bool, bool>(this, "UDynamicMeshComponent.FastNotifyVertexAttributesUpdated(bool,bool,bool)", bNormals, bColors, bUVs); }
	void ClearSimpleCollisionShapes(bool bUpdateCollision) { NativeCall<void, bool>(this, "UDynamicMeshComponent.ClearSimpleCollisionShapes(bool)", bUpdateCollision); }
	void SetBodySetup(UBodySetup* NewSetup) { NativeCall<void, UBodySetup*>(this, "UDynamicMeshComponent.SetBodySetup(UBodySetup*)", NewSetup); }
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate) { NativeCall<void, bool, bool>(this, "UDynamicMeshComponent.SetComplexAsSimpleCollisionEnabled(bool,bool)", bEnabled, bImmediateUpdate); }
	void FinishPhysicsAsyncCook(bool bSuccess, UBodySetup* FinishedBodySetup) { NativeCall<void, bool, UBodySetup*>(this, "UDynamicMeshComponent.FinishPhysicsAsyncCook(bool,UBodySetup*)", bSuccess, FinishedBodySetup); }
	void NotifyMaterialSetUpdated() { NativeCall<void>(this, "UDynamicMeshComponent.NotifyMaterialSetUpdated()"); }
	bool HasTriangleColorFunction() { return NativeCall<bool>(this, "UDynamicMeshComponent.HasTriangleColorFunction()"); }
	void UpdateLocalBounds() { NativeCall<void>(this, "UDynamicMeshComponent.UpdateLocalBounds()"); }
	bool WantsNegXTriMesh() { return NativeCall<bool>(this, "UDynamicMeshComponent.WantsNegXTriMesh()"); }
	void NotifyMeshUpdated() { NativeCall<void>(this, "UDynamicMeshComponent.NotifyMeshUpdated()"); }
	void OnChildDetached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "UDynamicMeshComponent.OnChildDetached(USceneComponent*)", ChildComponent); }
	void FastNotifyColorsUpdated() { NativeCall<void>(this, "UDynamicMeshComponent.FastNotifyColorsUpdated()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UDynamicMeshComponent.CreateSceneProxy()"); }
	void OnChildAttached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "UDynamicMeshComponent.OnChildAttached(USceneComponent*)", ChildComponent); }
	void ApplyChange(const FMeshChange* Change, bool bRevert) { NativeCall<void, const FMeshChange*, bool>(this, "UDynamicMeshComponent.ApplyChange(FMeshChange*,bool)", Change, bRevert); }
	void FastNotifyPositionsUpdated(bool bNormals, bool bColors, bool bUVs) { NativeCall<void, bool, bool, bool>(this, "UDynamicMeshComponent.FastNotifyPositionsUpdated(bool,bool,bool)", bNormals, bColors, bUVs); }
	void FastNotifyVerticesUpdated(const TArray<int, TSizedDefaultAllocator<32> >& Vertices, EMeshRenderAttributeFlags UpdatedAttributes) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&, EMeshRenderAttributeFlags>(this, "UDynamicMeshComponent.FastNotifyVerticesUpdated(TArray<int,TSizedDefaultAllocator<32>>&,EMeshRenderAttributeFlags)", Vertices, UpdatedAttributes); }
	void InvalidatePhysicsData() { NativeCall<void>(this, "UDynamicMeshComponent.InvalidatePhysicsData()"); }
	void RebuildPhysicsData() { NativeCall<void>(this, "UDynamicMeshComponent.RebuildPhysicsData()"); }
	void ApplyChange(const FMeshReplacementChange* Change, bool bRevert) { NativeCall<void, const FMeshReplacementChange*, bool>(this, "UDynamicMeshComponent.ApplyChange(FMeshReplacementChange*,bool)", Change, bRevert); }
	UDynamicMesh* GetDynamicMesh() { return NativeCall<UDynamicMesh*>(this, "UDynamicMeshComponent.GetDynamicMesh()"); }
	void SetDynamicMesh(UDynamicMesh* NewMesh) { NativeCall<void, UDynamicMesh*>(this, "UDynamicMeshComponent.SetDynamicMesh(UDynamicMesh*)", NewMesh); }
	void BeginDestroy() { NativeCall<void>(this, "UDynamicMeshComponent.BeginDestroy()"); }
	void ClearTriangleColorFunction(EDynamicMeshComponentRenderUpdateMode UpdateMode) { NativeCall<void, EDynamicMeshComponentRenderUpdateMode>(this, "UDynamicMeshComponent.ClearTriangleColorFunction(EDynamicMeshComponentRenderUpdateMode)", UpdateMode); }
	bool GetTriMeshSizeEstimates(FTriMeshCollisionDataEstimates& OutTriMeshEstimates, bool bInUseAllTriData) { return NativeCall<bool, FTriMeshCollisionDataEstimates&, bool>(this, "UDynamicMeshComponent.GetTriMeshSizeEstimates(FTriMeshCollisionDataEstimates&,bool)", OutTriMeshEstimates, bInUseAllTriData); }
	void UpdateDistanceField() { NativeCall<void>(this, "UDynamicMeshComponent.UpdateDistanceField()"); }
	void SetSimpleCollisionShapes(const FKAggregateGeom& AggGeomIn, bool bUpdateCollision) { NativeCall<void, const FKAggregateGeom&, bool>(this, "UDynamicMeshComponent.SetSimpleCollisionShapes(FKAggregateGeom&,bool)", AggGeomIn, bUpdateCollision); }
	void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors) { NativeCall<void, bool, bool, bool, bool>(this, "UDynamicMeshComponent.NotifyMeshVertexAttributesModified(bool,bool,bool,bool)", bPositions, bNormals, bUVs, bColors); }
	void SetInvalidateProxyOnChangeEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UDynamicMeshComponent.SetInvalidateProxyOnChangeEnabled(bool)", bEnabled); }
	void FastNotifyVertexAttributesUpdated(EMeshRenderAttributeFlags UpdatedAttributes) { NativeCall<void, EMeshRenderAttributeFlags>(this, "UDynamicMeshComponent.FastNotifyVertexAttributesUpdated(EMeshRenderAttributeFlags)", UpdatedAttributes); }
	void PostLoad() { NativeCall<void>(this, "UDynamicMeshComponent.PostLoad()"); }
	void SetSceneProxyVerifyUsedMaterials(bool bState) { NativeCall<void, bool>(this, "UDynamicMeshComponent.SetSceneProxyVerifyUsedMaterials(bool)", bState); }
	void ApplyChange(const FMeshVertexChange* Change, bool bRevert) { NativeCall<void, const FMeshVertexChange*, bool>(this, "UDynamicMeshComponent.ApplyChange(FMeshVertexChange*,bool)", Change, bRevert); }
	void FastNotifySecondaryTrianglesChanged() { NativeCall<void>(this, "UDynamicMeshComponent.FastNotifySecondaryTrianglesChanged()"); }
	void InvalidateAutoCalculatedTangents() { NativeCall<void>(this, "UDynamicMeshComponent.InvalidateAutoCalculatedTangents()"); }
	void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType) { NativeCall<void, EDynamicMeshComponentTangentsMode>(this, "UDynamicMeshComponent.SetTangentsType(EDynamicMeshComponentTangentsMode)", NewTangentsType); }
	bool HasVertexColorRemappingFunction() { return NativeCall<bool>(this, "UDynamicMeshComponent.HasVertexColorRemappingFunction()"); }
	UBodySetup* CreateBodySetupHelper() { return NativeCall<UBodySetup*>(this, "UDynamicMeshComponent.CreateBodySetupHelper()"); }
	FBaseDynamicMeshSceneProxy* GetBaseSceneProxy() { return NativeCall<FBaseDynamicMeshSceneProxy*>(this, "UDynamicMeshComponent.GetBaseSceneProxy()"); }
	void DisableSecondaryTriangleBuffers() { NativeCall<void>(this, "UDynamicMeshComponent.DisableSecondaryTriangleBuffers()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UDynamicMeshComponent._getUObject()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UDynamicMeshComponent.Serialize(FArchive&)", Ar); }
	void ClearVertexColorRemappingFunction(EDynamicMeshComponentRenderUpdateMode UpdateMode) { NativeCall<void, EDynamicMeshComponentRenderUpdateMode>(this, "UDynamicMeshComponent.ClearVertexColorRemappingFunction(EDynamicMeshComponentRenderUpdateMode)", UpdateMode); }
	void ResetProxy() { NativeCall<void>(this, "UDynamicMeshComponent.ResetProxy()"); }
	void UpdateCollision(bool bOnlyIfPending) { NativeCall<void, bool>(this, "UDynamicMeshComponent.UpdateCollision(bool)", bOnlyIfPending); }
	void FastNotifyTriangleVerticesUpdated(const TArray<int, TSizedDefaultAllocator<32> >& Triangles, EMeshRenderAttributeFlags UpdatedAttributes) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&, EMeshRenderAttributeFlags>(this, "UDynamicMeshComponent.FastNotifyTriangleVerticesUpdated(TArray<int,TSizedDefaultAllocator<32>>&,EMeshRenderAttributeFlags)", Triangles, UpdatedAttributes); }
	bool ContainsPhysicsTriMeshData(bool InUseAllTriData) { return NativeCall<bool, bool>(this, "UDynamicMeshComponent.ContainsPhysicsTriMeshData(bool)", InUseAllTriData); }
	void PostEditImport() { NativeCall<void>(this, "UDynamicMeshComponent.PostEditImport()"); }
};
