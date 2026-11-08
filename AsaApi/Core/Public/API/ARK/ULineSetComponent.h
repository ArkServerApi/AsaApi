#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UMeshComponent.h"

struct ULineSetComponent : public UMeshComponent
{
public:
	ULineSetComponent() = delete;
	~ULineSetComponent() = delete;
	ULineSetComponent(const ULineSetComponent&) = delete;
	ULineSetComponent& operator=(const ULineSetComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULineSetComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULineSetComponent"); }

	UE::Math::TBoxSphereBounds<double, double>& BoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "ULineSetComponent.Bounds"); }
	bool& bBoundsDirtyField() { return *GetNativePointerField<bool*>(this, "ULineSetComponent.bBoundsDirty"); }
	int AddLine(const FRenderableLine& OverlayLine) { return NativeCall<int, const FRenderableLine&>(this, "ULineSetComponent.AddLine(FRenderableLine&)", OverlayLine); }
	bool IsLineValid(int ID) { return NativeCall<bool, int>(this, "ULineSetComponent.IsLineValid(int)", ID); }
	int GetNumMaterials() { return NativeCall<int>(this, "ULineSetComponent.GetNumMaterials()"); }
	void SetLineEnd(int ID, const UE::Math::TVector<double>& NewPostion) { NativeCall<void, int, const UE::Math::TVector<double>&>(this, "ULineSetComponent.SetLineEnd(int,UE::Math::TVector<double>&)", ID, NewPostion); }
	void SetLineMaterial(UMaterialInterface* InLineMaterial) { NativeCall<void, UMaterialInterface*>(this, "ULineSetComponent.SetLineMaterial(UMaterialInterface*)", InLineMaterial); }
	void RemoveLine(int ID) { NativeCall<void, int>(this, "ULineSetComponent.RemoveLine(int)", ID); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "ULineSetComponent.CreateSceneProxy()"); }
	void SetAllLinesColor(const FColor& NewColor) { NativeCall<void, const FColor&>(this, "ULineSetComponent.SetAllLinesColor(FColor&)", NewColor); }
	void SetAllLinesThickness(float NewThickness) { NativeCall<void, float>(this, "ULineSetComponent.SetAllLinesThickness(float)", NewThickness); }
	void SetLineStart(int ID, const UE::Math::TVector<double>& NewPostion) { NativeCall<void, int, const UE::Math::TVector<double>&>(this, "ULineSetComponent.SetLineStart(int,UE::Math::TVector<double>&)", ID, NewPostion); }
	void Clear() { NativeCall<void>(this, "ULineSetComponent.Clear()"); }
	void InsertLine(int ID, const FRenderableLine& OverlayLine) { NativeCall<void, int, const FRenderableLine&>(this, "ULineSetComponent.InsertLine(int,FRenderableLine&)", ID, OverlayLine); }
	int AddLineInternal(const FRenderableLine& Line) { return NativeCall<int, const FRenderableLine&>(this, "ULineSetComponent.AddLineInternal(FRenderableLine&)", Line); }
	void SetAllLinesDepthBias(float NewDepthBias) { NativeCall<void, float>(this, "ULineSetComponent.SetAllLinesDepthBias(float)", NewDepthBias); }
};
