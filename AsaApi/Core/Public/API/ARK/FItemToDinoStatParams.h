#pragma once


struct FItemToDinoStatParams
{
	// Fields

	TEnumAsByte<enum EPrimalItemStat::Type>& ItemStatField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemStat::Type>*>(this, "FItemToDinoStatParams.ItemStat"); }
	int& MinItemStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MinItemStatValue"); }
	int& MaxItemStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MaxItemStatValue"); }
	int& MinDinoStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MinDinoStatValue"); }
	int& MaxDinoStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MaxDinoStatValue"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemToDinoStatParams>(); }
};