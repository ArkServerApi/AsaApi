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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavLinkRenderingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavLinkRenderingComponent"); }

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UNavLinkRenderingComponent.CreateSceneProxy()"); }
	bool GetIgnoreBoundsForEditorFocus() { return NativeCall<bool>(this, "UNavLinkRenderingComponent.GetIgnoreBoundsForEditorFocus()"); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "UNavLinkRenderingComponent.ShouldRecreateProxyOnUpdateTransform()"); }
};
