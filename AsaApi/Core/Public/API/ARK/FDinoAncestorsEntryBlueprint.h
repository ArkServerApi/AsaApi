#pragma once


struct FDinoAncestorsEntryBlueprint
{
	// Fields

	FString& MaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntryBlueprint.MaleName"); }
	int& MaleDinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.MaleDinoID1"); }
	int& MaleDinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.MaleDinoID2"); }
	FString& FemaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntryBlueprint.FemaleName"); }
	int& FemaleDinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.FemaleDinoID1"); }
	int& FemaleDinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoAncestorsEntryBlueprint.FemaleDinoID2"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoAncestorsEntryBlueprint>(); }
};