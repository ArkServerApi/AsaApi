#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADinoFoliage_PresetGenerator : public AActor
{
public:
	ADinoFoliage_PresetGenerator() = delete;
	~ADinoFoliage_PresetGenerator() = delete;
	ADinoFoliage_PresetGenerator(const ADinoFoliage_PresetGenerator&) = delete;
	ADinoFoliage_PresetGenerator& operator=(const ADinoFoliage_PresetGenerator&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADinoFoliage_PresetGenerator"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADinoFoliage_PresetGenerator"); }

	BitFieldValue<bool, unsigned char> bGeneratePresets() { return { this, "ADinoFoliage_PresetGenerator.bGeneratePresets"}; }
	BitFieldValue<bool, unsigned char> bGetAllMeshesFromDataTable() { return { this, "ADinoFoliage_PresetGenerator.bGetAllMeshesFromDataTable"}; }
	BitFieldValue<bool, unsigned char> bGetHarvestableMeshesFromDataTable() { return { this, "ADinoFoliage_PresetGenerator.bGetHarvestableMeshesFromDataTable"}; }
	BitFieldValue<bool, unsigned char> bGetNonHarvestableMeshesFromDataTable() { return { this, "ADinoFoliage_PresetGenerator.bGetNonHarvestableMeshesFromDataTable"}; }
	BitFieldValue<bool, unsigned char> bFindMeshesNotAssignedToAnyResources() { return { this, "ADinoFoliage_PresetGenerator.bFindMeshesNotAssignedToAnyResources"}; }
	BitFieldValue<bool, unsigned char> bClearDuplicateMeshesFromResourceData() { return { this, "ADinoFoliage_PresetGenerator.bClearDuplicateMeshesFromResourceData"}; }
};
