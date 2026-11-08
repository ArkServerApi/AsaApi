#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWorldPartitionStandaloneHLOD : public AActor
{
public:
	AWorldPartitionStandaloneHLOD() = delete;
	~AWorldPartitionStandaloneHLOD() = delete;
	AWorldPartitionStandaloneHLOD(const AWorldPartitionStandaloneHLOD&) = delete;
	AWorldPartitionStandaloneHLOD& operator=(const AWorldPartitionStandaloneHLOD&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldPartitionStandaloneHLOD"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldPartitionStandaloneHLOD"); }

	FGuid& LevelInstanceSpawnGuidField() { return *GetNativePointerField<FGuid*>(this, "AWorldPartitionStandaloneHLOD.LevelInstanceSpawnGuid"); }
	FLevelInstanceActorGuid& LevelInstanceActorGuidField() { return *GetNativePointerField<FLevelInstanceActorGuid*>(this, "AWorldPartitionStandaloneHLOD.LevelInstanceActorGuid"); }
	FLevelInstanceActorImpl& LevelInstanceActorImplField() { return *GetNativePointerField<FLevelInstanceActorImpl*>(this, "AWorldPartitionStandaloneHLOD.LevelInstanceActorImpl"); }
	bool IsLoadingEnabled() { return NativeCall<bool>(this, "AWorldPartitionStandaloneHLOD.IsLoadingEnabled()"); }
	const FGuid& GetLevelInstanceGuid() { return NativeCall<const FGuid&>(this, "AWorldPartitionStandaloneHLOD.GetLevelInstanceGuid()"); }
	const FLevelInstanceID& GetLevelInstanceID() { return NativeCall<const FLevelInstanceID&>(this, "AWorldPartitionStandaloneHLOD.GetLevelInstanceID()"); }
	bool HasValidLevelInstanceID() { return NativeCall<bool>(this, "AWorldPartitionStandaloneHLOD.HasValidLevelInstanceID()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AWorldPartitionStandaloneHLOD._getUObject()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AWorldPartitionStandaloneHLOD.PostRegisterAllComponents()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AWorldPartitionStandaloneHLOD.PostUnregisterAllComponents()"); }
};
