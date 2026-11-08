#pragma once
#include "BulkForward.h"
#include "ALevelInstance.h"

struct APrimalLevelInstance : public ALevelInstance
{
public:
	APrimalLevelInstance() = delete;
	~APrimalLevelInstance() = delete;
	APrimalLevelInstance(const APrimalLevelInstance&) = delete;
	APrimalLevelInstance& operator=(const APrimalLevelInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalLevelInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalLevelInstance"); }

	UPrimalLevelInstanceSubsystem* GetPrimalLevelInstanceSubsystem() { return NativeCall<UPrimalLevelInstanceSubsystem*>(this, "APrimalLevelInstance.GetPrimalLevelInstanceSubsystem()"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >* GetAllMissionActors(TArray<AActor*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<AActor*, TSizedDefaultAllocator<32> >*, TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "APrimalLevelInstance.GetAllMissionActors()", result); }
	void RegisterAllMissionActors() { NativeCall<void>(this, "APrimalLevelInstance.RegisterAllMissionActors()"); }
};
