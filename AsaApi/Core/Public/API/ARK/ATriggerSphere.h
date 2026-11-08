#pragma once


struct ATriggerSphere : ATriggerBase
{
	// Fields

	  // Bitfields

	  // Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ATriggerSphere"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ATriggerSphere"); }
};