#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWorldPartitionHLOD : public AActor
{
public:
	AWorldPartitionHLOD() = delete;
	~AWorldPartitionHLOD() = delete;
	AWorldPartitionHLOD(const AWorldPartitionHLOD&) = delete;
	AWorldPartitionHLOD& operator=(const AWorldPartitionHLOD&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldPartitionHLOD"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldPartitionHLOD"); }

	unsigned int& LODLevelField() { return *GetNativePointerField<unsigned int*>(this, "AWorldPartitionHLOD.LODLevel"); }
	bool& bRequireWarmupField() { return *GetNativePointerField<bool*>(this, "AWorldPartitionHLOD.bRequireWarmup"); }
	bool& bDisableLumenCardsField() { return *GetNativePointerField<bool*>(this, "AWorldPartitionHLOD.bDisableLumenCards"); }
	bool& bDisableIfPlatformAllowsField() { return *GetNativePointerField<bool*>(this, "AWorldPartitionHLOD.bDisableIfPlatformAllows"); }
	FGuid& SourceCellGuidField() { return *GetNativePointerField<FGuid*>(this, "AWorldPartitionHLOD.SourceCellGuid"); }
	FGuid& StandaloneHLODGuidField() { return *GetNativePointerField<FGuid*>(this, "AWorldPartitionHLOD.StandaloneHLODGuid"); }
	bool SupportsIncrementalPreUnregisterComponents() { return NativeCall<bool>(this, "AWorldPartitionHLOD.SupportsIncrementalPreUnregisterComponents()"); }
	void SetVisibility(bool bInVisible) { NativeCall<void, bool>(this, "AWorldPartitionHLOD.SetVisibility(bool)", bInVisible); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AWorldPartitionHLOD.Serialize(FArchive&)", Ar); }
	void BeginDestroy() { NativeCall<void>(this, "AWorldPartitionHLOD.BeginDestroy()"); }
	FString* GetHLODNameOrLabel(FString* result) { return NativeCall<FString*, FString*>(this, "AWorldPartitionHLOD.GetHLODNameOrLabel()", result); }
	void BeginPlay() { NativeCall<void>(this, "AWorldPartitionHLOD.BeginPlay()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AWorldPartitionHLOD.PostUnregisterAllComponents()"); }
	bool IsRuntimeOnly() { return NativeCall<bool>(this, "AWorldPartitionHLOD.IsRuntimeOnly()"); }
	void ApplyCastShadowToComponents(bool bInShouldCastShadows) { NativeCall<void, bool>(this, "AWorldPartitionHLOD.ApplyCastShadowToComponents(bool)", bInShouldCastShadows); }
	void PostLoad() { NativeCall<void>(this, "AWorldPartitionHLOD.PostLoad()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "AWorldPartitionHLOD.NeedsLoadForServer()"); }
	bool IsCustomHLOD() { return NativeCall<bool>(this, "AWorldPartitionHLOD.IsCustomHLOD()"); }
	void PostInitProperties() { NativeCall<void>(this, "AWorldPartitionHLOD.PostInitProperties()"); }
	bool SupportsIncrementalPreRegisterComponents() { return NativeCall<bool>(this, "AWorldPartitionHLOD.SupportsIncrementalPreRegisterComponents()"); }
	bool DoesRequireWarmup() { return NativeCall<bool>(this, "AWorldPartitionHLOD.DoesRequireWarmup()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AWorldPartitionHLOD.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	UObject* GetUObject() { return NativeCall<UObject*>(this, "AWorldPartitionHLOD.GetUObject()"); }
	ULevel* GetHLODLevel() { return NativeCall<ULevel*>(this, "AWorldPartitionHLOD.GetHLODLevel()"); }
	const FGuid& GetCustomHLODGuid() { return NativeCall<const FGuid&>(this, "AWorldPartitionHLOD.GetCustomHLODGuid()"); }
	bool IsComponentRelevantForNavigation(UActorComponent* Component) { return NativeCall<bool, UActorComponent*>(this, "AWorldPartitionHLOD.IsComponentRelevantForNavigation(UActorComponent*)", Component); }
	bool IsStandalone() { return NativeCall<bool>(this, "AWorldPartitionHLOD.IsStandalone()"); }
	const FGuid& GetSourceCellGuid() { return NativeCall<const FGuid&>(this, "AWorldPartitionHLOD.GetSourceCellGuid()"); }
	void OnForceDisableShadowsCVarChanged(IConsoleVariable* CVar) { NativeCall<void, IConsoleVariable*>(this, "AWorldPartitionHLOD.OnForceDisableShadowsCVarChanged(IConsoleVariable*)", CVar); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "AWorldPartitionHLOD.IsEditorOnly()"); }
	const FGuid& GetStandaloneHLODGuid() { return NativeCall<const FGuid&>(this, "AWorldPartitionHLOD.GetStandaloneHLODGuid()"); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "AWorldPartitionHLOD.PreRegisterAllComponents()"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "AWorldPartitionHLOD.IsHLODRelevant()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AWorldPartitionHLOD.PostRegisterAllComponents()"); }
};
