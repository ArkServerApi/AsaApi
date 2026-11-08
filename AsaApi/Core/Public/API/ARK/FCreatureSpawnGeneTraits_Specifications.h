#pragma once


struct FCreatureSpawnGeneTraits_Specifications
{
	// Fields

	TMap<FName, FCreatureGeneTraitSpawnInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FCreatureGeneTraitSpawnInfo, 0> >& OverrideDefaultGeneTraitSpawnInfoField() { return *GetNativePointerField<TMap<FName, FCreatureGeneTraitSpawnInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FCreatureGeneTraitSpawnInfo, 0> >*>(this, "FCreatureSpawnGeneTraits_Specifications.OverrideDefaultGeneTraitSpawnInfo"); }
	TArray<float, TSizedDefaultAllocator<32> >& OverrideDefaultLiklihoodToSpawnWithCountOfTraitsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FCreatureSpawnGeneTraits_Specifications.OverrideDefaultLiklihoodToSpawnWithCountOfTraits"); }
	int& OverrideMaxNumberOfTotalGeneTraitsAllowedOnThisCreatureField() { return *GetNativePointerField<int*>(this, "FCreatureSpawnGeneTraits_Specifications.OverrideMaxNumberOfTotalGeneTraitsAllowedOnThisCreature"); }

	// Bitfields

	// Functions

	FCreatureSpawnGeneTraits_Specifications& operator=(const struct FCreatureSpawnGeneTraits_Specifications* __that) { return NativeCall<FCreatureSpawnGeneTraits_Specifications&, const struct FCreatureSpawnGeneTraits_Specifications*>(this, "FCreatureSpawnGeneTraits_Specifications.operator=(FCreatureSpawnGeneTraits_Specifications&)", __that); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FCreatureSpawnGeneTraits_Specifications>(); }
};