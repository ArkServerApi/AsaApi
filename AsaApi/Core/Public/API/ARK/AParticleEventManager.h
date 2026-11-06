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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AParticleEventManager.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
