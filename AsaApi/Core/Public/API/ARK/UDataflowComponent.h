#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UPrimitiveComponent.h"

struct UDataflowComponent : public UPrimitiveComponent
{
public:
	UDataflowComponent() = delete;
	~UDataflowComponent() = delete;
	UDataflowComponent(const UDataflowComponent&) = delete;
	UDataflowComponent& operator=(const UDataflowComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataflowComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataflowComponent"); }

	TArray<UDataflowEdNode const*, TSizedDefaultAllocator<32> >& RenderTargetsField() { return *GetNativePointerField<TArray<UDataflowEdNode const*, TSizedDefaultAllocator<32> >*>(this, "UDataflowComponent.RenderTargets"); }
	FManagedArrayCollection& RenderCollectionField() { return *GetNativePointerField<FManagedArrayCollection*>(this, "UDataflowComponent.RenderCollection"); }
	bool& bUpdateRenderField() { return *GetNativePointerField<bool*>(this, "UDataflowComponent.bUpdateRender"); }
	bool& bUpdateSelectionField() { return *GetNativePointerField<bool*>(this, "UDataflowComponent.bUpdateSelection"); }
	bool& bBoundsNeedsUpdateField() { return *GetNativePointerField<bool*>(this, "UDataflowComponent.bBoundsNeedsUpdate"); }
	UE::Math::TBoxSphereBounds<double, double>& BoundingBoxField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UDataflowComponent.BoundingBox"); }
	FDataflowSelectionState& SelectionStateField() { return *GetNativePointerField<FDataflowSelectionState*>(this, "UDataflowComponent.SelectionState"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UDataflowComponent.CreateSceneProxy()"); }
	UMaterialInterface* GetMaterial(int Index) { return NativeCall<UMaterialInterface*, int>(this, "UDataflowComponent.GetMaterial(int)", Index); }
};
