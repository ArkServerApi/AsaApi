#pragma once


struct FCreatureGeneTraitSpawnInfo
{
	// Fields

	float& SpawnRateProbabilityField() { return *GetNativePointerField<float*>(this, "FCreatureGeneTraitSpawnInfo.SpawnRateProbability"); }
	TArray<float, TSizedDefaultAllocator<32> >& GeneTraitTierChanceProbabilityOverrideField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FCreatureGeneTraitSpawnInfo.GeneTraitTierChanceProbabilityOverride"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FCreatureGeneTraitSpawnInfo>(); }
};