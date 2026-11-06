#pragma once


struct FGeneTraitSpecification
{
	// Fields

	FCreatureSpawnGeneTraits_Specifications& DefaultCreatureSpawnGeneTraits_SpecificationsField() { return *GetNativePointerField<FCreatureSpawnGeneTraits_Specifications*>(this, "FGeneTraitSpecification.DefaultCreatureSpawnGeneTraits_Specifications"); }
	TMap<FName, FCreatureSpawnGeneTraits_Specifications, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FCreatureSpawnGeneTraits_Specifications, 0> >& OverwrittenPerCreatureSpawnGeneTraits_SpecificationsField() { return *GetNativePointerField<TMap<FName, FCreatureSpawnGeneTraits_Specifications, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FCreatureSpawnGeneTraits_Specifications, 0> >*>(this, "FGeneTraitSpecification.OverwrittenPerCreatureSpawnGeneTraits_Specifications"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FGeneTraitSpecification>(); }
};