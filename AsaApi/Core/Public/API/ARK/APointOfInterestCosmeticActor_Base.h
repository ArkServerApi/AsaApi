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
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "APointOfInterestCosmeticActor_Base.StaticClass()"); }
};
