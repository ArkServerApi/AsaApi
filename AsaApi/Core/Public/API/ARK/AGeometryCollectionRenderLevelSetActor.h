#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	AGeometryCollectionRenderLevelSetActor() = delete;
	~AGeometryCollectionRenderLevelSetActor() = delete;
	AGeometryCollectionRenderLevelSetActor(const AGeometryCollectionRenderLevelSetActor&) = delete;
	AGeometryCollectionRenderLevelSetActor& operator=(const AGeometryCollectionRenderLevelSetActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGeometryCollectionRenderLevelSetActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGeometryCollectionRenderLevelSetActor"); }

	float& SurfaceToleranceField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionRenderLevelSetActor.SurfaceTolerance"); }
	float& IsovalueField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionRenderLevelSetActor.Isovalue"); }
	bool& EnabledField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionRenderLevelSetActor.Enabled"); }
	bool& RenderVolumeBoundingBoxField() { return *GetNativePointerField<bool*>(this, "AGeometryCollectionRenderLevelSetActor.RenderVolumeBoundingBox"); }
	UE::Math::TVector<double>& MinBBoxCornerField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AGeometryCollectionRenderLevelSetActor.MinBBoxCorner"); }
	UE::Math::TVector<double>& MaxBBoxCornerField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AGeometryCollectionRenderLevelSetActor.MaxBBoxCorner"); }
	float& VoxelSizeField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionRenderLevelSetActor.VoxelSize"); }
	UPostProcessComponent*& PostProcessComponentField() { return *GetNativePointerField<UPostProcessComponent**>(this, "AGeometryCollectionRenderLevelSetActor.PostProcessComponent"); }
	UMaterialInstanceDynamic*& DynRayMarchMaterialField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AGeometryCollectionRenderLevelSetActor.DynRayMarchMaterial"); }
	float& StepSizeMultField() { return *GetNativePointerField<float*>(this, "AGeometryCollectionRenderLevelSetActor.StepSizeMult"); }
	void BeginPlay() { NativeCall<void>(this, "AGeometryCollectionRenderLevelSetActor.BeginPlay()"); }
	static void __DefaultConstructor(const FObjectInitializer& X) { NativeCall<void, const FObjectInitializer&>(nullptr, "AGeometryCollectionRenderLevelSetActor.__DefaultConstructor(FObjectInitializer&)", X); }
};
