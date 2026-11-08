#pragma once


struct FSoftClassPath : FSoftObjectPath
{
	// Fields

	// Bitfields

	// Functions

	UClass* ResolveClass() const { return NativeCall<UClass*>(this, "FSoftClassPath.ResolveClass()"); }
};