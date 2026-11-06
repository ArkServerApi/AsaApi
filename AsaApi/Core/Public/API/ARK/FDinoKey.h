#pragma once


struct FDinoKey
{
	// Fields

	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoKey.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FDinoKey.DinoID2"); }

	// Bitfields

	// Functions
};