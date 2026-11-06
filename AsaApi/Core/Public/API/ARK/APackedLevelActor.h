#pragma once
#include "BulkForward.h"
#include "ALevelInstance.h"

struct APackedLevelActor : public ALevelInstance
{
public:
	APackedLevelActor() = delete;
	~APackedLevelActor() = delete;
	APackedLevelActor(const APackedLevelActor&) = delete;
	APackedLevelActor& operator=(const APackedLevelActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool IsLoadingEnabled() { return NativeCall<bool>(this, "APackedLevelActor.IsLoadingEnabled()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "APackedLevelActor.Serialize(FArchive&)", Ar); }
};
