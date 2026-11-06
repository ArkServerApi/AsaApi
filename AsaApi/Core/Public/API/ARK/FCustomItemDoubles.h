#pragma once


struct FCustomItemDoubles
{
	TArray<double> Doubles;
	// Fields

	TArray<double, TSizedDefaultAllocator<32> >& DoublesField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "FCustomItemDoubles.Doubles"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FCustomItemDoubles>(); }
};