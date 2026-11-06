#pragma once
#include "BulkForward.h"
#include "USkinnedMeshComponent.h"

struct UInstancedSkinnedMeshComponent : public USkinnedMeshComponent
{
public:
	UInstancedSkinnedMeshComponent() = delete;
	~UInstancedSkinnedMeshComponent() = delete;
	UInstancedSkinnedMeshComponent(const UInstancedSkinnedMeshComponent&) = delete;
	UInstancedSkinnedMeshComponent& operator=(const UInstancedSkinnedMeshComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInstancedSkinnedMeshComponent"); }

	int& NumCustomDataFloatsField() { return *GetNativePointerField<int*>(this, "UInstancedSkinnedMeshComponent.NumCustomDataFloats"); }
	TArray<float, TSizedDefaultAllocator<32> >& InstanceCustomDataField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UInstancedSkinnedMeshComponent.InstanceCustomData"); }
	float& AnimationMinScreenSizeField() { return *GetNativePointerField<float*>(this, "UInstancedSkinnedMeshComponent.AnimationMinScreenSize"); }
	int& InstanceMinDrawDistanceField() { return *GetNativePointerField<int*>(this, "UInstancedSkinnedMeshComponent.InstanceMinDrawDistance"); }
	int& InstanceStartCullDistanceField() { return *GetNativePointerField<int*>(this, "UInstancedSkinnedMeshComponent.InstanceStartCullDistance"); }
	int& InstanceEndCullDistanceField() { return *GetNativePointerField<int*>(this, "UInstancedSkinnedMeshComponent.InstanceEndCullDistance"); }
	bool& bIsInstanceDataGPUOnlyField() { return *GetNativePointerField<bool*>(this, "UInstancedSkinnedMeshComponent.bIsInstanceDataGPUOnly"); }
	bool& bHasPreviousTransformsField() { return *GetNativePointerField<bool*>(this, "UInstancedSkinnedMeshComponent.bHasPreviousTransforms"); }
	bool& bForceAnimateSocketsField() { return *GetNativePointerField<bool*>(this, "UInstancedSkinnedMeshComponent.bForceAnimateSockets"); }
	int& NumInstancesGPUOnlyField() { return *GetNativePointerField<int*>(this, "UInstancedSkinnedMeshComponent.NumInstancesGPUOnly"); }
	bool& bIsInstanceDataApplyCompletedField() { return *GetNativePointerField<bool*>(this, "UInstancedSkinnedMeshComponent.bIsInstanceDataApplyCompleted"); }
	FInstanceDataManager& InstanceDataManagerField() { return *GetNativePointerField<FInstanceDataManager*>(this, "UInstancedSkinnedMeshComponent.InstanceDataManager"); }
	int& NumDirtyBoneAttachmentBindingsField() { return *GetNativePointerField<int*>(this, "UInstancedSkinnedMeshComponent.NumDirtyBoneAttachmentBindings"); }
	BitFieldValue<bool, unsigned char> bInheritPerInstanceData() { return { this, "UInstancedSkinnedMeshComponent.bInheritPerInstanceData"}; }
	BitFieldValue<bool, unsigned char> bUseGpuLodSelection() { return { this, "UInstancedSkinnedMeshComponent.bUseGpuLodSelection"}; }
	BitFieldValue<bool, unsigned char> bDisableCollision() { return { this, "UInstancedSkinnedMeshComponent.bDisableCollision"}; }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UInstancedSkinnedMeshComponent.CreateSceneProxy()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UInstancedSkinnedMeshComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RefreshBoneTransforms(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "UInstancedSkinnedMeshComponent.RefreshBoneTransforms(FActorComponentTickFunction*)", TickFunction); }
	void OnRegister() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.OnRegister()"); }
	void SetInstanceDataGPUOnly(bool bInInstancesGPUOnly) { NativeCall<void, bool>(this, "UInstancedSkinnedMeshComponent.SetInstanceDataGPUOnly(bool)", bInInstancesGPUOnly); }
	void BeginDestroy() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.BeginDestroy()"); }
	void LoadBoneAttachments(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UInstancedSkinnedMeshComponent.LoadBoneAttachments(FArchive&)", Ar); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, const FCollisionQueryParams& Params) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const FCollisionQueryParams &>(this, "UInstancedSkinnedMeshComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, *Start, *End, Params); }
	void SendRenderInstanceData_Concurrent() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.SendRenderInstanceData_Concurrent()"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UInstancedSkinnedMeshComponent.IsHLODRelevant()"); }
	FBodyInstance* GetBodyInstance(FName BoneName, bool bGetWelded, int Index) { return NativeCall<FBodyInstance*, FName, bool, int>(this, "UInstancedSkinnedMeshComponent.GetBodyInstance(FName,bool,int)", BoneName, bGetWelded, Index); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UInstancedSkinnedMeshComponent.ShouldCreatePhysicsState()"); }
	void OnActorEnableCollisionChanged() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.OnActorEnableCollisionChanged()"); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.OnDestroyPhysicsState()"); }
	void SaveBoneAttachments(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UInstancedSkinnedMeshComponent.SaveBoneAttachments(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.PostLoad()"); }
	void CreateAllInstanceBodies() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.CreateAllInstanceBodies()"); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "UInstancedSkinnedMeshComponent.CanEditSimulatePhysics()"); }
	void BuildMergedBodySetup() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.BuildMergedBodySetup()"); }
	void FlushBoneAttachmentSockets() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.FlushBoneAttachmentSockets()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.DestroyRenderState_Concurrent()"); }
	void SetNumCustomDataFloats(int InNumCustomDataFloats) { NativeCall<void, int>(this, "UInstancedSkinnedMeshComponent.SetNumCustomDataFloats(int)", InNumCustomDataFloats); }
	void RecreateInstanceBody(int InstanceBodyIndex) { NativeCall<void, int>(this, "UInstancedSkinnedMeshComponent.RecreateInstanceBody(int)", InstanceBodyIndex); }
	void MarkBoneAttachmentBindingDirty(int InstanceIndex) { NativeCall<void, int>(this, "UInstancedSkinnedMeshComponent.MarkBoneAttachmentBindingDirty(int)", InstanceIndex); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UInstancedSkinnedMeshComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInstancedSkinnedMeshComponent"); }
	bool RemoveInstanceInternal(int InstanceIndex, bool bInstanceAlreadyRemoved) { return NativeCall<bool, int, bool>(this, "UInstancedSkinnedMeshComponent.RemoveInstanceInternal(int,bool)", InstanceIndex, bInstanceAlreadyRemoved); }
	void SetCullDistances(int StartCullDistance, int EndCullDistance) { NativeCall<void, int, int>(this, "UInstancedSkinnedMeshComponent.SetCullDistances(int,int)", StartCullDistance, EndCullDistance); }
	void SetHasPerInstancePrevTransforms(bool bInHasPreviousTransforms) { NativeCall<void, bool>(this, "UInstancedSkinnedMeshComponent.SetHasPerInstancePrevTransforms(bool)", bInHasPreviousTransforms); }
	void OptimizeInstanceData(bool bShouldRetainIdMap) { NativeCall<void, bool>(this, "UInstancedSkinnedMeshComponent.OptimizeInstanceData(bool)", bShouldRetainIdMap); }
	void SetAnimationMinScreenSize(float InAnimationMinScreenSize) { NativeCall<void, float>(this, "UInstancedSkinnedMeshComponent.SetAnimationMinScreenSize(float)", InAnimationMinScreenSize); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.OnCreatePhysicsState()"); }
	int GetInstanceCount() { return NativeCall<int>(this, "UInstancedSkinnedMeshComponent.GetInstanceCount()"); }
	void ClearInstances() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.ClearInstances()"); }
	void ResetBoneAttachmentDirtyState() { NativeCall<void>(this, "UInstancedSkinnedMeshComponent.ResetBoneAttachmentDirtyState()"); }
	void SetNumGPUInstances(int InCount) { NativeCall<void, int>(this, "UInstancedSkinnedMeshComponent.SetNumGPUInstances(int)", InCount); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UInstancedSkinnedMeshComponent.GetBodySetup()"); }
	void ReleaseBoneAttachmentSocket(int SocketIndex) { NativeCall<void, int>(this, "UInstancedSkinnedMeshComponent.ReleaseBoneAttachmentSocket(int)", SocketIndex); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UInstancedSkinnedMeshComponent.Serialize(FArchive&)", Ar); }
	void ApplyInheritedPerInstanceData(const UInstancedSkinnedMeshComponent* InArchetype) { NativeCall<void, const UInstancedSkinnedMeshComponent*>(this, "UInstancedSkinnedMeshComponent.ApplyInheritedPerInstanceData(UInstancedSkinnedMeshComponent*)", InArchetype); }
	void SetTransformProvider(UTransformProviderData* InTransformProvider) { NativeCall<void, UTransformProviderData*>(this, "UInstancedSkinnedMeshComponent.SetTransformProvider(UTransformProviderData*)", InTransformProvider); }
	int AcquireBoneAttachmentSocket(UInstancedSkinnedMeshComponent* Parent, FName SocketName, bool bDeferResolve) { return NativeCall<int, UInstancedSkinnedMeshComponent*, FName, bool>(this, "UInstancedSkinnedMeshComponent.AcquireBoneAttachmentSocket(UInstancedSkinnedMeshComponent*,FName,bool)", Parent, SocketName, bDeferResolve); }
	UTransformProviderData* GetTransformProvider() { return NativeCall<UTransformProviderData*>(this, "UInstancedSkinnedMeshComponent.GetTransformProvider()"); }
};
