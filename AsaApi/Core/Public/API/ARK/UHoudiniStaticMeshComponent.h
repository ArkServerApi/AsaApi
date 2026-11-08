#pragma once
#include "BulkForward.h"
#include "UMeshComponent.h"

struct UHoudiniStaticMeshComponent : public UMeshComponent
{
public:
	UHoudiniStaticMeshComponent() = delete;
	~UHoudiniStaticMeshComponent() = delete;
	UHoudiniStaticMeshComponent(const UHoudiniStaticMeshComponent&) = delete;
	UHoudiniStaticMeshComponent& operator=(const UHoudiniStaticMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoudiniStaticMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoudiniStaticMeshComponent"); }

	bool& bHoudiniIconVisibleField() { return *GetNativePointerField<bool*>(this, "UHoudiniStaticMeshComponent.bHoudiniIconVisible"); }
	void SetMesh(UHoudiniStaticMesh* InMesh) { NativeCall<void, UHoudiniStaticMesh*>(this, "UHoudiniStaticMeshComponent.SetMesh(UHoudiniStaticMesh*)", InMesh); }
	bool IsMaterialSlotNameValid(FName MaterialSlotName) { return NativeCall<bool, FName>(this, "UHoudiniStaticMeshComponent.IsMaterialSlotNameValid(FName)", MaterialSlotName); }
	UMaterialInterface* GetMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UHoudiniStaticMeshComponent.GetMaterial(int)", MaterialIndex); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UHoudiniStaticMeshComponent.CreateSceneProxy()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UHoudiniStaticMeshComponent.GetNumMaterials()"); }
	void OnRegister() { NativeCall<void>(this, "UHoudiniStaticMeshComponent.OnRegister()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetMaterialSlotNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UHoudiniStaticMeshComponent.GetMaterialSlotNames()", result); }
	int GetMaterialIndex(FName MaterialSlotName) { return NativeCall<int, FName>(this, "UHoudiniStaticMeshComponent.GetMaterialIndex(FName)", MaterialSlotName); }
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible) { NativeCall<void, bool>(this, "UHoudiniStaticMeshComponent.SetHoudiniIconVisible(bool)", bInHoudiniIconVisible); }
	void NotifyMeshUpdated() { NativeCall<void>(this, "UHoudiniStaticMeshComponent.NotifyMeshUpdated()"); }
};
