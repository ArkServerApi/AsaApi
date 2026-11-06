#pragma once
#include "BulkForward.h"


struct ABlockingVolume : AVolume
{
	// Fields

	  // Bitfields

	  // Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ABlockingVolume"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesABlockingVolume();
	void PreLoadSaveGame() { NativeCall<void>(this, "ABlockingVolume.PreLoadSaveGame()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ABlockingVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ABlockingVolume"); }

	bool& bAddToBlockingVolumeListField() { return *GetNativePointerField<bool*>(this, "ABlockingVolume.bAddToBlockingVolumeList"); }
};