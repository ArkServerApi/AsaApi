#pragma once


struct APrimalPersistentWorldData : ASaveGameActor
{
	// Fields

	TArray<FPlayerDeathReason, TSizedDefaultAllocator<32> >& PlayerDeathReasonsField() { return *GetNativePointerField<TArray<FPlayerDeathReason, TSizedDefaultAllocator<32> >*>(this, "APrimalPersistentWorldData.PlayerDeathReasons"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalPersistentWorldData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalPersistentWorldData"); }
};