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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostLoad() { NativeCall<void>(this, "UBakedShallowWaterSimulationComponent.PostLoad()"); }
};
