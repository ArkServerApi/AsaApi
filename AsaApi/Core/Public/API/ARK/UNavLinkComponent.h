#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UNavLinkComponent : public UPrimitiveComponent
{
public:
	UNavLinkComponent() = delete;
	~UNavLinkComponent() = delete;
	UNavLinkComponent(const UNavLinkComponent&) = delete;
	UNavLinkComponent& operator=(const UNavLinkComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavLinkComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavLinkComponent"); }

	UObject* _getUObject() { return NativeCall<UObject*>(this, "UNavLinkComponent._getUObject()"); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UNavLinkComponent.IsNavigationRelevant()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UNavLinkComponent.CreateSceneProxy()"); }
	void OnRegister() { NativeCall<void>(this, "UNavLinkComponent.OnRegister()"); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "UNavLinkComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "UNavLinkComponent.ShouldRecreateProxyOnUpdateTransform()"); }
};
