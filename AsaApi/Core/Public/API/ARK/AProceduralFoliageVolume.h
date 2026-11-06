#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct AProceduralFoliageVolume : public AVolume
{
public:
	AProceduralFoliageVolume() = delete;
	~AProceduralFoliageVolume() = delete;
	AProceduralFoliageVolume(const AProceduralFoliageVolume&) = delete;
	AProceduralFoliageVolume& operator=(const AProceduralFoliageVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AProceduralFoliageVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AProceduralFoliageVolume"); }

	UObject* _getUObject() { return NativeCall<UObject*>(this, "AProceduralFoliageVolume._getUObject()"); }
};
