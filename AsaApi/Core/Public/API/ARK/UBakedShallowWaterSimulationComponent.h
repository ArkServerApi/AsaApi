#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UBakedShallowWaterSimulationComponent : public UPrimitiveComponent
{
public:
	UBakedShallowWaterSimulationComponent() = delete;
	~UBakedShallowWaterSimulationComponent() = delete;
	UBakedShallowWaterSimulationComponent(const UBakedShallowWaterSimulationComponent&) = delete;
	UBakedShallowWaterSimulationComponent& operator=(const UBakedShallowWaterSimulationComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBakedShallowWaterSimulationComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBakedShallowWaterSimulationComponent"); }

	void PostLoad() { NativeCall<void>(this, "UBakedShallowWaterSimulationComponent.PostLoad()"); }
};
