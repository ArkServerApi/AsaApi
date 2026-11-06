#pragma once
#include "BulkForward.h"


struct ACustomActorList : AInfo
{
	// Fields

	TArray<AActor*, TSizedDefaultAllocator<32> >& ActorListField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "ACustomActorList.ActorList"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ACustomActorList.StaticClass()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesACustomActorList();
	void BeginPlay() { NativeCall<void>(this, "ACustomActorList.BeginPlay()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ACustomActorList.EndPlay(EEndPlayReason::Type)", EndPlayReason); }

	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	bool& bDestroyIfEmptyField() { return *GetNativePointerField<bool*>(this, "ACustomActorList.bDestroyIfEmpty"); }
	void DestroyActors() { NativeCall<void>(this, "ACustomActorList.DestroyActors()"); }
};