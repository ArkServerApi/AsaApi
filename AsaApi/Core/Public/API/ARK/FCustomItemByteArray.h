#pragma once


struct FCustomItemByteArray
{
	TArray<unsigned char> Bytes;
	// Fields

	TArray<unsigned char, TSizedDefaultAllocator<32> >& BytesField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FCustomItemByteArray.Bytes"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FCustomItemByteArray>(); }
};