#pragma once


struct FDinoSpawnWeightMultiplier
{
	// Fields

	FName& DinoNameTagField() { return *GetNativePointerField<FName*>(this, "FDinoSpawnWeightMultiplier.DinoNameTag"); }
	float& SpawnWeightMultiplierField() { return *GetNativePointerField<float*>(this, "FDinoSpawnWeightMultiplier.SpawnWeightMultiplier"); }
	float& SpawnLimitPercentageField() { return *GetNativePointerField<float*>(this, "FDinoSpawnWeightMultiplier.SpawnLimitPercentage"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoSpawnWeightMultiplier>(); }
};