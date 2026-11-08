#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UEQSRenderingComponent : public UDebugDrawComponent
{
public:
	UEQSRenderingComponent() = delete;
	~UEQSRenderingComponent() = delete;
	UEQSRenderingComponent(const UEQSRenderingComponent&) = delete;
	UEQSRenderingComponent& operator=(const UEQSRenderingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UEQSRenderingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UEQSRenderingComponent"); }

	FString& DrawFlagNameField() { return *GetNativePointerField<FString*>(this, "UEQSRenderingComponent.DrawFlagName"); }
	BitFieldValue<bool, unsigned __int32> bDrawOnlyWhenSelected() { return { this, "UEQSRenderingComponent.bDrawOnlyWhenSelected"}; }
};
