#pragma once


struct APrimalCableActor : AActor
{
	// Fields

	UPrimalCableComponent*& CableComponentField() { return *GetNativePointerField<UPrimalCableComponent**>(this, "APrimalCableActor.CableComponent"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalCableActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalCableActor"); }
};