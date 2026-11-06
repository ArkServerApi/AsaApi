#pragma once


struct FTimerHandle
{
	// Fields

	unsigned long Handle;

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FTimerHandle>(); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void Invalidate();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool IsValid()const;
};