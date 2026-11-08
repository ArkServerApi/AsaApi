#pragma once


struct FFunctionCaller
{
	// Fields

	FName& FunctionNameField() { return *GetNativePointerField<FName*>(this, "FFunctionCaller.FunctionName"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FFunctionCaller>(); }
};