#pragma once
#include "BulkForward.h"
#include "UFXSystemComponent.h"

struct UNiagaraComponent : public UFXSystemComponent
{
public:
	UNiagaraComponent() = delete;
	~UNiagaraComponent() = delete;
	UNiagaraComponent(const UNiagaraComponent&) = delete;
	UNiagaraComponent& operator=(const UNiagaraComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNiagaraComponent"); }

	int& RandomSeedOffsetField() { return *GetNativePointerField<int*>(this, "UNiagaraComponent.RandomSeedOffset"); }
	FNiagaraUserRedirectionParameterStore& OverrideParametersField() { return *GetNativePointerField<FNiagaraUserRedirectionParameterStore*>(this, "UNiagaraComponent.OverrideParameters"); }
	int& WarmupTickCountField() { return *GetNativePointerField<int*>(this, "UNiagaraComponent.WarmupTickCount"); }
	float& WarmupTickDeltaField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.WarmupTickDelta"); }
	float& DesiredAgeField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.DesiredAge"); }
	float& LastHandledDesiredAgeField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.LastHandledDesiredAge"); }
	bool& bCanRenderWhileSeekingField() { return *GetNativePointerField<bool*>(this, "UNiagaraComponent.bCanRenderWhileSeeking"); }
	float& SeekDeltaField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.SeekDelta"); }
	bool& bLockDesiredAgeDeltaTimeToSeekDeltaField() { return *GetNativePointerField<bool*>(this, "UNiagaraComponent.bLockDesiredAgeDeltaTimeToSeekDelta"); }
	float& MaxSimTimeField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.MaxSimTime"); }
	bool& bIsSeekingField() { return *GetNativePointerField<bool*>(this, "UNiagaraComponent.bIsSeeking"); }
	float& MaxTimeBeforeForceUpdateTransformField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.MaxTimeBeforeForceUpdateTransform"); }
	ENCPoolMethod& PoolingMethodField() { return *GetNativePointerField<ENCPoolMethod*>(this, "UNiagaraComponent.PoolingMethod"); }
	FOnNiagaraSystemFinished& OnSystemFinishedField() { return *GetNativePointerField<FOnNiagaraSystemFinished*>(this, "UNiagaraComponent.OnSystemFinished"); }
	TWeakObjectPtr<USceneComponent, FWeakObjectPtr>& AutoAttachParentField() { return *GetNativePointerField<TWeakObjectPtr<USceneComponent, FWeakObjectPtr>*>(this, "UNiagaraComponent.AutoAttachParent"); }
	FName& AutoAttachSocketNameField() { return *GetNativePointerField<FName*>(this, "UNiagaraComponent.AutoAttachSocketName"); }
	EAttachmentRule& AutoAttachLocationRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UNiagaraComponent.AutoAttachLocationRule"); }
	EAttachmentRule& AutoAttachRotationRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UNiagaraComponent.AutoAttachRotationRule"); }
	EAttachmentRule& AutoAttachScaleRuleField() { return *GetNativePointerField<EAttachmentRule*>(this, "UNiagaraComponent.AutoAttachScaleRule"); }
	float& PreviewLODDistanceField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.PreviewLODDistance"); }
	float& PreviewMaxDistanceField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.PreviewMaxDistance"); }
	UE::Math::TVector<double>& SavedAutoAttachRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UNiagaraComponent.SavedAutoAttachRelativeLocation"); }
	UE::Math::TRotator<double>& SavedAutoAttachRelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UNiagaraComponent.SavedAutoAttachRelativeRotation"); }
	UE::Math::TVector<double>& SavedAutoAttachRelativeScale3DField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UNiagaraComponent.SavedAutoAttachRelativeScale3D"); }
	FDelegateHandle& AssetExposedParametersChangedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UNiagaraComponent.AssetExposedParametersChangedHandle"); }
	UNiagaraEffectType*& ScalabilityEffectTypeField() { return *GetNativePointerField<UNiagaraEffectType**>(this, "UNiagaraComponent.ScalabilityEffectType"); }
	int& ScalabilityManagerHandleField() { return *GetNativePointerField<int*>(this, "UNiagaraComponent.ScalabilityManagerHandle"); }
	float& ForceUpdateTransformTimeField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.ForceUpdateTransformTime"); }
	float& CustomTimeDilationField() { return *GetNativePointerField<float*>(this, "UNiagaraComponent.CustomTimeDilation"); }
	BitFieldValue<bool, unsigned __int32> bForceSolo() { return { this, "UNiagaraComponent.bForceSolo"}; }
	BitFieldValue<bool, unsigned __int32> bEnableGpuComputeDebug() { return { this, "UNiagaraComponent.bEnableGpuComputeDebug"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideWarmupSettings() { return { this, "UNiagaraComponent.bOverrideWarmupSettings"}; }
	BitFieldValue<bool, unsigned __int32> bAutoManageNiagaraHiddenState() { return { this, "UNiagaraComponent.bAutoManageNiagaraHiddenState"}; }
	BitFieldValue<bool, unsigned __int32> bAutoDestroy() { return { this, "UNiagaraComponent.bAutoDestroy"}; }
	BitFieldValue<bool, unsigned __int32> bRenderingEnabled() { return { this, "UNiagaraComponent.bRenderingEnabled"}; }
	BitFieldValue<bool, unsigned __int32> bAutoManageAttachment() { return { this, "UNiagaraComponent.bAutoManageAttachment"}; }
	BitFieldValue<bool, unsigned __int32> bAutoAttachWeldSimulatedBodies() { return { this, "UNiagaraComponent.bAutoAttachWeldSimulatedBodies"}; }
	BitFieldValue<bool, unsigned __int32> bEnablePreviewLODDistance() { return { this, "UNiagaraComponent.bEnablePreviewLODDistance"}; }
	BitFieldValue<bool, unsigned __int32> bAwaitingActivationDueToNotReady() { return { this, "UNiagaraComponent.bAwaitingActivationDueToNotReady"}; }
	BitFieldValue<bool, unsigned __int32> bActivateShouldResetWhenReady() { return { this, "UNiagaraComponent.bActivateShouldResetWhenReady"}; }
	BitFieldValue<bool, unsigned __int32> bDidAutoAttach() { return { this, "UNiagaraComponent.bDidAutoAttach"}; }
	BitFieldValue<bool, unsigned __int32> bAllowScalability() { return { this, "UNiagaraComponent.bAllowScalability"}; }
	BitFieldValue<bool, unsigned __int32> bForceLocalPlayerEffect() { return { this, "UNiagaraComponent.bForceLocalPlayerEffect"}; }
	BitFieldValue<bool, unsigned __int32> bOwnerAllowsScalabiltiy() { return { this, "UNiagaraComponent.bOwnerAllowsScalabiltiy"}; }
	BitFieldValue<bool, unsigned __int32> bIsCulledByScalability() { return { this, "UNiagaraComponent.bIsCulledByScalability"}; }
	BitFieldValue<bool, unsigned __int32> bIsFullyComplete() { return { this, "UNiagaraComponent.bIsFullyComplete"}; }
	BitFieldValue<bool, unsigned __int32> bDuringUpdateContextReset() { return { this, "UNiagaraComponent.bDuringUpdateContextReset"}; }
	BitFieldValue<bool, unsigned __int32> bDesiredPauseState() { return { this, "UNiagaraComponent.bDesiredPauseState"}; }
	BitFieldValue<bool, unsigned __int32> bRecachePSOs() { return { this, "UNiagaraComponent.bRecachePSOs"}; }
	void DestroyInstance() { NativeCall<void>(this, "UNiagaraComponent.DestroyInstance()"); }
	bool IsComplete() { return NativeCall<bool>(this, "UNiagaraComponent.IsComplete()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UNiagaraComponent.Serialize(FArchive&)", Ar); }
	bool IsReadyForOwnerToAutoDestroy() { return NativeCall<bool>(this, "UNiagaraComponent.IsReadyForOwnerToAutoDestroy()"); }
	void SetBoolParameter(FName Parametername, bool Param) { NativeCall<void, FName, bool>(this, "UNiagaraComponent.SetBoolParameter(FName,bool)", Parametername, Param); }
	void SetVariableMaterial(FName InVariableName, UMaterialInterface* InValue) { NativeCall<void, FName, UMaterialInterface*>(this, "UNiagaraComponent.SetVariableMaterial(FName,UMaterialInterface*)", InVariableName, InValue); }
	void PostSystemTick_GameThread() { NativeCall<void>(this, "UNiagaraComponent.PostSystemTick_GameThread()"); }
	void RemoveParameterCollectionOverride(UNiagaraParameterCollectionInstance* OverrideCollection) { NativeCall<void, UNiagaraParameterCollectionInstance*>(this, "UNiagaraComponent.RemoveParameterCollectionOverride(UNiagaraParameterCollectionInstance*)", OverrideCollection); }
	void SetVariableFloat(FName InVariableName, float InValue) { NativeCall<void, FName, float>(this, "UNiagaraComponent.SetVariableFloat(FName,float)", InVariableName, InValue); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UNiagaraComponent.SendRenderDynamicData_Concurrent()"); }
	void OnRegister() { NativeCall<void>(this, "UNiagaraComponent.OnRegister()"); }
	void OnComponentCreated() { NativeCall<void>(this, "UNiagaraComponent.OnComponentCreated()"); }
	UFXSystemAsset* GetFXSystemAsset() { return NativeCall<UFXSystemAsset*>(this, "UNiagaraComponent.GetFXSystemAsset()"); }
	void TickComponent(float DeltaSeconds, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UNiagaraComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaSeconds, TickType, ThisTickFunction); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UNiagaraComponent.Activate(bool)", bReset); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UNiagaraComponent.OnAttachmentChanged()"); }
	float GetSeekDelta() { return NativeCall<float>(this, "UNiagaraComponent.GetSeekDelta()"); }
	void OnEndOfFrameUpdateDuringTick() { NativeCall<void>(this, "UNiagaraComponent.OnEndOfFrameUpdateDuringTick()"); }
	void SetAllowScalability(bool bAllow) { NativeCall<void, bool>(this, "UNiagaraComponent.SetAllowScalability(bool)", bAllow); }
	void CopyParametersFromAsset(bool bResetExistingOverrideParameters) { NativeCall<void, bool>(this, "UNiagaraComponent.CopyParametersFromAsset(bool)", bResetExistingOverrideParameters); }
	const UObject* AdditionalStatObject() { return NativeCall<const UObject*>(this, "UNiagaraComponent.AdditionalStatObject()"); }
	void SetVariablePosition(FName InVariableName, UE::Math::TVector<double>* InValue) { if (!InValue) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >>(this, "UNiagaraComponent.SetVariablePosition(FName,UE::Math::TVector<double>)", InVariableName, *InValue); }
	void DeactivateInternal(bool bIsScalabilityCull) { NativeCall<void, bool>(this, "UNiagaraComponent.DeactivateInternal(bool)", bIsScalabilityCull); }
	UNiagaraSimCache* GetSimCache() { return NativeCall<UNiagaraSimCache*>(this, "UNiagaraComponent.GetSimCache()"); }
	void DeactivateImmediateInternal(bool bIsScalabilityCull) { NativeCall<void, bool>(this, "UNiagaraComponent.DeactivateImmediateInternal(bool)", bIsScalabilityCull); }
	void OnChildDetached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "UNiagaraComponent.OnChildDetached(USceneComponent*)", ChildComponent); }
	void SetVariableVec3(FName InVariableName, UE::Math::TVector<double>* InValue) { if (!InValue) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >>(this, "UNiagaraComponent.SetVariableVec3(FName,UE::Math::TVector<double>)", InVariableName, *InValue); }
	void ReleaseToPool() { NativeCall<void>(this, "UNiagaraComponent.ReleaseToPool()"); }
	void SetSimCache(UNiagaraSimCache* InSimCache, bool bResetSystem) { NativeCall<void, UNiagaraSimCache*, bool>(this, "UNiagaraComponent.SetSimCache(UNiagaraSimCache*,bool)", InSimCache, bResetSystem); }
	void SetVariableInt(FName InVariableName, int InValue) { NativeCall<void, FName, int>(this, "UNiagaraComponent.SetVariableInt(FName,int)", InVariableName, InValue); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UNiagaraComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	bool IsVisible() { return NativeCall<bool>(this, "UNiagaraComponent.IsVisible()"); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "UNiagaraComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	unsigned int GetApproxMemoryUsage() { return NativeCall<unsigned int>(this, "UNiagaraComponent.GetApproxMemoryUsage()"); }
	void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue) { NativeCall<void, FName, const FLinearColor&>(this, "UNiagaraComponent.SetVariableLinearColor(FName,FLinearColor&)", InVariableName, InValue); }
	void DeactivateImmediate() { NativeCall<void>(this, "UNiagaraComponent.DeactivateImmediate()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UNiagaraComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SetEmitterEnable(FName EmitterName, bool bNewEnableState) { NativeCall<void, FName, bool>(this, "UNiagaraComponent.SetEmitterEnable(FName,bool)", EmitterName, bNewEnableState); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UNiagaraComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void ReinitializeSystem() { NativeCall<void>(this, "UNiagaraComponent.ReinitializeSystem()"); }
	void SetAutoDestroy(bool bInAutoDestroy) { NativeCall<void, bool>(this, "UNiagaraComponent.SetAutoDestroy(bool)", bInAutoDestroy); }
	void RegisterWithScalabilityManager() { NativeCall<void>(this, "UNiagaraComponent.RegisterWithScalabilityManager()"); }
	void SetSeekDelta(float InSeekDelta) { NativeCall<void, float>(this, "UNiagaraComponent.SetSeekDelta(float)", InSeekDelta); }
	void PrecachePSOs() { NativeCall<void>(this, "UNiagaraComponent.PrecachePSOs()"); }
	bool GetAllowScalability() { return NativeCall<bool>(this, "UNiagaraComponent.GetAllowScalability()"); }
	void ActivateSystem(bool bFlagAsJustAttached) { NativeCall<void, bool>(this, "UNiagaraComponent.ActivateSystem(bool)", bFlagAsJustAttached); }
	void CancelAutoAttachment(bool bDetachFromParent) { NativeCall<void, bool>(this, "UNiagaraComponent.CancelAutoAttachment(bool)", bDetachFromParent); }
	void SetVectorParameter(FName ParameterName, UE::Math::TVector<double>* Param) { if (!Param) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector < double >>(this, "UNiagaraComponent.SetVectorParameter(FName,UE::Math::TVector<double>)", ParameterName, *Param); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNiagaraComponent"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UNiagaraComponent.GetNumMaterials()"); }
	void SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters) { NativeCall<void, UNiagaraSystem*, bool>(this, "UNiagaraComponent.SetAsset(UNiagaraSystem*,bool)", InAsset, bResetExistingOverrideParameters); }
	void DestroyCullProxy() { NativeCall<void>(this, "UNiagaraComponent.DestroyCullProxy()"); }
	bool RequiresGameThreadEndOfFrameRecreate() { return NativeCall<bool>(this, "UNiagaraComponent.RequiresGameThreadEndOfFrameRecreate()"); }
	void OnUnregister() { NativeCall<void>(this, "UNiagaraComponent.OnUnregister()"); }
	void SetIntParameter(FName ParameterName, int Param) { NativeCall<void, FName, int>(this, "UNiagaraComponent.SetIntParameter(FName,int)", ParameterName, Param); }
	void PostApplyToComponent() { NativeCall<void>(this, "UNiagaraComponent.PostApplyToComponent()"); }
	void SetPausedInternal(bool bInPaused, bool bIsScalabilityCull) { NativeCall<void, bool, bool>(this, "UNiagaraComponent.SetPausedInternal(bool,bool)", bInPaused, bIsScalabilityCull); }
	void SetVariableVec2(FName InVariableName, UE::Math::TVector2<double>* InValue) { if (!InValue) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, FName, UE :: Math :: TVector2 < double >>(this, "UNiagaraComponent.SetVariableVec2(FName,UE::Math::TVector2<double>)", InVariableName, *InValue); }
	void ResetSystem() { NativeCall<void>(this, "UNiagaraComponent.ResetSystem()"); }
	void BeginDestroy() { NativeCall<void>(this, "UNiagaraComponent.BeginDestroy()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UNiagaraComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void SetSystemSignificanceIndex(int InIndex) { NativeCall<void, int>(this, "UNiagaraComponent.SetSystemSignificanceIndex(int)", InIndex); }
	const FNiagaraReadinessSettings& GetReadinessSettings() { return NativeCall<const FNiagaraReadinessSettings&>(this, "UNiagaraComponent.GetReadinessSettings()"); }
	void SetForceSolo(bool bInForceSolo) { NativeCall<void, bool>(this, "UNiagaraComponent.SetForceSolo(bool)", bInForceSolo); }
	void SetPreviewLODDistance(bool bInEnablePreviewLODDistance, float InPreviewLODDistance, float InPreviewMaxDistance) { NativeCall<void, bool, float, float>(this, "UNiagaraComponent.SetPreviewLODDistance(bool,float,float)", bInEnablePreviewLODDistance, InPreviewLODDistance, InPreviewMaxDistance); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UNiagaraComponent.DestroyRenderState_Concurrent()"); }
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds) { NativeCall<void, int, float>(this, "UNiagaraComponent.AdvanceSimulation(int,float)", TickCount, TickDeltaSeconds); }
	float GetDesiredAge() { return NativeCall<float>(this, "UNiagaraComponent.GetDesiredAge()"); }
	void SetLODDistance(float InLODDistance, float InMaxLODDistance) { NativeCall<void, float, float>(this, "UNiagaraComponent.SetLODDistance(float,float)", InLODDistance, InMaxLODDistance); }
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock) { NativeCall<void, bool>(this, "UNiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta(bool)", bLock); }
	void SetRenderingEnabled(bool bInRenderingEnabled) { NativeCall<void, bool>(this, "UNiagaraComponent.SetRenderingEnabled(bool)", bInRenderingEnabled); }
	UNiagaraParameterCollectionInstance* GetParameterCollectionOverride(UNiagaraParameterCollection* ParameterCollection) { return NativeCall<UNiagaraParameterCollectionInstance*, UNiagaraParameterCollection*>(this, "UNiagaraComponent.GetParameterCollectionOverride(UNiagaraParameterCollection*)", ParameterCollection); }
	void OnSystemComplete(bool bExternalCompletion) { NativeCall<void, bool>(this, "UNiagaraComponent.OnSystemComplete(bool)", bExternalCompletion); }
	void PostLoad() { NativeCall<void>(this, "UNiagaraComponent.PostLoad()"); }
	void UpdateInstanceSoloMode() { NativeCall<void>(this, "UNiagaraComponent.UpdateInstanceSoloMode()"); }
	void SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule) { NativeCall<void, USceneComponent*, FName, EAttachmentRule, EAttachmentRule, EAttachmentRule>(this, "UNiagaraComponent.SetAutoAttachmentParameters(USceneComponent*,FName,EAttachmentRule,EAttachmentRule,EAttachmentRule)", Parent, SocketName, LocationRule, RotationRule, ScaleRule); }
	FName GetFNameForStatID() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UNiagaraComponent.GetFNameForStatID()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool ResolveOwnerAllowsScalability(bool bRegister) { return NativeCall<bool, bool>(this, "UNiagaraComponent.ResolveOwnerAllowsScalability(bool)", bRegister); }
	void Deactivate() { NativeCall<void>(this, "UNiagaraComponent.Deactivate()"); }
	INiagaraSceneComponentUtils* CreateSceneComponentUtils() { return NativeCall<INiagaraSceneComponentUtils*>(this, "UNiagaraComponent.CreateSceneComponentUtils()"); }
	void SetPaused(bool bInPaused) { NativeCall<void, bool>(this, "UNiagaraComponent.SetPaused(bool)", bInPaused); }
	void SetFXSystemAsset(UFXSystemAsset* NewAsset) { NativeCall<void, UFXSystemAsset*>(this, "UNiagaraComponent.SetFXSystemAsset(UFXSystemAsset*)", NewAsset); }
	void CreateCullProxy(bool bForce) { NativeCall<void, bool>(this, "UNiagaraComponent.CreateCullProxy(bool)", bForce); }
	void UnregisterWithScalabilityManager() { NativeCall<void>(this, "UNiagaraComponent.UnregisterWithScalabilityManager()"); }
	bool InitializeSystem() { return NativeCall<bool>(this, "UNiagaraComponent.InitializeSystem()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UNiagaraComponent.CreateSceneProxy()"); }
	void OnChildAttached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "UNiagaraComponent.OnChildAttached(USceneComponent*)", ChildComponent); }
	void SetVariableBool(FName InVariableName, bool InValue) { NativeCall<void, FName, bool>(this, "UNiagaraComponent.SetVariableBool(FName,bool)", InVariableName, InValue); }
	void SetFloatParameter(FName ParameterName, float Param) { NativeCall<void, FName, float>(this, "UNiagaraComponent.SetFloatParameter(FName,float)", ParameterName, Param); }
	void SetUseAutoManageAttachment(bool bAutoManage) { NativeCall<void, bool>(this, "UNiagaraComponent.SetUseAutoManageAttachment(bool)", bAutoManage); }
	void SetCustomTimeDilation(float Dilation) { NativeCall<void, float>(this, "UNiagaraComponent.SetCustomTimeDilation(float)", Dilation); }
	void DestroyInstanceNotComponent() { NativeCall<void>(this, "UNiagaraComponent.DestroyInstanceNotComponent()"); }
	void ActivateInternal(bool bReset, bool bIsScalabilityCull) { NativeCall<void, bool, bool>(this, "UNiagaraComponent.ActivateInternal(bool,bool)", bReset, bIsScalabilityCull); }
	void SetDesiredAge(float InDesiredAge) { NativeCall<void, float>(this, "UNiagaraComponent.SetDesiredAge(float)", InDesiredAge); }
	bool IsActiveForUpdateContext() { return NativeCall<bool>(this, "UNiagaraComponent.IsActiveForUpdateContext()"); }
	bool RequiresSoloMode() { return NativeCall<bool>(this, "UNiagaraComponent.RequiresSoloMode()"); }
	bool GetLockDesiredAgeDeltaTimeToSeekDelta() { return NativeCall<bool>(this, "UNiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta()"); }
	bool GetRenderingEnabled() { return NativeCall<bool>(this, "UNiagaraComponent.GetRenderingEnabled()"); }
	void SetActorParameter(FName ParameterName, AActor* Param) { NativeCall<void, FName, AActor*>(this, "UNiagaraComponent.SetActorParameter(FName,AActor*)", ParameterName, Param); }
};
