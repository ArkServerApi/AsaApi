#pragma once
#include "BulkForward.h"


struct AStaticMeshActor : AActor
{
	// Fields

	TObjectPtr<UStaticMeshComponent>& StaticMeshComponentField() { return *GetNativePointerField<TObjectPtr<UStaticMeshComponent>*>(this, "AStaticMeshActor.StaticMeshComponent"); }
	FieldArray<char, 1> NavigationGeometryGatheringModeField() { return { this, "AStaticMeshActor.NavigationGeometryGatheringMode" }; }

	// Bitfields

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AStaticMeshActor"); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "AStaticMeshActor.GetDetailedInfoInternal()", result); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAStaticMeshActor();
	bool IsHLODRelevant() { return NativeCall<bool>(this, "AStaticMeshActor.IsHLODRelevant()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void BeginPlay();

	static UClass* StaticClass() { return AsaApi::ResolveClass("AStaticMeshActor"); }

	bool& bStaticMeshReplicateMovementField() { return *GetNativePointerField<bool*>(this, "AStaticMeshActor.bStaticMeshReplicateMovement"); }
	ENavDataGatheringMode GetGeometryGatheringMode() { return NativeCall<ENavDataGatheringMode>(this, "AStaticMeshActor.GetGeometryGatheringMode()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AStaticMeshActor.Serialize(FArchive&)", Ar); }
	void PostInitializeComponents() { NativeCall<void>(this, "AStaticMeshActor.PostInitializeComponents()"); }
};