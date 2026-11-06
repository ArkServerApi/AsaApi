#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AParticleEventManager : public AActor
{
public:
	AParticleEventManager() = delete;
	~AParticleEventManager() = delete;
	AParticleEventManager(const AParticleEventManager&) = delete;
	AParticleEventManager& operator=(const AParticleEventManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AParticleEventManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AParticleEventManager"); }

	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AParticleEventManager.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
