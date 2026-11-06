#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ABandwidthTestActor : public AActor
{
public:
	ABandwidthTestActor() = delete;
	~ABandwidthTestActor() = delete;
	ABandwidthTestActor(const ABandwidthTestActor&) = delete;
	ABandwidthTestActor& operator=(const ABandwidthTestActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ABandwidthTestActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABandwidthTestActor"); }

	FBandwidthTestGenerator& BandwidthGeneratorField() { return *GetNativePointerField<FBandwidthTestGenerator*>(this, "ABandwidthTestActor.BandwidthGenerator"); }
	void StartGeneratingBandwidth(float BandwidthInKilobytesPerSec) { NativeCall<void, float>(this, "ABandwidthTestActor.StartGeneratingBandwidth(float)", BandwidthInKilobytesPerSec); }
};
