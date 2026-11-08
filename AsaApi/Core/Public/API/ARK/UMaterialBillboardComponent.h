#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UMaterialBillboardComponent : public UPrimitiveComponent
{
public:
	UMaterialBillboardComponent() = delete;
	~UMaterialBillboardComponent() = delete;
	UMaterialBillboardComponent(const UMaterialBillboardComponent&) = delete;
	UMaterialBillboardComponent& operator=(const UMaterialBillboardComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialBillboardComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialBillboardComponent"); }

	void SetMaterial(int ElementIndex, UMaterialInterface* Material) { NativeCall<void, int, UMaterialInterface*>(this, "UMaterialBillboardComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, Material); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UMaterialBillboardComponent.CreateSceneProxy()"); }
	UMaterialInterface* GetMaterial(int Index) { return NativeCall<UMaterialInterface*, int>(this, "UMaterialBillboardComponent.GetMaterial(int)", Index); }
	void PostLoad() { NativeCall<void>(this, "UMaterialBillboardComponent.PostLoad()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UMaterialBillboardComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
};
