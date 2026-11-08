#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UChaosEventRelay : public UObject
{
public:
	UChaosEventRelay() = delete;
	~UChaosEventRelay() = delete;
	UChaosEventRelay(const UChaosEventRelay&) = delete;
	UChaosEventRelay& operator=(const UChaosEventRelay&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UChaosEventRelay"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UChaosEventRelay"); }
	FCollisionEventSignature& OnCollisionEventField() { return *GetNativePointerField<FCollisionEventSignature*>(this, "UChaosEventRelay.OnCollisionEvent"); }
	FBreakEventSignature& OnBreakEventField() { return *GetNativePointerField<FBreakEventSignature*>(this, "UChaosEventRelay.OnBreakEvent"); }
	FRemovalEventSignature& OnRemovalEventField() { return *GetNativePointerField<FRemovalEventSignature*>(this, "UChaosEventRelay.OnRemovalEvent"); }
	FCrumblingEventSignature& OnCrumblingEventField() { return *GetNativePointerField<FCrumblingEventSignature*>(this, "UChaosEventRelay.OnCrumblingEvent"); }
	FTrailingEventSignature& OnTrailingEventField() { return *GetNativePointerField<FTrailingEventSignature*>(this, "UChaosEventRelay.OnTrailingEvent"); }
};
