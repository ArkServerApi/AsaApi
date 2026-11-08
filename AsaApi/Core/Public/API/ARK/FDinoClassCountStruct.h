#pragma once


struct FDinoClassCountStruct
{
	// Fields

	TSubclassOf<APrimalCharacter>& DinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalCharacter>*>(this, "FDinoClassCountStruct.DinoClass"); }
	int& NumberofTamedClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofTamedClass"); }
	int& NumberofTamedBabyClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofTamedBabyClass"); }
	int& NumberofTamedFemalesClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofTamedFemalesClass"); }
	int& NumberofWildClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofWildClass"); }
	int& NumberofWildBabyClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofWildBabyClass"); }
	int& NumberofWildFemalesClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCountStruct.NumberofWildFemalesClass"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoClassCountStruct>(); }
};