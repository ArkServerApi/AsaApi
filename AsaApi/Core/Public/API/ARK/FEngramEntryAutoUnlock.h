#pragma once


struct FEngramEntryAutoUnlock
{
	// Fields

	FString& EngramClassNameField() { return *GetNativePointerField<FString*>(this, "FEngramEntryAutoUnlock.EngramClassName"); }
	int& LevelToAutoUnlockField() { return *GetNativePointerField<int*>(this, "FEngramEntryAutoUnlock.LevelToAutoUnlock"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FEngramEntryAutoUnlock>(); }
};