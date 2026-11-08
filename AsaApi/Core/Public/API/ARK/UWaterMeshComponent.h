#pragma once
#include "BulkForward.h"
#include "UMeshComponent.h"

struct UWaterMeshComponent : public UMeshComponent
{
public:
	UWaterMeshComponent() = delete;
	~UWaterMeshComponent() = delete;
	UWaterMeshComponent(const UWaterMeshComponent&) = delete;
	UWaterMeshComponent& operator=(const UWaterMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaterMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaterMeshComponent"); }

	int& ForceCollapseDensityLevelField() { return *GetNativePointerField<int*>(this, "UWaterMeshComponent.ForceCollapseDensityLevel"); }
	float& FarDistanceMeshExtentField() { return *GetNativePointerField<float*>(this, "UWaterMeshComponent.FarDistanceMeshExtent"); }
	float& TileSizeField() { return *GetNativePointerField<float*>(this, "UWaterMeshComponent.TileSize"); }
	FWaterQuadTreeBuilder& WaterQuadTreeBuilderField() { return *GetNativePointerField<FWaterQuadTreeBuilder*>(this, "UWaterMeshComponent.WaterQuadTreeBuilder"); }
	FWaterQuadTree& WaterQuadTreeField() { return *GetNativePointerField<FWaterQuadTree*>(this, "UWaterMeshComponent.WaterQuadTree"); }
	bool& bUseFarMeshWithoutOceanField() { return *GetNativePointerField<bool*>(this, "UWaterMeshComponent.bUseFarMeshWithoutOcean"); }
	double& FarDistanceMeshHeightWithoutOceanField() { return *GetNativePointerField<double*>(this, "UWaterMeshComponent.FarDistanceMeshHeightWithoutOcean"); }
	bool& bNeedsRebuildField() { return *GetNativePointerField<bool*>(this, "UWaterMeshComponent.bNeedsRebuild"); }
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "UWaterMeshComponent.bIsEnabled"); }
	int& LODCountBiasScalabilityField() { return *GetNativePointerField<int*>(this, "UWaterMeshComponent.LODCountBiasScalability"); }
	int& TessFactorBiasScalabilityField() { return *GetNativePointerField<int*>(this, "UWaterMeshComponent.TessFactorBiasScalability"); }
	float& LODScaleBiasScalabilityField() { return *GetNativePointerField<float*>(this, "UWaterMeshComponent.LODScaleBiasScalability"); }
	int& TessellationFactorField() { return *GetNativePointerField<int*>(this, "UWaterMeshComponent.TessellationFactor"); }
	float& LODScaleField() { return *GetNativePointerField<float*>(this, "UWaterMeshComponent.LODScale"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UWaterMeshComponent.GetNumMaterials()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UWaterMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UWaterMeshComponent.IsNavigationRelevant()"); }
	void Update() { NativeCall<void>(this, "UWaterMeshComponent.Update()"); }
	void PostLoad() { NativeCall<void>(this, "UWaterMeshComponent.PostLoad()"); }
	void SetMaterial(int ElementIndex, UMaterialInterface* Material) { NativeCall<void, int, UMaterialInterface*>(this, "UWaterMeshComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, Material); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UWaterMeshComponent.CreateSceneProxy()"); }
	void PostInitProperties() { NativeCall<void>(this, "UWaterMeshComponent.PostInitProperties()"); }
};
