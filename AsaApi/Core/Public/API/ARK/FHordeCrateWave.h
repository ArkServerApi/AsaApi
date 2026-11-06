#pragma once


struct FHordeCrateWave
{
	// Fields

	int& MinNumOfNPCsField() { return *GetNativePointerField<int*>(this, "FHordeCrateWave.MinNumOfNPCs"); }
	int& MaxNumOfNPCsField() { return *GetNativePointerField<int*>(this, "FHordeCrateWave.MaxNumOfNPCs"); }
	float& TimeToPrepareForWaveField() { return *GetNativePointerField<float*>(this, "FHordeCrateWave.TimeToPrepareForWave"); }
	FHordeCrateNPCGroup& NPCsToSpawnField() { return *GetNativePointerField<FHordeCrateNPCGroup*>(this, "FHordeCrateWave.NPCsToSpawn"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FHordeCrateWave>(); }
};