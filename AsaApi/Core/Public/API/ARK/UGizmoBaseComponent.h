#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	UGizmoBaseComponent() = delete;
	~UGizmoBaseComponent() = delete;
	UGizmoBaseComponent(const UGizmoBaseComponent&) = delete;
	UGizmoBaseComponent& operator=(const UGizmoBaseComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGizmoBaseComponent"); }

	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "UGizmoBaseComponent.Color"); }
	float& HoverSizeMultiplierField() { return *GetNativePointerField<float*>(this, "UGizmoBaseComponent.HoverSizeMultiplier"); }
	float& PixelHitDistanceThresholdField() { return *GetNativePointerField<float*>(this, "UGizmoBaseComponent.PixelHitDistanceThreshold"); }
	bool& bHoveringField() { return *GetNativePointerField<bool*>(this, "UGizmoBaseComponent.bHovering"); }
	bool& bWorldField() { return *GetNativePointerField<bool*>(this, "UGizmoBaseComponent.bWorld"); }
	bool& bIsViewDependentField() { return *GetNativePointerField<bool*>(this, "UGizmoBaseComponent.bIsViewDependent"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UGizmoBaseComponent._getUObject()"); }
	void UpdateHoverState(bool bHoveringIn) { NativeCall<void, bool>(this, "UGizmoBaseComponent.UpdateHoverState(bool)", bHoveringIn); }
	void UpdateWorldLocalState(bool bWorldIn) { NativeCall<void, bool>(this, "UGizmoBaseComponent.UpdateWorldLocalState(bool)", bWorldIn); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGizmoBaseComponent"); }
};
