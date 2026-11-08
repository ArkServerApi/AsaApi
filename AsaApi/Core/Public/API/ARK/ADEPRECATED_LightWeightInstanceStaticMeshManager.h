#pragma once
#include "BulkForward.h"
#include "ADEPRECATED_LightWeightInstanceManager.h"

struct ADEPRECATED_LightWeightInstanceStaticMeshManager : public ADEPRECATED_LightWeightInstanceManager
{
public:
	ADEPRECATED_LightWeightInstanceStaticMeshManager() = delete;
	~ADEPRECATED_LightWeightInstanceStaticMeshManager() = delete;
	ADEPRECATED_LightWeightInstanceStaticMeshManager(const ADEPRECATED_LightWeightInstanceStaticMeshManager&) = delete;
	ADEPRECATED_LightWeightInstanceStaticMeshManager& operator=(const ADEPRECATED_LightWeightInstanceStaticMeshManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADEPRECATED_LightWeightInstanceStaticMeshManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADEPRECATED_LightWeightInstanceStaticMeshManager"); }

	TArray<int, TSizedDefaultAllocator<32> >& RenderingIndicesToDataIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.RenderingIndicesToDataIndices"); }
	TArray<int, TSizedDefaultAllocator<32> >& DataIndicesToRenderingIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.DataIndicesToRenderingIndices"); }
	TArray<int, TSizedDefaultAllocator<32> >& DataIndicesToBeDeletedField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.DataIndicesToBeDeleted"); }
	void OnRep_Transforms() { NativeCall<void>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.OnRep_Transforms()"); }
	void AddNewInstanceAt(FLWIData* InitData, int Index) { NativeCall<void, FLWIData*, int>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.AddNewInstanceAt(FLWIData*,int)", InitData, Index); }
	void NotifySMInstanceMovementEnded(const FSMInstanceId& InstanceId) { NativeCall<void, const FSMInstanceId&>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.NotifySMInstanceMovementEnded(FSMInstanceId&)", InstanceId); }
	bool CanEditSMInstance(const FSMInstanceId& InstanceId) { return NativeCall<bool, const FSMInstanceId&>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.CanEditSMInstance(FSMInstanceId&)", InstanceId); }
	void NotifySMInstanceSelectionChanged(const FSMInstanceId& InstanceId, bool bIsSelected) { NativeCall<void, const FSMInstanceId&, bool>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.NotifySMInstanceSelectionChanged(FSMInstanceId&,bool)", InstanceId, bIsSelected); }
	int ConvertHandleIndexToInternalIndex(int InHandleIndex) { return NativeCall<int, int>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.ConvertHandleIndexToInternalIndex(int)", InHandleIndex); }
	void NotifySMInstanceMovementStarted(const FSMInstanceId& InstanceId) { NativeCall<void, const FSMInstanceId&>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.NotifySMInstanceMovementStarted(FSMInstanceId&)", InstanceId); }
	void PostActorSpawn(const FActorInstanceHandle& Handle) { NativeCall<void, const FActorInstanceHandle&>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.PostActorSpawn(FActorInstanceHandle&)", Handle); }
	void RemoveInstanceFromRendering(int DataIndex) { NativeCall<void, int>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.RemoveInstanceFromRendering(int)", DataIndex); }
	void OnStaticMeshSet() { NativeCall<void>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.OnStaticMeshSet()"); }
	void SetStaticMeshFromActor(AActor* InActor) { NativeCall<void, AActor*>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.SetStaticMeshFromActor(AActor*)", InActor); }
	void AddInstanceToRendering(int DataIndex) { NativeCall<void, int>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.AddInstanceToRendering(int)", DataIndex); }
	void SetInstancedStaticMeshParams() { NativeCall<void>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.SetInstancedStaticMeshParams()"); }
	void RemoveInstance(int Index) { NativeCall<void, int>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.RemoveInstance(int)", Index); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager._getUObject()"); }
	bool CanMoveSMInstance(const FSMInstanceId& InstanceId, ETypedElementWorldType InWorldType) { return NativeCall<bool, const FSMInstanceId&, ETypedElementWorldType>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.CanMoveSMInstance(FSMInstanceId&,ETypedElementWorldType)", InstanceId, InWorldType); }
	void SetRepresentedClass(UClass* ActorClass) { NativeCall<void, UClass*>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.SetRepresentedClass(UClass*)", ActorClass); }
	int ConvertCollisionIndexToInstanceIndex(int InIndex, const UPrimitiveComponent* RelevantComponent) { return NativeCall<int, int, const UPrimitiveComponent*>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.ConvertCollisionIndexToInstanceIndex(int,UPrimitiveComponent*)", InIndex, RelevantComponent); }
	void PostRemoveInstanceFromRendering() { NativeCall<void>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.PostRemoveInstanceFromRendering()"); }
	int ConvertInternalIndexToHandleIndex(int InInternalIndex) { return NativeCall<int, int>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.ConvertInternalIndexToHandleIndex(int)", InInternalIndex); }
	void NotifySMInstanceMovementOngoing(const FSMInstanceId& InstanceId) { NativeCall<void, const FSMInstanceId&>(this, "ADEPRECATED_LightWeightInstanceStaticMeshManager.NotifySMInstanceMovementOngoing(FSMInstanceId&)", InstanceId); }
};
