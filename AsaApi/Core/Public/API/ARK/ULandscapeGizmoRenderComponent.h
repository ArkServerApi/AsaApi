#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:
	ULandscapeGizmoRenderComponent() = delete;
	~ULandscapeGizmoRenderComponent() = delete;
	ULandscapeGizmoRenderComponent(const ULandscapeGizmoRenderComponent&) = delete;
	ULandscapeGizmoRenderComponent& operator=(const ULandscapeGizmoRenderComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "ULandscapeGizmoRenderComponent.CreateSceneProxy()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "ULandscapeGizmoRenderComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
};
