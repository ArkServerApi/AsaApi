#pragma once


struct FUnreplicatedEggData
{
	// Fields

	TArray<int, TSizedDefaultAllocator<32> >& EggNumberOfLevelUpPointsAppliedField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FUnreplicatedEggData.EggNumberOfLevelUpPointsApplied"); }
	TArray<int, TSizedDefaultAllocator<32> >& EggNumberMutationsAppliedField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FUnreplicatedEggData.EggNumberMutationsApplied"); }
	float& EggTamedIneffectivenessModifierField() { return *GetNativePointerField<float*>(this, "FUnreplicatedEggData.EggTamedIneffectivenessModifier"); }
	TArray<int, TSizedDefaultAllocator<32> >& EggColorSetIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "FUnreplicatedEggData.EggColorSetIndices"); }
	TArray<FDinoAncestorsEntryBlueprint, TSizedDefaultAllocator<32> >& EggDinoAncestorsField() { return *GetNativePointerField<TArray<FDinoAncestorsEntryBlueprint, TSizedDefaultAllocator<32> >*>(this, "FUnreplicatedEggData.EggDinoAncestors"); }
	TArray<FDinoAncestorsEntryBlueprint, TSizedDefaultAllocator<32> >& EggDinoAncestorsMaleField() { return *GetNativePointerField<TArray<FDinoAncestorsEntryBlueprint, TSizedDefaultAllocator<32> >*>(this, "FUnreplicatedEggData.EggDinoAncestorsMale"); }
	int& EggRandomMutationsFemaleField() { return *GetNativePointerField<int*>(this, "FUnreplicatedEggData.EggRandomMutationsFemale"); }
	int& EggRandomMutationsMaleField() { return *GetNativePointerField<int*>(this, "FUnreplicatedEggData.EggRandomMutationsMale"); }
	int& EggGenderOverrideField() { return *GetNativePointerField<int*>(this, "FUnreplicatedEggData.EggGenderOverride"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FUnreplicatedEggData>(); }
};