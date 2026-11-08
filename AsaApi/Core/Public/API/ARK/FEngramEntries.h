#pragma once


struct FEngramEntries
{
	// Fields

	TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >& EngramEntriesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>, TSizedDefaultAllocator<32> >*>(this, "FEngramEntries.EngramEntries"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FEngramEntries>(); }
};