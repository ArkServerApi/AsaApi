#pragma once


struct FDinoBaseLevelWeightEntry
{
	float EntryWeight;
	float BaseLevelMinRange;
	float BaseLevelMaxRange;

	// Fields

	float& EntryWeightField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.EntryWeight"); }
	float& BaseLevelMinRangeField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.BaseLevelMinRange"); }
	float& BaseLevelMaxRangeField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.BaseLevelMaxRange"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoBaseLevelWeightEntry>(); }
};