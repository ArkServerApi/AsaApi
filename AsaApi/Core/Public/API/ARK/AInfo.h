#pragma once
#include "BulkForward.h"


struct AInfo : AActor
{
	// Fields

	  // Bitfields

	  // Functions

	static UClass* StaticClass() { return GetPrivateStaticClass(); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "AInfo.StaticClass()"); }
	//void AInfo(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "AInfo.AInfo(FObjectInitializer*)", ObjectInitializer); }

	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AInfo.IsLevelBoundsRelevant()"); }
};