#pragma once


struct FSortingTask
{
	// Fields

	struct AActor*& ContainerField() { return *GetNativePointerField<struct AActor**>(this, "FSortingTask.Container"); }
	TEnumAsByte<enum ESortingTaskAction::Type>& ActionField() { return *GetNativePointerField<TEnumAsByte<enum ESortingTaskAction::Type>*>(this, "FSortingTask.Action"); }
	TSubclassOf<UPrimalItem>& ItemTypeField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "FSortingTask.ItemType"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "FSortingTask.Quantity"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FSortingTask.Weight"); }
	int& PairIdField() { return *GetNativePointerField<int*>(this, "FSortingTask.PairId"); }

	// Bitfields

	// Functions

	UScriptStruct* StaticStruct() { return FindScriptStruct<FSortingTask>(); }
};