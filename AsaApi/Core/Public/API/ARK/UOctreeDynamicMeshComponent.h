#pragma once
#include "BulkForward.h"
#include "UBaseDynamicMeshComponent.h"

struct UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	UOctreeDynamicMeshComponent() = delete;
	~UOctreeDynamicMeshComponent() = delete;
	UOctreeDynamicMeshComponent(const UOctreeDynamicMeshComponent&) = delete;
	UOctreeDynamicMeshComponent& operator=(const UOctreeDynamicMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UOctreeDynamicMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UOctreeDynamicMeshComponent"); }

	FDelegateHandle& MeshObjectChangedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UOctreeDynamicMeshComponent.MeshObjectChangedHandle"); }
	FDelegateHandle& PreMeshChangeHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UOctreeDynamicMeshComponent.PreMeshChangeHandle"); }
	int& SpillDecompSetIDField() { return *GetNativePointerField<int*>(this, "UOctreeDynamicMeshComponent.SpillDecompSetID"); }
	FBaseDynamicMeshSceneProxy* GetBaseSceneProxy() { return NativeCall<FBaseDynamicMeshSceneProxy*>(this, "UOctreeDynamicMeshComponent.GetBaseSceneProxy()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UOctreeDynamicMeshComponent.CreateSceneProxy()"); }
	void ApplyChange(const FMeshReplacementChange* Change, bool bRevert) { NativeCall<void, const FMeshReplacementChange*, bool>(this, "UOctreeDynamicMeshComponent.ApplyChange(FMeshReplacementChange*,bool)", Change, bRevert); }
	UDynamicMesh* GetDynamicMesh() { return NativeCall<UDynamicMesh*>(this, "UOctreeDynamicMeshComponent.GetDynamicMesh()"); }
	void NotifyMaterialSetUpdated() { NativeCall<void>(this, "UOctreeDynamicMeshComponent.NotifyMaterialSetUpdated()"); }
	void NotifyMeshUpdated() { NativeCall<void>(this, "UOctreeDynamicMeshComponent.NotifyMeshUpdated()"); }
	void ApplyChange(const FMeshChange* Change, bool bRevert) { NativeCall<void, const FMeshChange*, bool>(this, "UOctreeDynamicMeshComponent.ApplyChange(FMeshChange*,bool)", Change, bRevert); }
	void ApplyChange(const FMeshVertexChange* Change, bool bRevert) { NativeCall<void, const FMeshVertexChange*, bool>(this, "UOctreeDynamicMeshComponent.ApplyChange(FMeshVertexChange*,bool)", Change, bRevert); }
};
