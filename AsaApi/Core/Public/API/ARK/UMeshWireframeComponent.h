#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UMeshComponent.h"

struct UMeshWireframeComponent : public UMeshComponent
{
public:
	UMeshWireframeComponent() = delete;
	~UMeshWireframeComponent() = delete;
	UMeshWireframeComponent(const UMeshWireframeComponent&) = delete;
	UMeshWireframeComponent& operator=(const UMeshWireframeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMeshWireframeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMeshWireframeComponent"); }

	float& LineDepthBiasField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.LineDepthBias"); }
	float& LineDepthBiasSizeScaleField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.LineDepthBiasSizeScale"); }
	float& ThicknessScaleField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.ThicknessScale"); }
	bool& bEnableWireframeField() { return *GetNativePointerField<bool*>(this, "UMeshWireframeComponent.bEnableWireframe"); }
	FColor& WireframeColorField() { return *GetNativePointerField<FColor*>(this, "UMeshWireframeComponent.WireframeColor"); }
	float& WireframeThicknessField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.WireframeThickness"); }
	bool& bEnableBoundaryEdgesField() { return *GetNativePointerField<bool*>(this, "UMeshWireframeComponent.bEnableBoundaryEdges"); }
	FColor& BoundaryEdgeColorField() { return *GetNativePointerField<FColor*>(this, "UMeshWireframeComponent.BoundaryEdgeColor"); }
	float& BoundaryEdgeThicknessField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.BoundaryEdgeThickness"); }
	bool& bEnableUVSeamsField() { return *GetNativePointerField<bool*>(this, "UMeshWireframeComponent.bEnableUVSeams"); }
	FColor& UVSeamColorField() { return *GetNativePointerField<FColor*>(this, "UMeshWireframeComponent.UVSeamColor"); }
	float& UVSeamThicknessField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.UVSeamThickness"); }
	bool& bEnableNormalSeamsField() { return *GetNativePointerField<bool*>(this, "UMeshWireframeComponent.bEnableNormalSeams"); }
	FColor& NormalSeamColorField() { return *GetNativePointerField<FColor*>(this, "UMeshWireframeComponent.NormalSeamColor"); }
	float& NormalSeamThicknessField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.NormalSeamThickness"); }
	bool& bEnableTangentSeamsField() { return *GetNativePointerField<bool*>(this, "UMeshWireframeComponent.bEnableTangentSeams"); }
	FColor& TangentSeamColorField() { return *GetNativePointerField<FColor*>(this, "UMeshWireframeComponent.TangentSeamColor"); }
	float& TangentSeamThicknessField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.TangentSeamThickness"); }
	bool& bEnableColorSeamsField() { return *GetNativePointerField<bool*>(this, "UMeshWireframeComponent.bEnableColorSeams"); }
	FColor& ColorSeamColorField() { return *GetNativePointerField<FColor*>(this, "UMeshWireframeComponent.ColorSeamColor"); }
	float& ColorSeamThicknessField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.ColorSeamThickness"); }
	bool& bEnableGroupBoundariesField() { return *GetNativePointerField<bool*>(this, "UMeshWireframeComponent.bEnableGroupBoundaries"); }
	FColor& GroupBoundaryColorField() { return *GetNativePointerField<FColor*>(this, "UMeshWireframeComponent.GroupBoundaryColor"); }
	float& GroupBoundaryThicknessField() { return *GetNativePointerField<float*>(this, "UMeshWireframeComponent.GroupBoundaryThickness"); }
	UE::Math::TBoxSphereBounds<double, double>& LocalBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UMeshWireframeComponent.LocalBounds"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UMeshWireframeComponent.CreateSceneProxy()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UMeshWireframeComponent.GetNumMaterials()"); }
};
