#pragma once


struct FPaintingKeyValue
{
	// Fields

	int Key;
	int Value;

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPaintingKeyValue>(); }
};