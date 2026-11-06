#pragma once


struct ASaveGameActor : AActor
{
	// Fields

	  // Bitfields

	  // Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("ASaveGameActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASaveGameActor"); }
};