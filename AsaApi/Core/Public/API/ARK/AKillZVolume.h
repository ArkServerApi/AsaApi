#pragma once
#include "BulkForward.h"


struct AKillZVolume : APhysicsVolume
{
	// Fields

	  // Bitfields

	  // Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AKillZVolume"); }
	void ActorEnteredVolume(AActor* Other) { NativeCall<void, AActor*>(this, "AKillZVolume.ActorEnteredVolume(AActor*)", Other); }

	void ActorLeavingVolume(AActor* Other) { NativeCall<void, AActor*>(this, "AKillZVolume.ActorLeavingVolume(AActor*)", Other); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AKillZVolume"); }
};