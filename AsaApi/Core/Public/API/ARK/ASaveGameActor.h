#pragma once


struct ASaveGameActor : AActor
{
	// Fields

	  // Bitfields

	  // Functions

	static UClass* StaticClass() { return GetPrivateStaticClass(); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "ASaveGameActor.StaticClass()"); }
};