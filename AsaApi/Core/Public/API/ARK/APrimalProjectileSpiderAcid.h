#pragma once
#include "BulkForward.h"


struct APrimalProjectileSpiderAcid : AShooterProjectile
{
	// Fields

	  // Bitfields

	  // Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() = delete;

	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileSpiderAcid.BeginPlay()"); }
};