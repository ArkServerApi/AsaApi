#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADEPRECATED_LightWeightInstanceManager : public AActor
{
public:
	ADEPRECATED_LightWeightInstanceManager() = delete;
	~ADEPRECATED_LightWeightInstanceManager() = delete;
	ADEPRECATED_LightWeightInstanceManager(const ADEPRECATED_LightWeightInstanceManager&) = delete;
	ADEPRECATED_LightWeightInstanceManager& operator=(const ADEPRECATED_LightWeightInstanceManager&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADEPRECATED_LightWeightInstanceManager"); }

	FString& BaseInstanceNameField() { return *GetNativePointerField<FString*>(this, "ADEPRECATED_LightWeightInstanceManager.BaseInstanceName"); }
	TArray<int, TSizedDefaultAllocator<32> >& DestroyedActorIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "ADEPRECATED_LightWeightInstanceManager.DestroyedActorIndices"); }
	TArray<int, TSizedDefaultAllocator<32> >& FreeIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "ADEPRECATED_LightWeightInstanceManager.FreeIndices"); }
	TArray<bool, TSizedDefaultAllocator<32> >& ValidIndicesField() { return *GetNativePointerField<TArray<bool, TSizedDefaultAllocator<32> >*>(this, "ADEPRECATED_LightWeightInstanceManager.ValidIndices"); }
	AActor* FindOrCreateActor(const FActorInstanceHandle& Handle) { return NativeCall<AActor*, const FActorInstanceHandle&>(this, "ADEPRECATED_LightWeightInstanceManager.FindOrCreateActor(FActorInstanceHandle&)", Handle); }
	void SetSpawnParameters(FActorSpawnParameters& SpawnParams) { NativeCall<void, FActorSpawnParameters&>(this, "ADEPRECATED_LightWeightInstanceManager.SetSpawnParameters(FActorSpawnParameters&)", SpawnParams); }
	int ConvertInternalIndexToHandleIndex(int InInternalIndex) { return NativeCall<int, int>(this, "ADEPRECATED_LightWeightInstanceManager.ConvertInternalIndexToHandleIndex(int)", InInternalIndex); }
	void RemoveInstance(int Index) { NativeCall<void, int>(this, "ADEPRECATED_LightWeightInstanceManager.RemoveInstance(int)", Index); }
	UClass* GetRepresentedClassInternal() { return NativeCall<UClass*>(this, "ADEPRECATED_LightWeightInstanceManager.GetRepresentedClassInternal()"); }
	bool FindActorForHandle(const FActorInstanceHandle& Handle) { return NativeCall<bool, const FActorInstanceHandle&>(this, "ADEPRECATED_LightWeightInstanceManager.FindActorForHandle(FActorInstanceHandle&)", Handle); }
	int AddNewInstance(FLWIData* InitData) { return NativeCall<int, FLWIData*>(this, "ADEPRECATED_LightWeightInstanceManager.AddNewInstance(FLWIData*)", InitData); }
	ULevel* GetLevelForInstance(int InstanceIndex) { return NativeCall<ULevel*, int>(this, "ADEPRECATED_LightWeightInstanceManager.GetLevelForInstance(int)", InstanceIndex); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ADEPRECATED_LightWeightInstanceManager._getUObject()"); }
	void PostActorSpawn(const FActorInstanceHandle& Handle) { NativeCall<void, const FActorInstanceHandle&>(this, "ADEPRECATED_LightWeightInstanceManager.PostActorSpawn(FActorInstanceHandle&)", Handle); }
	AActor* FindActor(const FActorInstanceHandle& Handle) { return NativeCall<AActor*, const FActorInstanceHandle&>(this, "ADEPRECATED_LightWeightInstanceManager.FindActor(FActorInstanceHandle&)", Handle); }
	void PreSpawnInitialization(const FActorInstanceHandle& Handle, AActor* SpawnedActor) { NativeCall<void, const FActorInstanceHandle&, AActor*>(this, "ADEPRECATED_LightWeightInstanceManager.PreSpawnInitialization(FActorInstanceHandle&,AActor*)", Handle, SpawnedActor); }
	UE::Math::TTransform<double>* GetTransform(UE::Math::TTransform<double>* result, const FActorInstanceHandle& Handle) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, const FActorInstanceHandle&>(this, "ADEPRECATED_LightWeightInstanceManager.GetTransform(FActorInstanceHandle&)", result, Handle); }
	UClass* GetAcceptedClass() { return NativeCall<UClass*>(this, "ADEPRECATED_LightWeightInstanceManager.GetAcceptedClass()"); }
	int ConvertCollisionIndexToInstanceIndex(int InIndex, const UPrimitiveComponent* RelevantComponent) { return NativeCall<int, int, const UPrimitiveComponent*>(this, "ADEPRECATED_LightWeightInstanceManager.ConvertCollisionIndexToInstanceIndex(int,UPrimitiveComponent*)", InIndex, RelevantComponent); }
	int GetGridSize() { return NativeCall<int>(this, "ADEPRECATED_LightWeightInstanceManager.GetGridSize()"); }
	bool SetDataFromActor(FLWIData* InData, AActor* InActor) { return NativeCall<bool, FLWIData*, AActor*>(this, "ADEPRECATED_LightWeightInstanceManager.SetDataFromActor(FLWIData*,AActor*)", InData, InActor); }
	void AddNewInstanceAt(FLWIData* InitData, int Index) { NativeCall<void, FLWIData*, int>(this, "ADEPRECATED_LightWeightInstanceManager.AddNewInstanceAt(FLWIData*,int)", InitData, Index); }
	void UpdateDataAtIndex(FLWIData* InData, int Index) { NativeCall<void, FLWIData*, int>(this, "ADEPRECATED_LightWeightInstanceManager.UpdateDataAtIndex(FLWIData*,int)", InData, Index); }
	void OnRep_Transforms() { NativeCall<void>(this, "ADEPRECATED_LightWeightInstanceManager.OnRep_Transforms()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADEPRECATED_LightWeightInstanceManager"); }
	void GrowDataArrays() { NativeCall<void>(this, "ADEPRECATED_LightWeightInstanceManager.GrowDataArrays()"); }
	int FindIndexForActor(const AActor* InActor) { return NativeCall<int, const AActor*>(this, "ADEPRECATED_LightWeightInstanceManager.FindIndexForActor(AActor*)", InActor); }
	FLWIData* AllocateInitData() { return NativeCall<FLWIData*>(this, "ADEPRECATED_LightWeightInstanceManager.AllocateInitData()"); }
	UClass* GetActorClassToSpawn(const FActorInstanceHandle& Handle) { return NativeCall<UClass*, const FActorInstanceHandle&>(this, "ADEPRECATED_LightWeightInstanceManager.GetActorClassToSpawn(FActorInstanceHandle&)", Handle); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADEPRECATED_LightWeightInstanceManager.Tick(float)", DeltaSeconds); }
	int ConvertHandleIndexToInternalIndex(int InHandleIndex) { return NativeCall<int, int>(this, "ADEPRECATED_LightWeightInstanceManager.ConvertHandleIndexToInternalIndex(int)", InHandleIndex); }
	void OnSpawnedActorDestroyed(AActor* DestroyedActor, int DestroyedActorInstanceIndex) { NativeCall<void, AActor*, int>(this, "ADEPRECATED_LightWeightInstanceManager.OnSpawnedActorDestroyed(AActor*,int)", DestroyedActor, DestroyedActorInstanceIndex); }
	AActor* ConvertInstanceToActor(const FActorInstanceHandle& Handle) { return NativeCall<AActor*, const FActorInstanceHandle&>(this, "ADEPRECATED_LightWeightInstanceManager.ConvertInstanceToActor(FActorInstanceHandle&)", Handle); }
	UClass* GetRepresentedClass(int InstanceIndex) { return NativeCall<UClass*, int>(this, "ADEPRECATED_LightWeightInstanceManager.GetRepresentedClass(int)", InstanceIndex); }
	void SetRepresentedClass(UClass* ActorClass) { NativeCall<void, UClass*>(this, "ADEPRECATED_LightWeightInstanceManager.SetRepresentedClass(UClass*)", ActorClass); }
};
