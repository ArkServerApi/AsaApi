#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UMeshComponent.h"

struct UTriangleSetComponent : public UMeshComponent
{
public:
	UTriangleSetComponent() = delete;
	~UTriangleSetComponent() = delete;
	UTriangleSetComponent(const UTriangleSetComponent&) = delete;
	UTriangleSetComponent& operator=(const UTriangleSetComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTriangleSetComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTriangleSetComponent"); }

	UE::Math::TBoxSphereBounds<double, double>& BoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UTriangleSetComponent.Bounds"); }
	bool& bBoundsDirtyField() { return *GetNativePointerField<bool*>(this, "UTriangleSetComponent.bBoundsDirty"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UTriangleSetComponent.CreateSceneProxy()"); }
	int AddTriangle(const FRenderableTriangle& OverlayTriangle) { return NativeCall<int, const FRenderableTriangle&>(this, "UTriangleSetComponent.AddTriangle(FRenderableTriangle&)", OverlayTriangle); }
	int FindOrAddMaterialIndex(UMaterialInterface* Material) { return NativeCall<int, UMaterialInterface*>(this, "UTriangleSetComponent.FindOrAddMaterialIndex(UMaterialInterface*)", Material); }
	void SetAllTrianglesColor(const FColor& NewColor) { NativeCall<void, const FColor&>(this, "UTriangleSetComponent.SetAllTrianglesColor(FColor&)", NewColor); }
	int GetNumMaterials() { return NativeCall<int>(this, "UTriangleSetComponent.GetNumMaterials()"); }
	void RemoveTriangle(int ID) { NativeCall<void, int>(this, "UTriangleSetComponent.RemoveTriangle(int)", ID); }
	int AddTriangleInternal(const FRenderableTriangle& Triangle) { return NativeCall<int, const FRenderableTriangle&>(this, "UTriangleSetComponent.AddTriangleInternal(FRenderableTriangle&)", Triangle); }
	void Clear() { NativeCall<void>(this, "UTriangleSetComponent.Clear()"); }
	void SetAllTrianglesMaterial(UMaterialInterface* Material) { NativeCall<void, UMaterialInterface*>(this, "UTriangleSetComponent.SetAllTrianglesMaterial(UMaterialInterface*)", Material); }
};
