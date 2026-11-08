#pragma once


struct FItemNetID
{
	// Fields

	unsigned int ItemID1;
	unsigned int ItemID2;

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FItemNetID>(); }
};