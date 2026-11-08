#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UBrushComponent : public UPrimitiveComponent
{
public:
	UBrushComponent() = delete;
	~UBrushComponent() = delete;
	UBrushComponent(const UBrushComponent&) = delete;
	UBrushComponent& operator=(const UBrushComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBrushComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBrushComponent"); }

	float& SurfaceNavAreaHeightField() { return *GetNativePointerField<float*>(this, "UBrushComponent.SurfaceNavAreaHeight"); }
	ESceneDepthPriorityGroup GetStaticDepthPriorityGroup() { return NativeCall<ESceneDepthPriorityGroup>(this, "UBrushComponent.GetStaticDepthPriorityGroup()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UBrushComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UBrushComponent.GetBodySetup()"); }
	void PostLoad() { NativeCall<void>(this, "UBrushComponent.PostLoad()"); }
	void GetNavigationData(FNavigationRelevantData& OutData) { NativeCall<void, FNavigationRelevantData&>(this, "UBrushComponent.GetNavigationData(FNavigationRelevantData&)", OutData); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UBrushComponent.CreateSceneProxy()"); }
	bool IsShown(const FEngineShowFlags& ShowFlags) { return NativeCall<bool, const FEngineShowFlags&>(this, "UBrushComponent.IsShown(FEngineShowFlags&)", ShowFlags); }
	bool ShouldCollideWhenPlacing() { return NativeCall<bool>(this, "UBrushComponent.ShouldCollideWhenPlacing()"); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "UBrushComponent.IsEditorOnly()"); }
};
