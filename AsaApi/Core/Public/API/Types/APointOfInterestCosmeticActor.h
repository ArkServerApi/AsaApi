#pragma once
#include "../ARK/BulkForward.h"

struct APointOfInterestCosmeticActor {
	USceneComponent*& CosmeticRootCompField();
	UParticleSystemComponent*& CosmeticParticlesCompField();
	FPointOfInterestData& MyPointOfInterestDataField();
};