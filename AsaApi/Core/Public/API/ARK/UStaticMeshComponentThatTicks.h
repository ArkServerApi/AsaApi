#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UStaticMeshComponentThatTicks : public UStaticMeshComponent
{
public:
	UStaticMeshComponentThatTicks() = delete;
	~UStaticMeshComponentThatTicks() = delete;
	UStaticMeshComponentThatTicks(const UStaticMeshComponentThatTicks&) = delete;
	UStaticMeshComponentThatTicks& operator=(const UStaticMeshComponentThatTicks&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bIsNearAViewerField() { return *GetNativePointerField<bool*>(this, "UStaticMeshComponentThatTicks.bIsNearAViewer"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UStaticMeshComponentThatTicks.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
