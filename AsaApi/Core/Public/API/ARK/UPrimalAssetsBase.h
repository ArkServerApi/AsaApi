#pragma once
#include "BulkForward.h"


struct UPrimalAssetsBase : UObject
{
	// Fields

	//FOnAssetLoadHitch& OnHitchedField() { return *GetNativePointerField<FOnAssetLoadHitch*>(this, "UPrimalAssetsBase.OnHitched"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPrimalAssetsBase();
	// 	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UPrimalAssetsBase.GetPrivateStaticClass()"); }
	// FUNCTION MISSING: UPrimalAssetsBase.GetPrivateStaticClass()
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAssetsBase"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAssetsBase"); }

	FOnAssetLoadHitch& OnHitchedField() { return *GetNativePointerField<FOnAssetLoadHitch*>(this, "UPrimalAssetsBase.OnHitched"); }
};