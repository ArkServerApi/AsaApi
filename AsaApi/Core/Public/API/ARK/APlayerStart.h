#pragma once
#include "BulkForward.h"
#include "ANavigationObjectBase.h"

struct APlayerStart : public ANavigationObjectBase
{
public:
	APlayerStart() = delete;
	~APlayerStart() = delete;
	APlayerStart(const APlayerStart&) = delete;
	APlayerStart& operator=(const APlayerStart&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APlayerStart"); }

	FName& PlayerStartTagField() { return *GetNativePointerField<FName*>(this, "APlayerStart.PlayerStartTag"); }
	int& SpawnPointRegionField() { return *GetNativePointerField<int*>(this, "APlayerStart.SpawnPointRegion"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("APlayerStart"); }
	void PostInitializeComponents() { NativeCall<void>(this, "APlayerStart.PostInitializeComponents()"); }
	void BeginPlay() { NativeCall<void>(this, "APlayerStart.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APlayerStart.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "APlayerStart.PostUnregisterAllComponents()"); }
	void Destroyed() { NativeCall<void>(this, "APlayerStart.Destroyed()"); }
};
