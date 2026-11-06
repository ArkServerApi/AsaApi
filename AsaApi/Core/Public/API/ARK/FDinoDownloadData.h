#pragma once


struct FDinoDownloadData
{
	// Fields

	unsigned int& AllowDownloadTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FDinoDownloadData.AllowDownloadTimeUTC"); }
	TSubclassOf<APrimalDinoCharacter>& UniqueDinoField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FDinoDownloadData.UniqueDino"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoDownloadData>(); }
};