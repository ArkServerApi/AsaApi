#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UMeshComponent.h"

struct UPointSetComponent : public UMeshComponent
{
public:
	UPointSetComponent() = delete;
	~UPointSetComponent() = delete;
	UPointSetComponent(const UPointSetComponent&) = delete;
	UPointSetComponent& operator=(const UPointSetComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPointSetComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPointSetComponent"); }

	UE::Math::TBoxSphereBounds<double, double>& BoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UPointSetComponent.Bounds"); }
	bool& bBoundsDirtyField() { return *GetNativePointerField<bool*>(this, "UPointSetComponent.bBoundsDirty"); }
	void InsertPoint(int ID, const FRenderablePoint& OverlayPoint) { NativeCall<void, int, const FRenderablePoint&>(this, "UPointSetComponent.InsertPoint(int,FRenderablePoint&)", ID, OverlayPoint); }
	void SetAllPointsDepthBias(float NewDepthBias) { NativeCall<void, float>(this, "UPointSetComponent.SetAllPointsDepthBias(float)", NewDepthBias); }
	void SetAllPointsSize(float NewSize) { NativeCall<void, float>(this, "UPointSetComponent.SetAllPointsSize(float)", NewSize); }
	bool IsPointValid(int ID) { return NativeCall<bool, int>(this, "UPointSetComponent.IsPointValid(int)", ID); }
	void Clear() { NativeCall<void>(this, "UPointSetComponent.Clear()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UPointSetComponent.GetNumMaterials()"); }
	void SetPointColor(int ID, const FColor& NewColor) { NativeCall<void, int, const FColor&>(this, "UPointSetComponent.SetPointColor(int,FColor&)", ID, NewColor); }
	const FRenderablePoint& GetPoint(int ID) { return NativeCall<const FRenderablePoint&, int>(this, "UPointSetComponent.GetPoint(int)", ID); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UPointSetComponent.CreateSceneProxy()"); }
	void RemovePoint(int ID) { NativeCall<void, int>(this, "UPointSetComponent.RemovePoint(int)", ID); }
	void SetPointMaterial(UMaterialInterface* InPointMaterial) { NativeCall<void, UMaterialInterface*>(this, "UPointSetComponent.SetPointMaterial(UMaterialInterface*)", InPointMaterial); }
	int AddPoint(const FRenderablePoint& OverlayPoint) { return NativeCall<int, const FRenderablePoint&>(this, "UPointSetComponent.AddPoint(FRenderablePoint&)", OverlayPoint); }
	void SetPointPosition(int ID, const UE::Math::TVector<double>& NewPosition) { NativeCall<void, int, const UE::Math::TVector<double>&>(this, "UPointSetComponent.SetPointPosition(int,UE::Math::TVector<double>&)", ID, NewPosition); }
	void SetAllPointsColor(const FColor& NewColor) { NativeCall<void, const FColor&>(this, "UPointSetComponent.SetAllPointsColor(FColor&)", NewColor); }
};
