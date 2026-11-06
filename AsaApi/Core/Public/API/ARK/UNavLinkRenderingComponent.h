#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:
	UNavLinkRenderingComponent() = delete;
	~UNavLinkRenderingComponent() = delete;
	UNavLinkRenderingComponent(const UNavLinkRenderingComponent&) = delete;
	UNavLinkRenderingComponent& operator=(const UNavLinkRenderingComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UNavLinkRenderingComponent.CreateSceneProxy()"); }
	bool GetIgnoreBoundsForEditorFocus() { return NativeCall<bool>(this, "UNavLinkRenderingComponent.GetIgnoreBoundsForEditorFocus()"); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "UNavLinkRenderingComponent.ShouldRecreateProxyOnUpdateTransform()"); }
};
