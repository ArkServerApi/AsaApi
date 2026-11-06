#pragma once


struct FEngramEntryOverride
{
	// Fields

	FString& EngramClassNameField() { return *GetNativePointerField<FString*>(this, "FEngramEntryOverride.EngramClassName"); }
	int& EngramIndexField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramIndex"); }
	int& EngramPointsCostField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramPointsCost"); }
	int& EngramLevelRequirementField() { return *GetNativePointerField<int*>(this, "FEngramEntryOverride.EngramLevelRequirement"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FEngramEntryOverride>(); }
};