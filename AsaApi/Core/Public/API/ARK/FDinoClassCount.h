#pragma once


struct FDinoClassCount
{
	// Fields

	int& NumberofTamedClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofTamedClass"); }
	int& NumberofTamedBabyClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofTamedBabyClass"); }
	int& NumberofTamedFemalesClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofTamedFemalesClass"); }
	int& NumberofWildClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofWildClass"); }
	int& NumberofWildBabyClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofWildBabyClass"); }
	int& NumberofWildFemalesClassField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofWildFemalesClass"); }
	int& NumberofWildLatentSpawnsField() { return *GetNativePointerField<int*>(this, "FDinoClassCount.NumberofWildLatentSpawns"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoClassCount>(); }
};