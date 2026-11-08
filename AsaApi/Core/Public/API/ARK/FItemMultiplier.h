#pragma once


struct FItemMultiplier
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemMultiplier.ItemClass"); }
	float& ItemMultiplierField() { return *GetNativePointerField<float*>(this, "FItemMultiplier.ItemMultiplier"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemMultiplier>(); }
};