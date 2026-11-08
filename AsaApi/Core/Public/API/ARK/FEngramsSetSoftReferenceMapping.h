#pragma once


struct FEngramsSetSoftReferenceMapping
{
	// Fields

	TArray<FString, TSizedDefaultAllocator<32> >& EngramSetToUnlockField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FEngramsSetSoftReferenceMapping.EngramSetToUnlock"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FEngramsSetSoftReferenceMapping>(); }
};