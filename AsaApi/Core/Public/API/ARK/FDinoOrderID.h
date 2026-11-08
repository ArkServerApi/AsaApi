#pragma once


struct FDinoOrderID
{
	// Fields

	int& DinoID1Field() { return *GetNativePointerField<int*>(this, "FDinoOrderID.DinoID1"); }
	int& DinoID2Field() { return *GetNativePointerField<int*>(this, "FDinoOrderID.DinoID2"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FDinoOrderID.DinoName"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoOrderID>(); }
};