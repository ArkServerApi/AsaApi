#pragma once


struct FPrimalCharacterStatusStateThresholds
{
	// Fields

	TArray<float, TSizedDefaultAllocator<32> >& HighThresholdStatusStateValuesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterStatusStateThresholds.HighThresholdStatusStateValues"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>, TSizedDefaultAllocator<32> >& HighThresholdStatusStateTypeField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterStatusStateThresholds.HighThresholdStatusStateType"); }
	TArray<float, TSizedDefaultAllocator<32> >& LowThresholdStatusStateValuesField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterStatusStateThresholds.LowThresholdStatusStateValues"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>, TSizedDefaultAllocator<32> >& LowThresholdStatusStateTypeField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>, TSizedDefaultAllocator<32> >*>(this, "FPrimalCharacterStatusStateThresholds.LowThresholdStatusStateType"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalCharacterStatusStateThresholds>(); }
};