#pragma once


struct FItemCraftingCostOverride
{
	// Fields

	TSubclassOf<UPrimalItem>& ItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FItemCraftingCostOverride.ItemClass"); }
	TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >& BaseCraftingResourceRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement, TSizedDefaultAllocator<32> >*>(this, "FItemCraftingCostOverride.BaseCraftingResourceRequirements"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemCraftingCostOverride>(); }
};