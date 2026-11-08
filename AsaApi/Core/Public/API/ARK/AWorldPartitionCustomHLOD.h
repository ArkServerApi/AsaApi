#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWorldPartitionCustomHLOD : public AActor
{
public:
	AWorldPartitionCustomHLOD() = delete;
	~AWorldPartitionCustomHLOD() = delete;
	AWorldPartitionCustomHLOD(const AWorldPartitionCustomHLOD&) = delete;
	AWorldPartitionCustomHLOD& operator=(const AWorldPartitionCustomHLOD&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldPartitionCustomHLOD"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldPartitionCustomHLOD"); }

	FGuid& HLODInstanceGuidField() { return *GetNativePointerField<FGuid*>(this, "AWorldPartitionCustomHLOD.HLODInstanceGuid"); }
	bool IsStandalone() { return NativeCall<bool>(this, "AWorldPartitionCustomHLOD.IsStandalone()"); }
	const FGuid& GetCustomHLODGuid() { return NativeCall<const FGuid&>(this, "AWorldPartitionCustomHLOD.GetCustomHLODGuid()"); }
	ULevel* GetHLODLevel() { return NativeCall<ULevel*>(this, "AWorldPartitionCustomHLOD.GetHLODLevel()"); }
	FString* GetHLODNameOrLabel(FString* result) { return NativeCall<FString*, FString*>(this, "AWorldPartitionCustomHLOD.GetHLODNameOrLabel()", result); }
	void BeginPlay() { NativeCall<void>(this, "AWorldPartitionCustomHLOD.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AWorldPartitionCustomHLOD.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool DoesRequireWarmup() { return NativeCall<bool>(this, "AWorldPartitionCustomHLOD.DoesRequireWarmup()"); }
	bool IsCustomHLOD() { return NativeCall<bool>(this, "AWorldPartitionCustomHLOD.IsCustomHLOD()"); }
	const FGuid& GetStandaloneHLODGuid() { return NativeCall<const FGuid&>(this, "AWorldPartitionCustomHLOD.GetStandaloneHLODGuid()"); }
	const FGuid& GetSourceCellGuid() { return NativeCall<const FGuid&>(this, "AWorldPartitionCustomHLOD.GetSourceCellGuid()"); }
	void SetVisibility(bool bInVisible) { NativeCall<void, bool>(this, "AWorldPartitionCustomHLOD.SetVisibility(bool)", bInVisible); }
	UObject* GetUObject() { return NativeCall<UObject*>(this, "AWorldPartitionCustomHLOD.GetUObject()"); }
};
