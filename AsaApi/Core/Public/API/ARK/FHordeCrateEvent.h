#pragma once


struct FHordeCrateEvent
{
	// Fields

	long double& EventStartTimeField() { return *GetNativePointerField<long double*>(this, "FHordeCrateEvent.EventStartTime"); }
	TWeakObjectPtr<AActor>& HordeSpawnNetworkField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "FHordeCrateEvent.HordeSpawnNetwork"); }
	TWeakObjectPtr<AActor>& HordeModeCrateField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "FHordeCrateEvent.HordeModeCrate"); }
	unsigned __int8& EventTypeField() { return *GetNativePointerField<unsigned __int8*>(this, "FHordeCrateEvent.EventType"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FHordeCrateEvent>(); }
};