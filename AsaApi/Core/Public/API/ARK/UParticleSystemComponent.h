#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UFXSystemComponent.h"

struct UParticleSystemComponent : public UFXSystemComponent
{
public:
	UParticleSystemComponent() = delete;
	~UParticleSystemComponent() = delete;
	UParticleSystemComponent(const UParticleSystemComponent&) = delete;
	UParticleSystemComponent& operator=(const UParticleSystemComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleSystemComponent"); }

	bool& bAsyncWorkOutstandingField() { return *GetNativePointerField<bool*>(this, "UParticleSystemComponent.bAsyncWorkOutstanding"); }
	EPSCPoolMethod& PoolingMethodField() { return *GetNativePointerField<EPSCPoolMethod*>(this, "UParticleSystemComponent.PoolingMethod"); }
	EParticleSignificanceLevel& RequiredSignificanceField() { return *GetNativePointerField<EParticleSignificanceLevel*>(this, "UParticleSystemComponent.RequiredSignificance"); }
	FParticleSpawnSignature& OnParticleSpawnField() { return *GetNativePointerField<FParticleSpawnSignature*>(this, "UParticleSystemComponent.OnParticleSpawn"); }
	FParticleBurstSignature& OnParticleBurstField() { return *GetNativePointerField<FParticleBurstSignature*>(this, "UParticleSystemComponent.OnParticleBurst"); }
	FParticleDeathSignature& OnParticleDeathField() { return *GetNativePointerField<FParticleDeathSignature*>(this, "UParticleSystemComponent.OnParticleDeath"); }
	FParticleCollisionSignature& OnParticleCollideField() { return *GetNativePointerField<FParticleCollisionSignature*>(this, "UParticleSystemComponent.OnParticleCollide"); }
	bool& bOldPositionValidField() { return *GetNativePointerField<bool*>(this, "UParticleSystemComponent.bOldPositionValid"); }
	UE::Math::TVector<double>& OldPositionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleSystemComponent.OldPosition"); }
	UE::Math::TVector<double>& PartSysVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleSystemComponent.PartSysVelocity"); }
	float& WarmupTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.WarmupTime"); }
	float& WarmupTickRateField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.WarmupTickRate"); }
	int& LODLevelField() { return *GetNativePointerField<int*>(this, "UParticleSystemComponent.LODLevel"); }
	float& SecondsBeforeInactiveField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.SecondsBeforeInactive"); }
	float& TimeSinceLastForceUpdateTransformField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.TimeSinceLastForceUpdateTransform"); }
	float& MaxTimeBeforeForceUpdateTransformField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.MaxTimeBeforeForceUpdateTransform"); }
	float& AccumTickTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.AccumTickTime"); }
	float& LastSignificantTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.LastSignificantTime"); }
	float& AccumLODDistanceCheckTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.AccumLODDistanceCheckTime"); }
	int& ReplayClipIDNumberField() { return *GetNativePointerField<int*>(this, "UParticleSystemComponent.ReplayClipIDNumber"); }
	int& ReplayFrameIndexField() { return *GetNativePointerField<int*>(this, "UParticleSystemComponent.ReplayFrameIndex"); }
	float& CustomTimeDilationField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.CustomTimeDilation"); }
	float& EmitterDelayField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.EmitterDelay"); }
	TWeakObjectPtr<USceneComponent, FWeakObjectPtr>& AutoAttachParentField() { return *GetNativePointerField<TWeakObjectPtr<USceneComponent, FWeakObjectPtr>*>(this, "UParticleSystemComponent.AutoAttachParent"); }
	FName& AutoAttachSocketNameField() { return *GetNativePointerField<FName*>(this, "UParticleSystemComponent.AutoAttachSocketName"); }
	EAttachmentRule& AutoAttachLocationRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UParticleSystemComponent.AutoAttachLocationRule"); }
	EAttachmentRule& AutoAttachRotationRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UParticleSystemComponent.AutoAttachRotationRule"); }
	EAttachmentRule& AutoAttachScaleRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UParticleSystemComponent.AutoAttachScaleRule"); }
	UE::Math::TVector<double>& SavedAutoAttachRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleSystemComponent.SavedAutoAttachRelativeLocation"); }
	UE::Math::TRotator<double>& SavedAutoAttachRelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UParticleSystemComponent.SavedAutoAttachRelativeRotation"); }
	UE::Math::TVector<double>& SavedAutoAttachRelativeScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleSystemComponent.SavedAutoAttachRelativeScale3D"); }
	FFXSystem*& FXSystemField() { return *GetNativePointerField<FFXSystem**>(this, "UParticleSystemComponent.FXSystem"); }
	FOnSystemFinished& OnSystemFinishedField() { return *GetNativePointerField<FOnSystemFinished*>(this, "UParticleSystemComponent.OnSystemFinished"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& PlayerLocationsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "UParticleSystemComponent.PlayerLocations"); }
	TArray<float, TSizedDefaultAllocator<32> >& PlayerLODDistanceFactorField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UParticleSystemComponent.PlayerLODDistanceFactor"); }
	UE::Math::TBoxSphereBounds<double, double>& AsyncBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UParticleSystemComponent.AsyncBounds"); }
	UE::Math::TVector<double>& AsyncPartSysVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UParticleSystemComponent.AsyncPartSysVelocity"); }
	UE::Math::TVector<float>& LWCTileField() { return *GetNativePointerField<UE::Math::TVector<float>*>(this, "UParticleSystemComponent.LWCTile"); }
	FRenderCommandFence*& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence**>(this, "UParticleSystemComponent.ReleaseResourcesFence"); }
	TArray<FParticleEmitterInstance*, TSizedDefaultAllocator<32> >& EmitterInstancesField() { return *GetNativePointerField<TArray<FParticleEmitterInstance*, TSizedDefaultAllocator<32> >*>(this, "UParticleSystemComponent.EmitterInstances"); }
	FRandomStream& RandomStreamField() { return *GetNativePointerField<FRandomStream*>(this, "UParticleSystemComponent.RandomStream"); }
	float& DeltaTimeTickField() { return *GetNativePointerField<float*>(this, "UParticleSystemComponent.DeltaTimeTick"); }
	int& TotalActiveParticlesField() { return *GetNativePointerField<int*>(this, "UParticleSystemComponent.TotalActiveParticles"); }
	unsigned int& NumSignificantEmittersField() { return *GetNativePointerField<unsigned int*>(this, "UParticleSystemComponent.NumSignificantEmitters"); }
	unsigned int& TimeSinceLastTickField() { return *GetNativePointerField<unsigned int*>(this, "UParticleSystemComponent.TimeSinceLastTick"); }
	BitFieldValue<bool, unsigned char> bWasCompleted() { return { this, "UParticleSystemComponent.bWasCompleted"}; }
	BitFieldValue<bool, unsigned char> bSuppressSpawning() { return { this, "UParticleSystemComponent.bSuppressSpawning"}; }
	BitFieldValue<bool, unsigned char> bIsElligibleForAsyncTick() { return { this, "UParticleSystemComponent.bIsElligibleForAsyncTick"}; }
	BitFieldValue<bool, unsigned char> bIsElligibleForAsyncTickComputed() { return { this, "UParticleSystemComponent.bIsElligibleForAsyncTickComputed"}; }
	BitFieldValue<bool, unsigned char> bWasDeactivated() { return { this, "UParticleSystemComponent.bWasDeactivated"}; }
	BitFieldValue<bool, unsigned char> bWasActive() { return { this, "UParticleSystemComponent.bWasActive"}; }
	BitFieldValue<bool, unsigned char> bResetTriggered() { return { this, "UParticleSystemComponent.bResetTriggered"}; }
	BitFieldValue<bool, unsigned char> bDeactivateTriggered() { return { this, "UParticleSystemComponent.bDeactivateTriggered"}; }
	BitFieldValue<bool, unsigned char> bResetOnDetach() { return { this, "UParticleSystemComponent.bResetOnDetach"}; }
	BitFieldValue<bool, unsigned char> bUpdateOnDedicatedServer() { return { this, "UParticleSystemComponent.bUpdateOnDedicatedServer"}; }
	BitFieldValue<bool, unsigned char> bJustRegistered() { return { this, "UParticleSystemComponent.bJustRegistered"}; }
	BitFieldValue<bool, unsigned char> bHasBeenActivated() { return { this, "UParticleSystemComponent.bHasBeenActivated"}; }
	BitFieldValue<bool, unsigned char> bAllowRecycling() { return { this, "UParticleSystemComponent.bAllowRecycling"}; }
	BitFieldValue<bool, unsigned char> bAutoManageAttachment() { return { this, "UParticleSystemComponent.bAutoManageAttachment"}; }
	BitFieldValue<bool, unsigned char> bAutoAttachWeldSimulatedBodies() { return { this, "UParticleSystemComponent.bAutoAttachWeldSimulatedBodies"}; }
	BitFieldValue<bool, unsigned char> bIsManagingSignificance() { return { this, "UParticleSystemComponent.bIsManagingSignificance"}; }
	BitFieldValue<bool, unsigned char> bWasManagingSignificance() { return { this, "UParticleSystemComponent.bWasManagingSignificance"}; }
	BitFieldValue<bool, unsigned char> bIsDuringRegister() { return { this, "UParticleSystemComponent.bIsDuringRegister"}; }
	BitFieldValue<bool, unsigned char> bWarmingUp() { return { this, "UParticleSystemComponent.bWarmingUp"}; }
	BitFieldValue<bool, unsigned char> bOverrideLODMethod() { return { this, "UParticleSystemComponent.bOverrideLODMethod"}; }
	BitFieldValue<bool, unsigned char> bSkipUpdateDynamicDataDuringTick() { return { this, "UParticleSystemComponent.bSkipUpdateDynamicDataDuringTick"}; }
	BitFieldValue<bool, unsigned char> bForcedInActive() { return { this, "UParticleSystemComponent.bForcedInActive"}; }
	BitFieldValue<bool, unsigned char> bForceLODUpdateFromRenderer() { return { this, "UParticleSystemComponent.bForceLODUpdateFromRenderer"}; }
	BitFieldValue<bool, unsigned char> bIsViewRelevanceDirty() { return { this, "UParticleSystemComponent.bIsViewRelevanceDirty"}; }
	BitFieldValue<bool, unsigned char> bAutoDestroy() { return { this, "UParticleSystemComponent.bAutoDestroy"}; }
	BitFieldValue<bool, unsigned char> bIsTransformDirty() { return { this, "UParticleSystemComponent.bIsTransformDirty"}; }
	BitFieldValue<bool, unsigned char> bDidAutoAttach() { return { this, "UParticleSystemComponent.bDidAutoAttach"}; }
	BitFieldValue<bool, unsigned char> bAsyncDataCopyIsValid() { return { this, "UParticleSystemComponent.bAsyncDataCopyIsValid"}; }
	BitFieldValue<bool, unsigned char> bParallelRenderThreadUpdate() { return { this, "UParticleSystemComponent.bParallelRenderThreadUpdate"}; }
	BitFieldValue<bool, unsigned char> bNeedsFinalize() { return { this, "UParticleSystemComponent.bNeedsFinalize"}; }
	BitFieldValue<bool, unsigned __int32> bPendingManagerAdd() { return { this, "UParticleSystemComponent.bPendingManagerAdd"}; }
	BitFieldValue<bool, unsigned __int32> bPendingManagerRemove() { return { this, "UParticleSystemComponent.bPendingManagerRemove"}; }
	BitFieldValue<bool, unsigned __int32> bForceDisableParticleOcclusion() { return { this, "UParticleSystemComponent.bForceDisableParticleOcclusion"}; }
	BitFieldValue<bool, unsigned __int32> bForceAllowParticleCollisions() { return { this, "UParticleSystemComponent.bForceAllowParticleCollisions"}; }
	BitFieldValue<bool, unsigned __int32> bPreserveOnDedicatedServer() { return { this, "UParticleSystemComponent.bPreserveOnDedicatedServer"}; }
	BitFieldValue<bool, unsigned __int32> bCheckedInactiveTime() { return { this, "UParticleSystemComponent.bCheckedInactiveTime"}; }
	void OnChildDetached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "UParticleSystemComponent.OnChildDetached(USceneComponent*)", ChildComponent); }
	void SetBeamTargetStrength(int EmitterIndex, float NewTargetStrength, int TargetIndex) { NativeCall<void, int, float, int>(this, "UParticleSystemComponent.SetBeamTargetStrength(int,float,int)", EmitterIndex, NewTargetStrength, TargetIndex); }
	void SetUseAutoManageAttachment(bool bAutoManage) { NativeCall<void, bool>(this, "UParticleSystemComponent.SetUseAutoManageAttachment(bool)", bAutoManage); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UParticleSystemComponent.CreateSceneProxy()"); }
	bool CanSkipInstancingWhenPrevented() { return NativeCall<bool>(this, "UParticleSystemComponent.CanSkipInstancingWhenPrevented()"); }
	void ReportEventCollision(FName InEventName, float InEmitterTime, UE::Math::TVector<double>* InLocation, UE::Math::TVector<double>* InDirection, UE::Math::TVector<double>* InVelocity, const TArray<UParticleModuleEventSendToGame*, TSizedDefaultAllocator<32> >& InEventData, float InParticleTime, UE::Math::TVector<double>* InNormal, float InTime, int InItem, FName InBoneName, UPhysicalMaterial* PhysMat) { if (!InLocation) throw std::invalid_argument("Null native value parameter"); if (!InDirection) throw std::invalid_argument("Null native value parameter"); if (!InVelocity) throw std::invalid_argument("Null native value parameter"); if (!InNormal) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const TArray < UParticleModuleEventSendToGame * , TSizedDefaultAllocator < 32 > > &, float, UE :: Math :: TVector < double >, float, int, FName, UPhysicalMaterial *>(this, "UParticleSystemComponent.FInstanceOwner.ReportEventCollision(FName,float,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<UParticleModuleEventSendToGame*,TSizedDefaultAllocator<32>>&,float,UE::Math::TVector<double>,float,int,FName,UPhysicalMaterial*)", InEventName, InEmitterTime, *InLocation, *InDirection, *InVelocity, InEventData, InParticleTime, *InNormal, InTime, InItem, InBoneName, PhysMat); }
	int GetCurrentDetailMode() { return NativeCall<int>(this, "UParticleSystemComponent.FInstanceOwner.GetCurrentDetailMode()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.DestroyRenderState_Concurrent()"); }
	void SetTemplate(UParticleSystem* NewTemplate) { NativeCall<void, UParticleSystem*>(this, "UParticleSystemComponent.SetTemplate(UParticleSystem*)", NewTemplate); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UParticleSystemComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void RewindEmitterInstances() { NativeCall<void>(this, "UParticleSystemComponent.RewindEmitterInstances()"); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UParticleSystemComponent.Activate(bool)", bReset); }
	void SetMaterialParameter(FName Name, UMaterialInterface* Param) { NativeCall<void, FName, UMaterialInterface*>(this, "UParticleSystemComponent.SetMaterialParameter(FName,UMaterialInterface*)", Name, Param); }
	void OnRegister() { NativeCall<void>(this, "UParticleSystemComponent.OnRegister()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UParticleSystemComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void OnSignificanceChanged(bool bSignificant, bool bApplyToEmitters, bool bAsync) { NativeCall<void, bool, bool, bool>(this, "UParticleSystemComponent.OnSignificanceChanged(bool,bool,bool)", bSignificant, bApplyToEmitters, bAsync); }
	void BeginDestroy() { NativeCall<void>(this, "UParticleSystemComponent.BeginDestroy()"); }
	UMaterialInterface* GetMaterialByName(FName MaterialSlotName) { return NativeCall<UMaterialInterface*, FName>(this, "UParticleSystemComponent.GetMaterialByName(FName)", MaterialSlotName); }
	void ActivateSystem(bool bFlagAsJustAttached) { NativeCall<void, bool>(this, "UParticleSystemComponent.ActivateSystem(bool)", bFlagAsJustAttached); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.SendRenderTransform_Concurrent()"); }
	bool GetVectorParameter(FName InName, UE::Math::TVector<double>& OutVector) { return NativeCall<bool, FName, UE::Math::TVector<double>&>(this, "UParticleSystemComponent.GetVectorParameter(FName,UE::Math::TVector<double>&)", InName, OutVector); }
	void KillParticlesForced() { NativeCall<void>(this, "UParticleSystemComponent.KillParticlesForced()"); }
	void Complete() { NativeCall<void>(this, "UParticleSystemComponent.Complete()"); }
	int DetermineLODLevelForLocation(const UE::Math::TVector<double>& EffectLocation) { return NativeCall<int, const UE::Math::TVector<double>&>(this, "UParticleSystemComponent.DetermineLODLevelForLocation(UE::Math::TVector<double>&)", EffectLocation); }
	bool GetMaterialParameter(FName InName, UMaterialInterface*& OutMaterial) { return NativeCall<bool, FName, UMaterialInterface*&>(this, "UParticleSystemComponent.GetMaterialParameter(FName,UMaterialInterface*&)", InName, OutMaterial); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UParticleSystemComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(FName Name, UMaterialInterface* SourceMaterial) { return NativeCall<UMaterialInstanceDynamic*, FName, UMaterialInterface*>(this, "UParticleSystemComponent.CreateNamedDynamicMaterialInstance(FName,UMaterialInterface*)", Name, SourceMaterial); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "UParticleSystemComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UParticleSystemComponent.SetComponentTickEnabled(bool)", bEnabled); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UParticleSystemComponent.Serialize(FArchive&)", Ar); }
	void SetMaterialByName(FName MaterialSlotName, UMaterialInterface* SourceMaterial) { NativeCall<void, FName, UMaterialInterface*>(this, "UParticleSystemComponent.SetMaterialByName(FName,UMaterialInterface*)", MaterialSlotName, SourceMaterial); }
	void FailedToRegisterWithWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UParticleSystemComponent.FailedToRegisterWithWorld(UWorld*)", InWorld); }
	void FinishDestroy() { NativeCall<void>(this, "UParticleSystemComponent.FinishDestroy()"); }
	void SetVectorParameter(FName Name, UE::Math::TVector<double>* Param) { if (!Param) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >>(this, "UParticleSystemComponent.SetVectorParameter(FName,UE::Math::TVector<double>)", Name, *Param); }
	const UE::Math::TVector<float>& GetLWCTile() { return NativeCall<const UE::Math::TVector<float>&>(this, "UParticleSystemComponent.FInstanceOwner.GetLWCTile()"); }
	const UObject* AdditionalStatObject() { return NativeCall<const UObject*>(this, "UParticleSystemComponent.AdditionalStatObject()"); }
	void DeactivateSystem() { NativeCall<void>(this, "UParticleSystemComponent.DeactivateSystem()"); }
	void SetFloatParameter(FName Name, float Param) { NativeCall<void, FName, float>(this, "UParticleSystemComponent.SetFloatParameter(FName,float)", Name, Param); }
	bool GetAnyVectorParameter(FName InName, UE::Math::TVector<double>& OutVector) { return NativeCall<bool, FName, UE::Math::TVector<double>&>(this, "UParticleSystemComponent.GetAnyVectorParameter(FName,UE::Math::TVector<double>&)", InName, OutVector); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UParticleSystemComponent.OnAttachmentChanged()"); }
	void ReportEventDeath(FName InEventName, float InEmitterTime, UE::Math::TVector<double>* InLocation, UE::Math::TVector<double>* InVelocity, const TArray<UParticleModuleEventSendToGame*, TSizedDefaultAllocator<32> >& InEventData, float InParticleTime) { if (!InLocation) throw std::invalid_argument("Null native value parameter"); if (!InVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const TArray < UParticleModuleEventSendToGame * , TSizedDefaultAllocator < 32 > > &, float>(this, "UParticleSystemComponent.FInstanceOwner.ReportEventDeath(FName,float,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<UParticleModuleEventSendToGame*,TSizedDefaultAllocator<32>>&,float)", InEventName, InEmitterTime, *InLocation, *InVelocity, InEventData, InParticleTime); }
	void SetFXSystemAsset(UFXSystemAsset* Asset) { NativeCall<void, UFXSystemAsset*>(this, "UParticleSystemComponent.SetFXSystemAsset(UFXSystemAsset*)", Asset); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "UParticleSystemComponent.GetDetailedInfoInternal()", result); }
	void SetIntParameter(FName Name, int Value) { NativeCall<void, FName, int>(this, "UParticleSystemComponent.SetIntParameter(FName,int)", Name, Value); }
	FName GetNameForMaterial(UMaterialInterface* InMaterial) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, UMaterialInterface *>(this, "UParticleSystemComponent.GetNameForMaterial(UMaterialInterface*)", AsaReturnPointer, InMaterial); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void ComputeTickComponent_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.ComputeTickComponent_Concurrent()"); }
	bool HasCompleted() { return NativeCall<bool>(this, "UParticleSystemComponent.HasCompleted()"); }
	void ReportEventSpawn(FName InEventName, float InEmitterTime, UE::Math::TVector<double>* InLocation, UE::Math::TVector<double>* InVelocity, const TArray<UParticleModuleEventSendToGame*, TSizedDefaultAllocator<32> >& InEventData) { if (!InLocation) throw std::invalid_argument("Null native value parameter"); if (!InVelocity) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, float, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const TArray < UParticleModuleEventSendToGame * , TSizedDefaultAllocator < 32 > > &>(this, "UParticleSystemComponent.FInstanceOwner.ReportEventSpawn(FName,float,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<UParticleModuleEventSendToGame*,TSizedDefaultAllocator<32>>&)", InEventName, InEmitterTime, *InLocation, *InVelocity, InEventData); }
	void UpdateLODInformation() { NativeCall<void>(this, "UParticleSystemComponent.UpdateLODInformation()"); }
	void OnEndOfFrameUpdateDuringTick() { NativeCall<void>(this, "UParticleSystemComponent.OnEndOfFrameUpdateDuringTick()"); }
	FBodyInstance* GetBodyInstance(FName BoneName, bool bGetWelded, int Index) { return NativeCall<FBodyInstance*, FName, bool, int>(this, "UParticleSystemComponent.GetBodyInstance(FName,bool,int)", BoneName, bGetWelded, Index); }
	void OnChildAttached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "UParticleSystemComponent.OnChildAttached(USceneComponent*)", ChildComponent); }
	bool GetColorParameter(FName InName, FLinearColor& OutColor) { return NativeCall<bool, FName, FLinearColor&>(this, "UParticleSystemComponent.GetColorParameter(FName,FLinearColor&)", InName, OutColor); }
	bool CanConsiderInvisible() { return NativeCall<bool>(this, "UParticleSystemComponent.CanConsiderInvisible()"); }
	bool GetBeamEndPoint(int EmitterIndex, UE::Math::TVector<double>& OutSourcePoint) { return NativeCall<bool, int, UE::Math::TVector<double>&>(this, "UParticleSystemComponent.GetBeamEndPoint(int,UE::Math::TVector<double>&)", EmitterIndex, OutSourcePoint); }
	void SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule) { NativeCall<void, USceneComponent*, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule>(this, "UParticleSystemComponent.SetAutoAttachmentParameters(USceneComponent*,FName,EAttachmentRule,EAttachmentRule,EAttachmentRule)", Parent, SocketName, LocationRule, RotationRule, ScaleRule); }
	void SetActorParameter(FName Name, AActor* Param) { NativeCall<void, FName, AActor*>(this, "UParticleSystemComponent.SetActorParameter(FName,AActor*)", Name, Param); }
	void SetEmitterEnable(FName EmitterName, bool bNewEnableState) { NativeCall<void, FName, bool>(this, "UParticleSystemComponent.SetEmitterEnable(FName,bool)", EmitterName, bNewEnableState); }
	void EndTrails() { NativeCall<void>(this, "UParticleSystemComponent.EndTrails()"); }
	bool GetBeamTargetTangent(int EmitterIndex, int TargetIndex, UE::Math::TVector<double>& OutTangentPoint) { return NativeCall<bool, int, int, UE::Math::TVector<double>&>(this, "UParticleSystemComponent.GetBeamTargetTangent(int,int,UE::Math::TVector<double>&)", EmitterIndex, TargetIndex, OutTangentPoint); }
	FParticleDynamicData* CreateDynamicData(ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<FParticleDynamicData*, ERHIFeatureLevel::Type>(this, "UParticleSystemComponent.CreateDynamicData(ERHIFeatureLevel::Type)", InFeatureLevel); }
	bool GetBeamTargetStrength(int EmitterIndex, int TargetIndex, float& OutTargetStrength) { return NativeCall<bool, int, int, float&>(this, "UParticleSystemComponent.GetBeamTargetStrength(int,int,float&)", EmitterIndex, TargetIndex, OutTargetStrength); }
	void SetBeamSourcePoint(int EmitterIndex, UE::Math::TVector<double>* NewSourcePoint, int SourceIndex) { if (!NewSourcePoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, UE :: Math :: TVector < double >, int>(this, "UParticleSystemComponent.SetBeamSourcePoint(int,UE::Math::TVector<double>,int)", EmitterIndex, *NewSourcePoint, SourceIndex); }
	void SetBeamEndPoint(int EmitterIndex, UE::Math::TVector<double>* NewEndPoint) { if (!NewEndPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, UE :: Math :: TVector < double >>(this, "UParticleSystemComponent.SetBeamEndPoint(int,UE::Math::TVector<double>)", EmitterIndex, *NewEndPoint); }
	bool ShouldManageSignificance() { return NativeCall<bool>(this, "UParticleSystemComponent.ShouldManageSignificance()"); }
	void SetLODLevel(int InLODLevel) { NativeCall<void, int>(this, "UParticleSystemComponent.SetLODLevel(int)", InLODLevel); }
	bool CanTickInAnyThread() { return NativeCall<bool>(this, "UParticleSystemComponent.CanTickInAnyThread()"); }
	void SetMaterial(int ElementIndex, UMaterialInterface* Material) { NativeCall<void, int, UMaterialInterface*>(this, "UParticleSystemComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, Material); }
	bool ShouldActivate() { return NativeCall<bool>(this, "UParticleSystemComponent.ShouldActivate()"); }
	void UpdateDynamicData() { NativeCall<void>(this, "UParticleSystemComponent.UpdateDynamicData()"); }
	int GetLODLevel() { return NativeCall<int>(this, "UParticleSystemComponent.GetLODLevel()"); }
	void OrientZAxisTowardCamera() { NativeCall<void>(this, "UParticleSystemComponent.OrientZAxisTowardCamera()"); }
	void DeactivateImmediate() { NativeCall<void>(this, "UParticleSystemComponent.DeactivateImmediate()"); }
	bool IsComponentTickEnabled() { return NativeCall<bool>(this, "UParticleSystemComponent.IsComponentTickEnabled()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleSystemComponent"); }
	int GetCurrentLODIndex() { return NativeCall<int>(this, "UParticleSystemComponent.FInstanceOwner.GetCurrentLODIndex()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UParticleSystemComponent.GetNumMaterials()"); }
	bool CanBeOccluded() { return NativeCall<bool>(this, "UParticleSystemComponent.CanBeOccluded()"); }
	void InitializeSystem() { NativeCall<void>(this, "UParticleSystemComponent.InitializeSystem()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UParticleSystemComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	static FDynamicEmitterDataBase* CreateDynamicDataFromReplay(FParticleEmitterInstance* EmitterInstance, const FDynamicEmitterReplayDataBase* EmitterReplayData, bool bSelected, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<FDynamicEmitterDataBase*, FParticleEmitterInstance*, const FDynamicEmitterReplayDataBase*, bool, ERHIFeatureLevel::Type>(nullptr, "UParticleSystemComponent.CreateDynamicDataFromReplay(FParticleEmitterInstance*,FDynamicEmitterReplayDataBase*,bool,ERHIFeatureLevel::Type)", EmitterInstance, EmitterReplayData, bSelected, InFeatureLevel); }
	void InitParticles() { NativeCall<void>(this, "UParticleSystemComponent.InitParticles()"); }
	bool ParticleLineCheck(FHitResult& Hit, AActor* SourceActor, const UE::Math::TVector<double>& End, const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& HalfExtent, const FCollisionObjectQueryParams& ObjectParams) { return NativeCall<bool, FHitResult&, AActor*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const FCollisionObjectQueryParams&>(this, "UParticleSystemComponent.ParticleLineCheck(FHitResult&,AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FCollisionObjectQueryParams&)", Hit, SourceActor, End, Start, HalfExtent, ObjectParams); }
	bool GetBeamSourcePoint(int EmitterIndex, int SourceIndex, UE::Math::TVector<double>& OutSourcePoint) { return NativeCall<bool, int, int, UE::Math::TVector<double>&>(this, "UParticleSystemComponent.GetBeamSourcePoint(int,int,UE::Math::TVector<double>&)", EmitterIndex, SourceIndex, OutSourcePoint); }
	void OnUnregister() { NativeCall<void>(this, "UParticleSystemComponent.OnUnregister()"); }
	void SetBeamTargetTangent(int EmitterIndex, UE::Math::TVector<double>* NewTangentPoint, int TargetIndex) { if (!NewTangentPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, UE :: Math :: TVector < double >, int>(this, "UParticleSystemComponent.SetBeamTargetTangent(int,UE::Math::TVector<double>,int)", EmitterIndex, *NewTangentPoint, TargetIndex); }
	void ResetParticles(bool bEmptyInstances) { NativeCall<void, bool>(this, "UParticleSystemComponent.ResetParticles(bool)", bEmptyInstances); }
	UMaterialInterface* GetMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "UParticleSystemComponent.GetMaterial(int)", ElementIndex); }
	void CancelAutoAttachment(bool bDetachFromParent, const UWorld* MyWorld) { NativeCall<void, bool, const UWorld*>(this, "UParticleSystemComponent.CancelAutoAttachment(bool,UWorld*)", bDetachFromParent, MyWorld); }
	bool GetActorParameter(FName InName, AActor*& OutActor) { return NativeCall<bool, FName, AActor*&>(this, "UParticleSystemComponent.GetActorParameter(FName,AActor*&)", InName, OutActor); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UParticleSystemComponent.SendRenderDynamicData_Concurrent()"); }
	int GetNumActiveParticles() { return NativeCall<int>(this, "UParticleSystemComponent.GetNumActiveParticles()"); }
	bool CanSkipTickDueToVisibility() { return NativeCall<bool>(this, "UParticleSystemComponent.CanSkipTickDueToVisibility()"); }
	bool GetBeamSourceTangent(int EmitterIndex, int SourceIndex, UE::Math::TVector<double>& OutSourcePoint) { return NativeCall<bool, int, int, UE::Math::TVector<double>&>(this, "UParticleSystemComponent.GetBeamSourceTangent(int,int,UE::Math::TVector<double>&)", EmitterIndex, SourceIndex, OutSourcePoint); }
	void SetBeamTargetPoint(int EmitterIndex, UE::Math::TVector<double>* NewTargetPoint, int TargetIndex) { if (!NewTargetPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, UE :: Math :: TVector < double >, int>(this, "UParticleSystemComponent.SetBeamTargetPoint(int,UE::Math::TVector<double>,int)", EmitterIndex, *NewTargetPoint, TargetIndex); }
	bool GetBeamSourceStrength(int EmitterIndex, int SourceIndex, float& OutSourceStrength) { return NativeCall<bool, int, int, float&>(this, "UParticleSystemComponent.GetBeamSourceStrength(int,int,float&)", EmitterIndex, SourceIndex, OutSourceStrength); }
	UMaterialInterface* GetNamedMaterial(FName Name) { return NativeCall<UMaterialInterface*, FName>(this, "UParticleSystemComponent.GetNamedMaterial(FName)", Name); }
	void CacheViewRelevanceFlags(UParticleSystem* TemplateToCache) { NativeCall<void, UParticleSystem*>(this, "UParticleSystemComponent.CacheViewRelevanceFlags(UParticleSystem*)", TemplateToCache); }
	void MarshalParamsForAsyncTick() { NativeCall<void>(this, "UParticleSystemComponent.MarshalParamsForAsyncTick()"); }
	void ReportEventBurst(FName InEventName, float InEmitterTime, int ParticleCount, UE::Math::TVector<double>* InLocation, const TArray<UParticleModuleEventSendToGame*, TSizedDefaultAllocator<32> >& InEventData) { if (!InLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, float, int, UE :: Math :: TVector < double >, const TArray < UParticleModuleEventSendToGame * , TSizedDefaultAllocator < 32 > > &>(this, "UParticleSystemComponent.FInstanceOwner.ReportEventBurst(FName,float,int,UE::Math::TVector<double>,TArray<UParticleModuleEventSendToGame*,TSizedDefaultAllocator<32>>&)", InEventName, InEmitterTime, ParticleCount, *InLocation, InEventData); }
	void FinalizeTickComponent() { NativeCall<void>(this, "UParticleSystemComponent.FinalizeTickComponent()"); }
	UFXSystemAsset* GetFXSystemAsset() { return NativeCall<UFXSystemAsset*>(this, "UParticleSystemComponent.GetFXSystemAsset()"); }
	bool GetBeamTargetPoint(int EmitterIndex, int TargetIndex, UE::Math::TVector<double>& OutTargetPoint) { return NativeCall<bool, int, int, UE::Math::TVector<double>&>(this, "UParticleSystemComponent.GetBeamTargetPoint(int,int,UE::Math::TVector<double>&)", EmitterIndex, TargetIndex, OutTargetPoint); }
	void SetBeamSourceStrength(int EmitterIndex, float NewSourceStrength, int SourceIndex) { NativeCall<void, int, float, int>(this, "UParticleSystemComponent.SetBeamSourceStrength(int,float,int)", EmitterIndex, NewSourceStrength, SourceIndex); }
	void SetBeamSourceTangent(int EmitterIndex, UE::Math::TVector<double>* NewTangentPoint, int SourceIndex) { if (!NewTangentPoint) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, UE :: Math :: TVector < double >, int>(this, "UParticleSystemComponent.SetBeamSourceTangent(int,UE::Math::TVector<double>,int)", EmitterIndex, *NewTangentPoint, SourceIndex); }
	void PostLoad() { NativeCall<void>(this, "UParticleSystemComponent.PostLoad()"); }
	void ReleaseToPool() { NativeCall<void>(this, "UParticleSystemComponent.ReleaseToPool()"); }
	void Deactivate() { NativeCall<void>(this, "UParticleSystemComponent.Deactivate()"); }
	void SetBoolParameter(FName Name, bool Value) { NativeCall<void, FName, bool>(this, "UParticleSystemComponent.SetBoolParameter(FName,bool)", Name, Value); }
	int GetNamedMaterialIndex(FName Name) { return NativeCall<int, FName>(this, "UParticleSystemComponent.GetNamedMaterialIndex(FName)", Name); }
	unsigned int GetApproxMemoryUsage() { return NativeCall<unsigned int>(this, "UParticleSystemComponent.GetApproxMemoryUsage()"); }
	bool IsReadyForOwnerToAutoDestroy() { return NativeCall<bool>(this, "UParticleSystemComponent.IsReadyForOwnerToAutoDestroy()"); }
};
