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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AProceduralFoliageBlockingVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AProceduralFoliageBlockingVolume"); }

	FFoliageDensityFalloff& DensityFalloffField() { return *GetNativePointerField<FFoliageDensityFalloff*>(this, "AProceduralFoliageBlockingVolume.DensityFalloff"); }
};
