#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALightmassPortal : public AActor
{
public:
	ALightmassPortal() = delete;
	~ALightmassPortal() = delete;
	ALightmassPortal(const ALightmassPortal&) = delete;
	ALightmassPortal& operator=(const ALightmassPortal&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ALightmassPortal.IsLevelBoundsRelevant()"); }
};
