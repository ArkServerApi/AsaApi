#pragma once


struct FItemCraftQueueEntry
{
	// Fields

	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "FItemCraftQueueEntry.ItemID"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FItemCraftQueueEntry.Quantity"); }
	BitFieldValue<bool, unsigned __int32> bIgnoreInventoryRequirement() { return { this, "FItemCraftQueueEntry.bIgnoreInventoryRequirement"}; }
	float& RepairPercentageField() { return *GetNativePointerField<float*>(this, "FItemCraftQueueEntry.RepairPercentage"); }
	float& RepairSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FItemCraftQueueEntry.RepairSpeedMultiplier"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemCraftQueueEntry>(); }
};