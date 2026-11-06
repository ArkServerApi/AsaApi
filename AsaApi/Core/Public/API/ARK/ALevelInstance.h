#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALevelInstance : public AActor
{
public:
	ALevelInstance() = delete;
	~ALevelInstance() = delete;
	ALevelInstance(const ALevelInstance&) = delete;
	ALevelInstance& operator=(const ALevelInstance&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALevelInstance"); }

	FGuid& LevelInstanceSpawnGuidField() { return *GetNativePointerField<FGuid*>(this, "ALevelInstance.LevelInstanceSpawnGuid"); }
	FLevelInstanceActorGuid& LevelInstanceActorGuidField() { return *GetNativePointerField<FLevelInstanceActorGuid*>(this, "ALevelInstance.LevelInstanceActorGuid"); }
	FLevelInstanceActorImpl& LevelInstanceActorImplField() { return *GetNativePointerField<FLevelInstanceActorImpl*>(this, "ALevelInstance.LevelInstanceActorImpl"); }
	float& MinDistanceForMergedLumenProxyField() { return *GetNativePointerField<float*>(this, "ALevelInstance.MinDistanceForMergedLumenProxy"); }
	const FLevelInstanceID& GetLevelInstanceID() { return NativeCall<const FLevelInstanceID&>(this, "ALevelInstance.GetLevelInstanceID()"); }
	bool HasValidLevelInstanceID() { return NativeCall<bool>(this, "ALevelInstance.HasValidLevelInstanceID()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ALevelInstance.PostInitializeComponents()"); }
	bool IsLoadingEnabled() { return NativeCall<bool>(this, "ALevelInstance.IsLoadingEnabled()"); }
	void OnLevelInstanceLoaded() { NativeCall<void>(this, "ALevelInstance.OnLevelInstanceLoaded()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ALevelInstance.PostUnregisterAllComponents()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ALevelInstance.Serialize(FArchive&)", Ar); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ALevelInstance._getUObject()"); }
	void ForceUpdateHack() { NativeCall<void>(this, "ALevelInstance.ForceUpdateHack()"); }
	const FGuid& GetLevelInstanceGuid() { return NativeCall<const FGuid&>(this, "ALevelInstance.GetLevelInstanceGuid()"); }
	void PostNetInit() { NativeCall<void>(this, "ALevelInstance.PostNetInit()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ALevelInstance.PostRegisterAllComponents()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALevelInstance"); }
};
