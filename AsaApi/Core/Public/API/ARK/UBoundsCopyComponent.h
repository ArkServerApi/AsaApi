#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UBoundsCopyComponent : public UActorComponent
{
public:
	UBoundsCopyComponent() = delete;
	~UBoundsCopyComponent() = delete;
	UBoundsCopyComponent(const UBoundsCopyComponent&) = delete;
	UBoundsCopyComponent& operator=(const UBoundsCopyComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBoundsCopyComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBoundsCopyComponent"); }

	bool& bUseCollidingComponentsForSourceBoundsField() { return *GetNativePointerField<bool*>(this, "UBoundsCopyComponent.bUseCollidingComponentsForSourceBounds"); }
	bool& bKeepOwnBoundsScaleField() { return *GetNativePointerField<bool*>(this, "UBoundsCopyComponent.bKeepOwnBoundsScale"); }
	bool& bUseCollidingComponentsForOwnBoundsField() { return *GetNativePointerField<bool*>(this, "UBoundsCopyComponent.bUseCollidingComponentsForOwnBounds"); }
	bool& bCopyXBoundsField() { return *GetNativePointerField<bool*>(this, "UBoundsCopyComponent.bCopyXBounds"); }
	bool& bCopyYBoundsField() { return *GetNativePointerField<bool*>(this, "UBoundsCopyComponent.bCopyYBounds"); }
	bool& bCopyZBoundsField() { return *GetNativePointerField<bool*>(this, "UBoundsCopyComponent.bCopyZBounds"); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "UBoundsCopyComponent.IsEditorOnly()"); }
};
