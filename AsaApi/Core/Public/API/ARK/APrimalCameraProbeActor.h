#pragma once
#include "BulkForward.h"
#include "ACameraActor.h"

struct APrimalCameraProbeActor : public ACameraActor
{
public:
	APrimalCameraProbeActor() = delete;
	~APrimalCameraProbeActor() = delete;
	APrimalCameraProbeActor(const APrimalCameraProbeActor&) = delete;
	APrimalCameraProbeActor& operator=(const APrimalCameraProbeActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalCameraProbeActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalCameraProbeActor"); }

	bool& bActiveField() { return *GetNativePointerField<bool*>(this, "APrimalCameraProbeActor.bActive"); }
	void AdvanceInternal(bool bBackwards) { NativeCall<void, bool>(this, "APrimalCameraProbeActor.AdvanceInternal(bool)", bBackwards); }
	static void Advance(UWorld* World, bool bBackwards) { NativeCall<void, UWorld*, bool>(nullptr, "APrimalCameraProbeActor.Advance(UWorld*,bool)", World, bBackwards); }
};
