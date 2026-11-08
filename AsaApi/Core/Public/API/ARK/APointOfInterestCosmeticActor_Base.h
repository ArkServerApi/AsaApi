#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APointOfInterestCosmeticActor_Base : public AActor
{
public:
	APointOfInterestCosmeticActor_Base() = delete;
	~APointOfInterestCosmeticActor_Base() = delete;
	APointOfInterestCosmeticActor_Base(const APointOfInterestCosmeticActor_Base&) = delete;
	APointOfInterestCosmeticActor_Base& operator=(const APointOfInterestCosmeticActor_Base&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APointOfInterestCosmeticActor_Base"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APointOfInterestCosmeticActor_Base"); }
};
