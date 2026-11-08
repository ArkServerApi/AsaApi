#pragma once


struct FItemCraftingConsumptionReplenishment
{
	// Fields

	TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >& ItemResourceClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalItem>, TSizedDefaultAllocator<32> >*>(this, "FItemCraftingConsumptionReplenishment.ItemResourceClasses"); }
	TSubclassOf<UPrimalItem>& ToReplaceWithClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemCraftingConsumptionReplenishment.ToReplaceWithClass"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemCraftingConsumptionReplenishment>(); }
};