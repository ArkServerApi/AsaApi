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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UObject* _getUObject() { return NativeCall<UObject*>(this, "AProceduralFoliageVolume._getUObject()"); }
};
