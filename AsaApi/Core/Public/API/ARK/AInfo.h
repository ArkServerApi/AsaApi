#pragma once
#include "BulkForward.h"


struct AInfo : AActor
{
	// Fields

	  // Bitfields

	  // Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("AInfo"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AInfo"); }
	//void AInfo(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "AInfo.AInfo(FObjectInitializer*)", ObjectInitializer); }

	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AInfo.IsLevelBoundsRelevant()"); }
};