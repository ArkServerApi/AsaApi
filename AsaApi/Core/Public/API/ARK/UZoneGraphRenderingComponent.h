#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UZoneGraphRenderingComponent : public UPrimitiveComponent
{
public:
	UZoneGraphRenderingComponent() = delete;
	~UZoneGraphRenderingComponent() = delete;
	UZoneGraphRenderingComponent(const UZoneGraphRenderingComponent&) = delete;
	UZoneGraphRenderingComponent& operator=(const UZoneGraphRenderingComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bPreviousShowNavigationField() { return *GetNativePointerField<bool*>(this, "UZoneGraphRenderingComponent.bPreviousShowNavigation"); }
	bool& bForceUpdateField() { return *GetNativePointerField<bool*>(this, "UZoneGraphRenderingComponent.bForceUpdate"); }
	FTimerHandle& TimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UZoneGraphRenderingComponent.TimerHandle"); }
	void OnUnregister() { NativeCall<void>(this, "UZoneGraphRenderingComponent.OnUnregister()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UZoneGraphRenderingComponent.CreateSceneProxy()"); }
	void OnRegister() { NativeCall<void>(this, "UZoneGraphRenderingComponent.OnRegister()"); }
};
