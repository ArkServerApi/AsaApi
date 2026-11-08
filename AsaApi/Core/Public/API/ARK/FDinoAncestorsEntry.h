#pragma once


struct FDinoAncestorsEntry
{
	// Native Fields

	FString MaleName;
	unsigned int MaleDinoID1;
	unsigned int MaleDinoID2;
	FString FemaleName;
	unsigned int FemaleDinoID1;
	unsigned int FemaleDinoID2;

	// Fields

	FString& MaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntry.MaleName"); }
	unsigned int& MaleDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoAncestorsEntry.MaleDinoID1"); }
	unsigned int& MaleDinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoAncestorsEntry.MaleDinoID2"); }
	FString& FemaleNameField() { return *GetNativePointerField<FString*>(this, "FDinoAncestorsEntry.FemaleName"); }
	unsigned int& FemaleDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoAncestorsEntry.FemaleDinoID1"); }
	unsigned int& FemaleDinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoAncestorsEntry.FemaleDinoID2"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoAncestorsEntry>(); }
};