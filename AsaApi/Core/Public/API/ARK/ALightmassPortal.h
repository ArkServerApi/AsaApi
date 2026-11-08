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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALightmassPortal"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALightmassPortal"); }

	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ALightmassPortal.IsLevelBoundsRelevant()"); }
};
