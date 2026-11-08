#pragma once
#include "../ARK/BulkForward.h"

struct APointOfInterestCosmeticActor {
	USceneComponent*& CosmeticRootCompField();
	UParticleSystemComponent*& CosmeticParticlesCompField();
	FPointOfInterestData& MyPointOfInterestDataField();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APointOfInterestCosmeticActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APointOfInterestCosmeticActor"); }
};