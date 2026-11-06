#pragma once
#include "BulkForward.h"


struct APrimalProjectileDilo : AShooterProjectile
{
	// Fields

	  // Bitfields

	  // Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalProjectileDilo"); }

	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileDilo.BeginPlay()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalProjectileDilo"); }
};