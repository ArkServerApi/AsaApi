#pragma once


struct FItemMaxItemQuantityOverride
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemMaxItemQuantityOverride.ItemClass"); }
	FMaxItemQuantityOverride& QuantityField() { return *GetNativePointerField<FMaxItemQuantityOverride*>(this, "FItemMaxItemQuantityOverride.Quantity"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemMaxItemQuantityOverride>(); }
};