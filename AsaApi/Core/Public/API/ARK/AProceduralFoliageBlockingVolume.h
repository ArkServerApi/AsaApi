#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct AProceduralFoliageBlockingVolume : public AVolume
{
public:
	AProceduralFoliageBlockingVolume() = delete;
	~AProceduralFoliageBlockingVolume() = delete;
	AProceduralFoliageBlockingVolume(const AProceduralFoliageBlockingVolume&) = delete;
	AProceduralFoliageBlockingVolume& operator=(const AProceduralFoliageBlockingVolume&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FFoliageDensityFalloff& DensityFalloffField() { return *GetNativePointerField<FFoliageDensityFalloff*>(this, "AProceduralFoliageBlockingVolume.DensityFalloff"); }
};
