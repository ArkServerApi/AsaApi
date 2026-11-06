#pragma once
#include "BulkForward.h"
#include "ALevelInstance.h"

struct APCGExLevelInstance : public ALevelInstance
{
public:
	APCGExLevelInstance() = delete;
	~APCGExLevelInstance() = delete;
	APCGExLevelInstance(const APCGExLevelInstance&) = delete;
	APCGExLevelInstance& operator=(const APCGExLevelInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APCGExLevelInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APCGExLevelInstance"); }

};
