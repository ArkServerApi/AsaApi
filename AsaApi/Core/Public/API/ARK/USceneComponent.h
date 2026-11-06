#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>


struct USceneComponent : UActorComponent
{
	// Fields

	//const FLevelCollection*& CachedLevelCollectionField() { return *GetNativePointerField<const FLevelCollection**>(this, "USceneComponent.CachedLevelCollection"); }
	TWeakObjectPtr<APhysicsVolume>& PhysicsVolumeField() { return *GetNativePointerField<TWeakObjectPtr<APhysicsVolume>*>(this, "USceneComponent.PhysicsVolume"); }
	TObjectPtr<USceneComponent>& AttachParentField() { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "USceneComponent.AttachParent"); }
	FName& AttachSocketNameField() { return *GetNativePointerField<FName*>(this, "USceneComponent.AttachSocketName"); }
	TArray<TObjectPtr<USceneComponent>, TSizedDefaultAllocator<32> >& AttachChildrenField() { return *GetNativePointerField<TArray<TObjectPtr<USceneComponent>, TSizedDefaultAllocator<32> >*>(this, "USceneComponent.AttachChildren"); }
	TArray<TObjectPtr<USceneComponent>, TSizedDefaultAllocator<32> >& ClientAttachedChildrenField() { return *GetNativePointerField<TArray<TObjectPtr<USceneComponent>, TSizedDefaultAllocator<32> >*>(this, "USceneComponent.ClientAttachedChildren"); }
	FName& NetOldAttachSocketNameField() { return *GetNativePointerField<FName*>(this, "USceneComponent.NetOldAttachSocketName"); }
	USceneComponent*& NetOldAttachParentField() { return *GetNativePointerField<USceneComponent**>(this, "USceneComponent.NetOldAttachParent"); }
	UE::Math::TBoxSphereBounds<double, double>& BoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "USceneComponent.Bounds"); }
	UE::Math::TVector<double>& RelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USceneComponent.RelativeLocation"); }
	UE::Math::TRotator<double>& RelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "USceneComponent.RelativeRotation"); }
	UE::Math::TVector<double>& RelativeScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USceneComponent.RelativeScale3D"); }
	UE::Math::TVector<double>& ComponentVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USceneComponent.ComponentVelocity"); }
	TEnumAsByte<enum EDetailMode>& DetailModeField() { return *GetNativePointerField<TEnumAsByte<enum EDetailMode>*>(this, "USceneComponent.DetailMode"); }
	//FIsRootComponentChanged& IsRootComponentChangedField() { return *GetNativePointerField<FIsRootComponentChanged*>(this, "USceneComponent.IsRootComponentChanged"); }
	//FTransformUpdated& TransformUpdatedField() { return *GetNativePointerField<FTransformUpdated*>(this, "USceneComponent.TransformUpdated"); }
	//TArray<FScopedMovementUpdate*, TSizedDefaultAllocator<32> >& ScopedMovementStackField() { return *GetNativePointerField<TArray<FScopedMovementUpdate*, TSizedDefaultAllocator<32> >*>(this, "USceneComponent.ScopedMovementStack"); }
	FRotationConversionCache& WorldRotationCacheField() { return *GetNativePointerField<FRotationConversionCache*>(this, "USceneComponent.WorldRotationCache"); }
	FRotationConversionCache& RelativeRotationCacheField() { return *GetNativePointerField<FRotationConversionCache*>(this, "USceneComponent.RelativeRotationCache"); }
	UE::Math::TTransform<double>& ComponentToWorldField() { return *GetNativePointerField<UE::Math::TTransform<double>*>(this, "USceneComponent.ComponentToWorld"); }
	int& AttachmentChangedIncrementerField() { return *GetNativePointerField<int*>(this, "USceneComponent.AttachmentChangedIncrementer"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bClientSyncAlwaysUpdatePhysicsCollision() { return { this, "USceneComponent.bClientSyncAlwaysUpdatePhysicsCollision" }; }
	BitFieldValue<bool, unsigned __int32> bComponentToWorldUpdated() { return { this, "USceneComponent.bComponentToWorldUpdated" }; }
	BitFieldValue<bool, unsigned __int32> bSkipUpdateOverlaps() { return { this, "USceneComponent.bSkipUpdateOverlaps" }; }
	BitFieldValue<bool, unsigned __int32> bAbsoluteLocation() { return { this, "USceneComponent.bAbsoluteLocation" }; }
	BitFieldValue<bool, unsigned __int32> bAbsoluteRotation() { return { this, "USceneComponent.bAbsoluteRotation" }; }
	BitFieldValue<bool, unsigned __int32> bAbsoluteScale() { return { this, "USceneComponent.bAbsoluteScale" }; }
	BitFieldValue<bool, unsigned __int32> bVisible() { return { this, "USceneComponent.bVisible" }; }
	BitFieldValue<bool, unsigned __int32> bShouldBeAttached() { return { this, "USceneComponent.bShouldBeAttached" }; }
	BitFieldValue<bool, unsigned __int32> bShouldSnapLocationWhenAttached() { return { this, "USceneComponent.bShouldSnapLocationWhenAttached" }; }
	BitFieldValue<bool, unsigned __int32> bShouldSnapRotationWhenAttached() { return { this, "USceneComponent.bShouldSnapRotationWhenAttached" }; }
	BitFieldValue<bool, unsigned __int32> bShouldSnapScaleWhenAttached() { return { this, "USceneComponent.bShouldSnapScaleWhenAttached" }; }
	BitFieldValue<bool, unsigned __int32> bShouldUpdatePhysicsVolume() { return { this, "USceneComponent.bShouldUpdatePhysicsVolume" }; }
	BitFieldValue<bool, unsigned __int32> bHiddenInGame() { return { this, "USceneComponent.bHiddenInGame" }; }
	BitFieldValue<bool, unsigned __int32> bAttachedSoundsForceHighPriority() { return { this, "USceneComponent.bAttachedSoundsForceHighPriority" }; }
	BitFieldValue<bool, unsigned __int32> bBoundsChangeTriggersStreamingDataRebuild() { return { this, "USceneComponent.bBoundsChangeTriggersStreamingDataRebuild" }; }
	BitFieldValue<bool, unsigned __int32> bUseAttachParentBound() { return { this, "USceneComponent.bUseAttachParentBound" }; }
	BitFieldValue<bool, unsigned __int32> bComputeFastLocalBounds() { return { this, "USceneComponent.bComputeFastLocalBounds" }; }
	BitFieldValue<bool, unsigned __int32> bComputeBoundsOnceForGame() { return { this, "USceneComponent.bComputeBoundsOnceForGame" }; }
	BitFieldValue<bool, unsigned __int32> bComputedBoundsOnceForGame() { return { this, "USceneComponent.bComputedBoundsOnceForGame" }; }
	BitFieldValue<bool, unsigned __int32> bIsNotRenderAttachmentRoot() { return { this, "USceneComponent.bIsNotRenderAttachmentRoot" }; }
	BitFieldValue<bool, unsigned __int32> bDisableDetachmentUpdateOverlaps() { return { this, "USceneComponent.bDisableDetachmentUpdateOverlaps" }; }
	BitFieldValue<bool, unsigned __int32> bWantsOnUpdateTransform() { return { this, "USceneComponent.bWantsOnUpdateTransform" }; }
	BitFieldValue<bool, unsigned __int32> bNetUpdateTransform() { return { this, "USceneComponent.bNetUpdateTransform" }; }
	BitFieldValue<bool, unsigned __int32> bNetUpdateAttachment() { return { this, "USceneComponent.bNetUpdateAttachment" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreParentTransformUpdate() { return { this, "USceneComponent.bIgnoreParentTransformUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bUpdateChildOverlaps() { return { this, "USceneComponent.bUpdateChildOverlaps" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USceneComponent"); }
	void OnChildAttached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "USceneComponent.OnChildAttached(USceneComponent*)", ChildComponent); }
	//void UpdateComponentToWorld(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport) { NativeCall<void, EUpdateTransformFlags, ETeleportType>(this, "USceneComponent.UpdateComponentToWorld(EUpdateTransformFlags,ETeleportType)", UpdateTransformFlags, Teleport); }
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren, bool bSetChildrenRenderState) { NativeCall<void, bool, bool, bool>(this, "USceneComponent.SetHiddenInGame(bool,USceneComponent::EVisibilityPropagation,bool)", NewHidden, bPropagateToChildren, bSetChildrenRenderState); }
	void OnUnregister() { NativeCall<void>(this, "USceneComponent.OnUnregister()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUSceneComponent();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	//     void NotifyIsRootComponentChanged(bool bIsRootComponent) { NativeCall<void, bool>(this, "USceneComponent.NotifyIsRootComponentChanged(bool)", bIsRootComponent); }
	// FUNCTION MISSING: USceneComponent.NotifyIsRootComponentChanged(bool)
	//     static const FName* GetRelativeScale3DPropertyName(const FName* result) { return NativeCall<const FName*, const FName*>(nullptr, "USceneComponent.GetRelativeScale3DPropertyName()", result); }
	// FUNCTION MISSING: USceneComponent.GetRelativeScale3DPropertyName()
	void UpdateComponentToWorldWithParent(USceneComponent* Parent, FName SocketName, EUpdateTransformFlags UpdateTransformFlags, const UE::Math::TQuat<double>* RelativeRotationQuat, ETeleportType Teleport) { NativeCall<void, USceneComponent*, FName, EUpdateTransformFlags, const UE::Math::TQuat<double>*, ETeleportType>(this, "USceneComponent.UpdateComponentToWorldWithParent(USceneComponent*,FName,EUpdateTransformFlags,UE::Math::TQuat<double>&,ETeleportType)", Parent, SocketName, UpdateTransformFlags, RelativeRotationQuat, Teleport); }
	void OnRegister() { NativeCall<void>(this, "USceneComponent.OnRegister()"); }
	void EndPlay(EEndPlayReason::Type Reason) { NativeCall<void, EEndPlayReason::Type>(this, "USceneComponent.EndPlay(EEndPlayReason::Type)", Reason); }
	void PropagateTransformUpdate(bool bTransformChanged, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport) { NativeCall<void, bool, EUpdateTransformFlags, ETeleportType>(this, "USceneComponent.PropagateTransformUpdate(bool,EUpdateTransformFlags,ETeleportType)", bTransformChanged, UpdateTransformFlags, Teleport); }
	bool UpdateOverlaps(const TArrayView<FOverlapInfo const, int>* PendingOverlaps, bool bDoNotifies, const TArrayView<FOverlapInfo const, int>* OverlapsAtEndLocation) { return NativeCall<bool, const TArrayView<FOverlapInfo const, int>*, bool, const TArrayView<FOverlapInfo const, int>*>(this, "USceneComponent.UpdateOverlaps(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInfo,int>*)", PendingOverlaps, bDoNotifies, OverlapsAtEndLocation); }
	//void ProcessScopedMovementUpdate(FScopedMovementUpdate* CurrentScopedUpdate) { NativeCall<void, FScopedMovementUpdate*>(this, "USceneComponent.ProcessScopedMovementUpdate(FScopedMovementUpdate*)", CurrentScopedUpdate); }
	void DestroyComponent(bool bPromoteChildren) { NativeCall<void, bool>(this, "USceneComponent.DestroyComponent(bool)", bPromoteChildren); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "USceneComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void CalcBoundingCylinder(float* CylinderRadius, float* CylinderHalfHeight) { NativeCall<void, float*, float*>(this, "USceneComponent.CalcBoundingCylinder(float&,float&)", CylinderRadius, CylinderHalfHeight); }
	void UpdateBounds() { NativeCall<void>(this, "USceneComponent.UpdateBounds()"); }
	void SetRelativeLocationAndRotation(UE::Math::TVector<double>* NewLocation, const UE::Math::TQuat<double>* NewRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetRelativeLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", NewLocation, NewRotation, bSweep, OutSweepHitResult, Teleport); }
	void SetRelativeLocationAndRotation(UE::Math::TVector<double>* NewLocation, UE::Math::TRotator<double>* NewRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetRelativeLocationAndRotation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", NewLocation, NewRotation, bSweep, OutSweepHitResult, Teleport); }
	void SetRelativeRotationExact(UE::Math::TRotator<double>* NewRotation, __int64 bSweep, FHitResult* OutSweepHitResult) { NativeCall<void, UE::Math::TRotator<double>*, __int64, FHitResult*>(this, "USceneComponent.SetRelativeRotationExact(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", NewRotation, bSweep, OutSweepHitResult); }
	void SetRelativeRotation(UE::Math::TRotator<double>* NewRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TRotator<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetRelativeRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", NewRotation, bSweep, OutSweepHitResult, Teleport); }
	void AddLocalOffset(UE::Math::TVector<double>* DeltaLocation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TVector<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.AddLocalOffset(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)", DeltaLocation, bSweep, OutSweepHitResult, Teleport); }
	// TODO: Might need manual analysis
	void AddLocalRotation(UE::Math::TRotator<double>* DeltaRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TRotator<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.AddLocalRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", DeltaRotation, bSweep, OutSweepHitResult, Teleport); }
	void AddLocalRotation(const UE::Math::TQuat<double>* DeltaRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, const UE::Math::TQuat<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.AddLocalRotation(UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", DeltaRotation, bSweep, OutSweepHitResult, Teleport); }
	void AddLocalTransform(const UE::Math::TTransform<double>* DeltaTransform, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, const UE::Math::TTransform<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.AddLocalTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", DeltaTransform, bSweep, OutSweepHitResult, Teleport); }
	void AddWorldRotation(UE::Math::TRotator<double>* DeltaRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TRotator<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.AddWorldRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", DeltaRotation, bSweep, OutSweepHitResult, Teleport); }
	void AddWorldTransform(const UE::Math::TTransform<double>* DeltaTransform, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, const UE::Math::TTransform<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.AddWorldTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", DeltaTransform, bSweep, OutSweepHitResult, Teleport); }
	void AddWorldTransformKeepScale(const UE::Math::TTransform<double>* DeltaTransform, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, const UE::Math::TTransform<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.AddWorldTransformKeepScale(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", DeltaTransform, bSweep, OutSweepHitResult, Teleport); }
	void SetRelativeScale3D(UE::Math::TVector<double>* NewScale3D) { NativeCall<void, UE::Math::TVector<double>*>(this, "USceneComponent.SetRelativeScale3D(UE::Math::TVector<double>)", NewScale3D); }
	void ResetRelativeTransform() { NativeCall<void>(this, "USceneComponent.ResetRelativeTransform()"); }
	void SetRelativeTransform(const UE::Math::TTransform<double>* NewTransform, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, const UE::Math::TTransform<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetRelativeTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", NewTransform, bSweep, OutSweepHitResult, Teleport); }
	void SetWorldLocation(UE::Math::TVector<double>* NewLocation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TVector<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetWorldLocation(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)", NewLocation, bSweep, OutSweepHitResult, Teleport); }
	void SetWorldRotation(const UE::Math::TQuat<double>* NewRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, const UE::Math::TQuat<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetWorldRotation(UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", NewRotation, bSweep, OutSweepHitResult, Teleport); }
	// TODO: Might need manual analysis
	void SetWorldRotation(UE::Math::TRotator<double>* NewRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TRotator<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetWorldRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", NewRotation, bSweep, OutSweepHitResult, Teleport); }
	void SetWorldScale3D(UE::Math::TVector<double>* NewScale) { NativeCall<void, UE::Math::TVector<double>*>(this, "USceneComponent.SetWorldScale3D(UE::Math::TVector<double>)", NewScale); }
	void SetWorldTransform(const UE::Math::TTransform<double>* NewTransform, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, const UE::Math::TTransform<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetWorldTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", NewTransform, bSweep, OutSweepHitResult, Teleport); }
	// TODO: Might need manual analysis
	void SetWorldLocationAndRotation(UE::Math::TVector<double>* NewLocation, UE::Math::TRotator<double>* NewRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", NewLocation, NewRotation, bSweep, OutSweepHitResult, Teleport); }
	void SetWorldLocationAndRotation(UE::Math::TVector<double>* NewLocation, const UE::Math::TQuat<double>* NewRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, bool, FHitResult*, ETeleportType>(this, "USceneComponent.SetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", NewLocation, NewRotation, bSweep, OutSweepHitResult, Teleport); }
	void SetWorldLocationAndRotationNoPhysics(const UE::Math::TVector<double>* NewLocation, const UE::Math::TRotator<double>* NewRotation) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "USceneComponent.SetWorldLocationAndRotationNoPhysics(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", NewLocation, NewRotation); }
	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent*, TSizedDefaultAllocator<32> >* Children) { NativeCall<void, bool, TArray<USceneComponent*, TSizedDefaultAllocator<32> >*>(this, "USceneComponent.GetChildrenComponents(bool,TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)", bIncludeAllDescendants, Children); }
	void AppendDescendants(TArray<USceneComponent*, TSizedDefaultAllocator<32> >* Children) { NativeCall<void, TArray<USceneComponent*, TSizedDefaultAllocator<32> >*>(this, "USceneComponent.AppendDescendants(TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)", Children); }
	void SetupAttachment(USceneComponent* InParent, FName InSocketName) { NativeCall<void, USceneComponent*, FName>(this, "USceneComponent.SetupAttachment(USceneComponent*,FName)", InParent, InSocketName); }
	bool AttachTo(USceneComponent* Parent, FName InSocketName, EAttachLocation::Type AttachType, bool bWeldSimulatedBodies) { return NativeCall<bool, USceneComponent*, FName, EAttachLocation::Type, bool>(this, "USceneComponent.AttachTo(USceneComponent*,FName,EAttachLocation::Type,bool)", Parent, InSocketName, AttachType, bWeldSimulatedBodies); }
	bool AttachToComponent(USceneComponent* Parent, const FAttachmentTransformRules* AttachmentRules, FName SocketName) { return NativeCall<bool, USceneComponent*, const FAttachmentTransformRules*, FName>(this, "USceneComponent.AttachToComponent(USceneComponent*,FAttachmentTransformRules&,FName)", Parent, AttachmentRules, SocketName); }
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify) { NativeCall<void, bool, bool>(this, "USceneComponent.DetachFromParent(bool,bool)", bMaintainWorldPosition, bCallModify); }
	//void DetachFromComponent(const FDetachmentTransformRules* DetachmentRules) { NativeCall<void, const FDetachmentTransformRules*>(this, "USceneComponent.DetachFromComponent(FDetachmentTransformRules&)", DetachmentRules); }
	//TStructOnScope<FActorComponentInstanceData, UScriptStruct*>* GetComponentInstanceData(TStructOnScope<FActorComponentInstanceData, UScriptStruct*>* result) { return NativeCall<TStructOnScope<FActorComponentInstanceData, UScriptStruct*>*, TStructOnScope<FActorComponentInstanceData, UScriptStruct*>*>(this, "USceneComponent.GetComponentInstanceData()", result); }
	void UpdateChildTransforms(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport) { NativeCall<void, EUpdateTransformFlags, ETeleportType>(this, "USceneComponent.UpdateChildTransforms(EUpdateTransformFlags,ETeleportType)", UpdateTransformFlags, Teleport); }
	void GetSocketWorldLocationAndRotation(FName InSocketName, UE::Math::TVector<double>* OutLocation, UE::Math::TRotator<double>* OutRotation) { NativeCall<void, FName, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "USceneComponent.GetSocketWorldLocationAndRotation(FName,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", InSocketName, OutLocation, OutRotation); }
	//const FCollisionResponseContainer* GetCollisionResponseToChannels() { return NativeCall<const FCollisionResponseContainer*>(this, "USceneComponent.GetCollisionResponseToChannels()"); }
	ECollisionResponse GetCollisionResponseToComponent(USceneComponent* OtherComponent) { return NativeCall<ECollisionResponse, USceneComponent*>(this, "USceneComponent.GetCollisionResponseToComponent(USceneComponent*)", OtherComponent); }
	void SetMobility(EComponentMobility::Type NewMobility) { NativeCall<void, EComponentMobility::Type>(this, "USceneComponent.SetMobility(EComponentMobility::Type)", NewMobility); }
	bool IsAnySimulatingPhysics() { return NativeCall<bool>(this, "USceneComponent.IsAnySimulatingPhysics()"); }
	APhysicsVolume* GetPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "USceneComponent.GetPhysicsVolume()"); }
	void UpdatePhysicsVolume(bool bTriggerNotifiers) { NativeCall<void, bool>(this, "USceneComponent.UpdatePhysicsVolume(bool)", bTriggerNotifiers); }
	void SetPhysicsVolume(APhysicsVolume* NewVolume, bool bTriggerNotifiers) { NativeCall<void, APhysicsVolume*, bool>(this, "USceneComponent.SetPhysicsVolume(APhysicsVolume*,bool)", NewVolume, bTriggerNotifiers); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "USceneComponent.IsPostLoadThreadSafe()"); }
	char InternalSetWorldLocationAndRotation(UE::Math::TVector<double>* NewLocation, const UE::Math::TQuat<double>* RotationQuat, __int64 bNoPhysics, ETeleportType Teleport) { return NativeCall<char, UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, __int64, ETeleportType>(this, "USceneComponent.InternalSetWorldLocationAndRotation(UE::Math::TVector<double>,UE::Math::TQuat<double>&,bool,ETeleportType)", NewLocation, RotationQuat, bNoPhysics, Teleport); }
	bool UpdateOverlapsImpl(const TArrayView<FOverlapInfo const, int>* PendingOverlaps, TTypeCompatibleBytes<FOctreeElementSimple*>* bDoNotifies, const TArrayView<FOverlapInfo const, int>* OverlapsAtEndLocation) { return NativeCall<bool, const TArrayView<FOverlapInfo const, int>*, TTypeCompatibleBytes<FOctreeElementSimple*>*, const TArrayView<FOverlapInfo const, int>*>(this, "USceneComponent.UpdateOverlapsImpl(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInfo,int>*)", PendingOverlaps, bDoNotifies, OverlapsAtEndLocation); }
	bool MoveComponent(const UE::Math::TVector<double>* Delta, const UE::Math::TRotator<double>* NewRotation, bool bSweep, FHitResult* Hit, EMoveComponentFlags MoveFlags, ETeleportType Teleport) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, bool, FHitResult*, EMoveComponentFlags, ETeleportType>(this, "USceneComponent.MoveComponent(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,FHitResult*,EMoveComponentFlags,ETeleportType)", Delta, NewRotation, bSweep, Hit, MoveFlags, Teleport); }
	bool MoveComponentImpl(const UE::Math::TVector<double>* Delta, const UE::Math::TQuat<double>* NewRotation, bool bSweep, FHitResult* OutHit, EMoveComponentFlags MoveFlags, ETeleportType Teleport) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, bool, FHitResult*, EMoveComponentFlags, ETeleportType>(this, "USceneComponent.MoveComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitResult*,EMoveComponentFlags,ETeleportType)", Delta, NewRotation, bSweep, OutHit, MoveFlags, Teleport); }
	bool IsVisibleInEditor() { return NativeCall<bool>(this, "USceneComponent.IsVisibleInEditor()"); }
	bool ShouldRender() { return NativeCall<bool>(this, "USceneComponent.ShouldRender()"); }
	bool CanEverRender() { return NativeCall<bool>(this, "USceneComponent.CanEverRender()"); }
	bool IsVisible() { return NativeCall<bool>(this, "USceneComponent.IsVisible()"); }
	void OnHiddenInGameChanged() { NativeCall<void>(this, "USceneComponent.OnHiddenInGameChanged()"); }
	//void InternalSetVisibility(bool bNewVisibility, USceneComponent::EVisibilityPropagation PropagateToChildren, bool bSetChildrenRenderState) { NativeCall<void, bool, USceneComponent::EVisibilityPropagation, bool>(this, "USceneComponent.InternalSetVisibility(bool,USceneComponent::EVisibilityPropagation,bool)", bNewVisibility, PropagateToChildren, bSetChildrenRenderState); }
	//void SetHiddenInGame(bool bNewHiddenGame, USceneComponent::EVisibilityPropagation PropagateToChildren, bool bSetChildrenRenderState) { NativeCall<void, bool, USceneComponent::EVisibilityPropagation, bool>(this, "USceneComponent.SetHiddenInGame(bool,USceneComponent::EVisibilityPropagation,bool)", bNewHiddenGame, PropagateToChildren, bSetChildrenRenderState); }
	void ApplyWorldOffset(const UE::Math::TVector<double>* InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>*, bool>(this, "USceneComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void OnRep_AttachChildren() { NativeCall<void>(this, "USceneComponent.OnRep_AttachChildren()"); }
	void PreNetReceive() { NativeCall<void>(this, "USceneComponent.PreNetReceive()"); }
	void PostNetReceive() { NativeCall<void>(this, "USceneComponent.PostNetReceive()"); }
	void PostRepNotifies() { NativeCall<void>(this, "USceneComponent.PostRepNotifies()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "USceneComponent.Serialize(FArchive&)", Ar); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "USceneComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void ClearSkipUpdateOverlaps() { NativeCall<void>(this, "USceneComponent.ClearSkipUpdateOverlaps()"); }
	void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume) { NativeCall<void, bool>(this, "USceneComponent.SetShouldUpdatePhysicsVolume(bool)", bInShouldUpdatePhysicsVolume); }
	void UpdateNavigationData() { NativeCall<void>(this, "USceneComponent.UpdateNavigationData()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void K2_SetRelativeLocation(UE::Math::TVector<double>* NewLocation, bool bSweep, FHitResult* SweepHitResult, bool bTeleport);
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void K2_AddRelativeLocation(UE::Math::TVector<double>* DeltaLocation, bool bSweep, FHitResult* SweepHitResult, bool bTeleport);
	void StopSound(USoundBase* SoundToStop, float FadeOutTime) { NativeCall<void, USoundBase*, float>(this, "USceneComponent.StopSound(USoundBase*,float)", SoundToStop, FadeOutTime); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("USceneComponent"); }

	const FLevelCollection*& CachedLevelCollectionField() { return *GetNativePointerField<const FLevelCollection**>(this, "USceneComponent.CachedLevelCollection"); }
	TEnumAsByte<EComponentMobility::Type>& MobilityField() { return *GetNativePointerField<TEnumAsByte<EComponentMobility::Type>*>(this, "USceneComponent.Mobility"); }
	FPhysicsVolumeChanged& PhysicsVolumeChangedDelegateField() { return *GetNativePointerField<FPhysicsVolumeChanged*>(this, "USceneComponent.PhysicsVolumeChangedDelegate"); }
	FIsRootComponentChanged& IsRootComponentChangedField() { return *GetNativePointerField<FIsRootComponentChanged*>(this, "USceneComponent.IsRootComponentChanged"); }
	FTransformUpdated& TransformUpdatedField() { return *GetNativePointerField<FTransformUpdated*>(this, "USceneComponent.TransformUpdated"); }
	TArray<FScopedMovementUpdate*, TSizedDefaultAllocator<32> >& ScopedMovementStackField() { return *GetNativePointerField<TArray<FScopedMovementUpdate*, TSizedDefaultAllocator<32> >*>(this, "USceneComponent.ScopedMovementStack"); }
	BitFieldValue<bool, unsigned char> bHasGroupedMoveThisFrame() { return { this, "USceneComponent.bHasGroupedMoveThisFrame"}; }
	BitFieldValue<bool, unsigned __int32> bPrimalEnableRoundRobinMoveComponent() { return { this, "USceneComponent.bPrimalEnableRoundRobinMoveComponent"}; }
	bool CanAttachAsChild(const USceneComponent* ChildComponent, FName SocketName) { return NativeCall<bool, const USceneComponent*, FName>(this, "USceneComponent.CanAttachAsChild(USceneComponent*,FName)", ChildComponent, SocketName); }
	UE::Math::TRotator<double>* K2_GetComponentRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "USceneComponent.K2_GetComponentRotation()", result); }
	void DetachFromComponent(const FDetachmentTransformRules& DetachmentRules) { NativeCall<void, const FDetachmentTransformRules&>(this, "USceneComponent.DetachFromComponent(FDetachmentTransformRules&)", DetachmentRules); }
	void OnPreRegister() { NativeCall<void>(this, "USceneComponent.OnPreRegister()"); }
	AActor* GetAttachmentRootActor() { return NativeCall<AActor*>(this, "USceneComponent.GetAttachmentRootActor()"); }
	UE::Math::TRotator<double>& GetRelativeRotation_DirectMutable() { return NativeCall<UE::Math::TRotator<double>&>(this, "USceneComponent.GetRelativeRotation_DirectMutable()"); }
	bool ShouldComponentAddToScene() { return NativeCall<bool>(this, "USceneComponent.ShouldComponentAddToScene()"); }
	bool ShouldCollideWhenPlacing() { return NativeCall<bool>(this, "USceneComponent.ShouldCollideWhenPlacing()"); }
	UE::Math::TBoxSphereBounds<double, double>* GetLocalBounds(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "USceneComponent.GetLocalBounds()", result); }
	void SetRelativeRotation_Direct(UE::Math::TRotator<double>* NewRelativeRotation) { if (!NewRelativeRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TRotator < double >>(this, "USceneComponent.SetRelativeRotation_Direct(UE::Math::TRotator<double>)", *NewRelativeRotation); }
	void SetRelativeLocation_Direct(UE::Math::TVector<double>* NewRelativeLocation) { if (!NewRelativeLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "USceneComponent.SetRelativeLocation_Direct(UE::Math::TVector<double>)", *NewRelativeLocation); }
	UE::Math::TVector<double>* GetRightVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "USceneComponent.GetRightVector()", result); }
	void SetUsingAbsoluteLocation(bool bInAbsoluteLocation) { NativeCall<void, bool>(this, "USceneComponent.SetUsingAbsoluteLocation(bool)", bInAbsoluteLocation); }
	bool IsSymmetricCollision() { return NativeCall<bool>(this, "USceneComponent.IsSymmetricCollision()"); }
	void NotifyIsRootComponentChanged(bool bIsRootComponent) { NativeCall<void, bool>(this, "USceneComponent.NotifyIsRootComponentChanged(bool)", bIsRootComponent); }
	UE::Math::TBoxSphereBounds<double, double>* GetPlacementExtent(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "USceneComponent.GetPlacementExtent()", result); }
	UE::Math::TRotator<double>* GetSocketRotation(UE::Math::TRotator<double>* result, FName SocketName) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, FName>(this, "USceneComponent.GetSocketRotation(FName)", result, SocketName); }
	UE::Math::TVector<double>* GetForwardVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "USceneComponent.GetForwardVector()", result); }
	void OnAttachmentChanged() { NativeCall<void>(this, "USceneComponent.OnAttachmentChanged()"); }
	USceneComponent* GetAttachmentRoot() { return NativeCall<USceneComponent*>(this, "USceneComponent.GetAttachmentRoot()"); }
	ECollisionChannel GetCollisionObjectType() { return NativeCall<ECollisionChannel>(this, "USceneComponent.GetCollisionObjectType()"); }
	UE::Math::TVector<double>* GetMeshScaleMultiplier(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "USceneComponent.GetMeshScaleMultiplier()", result); }
	static void ConvertAttachLocation(EAttachLocation::Type InAttachLocation, EAttachmentRule& InOutLocationRule, EAttachmentRule& InOutRotationRule, EAttachmentRule& InOutScaleRule) { NativeCall<void, EAttachLocation::Type, EAttachmentRule&, EAttachmentRule&, EAttachmentRule&>(nullptr, "USceneComponent.ConvertAttachLocation(EAttachLocation::Type,EAttachmentRule&,EAttachmentRule&,EAttachmentRule&)", InAttachLocation, InOutLocationRule, InOutRotationRule, InOutScaleRule); }
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) { NativeCall<void, bool, bool, bool>(this, "USceneComponent.SetAbsolute(bool,bool,bool)", bNewAbsoluteLocation, bNewAbsoluteRotation, bNewAbsoluteScale); }
	void BeginScopedMovementUpdate(FScopedMovementUpdate& ScopedUpdate) { NativeCall<void, FScopedMovementUpdate&>(this, "USceneComponent.BeginScopedMovementUpdate(FScopedMovementUpdate&)", ScopedUpdate); }
	UE::Math::TVector<double>* K2_GetComponentLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "USceneComponent.K2_GetComponentLocation()", result); }
	void SetRelativeScale3D_Direct(UE::Math::TVector<double>* NewRelativeScale3D) { if (!NewRelativeScale3D) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "USceneComponent.SetRelativeScale3D_Direct(UE::Math::TVector<double>)", *NewRelativeScale3D); }
	bool IsPrecomputedLightingValid() { return NativeCall<bool>(this, "USceneComponent.IsPrecomputedLightingValid()"); }
	bool IsAttachedTo(const USceneComponent* TestComp) { return NativeCall<bool, const USceneComponent*>(this, "USceneComponent.IsAttachedTo(USceneComponent*)", TestComp); }
	void PropagateLightingScenarioChange() { NativeCall<void>(this, "USceneComponent.PropagateLightingScenarioChange()"); }
	USceneComponent* GetChildComponent(int ChildIndex) { return NativeCall<USceneComponent*, int>(this, "USceneComponent.GetChildComponent(int)", ChildIndex); }
	void AttachToParent() { NativeCall<void>(this, "USceneComponent.AttachToParent()"); }
	static FName GetDefaultSceneRootVariableName() { return NativeCall<FName>(nullptr, "USceneComponent.GetDefaultSceneRootVariableName()"); }
	bool IsSimulatingPhysics(FName BoneName) { return NativeCall<bool, FName>(this, "USceneComponent.IsSimulatingPhysics(FName)", BoneName); }
	bool K2_AttachTo(USceneComponent* InParent, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) { return NativeCall<bool, USceneComponent*, FName, EAttachLocation::Type, bool>(this, "USceneComponent.K2_AttachTo(USceneComponent*,FName,EAttachLocation::Type,bool)", InParent, InSocketName, AttachLocationType, bWeldSimulatedBodies); }
	bool IsWorldGeometry() { return NativeCall<bool>(this, "USceneComponent.IsWorldGeometry()"); }
	UE::Math::TQuat<double>* GetSocketQuaternion(UE::Math::TQuat<double>* result, FName SocketName) { return NativeCall<UE::Math::TQuat<double>*, UE::Math::TQuat<double>*, FName>(this, "USceneComponent.GetSocketQuaternion(FName)", result, SocketName); }
	bool IsSceneComponent() { return NativeCall<bool>(this, "USceneComponent.IsSceneComponent()"); }
	void SetVisibleFlag(bool bNewVisible) { NativeCall<void, bool>(this, "USceneComponent.SetVisibleFlag(bool)", bNewVisible); }
	bool CanHaveStaticMobility() { return NativeCall<bool>(this, "USceneComponent.CanHaveStaticMobility()"); }
	bool IsQueryCollisionEnabled() { return NativeCall<bool>(this, "USceneComponent.IsQueryCollisionEnabled()"); }
	AActor* GetAttachParentActor() { return NativeCall<AActor*>(this, "USceneComponent.GetAttachParentActor()"); }
	bool HasAnySockets() { return NativeCall<bool>(this, "USceneComponent.HasAnySockets()"); }
	void EndScopedMovementUpdate(FScopedMovementUpdate& CompletedScope) { NativeCall<void, FScopedMovementUpdate&>(this, "USceneComponent.EndScopedMovementUpdate(FScopedMovementUpdate&)", CompletedScope); }
	UE::Math::TTransform<double>* GetRelativeTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "USceneComponent.GetRelativeTransform()", result); }
	void OnVisibilityChanged() { NativeCall<void>(this, "USceneComponent.OnVisibilityChanged()"); }
	ECollisionEnabled::Type GetCollisionEnabled() { return NativeCall<ECollisionEnabled::Type>(this, "USceneComponent.GetCollisionEnabled()"); }
	UE::Math::TVector<double>* GetComponentVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "USceneComponent.GetComponentVelocity()", result); }
	UE::Math::TVector<double>* GetSocketLocation(UE::Math::TVector<double>* result, FName SocketName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "USceneComponent.GetSocketLocation(FName)", result, SocketName); }
	void ProcessDeferredMovementGroup(const FDeferredComponentMoveData& GroupedMoveData) { NativeCall<void, const FDeferredComponentMoveData&>(this, "USceneComponent.ProcessDeferredMovementGroup(FDeferredComponentMoveData&)", GroupedMoveData); }
	void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify) { NativeCall<void, EDetachmentRule, EDetachmentRule, EDetachmentRule, bool>(this, "USceneComponent.K2_DetachFromComponent(EDetachmentRule,EDetachmentRule,EDetachmentRule,bool)", LocationRule, RotationRule, ScaleRule, bCallModify); }
	UE::Math::TRotator<double>* GetComponentRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "USceneComponent.GetComponentRotation()", result); }
	UE::Math::TVector<double>& GetRelativeLocation_DirectMutable() { return NativeCall<UE::Math::TVector<double>&>(this, "USceneComponent.GetRelativeLocation_DirectMutable()"); }
	void ProcessScopedMovementUpdate(FScopedMovementUpdate* CurrentScopedUpdate) { NativeCall<void, FScopedMovementUpdate*>(this, "USceneComponent.ProcessScopedMovementUpdate(FScopedMovementUpdate*)", CurrentScopedUpdate); }
	UE::Math::TTransform<double>* GetSocketTransform(UE::Math::TTransform<double>* result, FName SocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, ERelativeTransformSpace>(this, "USceneComponent.GetSocketTransform(FName,ERelativeTransformSpace)", result, SocketName, TransformSpace); }
	void OnChildDetached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "USceneComponent.OnChildDetached(USceneComponent*)", ChildComponent); }
	UE::Math::TVector<double>* GetUpVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "USceneComponent.GetUpVector()", result); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetAllSocketNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "USceneComponent.GetAllSocketNames()", result); }
	bool K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) { return NativeCall<bool, USceneComponent*, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule, bool>(this, "USceneComponent.K2_AttachToComponent(USceneComponent*,FName,EAttachmentRule,EAttachmentRule,EAttachmentRule,bool)", Parent, SocketName, LocationRule, RotationRule, ScaleRule, bWeldSimulatedBodies); }
	bool ShouldCreateRenderState() { return NativeCall<bool>(this, "USceneComponent.ShouldCreateRenderState()"); }
	ECollisionResponse GetCollisionResponseToChannel(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "USceneComponent.GetCollisionResponseToChannel(ECollisionChannel)", Channel); }
	const FCollisionResponseContainer& GetCollisionResponseToChannels() { return NativeCall<const FCollisionResponseContainer&>(this, "USceneComponent.GetCollisionResponseToChannels()"); }
	void SetUsingAbsoluteScale(bool bInAbsoluteScale) { NativeCall<void, bool>(this, "USceneComponent.SetUsingAbsoluteScale(bool)", bInAbsoluteScale); }
	bool DoesSocketExist(FName InSocketName) { return NativeCall<bool, FName>(this, "USceneComponent.DoesSocketExist(FName)", InSocketName); }
	void BeginDestroy() { NativeCall<void>(this, "USceneComponent.BeginDestroy()"); }
	UE::Math::TBoxSphereBounds<double, double>* CalcLocalBounds(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "USceneComponent.CalcLocalBounds()", result); }
	void SetRelativeRotationCache(const FRotationConversionCache& InCache) { NativeCall<void, const FRotationConversionCache&>(this, "USceneComponent.SetRelativeRotationCache(FRotationConversionCache&)", InCache); }
	static bool IsGroupedComponentMovementEnabled() { return NativeCall<bool>(nullptr, "USceneComponent.IsGroupedComponentMovementEnabled()"); }
	int GetNumChildrenComponents() { return NativeCall<int>(this, "USceneComponent.GetNumChildrenComponents()"); }
	void SetUsingAbsoluteRotation(bool bInAbsoluteRotation) { NativeCall<void, bool>(this, "USceneComponent.SetUsingAbsoluteRotation(bool)", bInAbsoluteRotation); }
};