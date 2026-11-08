#pragma once


struct FCustomItemByteArrays
{
	TArray<FCustomItemByteArray> ByteArrays;
	// Fields

	TArray<FCustomItemByteArray, TSizedDefaultAllocator<32> >& ByteArraysField() { return *GetNativePointerField<TArray<FCustomItemByteArray, TSizedDefaultAllocator<32> >*>(this, "FCustomItemByteArrays.ByteArrays"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FCustomItemByteArrays>(); }
	FCustomItemByteArrays* operator=(const FCustomItemByteArrays* __that) { return NativeCall<FCustomItemByteArrays*, const FCustomItemByteArrays*>(this, "FCustomItemByteArrays.operator=(FCustomItemByteArrays&)", __that); }
};