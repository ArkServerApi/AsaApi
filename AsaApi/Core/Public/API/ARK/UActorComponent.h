#pragma once
#include "BulkForward.h"


struct UActorComponent : UObject
{
	// Fields

	FActorComponentTickFunction& PrimaryComponentTickField() { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UActorComponent.PrimaryComponentTick"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ComponentTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UActorComponent.ComponentTags"); }
	TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >& AssetUserDataField() { return *GetNativePointerField<TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >*>(this, "UActorComponent.AssetUserData"); }
	BitFieldValue<int, unsigned __int32> MarkedForEndOfFrameUpdateArrayIndex() { return { this, "UActorComponent.MarkedForEndOfFrameUpdateArrayIndex"}; }
	int& UCSSerializationIndexField() { return *GetNativePointerField<int*>(this, "UActorComponent.UCSSerializationIndex"); }
	EComponentCreationMethod& CreationMethodField() { return *GetNativePointerField<EComponentCreationMethod*>(this, "UActorComponent.CreationMethod"); }
	FActorComponentDeactivateSignature& OnComponentDeactivatedField() { return *GetNativePointerField<FActorComponentDeactivateSignature*>(this, "UActorComponent.OnComponentDeactivated"); }
	AActor*& OwnerPrivateField() { return *GetNativePointerField<AActor**>(this, "UActorComponent.OwnerPrivate"); }
	UWorld*& WorldPrivateField() { return *GetNativePointerField<UWorld**>(this, "UActorComponent.WorldPrivate"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UActorComponent.CustomTag"); }
	int& CustomDataField() { return *GetNativePointerField<int*>(this, "UActorComponent.CustomData"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bRegistered() { return { this, "UActorComponent.bRegistered" }; }
	BitFieldValue<bool, unsigned __int32> bRenderStateCreated() { return { this, "UActorComponent.bRenderStateCreated" }; }
	BitFieldValue<bool, unsigned __int32> bPhysicsStateCreated() { return { this, "UActorComponent.bPhysicsStateCreated" }; }
	BitFieldValue<bool, unsigned __int32> bNetAddressable() { return { this, "UActorComponent.bNetAddressable" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList() { return { this, "UActorComponent.bReplicateUsingRegisteredSubObjectList" }; }
	BitFieldValue<bool, unsigned __int32> bReplicates() { return { this, "UActorComponent.bReplicates" }; }
	BitFieldValue<bool, unsigned __int32> bRenderStateDirty() { return { this, "UActorComponent.bRenderStateDirty" }; }
	BitFieldValue<bool, unsigned __int32> bRenderTransformDirty() { return { this, "UActorComponent.bRenderTransformDirty" }; }
	BitFieldValue<bool, unsigned __int32> bRenderDynamicDataDirty() { return { this, "UActorComponent.bRenderDynamicDataDirty" }; }
	BitFieldValue<bool, unsigned __int32> bRenderInstancesDirty() { return { this, "UActorComponent.bRenderInstancesDirty" }; }
	BitFieldValue<bool, unsigned __int32> bRoutedPostRename() { return { this, "UActorComponent.bRoutedPostRename" }; }
	BitFieldValue<bool, unsigned __int32> bAutoRegister() { return { this, "UActorComponent.bAutoRegister" }; }
	BitFieldValue<bool, unsigned __int32> bAllowReregistration() { return { this, "UActorComponent.bAllowReregistration" }; }
	BitFieldValue<bool, unsigned __int32> bTickInEditor() { return { this, "UActorComponent.bTickInEditor" }; }
	BitFieldValue<bool, unsigned __int32> bNeverNeedsRenderUpdate() { return { this, "UActorComponent.bNeverNeedsRenderUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bAllowConcurrentTick() { return { this, "UActorComponent.bAllowConcurrentTick" }; }
	BitFieldValue<bool, unsigned __int32> bAllowAnyoneToDestroyMe() { return { this, "UActorComponent.bAllowAnyoneToDestroyMe" }; }
	BitFieldValue<bool, unsigned __int32> bAutoActivate() { return { this, "UActorComponent.bAutoActivate" }; }
	BitFieldValue<bool, unsigned __int32> bIsActive() { return { this, "UActorComponent.bIsActive" }; }
	BitFieldValue<bool, unsigned __int32> bEditableWhenInherited() { return { this, "UActorComponent.bEditableWhenInherited" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner() { return { this, "UActorComponent.bOnlyRelevantToOwner" }; }
	BitFieldValue<bool, unsigned __int32> bNavigationRelevant() { return { this, "UActorComponent.bNavigationRelevant" }; }
	BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation() { return { this, "UActorComponent.bCanEverAffectNavigation" }; }
	BitFieldValue<bool, unsigned __int32> bWantsInitializeComponent() { return { this, "UActorComponent.bWantsInitializeComponent" }; }
	BitFieldValue<bool, unsigned __int32> bIsEditorOnly() { return { this, "UActorComponent.bIsEditorOnly" }; }
	BitFieldValue<bool, unsigned __int32> bHasBeenCreated() { return { this, "UActorComponent.bHasBeenCreated" }; }
	BitFieldValue<bool, unsigned __int32> bHasBeenInitialized() { return { this, "UActorComponent.bHasBeenInitialized" }; }
	BitFieldValue<bool, unsigned __int32> bIsReadyForReplication() { return { this, "UActorComponent.bIsReadyForReplication" }; }
	BitFieldValue<bool, unsigned __int32> bHasBegunPlay() { return { this, "UActorComponent.bHasBegunPlay" }; }
	BitFieldValue<bool, unsigned __int32> bIsBeingDestroyed() { return { this, "UActorComponent.bIsBeingDestroyed" }; }
	BitFieldValue<bool, unsigned __int32> bTickFunctionsRegistered() { return { this, "UActorComponent.bTickFunctionsRegistered" }; }
	BitFieldValue<bool, unsigned __int32> bIsNetStartupComponent() { return { this, "UActorComponent.bIsNetStartupComponent" }; }
	BitFieldValue<bool, unsigned __int32> MarkedForEndOfFrameUpdateState() { return { this, "UActorComponent.MarkedForEndOfFrameUpdateState" }; }
	BitFieldValue<bool, unsigned __int32> bMarkedForPreEndOfFrameSync() { return { this, "UActorComponent.bMarkedForPreEndOfFrameSync" }; }
	BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled() { return { this, "UActorComponent.bAsyncPhysicsTickEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister() { return { this, "UActorComponent.bStasisPreventUnregister" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication() { return { this, "UActorComponent.bOnlyInitialReplication" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer() { return { this, "UActorComponent.bPreventOnDedicatedServer" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnConsoles() { return { this, "UActorComponent.bPreventOnConsoles" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnClient() { return { this, "UActorComponent.bPreventOnClient" }; }
	BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost() { return { this, "UActorComponent.bPreventOnNonDedicatedHost" }; }
	BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame() { return { this, "UActorComponent.bDedicatedForceTickingEveryFrame" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional() { return { this, "UActorComponent.bAlwaysReplicatePropertyConditional" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick() { return { this, "UActorComponent.bUseBPOnComponentTick" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed() { return { this, "UActorComponent.bUseBPOnComponentDestroyed" }; }
	BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated() { return { this, "UActorComponent.bUseBPOnComponentCreated" }; }

	// Functions

	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UActorComponent.GetWorld()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UActorComponent"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UActorComponent"); }
	void AsyncPhysicsTickComponent(float DeltaTime, float SimTime) { NativeCall<void, float, float>(this, "UActorComponent.AsyncPhysicsTickComponent(float,float)", DeltaTime, SimTime); }
	ELifetimeCondition GetReplicationCondition() { return NativeCall<ELifetimeCondition>(this, "UActorComponent.GetReplicationCondition()"); }
	void PostInitProperties() { NativeCall<void>(this, "UActorComponent.PostInitProperties()"); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UActorComponent.OnCreatePhysicsState()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUActorComponent();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UActorComponent.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
	void PostRename(UObject* OldOuter, const FName OldName) { NativeCall<void, UObject*, const FName>(this, "UActorComponent.PostRename(UObject*,FName)", OldOuter, OldName); }
	bool AllowRegisterWithWorld(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UActorComponent.AllowRegisterWithWorld(UWorld*)", InWorld); }
	void FailedToRegisterWithWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UActorComponent.FailedToRegisterWithWorld(UWorld*)", InWorld); }
	UWorld* GetWorld_Uncached() { return NativeCall<UWorld*>(this, "UActorComponent.GetWorld_Uncached()"); }
	bool ComponentHasTag(FName Tag) { return NativeCall<bool, FName>(this, "UActorComponent.ComponentHasTag(FName)", Tag); }
	//     ENetMode InternalGetNetMode() { return NativeCall<ENetMode>(this, "UActorComponent.InternalGetNetMode()"); }
	// FUNCTION MISSING: UActorComponent.InternalGetNetMode()
	FString* GetReadableName(FString* result) { return NativeCall<FString*, FString*>(this, "UActorComponent.GetReadableName()", result); }
	void BeginDestroy() { NativeCall<void>(this, "UActorComponent.BeginDestroy()"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForClient()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForServer()"); }
	bool NeedsLoadForEditorGame() { return NativeCall<bool>(this, "UActorComponent.NeedsLoadForEditorGame()"); }
	int GetFunctionCallspace(UFunction* Function, FFrame* Stack) { return NativeCall<int, UFunction*, FFrame*>(this, "UActorComponent.GetFunctionCallspace(UFunction*,FFrame*)", Function, Stack); }
	bool CallRemoteFunction(UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack) { return NativeCall<bool, UFunction*, void*, FOutParmRec*, FFrame*>(this, "UActorComponent.CallRemoteFunction(UFunction*,void*,FOutParmRec*,FFrame*)", Function, Parameters, OutParms, Stack); }
	void OnRegister() { NativeCall<void>(this, "UActorComponent.OnRegister()"); }
	void InitializeComponent() { NativeCall<void>(this, "UActorComponent.InitializeComponent()"); }
	void UninitializeComponent() { NativeCall<void>(this, "UActorComponent.UninitializeComponent()"); }
	void ReadyForReplication() { NativeCall<void>(this, "UActorComponent.ReadyForReplication()"); }
	void BeginPlay() { NativeCall<void>(this, "UActorComponent.BeginPlay()"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "UActorComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	//TStructOnScope<FActorComponentInstanceData, UScriptStruct*>* GetComponentInstanceData(TStructOnScope<FActorComponentInstanceData, UScriptStruct*>* result) { return NativeCall<TStructOnScope<FActorComponentInstanceData, UScriptStruct*>*, TStructOnScope<FActorComponentInstanceData, UScriptStruct*>*>(this, "UActorComponent.GetComponentInstanceData()", result); }
	bool SetupActorComponentTickFunction(FTickFunction* TickFunction) { return NativeCall<bool, FTickFunction*>(this, "UActorComponent.SetupActorComponentTickFunction(FTickFunction*)", TickFunction); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabled(bool)", bEnabled); }
	void SetComponentTickEnabledAsync(bool bEnabled) { NativeCall<void, bool>(this, "UActorComponent.SetComponentTickEnabledAsync(bool)", bEnabled); }
	bool IsComponentTickEnabled() { return NativeCall<bool>(this, "UActorComponent.IsComponentTickEnabled()"); }
	void SetComponentTickIntervalAndCooldown(float TickInterval) { NativeCall<void, float>(this, "UActorComponent.SetComponentTickIntervalAndCooldown(float)", TickInterval); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UActorComponent.RegisterComponentTickFunctions(bool,bool)", bRegister, bSaveAndRestoreComponentTickState); }
	void RegisterAllComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UActorComponent.RegisterAllComponentTickFunctions(bool,bool)", bRegister, bSaveAndRestoreComponentTickState); }
	//     void RegisterAsyncPhysicsTickEnabled(bool bRegister) { NativeCall<void, bool>(this, "UActorComponent.RegisterAsyncPhysicsTickEnabled(bool)", bRegister); }
	// FUNCTION MISSING: UActorComponent.RegisterAsyncPhysicsTickEnabled(bool)
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UActorComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RegisterComponentWithWorld(UWorld* InWorld, FRegisterComponentContext* Context) { NativeCall<void, UWorld*, FRegisterComponentContext*>(this, "UActorComponent.RegisterComponentWithWorld(UWorld*,FRegisterComponentContext*)", InWorld, Context); }
	void RegisterComponent() { NativeCall<void>(this, "UActorComponent.RegisterComponent()"); }
	void UnregisterComponent() { NativeCall<void>(this, "UActorComponent.UnregisterComponent()"); }
	void DestroyComponent(bool bPromoteChildren) { NativeCall<void, bool>(this, "UActorComponent.DestroyComponent(bool)", bPromoteChildren); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UActorComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UActorComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UActorComponent.SendRenderTransform_Concurrent()"); }
	void SendRenderInstanceData_Concurrent() { NativeCall<void>(this, "UActorComponent.SendRenderInstanceData_Concurrent()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UActorComponent.DestroyRenderState_Concurrent()"); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UActorComponent.OnDestroyPhysicsState()"); }
	void CreatePhysicsState(bool bAllowDeferral) { NativeCall<void, bool>(this, "UActorComponent.CreatePhysicsState(bool)", bAllowDeferral); }
	void DestroyPhysicsState() { NativeCall<void>(this, "UActorComponent.DestroyPhysicsState()"); }
	//     void ExecuteUnregisterEvents() { NativeCall<void>(this, "UActorComponent.ExecuteUnregisterEvents()"); }
	// FUNCTION MISSING: UActorComponent.ExecuteUnregisterEvents()
	void ReregisterComponent() { NativeCall<void>(this, "UActorComponent.ReregisterComponent()"); }
	void RecreateRenderState_Concurrent() { NativeCall<void>(this, "UActorComponent.RecreateRenderState_Concurrent()"); }
	void RecreatePhysicsState() { NativeCall<void>(this, "UActorComponent.RecreatePhysicsState()"); }
	void AddTickPrerequisiteActor(AActor* PrerequisiteActor) { NativeCall<void, AActor*>(this, "UActorComponent.AddTickPrerequisiteActor(AActor*)", PrerequisiteActor); }
	void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) { NativeCall<void, UActorComponent*>(this, "UActorComponent.AddTickPrerequisiteComponent(UActorComponent*)", PrerequisiteComponent); }
	void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor) { NativeCall<void, AActor*>(this, "UActorComponent.RemoveTickPrerequisiteActor(AActor*)", PrerequisiteActor); }
	void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) { NativeCall<void, UActorComponent*>(this, "UActorComponent.RemoveTickPrerequisiteComponent(UActorComponent*)", PrerequisiteComponent); }
	void DoDeferredRenderUpdates_Concurrent() { NativeCall<void>(this, "UActorComponent.DoDeferredRenderUpdates_Concurrent()"); }
	void MarkRenderStateDirty() { NativeCall<void>(this, "UActorComponent.MarkRenderStateDirty()"); }
	void MarkForNeededEndOfFrameUpdate(bool bReadyForEarlyUpdate) { NativeCall<void, bool>(this, "UActorComponent.MarkForNeededEndOfFrameUpdate(bool)", bReadyForEarlyUpdate); }
	//     void ClearNeedEndOfFrameUpdate_Internal() { NativeCall<void>(this, "UActorComponent.ClearNeedEndOfFrameUpdate_Internal()"); }
	// FUNCTION MISSING: UActorComponent.ClearNeedEndOfFrameUpdate_Internal()
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UActorComponent.Activate(bool)", bReset); }
	void Deactivate() { NativeCall<void>(this, "UActorComponent.Deactivate()"); }
	void SetActive(bool bNewActive, bool bReset) { NativeCall<void, bool, bool>(this, "UActorComponent.SetActive(bool,bool)", bNewActive, bReset); }
	void SetAutoActivate(bool bNewAutoActivate) { NativeCall<void, bool>(this, "UActorComponent.SetAutoActivate(bool)", bNewAutoActivate); }
	void ToggleActive() { NativeCall<void>(this, "UActorComponent.ToggleActive()"); }
	void AddAssetUserData(UAssetUserData* InUserData) { NativeCall<void, UAssetUserData*>(this, "UActorComponent.AddAssetUserData(UAssetUserData*)", InUserData); }
	UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData*, TSubclassOf<UAssetUserData>>(this, "UActorComponent.GetAssetUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "UActorComponent.RemoveUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UActorComponent.IsNameStableForNetworking()"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "UActorComponent.IsSupportedForNetworking()"); }
	void SetIsReplicated(bool bShouldReplicate) { NativeCall<void, bool>(this, "UActorComponent.SetIsReplicated(bool)", bShouldReplicate); }
	void AddReplicatedSubObject(UObject* SubObject, ELifetimeCondition NetCondition) { NativeCall<void, UObject*, ELifetimeCondition>(this, "UActorComponent.AddReplicatedSubObject(UObject*,ELifetimeCondition)", SubObject, NetCondition); }
	bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) { return NativeCall<bool, UActorChannel*, FOutBunch*, FReplicationFlags*>(this, "UActorComponent.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)", Channel, Bunch, RepFlags); }
	void PreReplication(IRepChangedPropertyTracker* ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker*>(this, "UActorComponent.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "UActorComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void OnRep_IsActive() { NativeCall<void>(this, "UActorComponent.OnRep_IsActive()"); }
	void DetermineUCSModifiedProperties() { NativeCall<void>(this, "UActorComponent.DetermineUCSModifiedProperties()"); }
	void GetUCSModifiedProperties(TSet<FProperty const*, DefaultKeyFuncs<FProperty const*, 0>, FDefaultSetAllocator>* ModifiedProperties) { NativeCall<void, TSet<FProperty const*, DefaultKeyFuncs<FProperty const*, 0>, FDefaultSetAllocator>*>(this, "UActorComponent.GetUCSModifiedProperties(TSet<FProperty*,DefaultKeyFuncs<FProperty*,0>,FDefaultSetAllocator>&)", ModifiedProperties); }
	void RemoveUCSModifiedProperties(const TArray<FProperty*, TSizedDefaultAllocator<32> >* Properties) { NativeCall<void, const TArray<FProperty*, TSizedDefaultAllocator<32> >*>(this, "UActorComponent.RemoveUCSModifiedProperties(TArray<FProperty*,TSizedDefaultAllocator<32>>&)", Properties); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UActorComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void SetCanEverAffectNavigation(bool bRelevant) { NativeCall<void, bool>(this, "UActorComponent.SetCanEverAffectNavigation(bool)", bRelevant); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UActorComponent.Serialize(FArchive&)", Ar); }
	void SetIsReplicatedByDefault(const bool bNewReplicates) { NativeCall<void, const bool>(this, "UActorComponent.SetIsReplicatedByDefault(bool)", bNewReplicates); }

	unsigned __int64& NetPushId_InternalField() { return *GetNativePointerField<unsigned __int64*>(this, "UActorComponent.NetPushId_Internal"); }
	FPhysScene_Chaos*& PhysicsStateAsyncCreationSceneField() { return *GetNativePointerField<FPhysScene_Chaos**>(this, "UActorComponent.PhysicsStateAsyncCreationScene"); }
	FActorComponentActivatedSignature& OnComponentActivatedField() { return *GetNativePointerField<FActorComponentActivatedSignature*>(this, "UActorComponent.OnComponentActivated"); }
	BitFieldValue<bool, unsigned char> bReadyForEarlyEndOfFrameUpdate() { return { this, "UActorComponent.bReadyForEarlyEndOfFrameUpdate"}; }
	BitFieldValue<bool, unsigned char> bRenderStateUpdating() { return { this, "UActorComponent.bRenderStateUpdating"}; }
	BitFieldValue<bool, unsigned char> bRenderStateRecreating() { return { this, "UActorComponent.bRenderStateRecreating"}; }
	BitFieldValue<bool, unsigned char> bCallAsyncPhysicsStateCreatedDelegate() { return { this, "UActorComponent.bCallAsyncPhysicsStateCreatedDelegate"}; }
	bool RequiresGameThreadEndOfFrameRecreate() { return NativeCall<bool>(this, "UActorComponent.RequiresGameThreadEndOfFrameRecreate()"); }
	void SetNetPushIdDynamic(unsigned __int64 InNetPushId) { NativeCall<void, unsigned __int64>(this, "UActorComponent.SetNetPushIdDynamic(unsigned__int64)", InNetPushId); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UActorComponent.InvalidateLightingCacheDetailed(bool,bool)", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	bool IsReadyForOwnerToAutoDestroy() { return NativeCall<bool>(this, "UActorComponent.IsReadyForOwnerToAutoDestroy()"); }
	bool IsSkeletalMeshComponent() { return NativeCall<bool>(this, "UActorComponent.IsSkeletalMeshComponent()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UActorComponent._getUObject()"); }
	void OnActorEnableCollisionChanged() { NativeCall<void>(this, "UActorComponent.OnActorEnableCollisionChanged()"); }
	void OnPreRegistered() { NativeCall<void>(this, "UActorComponent.OnPreRegistered()"); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "UActorComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void OnPreEndOfFrameSync() { NativeCall<void>(this, "UActorComponent.OnPreEndOfFrameSync()"); }
	void OnActorVisibilityChanged() { NativeCall<void>(this, "UActorComponent.OnActorVisibilityChanged()"); }
	void SetActiveFlag(bool bNewIsActive) { NativeCall<void, bool>(this, "UActorComponent.SetActiveFlag(bool)", bNewIsActive); }
	const TArray<UAssetUserData*, TSizedDefaultAllocator<32> >* GetAssetUserDataArray() { return NativeCall<const TArray<UAssetUserData*, TSizedDefaultAllocator<32> >*>(this, "UActorComponent.GetAssetUserDataArray()"); }
	bool OwnerNeedsInitialization() { return NativeCall<bool>(this, "UActorComponent.OwnerNeedsInitialization()"); }
	void ClearUCSModifiedProperties() { NativeCall<void>(this, "UActorComponent.ClearUCSModifiedProperties()"); }
	bool AllowsAsyncPhysicsStateCreation() { return NativeCall<bool>(this, "UActorComponent.AllowsAsyncPhysicsStateCreation()"); }
	unsigned __int64 GetNetPushIdDynamic() { return NativeCall<unsigned __int64>(this, "UActorComponent.GetNetPushIdDynamic()"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UActorComponent.SendRenderDynamicData_Concurrent()"); }
	bool IsSceneComponent() { return NativeCall<bool>(this, "UActorComponent.IsSceneComponent()"); }
	void OnCreatedFromReplication() { NativeCall<void>(this, "UActorComponent.OnCreatedFromReplication()"); }
	void OnPreRegister() { NativeCall<void>(this, "UActorComponent.OnPreRegister()"); }
	bool RequiresGameThreadEndOfFrameUpdates() { return NativeCall<bool>(this, "UActorComponent.RequiresGameThreadEndOfFrameUpdates()"); }
	bool IsAsyncPhysicsStateCreated() { return NativeCall<bool>(this, "UActorComponent.IsAsyncPhysicsStateCreated()"); }
	void ReceiveAsyncPhysicsTick(float DeltaSeconds, float SimSeconds) { NativeCall<void, float, float>(this, "UActorComponent.ReceiveAsyncPhysicsTick(float,float)", DeltaSeconds, SimSeconds); }
	void MarkRenderDynamicDataDirty() { NativeCall<void>(this, "UActorComponent.MarkRenderDynamicDataDirty()"); }
	void OnComponentCreated() { NativeCall<void>(this, "UActorComponent.OnComponentCreated()"); }
	void RemoveReplicatedSubObject(UObject* SubObject) { NativeCall<void, UObject*>(this, "UActorComponent.RemoveReplicatedSubObject(UObject*)", SubObject); }
	void OnAsyncDestroyPhysicsStateEnd_GameThread() { NativeCall<void>(this, "UActorComponent.OnAsyncDestroyPhysicsStateEnd_GameThread()"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UActorComponent.ShouldCreatePhysicsState()"); }
	static bool CanBeHLODRelevant(const UActorComponent* ActorComponent) { return NativeCall<bool, const UActorComponent*>(nullptr, "UActorComponent.CanBeHLODRelevant(UActorComponent*)", ActorComponent); }
	void ReceiveComponentDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, AController*, AActor*>(this, "UActorComponent.ReceiveComponentDamage(float,FDamageEvent&,AController*,AActor*)", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	bool IsEditableWhenInherited() { return NativeCall<bool>(this, "UActorComponent.IsEditableWhenInherited()"); }
	void PreUnregisterComponentFromWorld() { NativeCall<void>(this, "UActorComponent.PreUnregisterComponentFromWorld()"); }
	bool IsMeshComponent() { return NativeCall<bool>(this, "UActorComponent.IsMeshComponent()"); }
	void MarkRenderInstancesDirty() { NativeCall<void>(this, "UActorComponent.MarkRenderInstancesDirty()"); }
	void OnEndOfFrameUpdateDuringTick() { NativeCall<void>(this, "UActorComponent.OnEndOfFrameUpdateDuringTick()"); }
	void AddedAsPrimalItemAttachment() { NativeCall<void>(this, "UActorComponent.AddedAsPrimalItemAttachment()"); }
	ENetRole GetOwnerRole() { return NativeCall<ENetRole>(this, "UActorComponent.GetOwnerRole()"); }
	void SetNetAddressable() { NativeCall<void>(this, "UActorComponent.SetNetAddressable()"); }
	bool ShouldIncrementalPreRegister(UWorld* WorldContext) { return NativeCall<bool, UWorld*>(this, "UActorComponent.ShouldIncrementalPreRegister(UWorld*)", WorldContext); }
	bool NeedsInitialization() { return NativeCall<bool>(this, "UActorComponent.NeedsInitialization()"); }
	float GetComponentTickInterval() { return NativeCall<float>(this, "UActorComponent.GetComponentTickInterval()"); }
	void PostApplyToComponent() { NativeCall<void>(this, "UActorComponent.PostApplyToComponent()"); }
	const UObject* AdditionalStatObject() { return NativeCall<const UObject*>(this, "UActorComponent.AdditionalStatObject()"); }
	TArray<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >* GetFollowersSkinnedMeshComponentsForEndOfFrameUpdate() { return NativeCall<TArray<TWeakObjectPtr<USkinnedMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UActorComponent.GetFollowersSkinnedMeshComponentsForEndOfFrameUpdate()"); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UActorComponent.IsNavigationRelevant()"); }
	bool HasLeaderForEndOfFrameUpdate() { return NativeCall<bool>(this, "UActorComponent.HasLeaderForEndOfFrameUpdate()"); }
	bool RequiresPreEndOfFrameSync() { return NativeCall<bool>(this, "UActorComponent.RequiresPreEndOfFrameSync()"); }
	bool IsOwnerRunningUserConstructionScript() { return NativeCall<bool>(this, "UActorComponent.IsOwnerRunningUserConstructionScript()"); }
	bool IsPrimitiveComponent() { return NativeCall<bool>(this, "UActorComponent.IsPrimitiveComponent()"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UActorComponent.IsHLODRelevant()"); }
	void OnUnregister() { NativeCall<void>(this, "UActorComponent.OnUnregister()"); }
	bool AllowOctreeUsing() { return NativeCall<bool>(this, "UActorComponent.AllowOctreeUsing()"); }
	void OnAsyncCreatePhysicsStateEnd_GameThread() { NativeCall<void>(this, "UActorComponent.OnAsyncCreatePhysicsStateEnd_GameThread()"); }
	bool AllowsAsyncPhysicsStateDestruction() { return NativeCall<bool>(this, "UActorComponent.AllowsAsyncPhysicsStateDestruction()"); }
	bool IsCharacterMovementComponent() { return NativeCall<bool>(this, "UActorComponent.IsCharacterMovementComponent()"); }
	void OnPreUnregister() { NativeCall<void>(this, "UActorComponent.OnPreUnregister()"); }
	bool ShouldCreateRenderState() { return NativeCall<bool>(this, "UActorComponent.ShouldCreateRenderState()"); }
	bool HasFollowersForEndOfFrameUpdate() { return NativeCall<bool>(this, "UActorComponent.HasFollowersForEndOfFrameUpdate()"); }
	void MarkRenderTransformDirty() { NativeCall<void>(this, "UActorComponent.MarkRenderTransformDirty()"); }
	bool ShouldAsyncDestroyPhysicsState() { return NativeCall<bool>(this, "UActorComponent.ShouldAsyncDestroyPhysicsState()"); }
	bool ShouldActivate() { return NativeCall<bool>(this, "UActorComponent.ShouldActivate()"); }
	void EndReplication() { NativeCall<void>(this, "UActorComponent.EndReplication()"); }
	void PostLoad() { NativeCall<void>(this, "UActorComponent.PostLoad()"); }
	bool CanSkipInstancingWhenPrevented() { return NativeCall<bool>(this, "UActorComponent.CanSkipInstancingWhenPrevented()"); }
	FSceneInterface* GetScene() { return NativeCall<FSceneInterface*>(this, "UActorComponent.GetScene()"); }
	bool ShouldIncrementalPreUnregister() { return NativeCall<bool>(this, "UActorComponent.ShouldIncrementalPreUnregister()"); }
	void OnDestroyedFromReplication() { NativeCall<void>(this, "UActorComponent.OnDestroyedFromReplication()"); }
	void OnPreUnregistered() { NativeCall<void>(this, "UActorComponent.OnPreUnregistered()"); }
	bool Primal_IsComponent() { return NativeCall<bool>(this, "UActorComponent.Primal_IsComponent()"); }
	void PreRegisterComponentWithWorld(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UActorComponent.PreRegisterComponentWithWorld(UWorld*)", InWorld); }
	UObject* GetAsyncPhysicsStateObject() { return NativeCall<UObject*>(this, "UActorComponent.GetAsyncPhysicsStateObject()"); }
	bool IsOwnerSelected() { return NativeCall<bool>(this, "UActorComponent.IsOwnerSelected()"); }
	FPhysScene_Chaos* GetPhysicsScene() { return NativeCall<FPhysScene_Chaos*>(this, "UActorComponent.GetPhysicsScene()"); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UActorComponent.HasValidPhysicsState()"); }
	void BeginReplication() { NativeCall<void>(this, "UActorComponent.BeginReplication()"); }
	bool IsCreatedByConstructionScript() { return NativeCall<bool>(this, "UActorComponent.IsCreatedByConstructionScript()"); }
	void PrecachePSOs() { NativeCall<void>(this, "UActorComponent.PrecachePSOs()"); }
	bool ShouldAsyncCreatePhysicsState(UWorld* WorldContext) { return NativeCall<bool, UWorld*>(this, "UActorComponent.ShouldAsyncCreatePhysicsState(UWorld*)", WorldContext); }
	void SetTickGroup(ETickingGroup NewTickGroup) { NativeCall<void, ETickingGroup>(this, "UActorComponent.SetTickGroup(ETickingGroup)", NewTickGroup); }
	ULevel* GetComponentLevel() { return NativeCall<ULevel*>(this, "UActorComponent.GetComponentLevel()"); }
	bool GetComponentClassCanReplicate() { return NativeCall<bool>(this, "UActorComponent.GetComponentClassCanReplicate()"); }
};