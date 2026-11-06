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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void OnUnregister() { NativeCall<void>(this, "UZoneGraphAnnotationTestingComponent.OnUnregister()"); }
	void OnRegister() { NativeCall<void>(this, "UZoneGraphAnnotationTestingComponent.OnRegister()"); }
};
