#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UZoneGraphAnnotationTestingComponent : public UDebugDrawComponent
{
public:
	UZoneGraphAnnotationTestingComponent() = delete;
	~UZoneGraphAnnotationTestingComponent() = delete;
	UZoneGraphAnnotationTestingComponent(const UZoneGraphAnnotationTestingComponent&) = delete;
	UZoneGraphAnnotationTestingComponent& operator=(const UZoneGraphAnnotationTestingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UZoneGraphAnnotationTestingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UZoneGraphAnnotationTestingComponent"); }

	void OnUnregister() { NativeCall<void>(this, "UZoneGraphAnnotationTestingComponent.OnUnregister()"); }
	void OnRegister() { NativeCall<void>(this, "UZoneGraphAnnotationTestingComponent.OnRegister()"); }
};
