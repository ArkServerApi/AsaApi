#pragma once

struct UVictoryCoreHighest : UObject
{
	// Fields

	  // Bitfields

	  // Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UVictoryCoreHighest.StaticClass()"); }

	static UClass* GetPrivateStaticClass() { return StaticClass(); }
};