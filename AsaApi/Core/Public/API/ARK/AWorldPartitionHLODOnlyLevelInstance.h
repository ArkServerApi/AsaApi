#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWorldPartitionHLODOnlyLevelInstance : public AActor
{
public:
	AWorldPartitionHLODOnlyLevelInstance() = delete;
	~AWorldPartitionHLODOnlyLevelInstance() = delete;
	AWorldPartitionHLODOnlyLevelInstance(const AWorldPartitionHLODOnlyLevelInstance&) = delete;
	AWorldPartitionHLODOnlyLevelInstance& operator=(const AWorldPartitionHLODOnlyLevelInstance&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldPartitionHLODOnlyLevelInstance"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldPartitionHLODOnlyLevelInstance"); }

	FGuid& LevelInstanceSpawnGuidField() { return *GetNativePointerField<FGuid*>(this, "AWorldPartitionHLODOnlyLevelInstance.LevelInstanceSpawnGuid"); }
	FLevelInstanceActorGuid& LevelInstanceActorGuidField() { return *GetNativePointerField<FLevelInstanceActorGuid*>(this, "AWorldPartitionHLODOnlyLevelInstance.LevelInstanceActorGuid"); }
	FLevelInstanceActorImpl& LevelInstanceActorImplField() { return *GetNativePointerField<FLevelInstanceActorImpl*>(this, "AWorldPartitionHLODOnlyLevelInstance.LevelInstanceActorImpl"); }
	bool IsLoadingEnabled() { return NativeCall<bool>(this, "AWorldPartitionHLODOnlyLevelInstance.IsLoadingEnabled()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AWorldPartitionHLODOnlyLevelInstance.PostUnregisterAllComponents()"); }
	const FLevelInstanceID& GetLevelInstanceID() { return NativeCall<const FLevelInstanceID&>(this, "AWorldPartitionHLODOnlyLevelInstance.GetLevelInstanceID()"); }
	bool HasValidLevelInstanceID() { return NativeCall<bool>(this, "AWorldPartitionHLODOnlyLevelInstance.HasValidLevelInstanceID()"); }
	const FGuid& GetLevelInstanceGuid() { return NativeCall<const FGuid&>(this, "AWorldPartitionHLODOnlyLevelInstance.GetLevelInstanceGuid()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AWorldPartitionHLODOnlyLevelInstance._getUObject()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AWorldPartitionHLODOnlyLevelInstance.PostRegisterAllComponents()"); }
};
