#pragma once
#include "BulkForward.h"


struct AActor : UPrimalActor, ActorExtensions
{
	// Fields

	FActorTickFunction& PrimaryActorTickField() { return *GetNativePointerField<FActorTickFunction*>(this, "AActor.PrimaryActorTick"); }
	EActorUpdateOverlapsMethod& UpdateOverlapsMethodDuringLevelStreamingField() { return *GetNativePointerField<EActorUpdateOverlapsMethod*>(this, "AActor.UpdateOverlapsMethodDuringLevelStreaming"); }
	int& LastForceNetUpdateFrameField() { return *GetNativePointerField<int*>(this, "AActor.LastForceNetUpdateFrame"); }
	float& InitialLifeSpanField() { return *GetNativePointerField<float*>(this, "AActor.InitialLifeSpan"); }
	float& CustomTimeDilationField() { return *GetNativePointerField<float*>(this, "AActor.CustomTimeDilation"); }
	int& RayTracingGroupIdField() { return *GetNativePointerField<int*>(this, "AActor.RayTracingGroupId"); }
	FRepAttachment& AttachmentReplicationField() { return *GetNativePointerField<FRepAttachment*>(this, "AActor.AttachmentReplication"); }
	FRepMovement& ReplicatedMovementField() { return *GetNativePointerField<FRepMovement*>(this, "AActor.ReplicatedMovement"); }
	TObjectPtr<AActor>& OwnerField() { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AActor.Owner"); }
	FName& NetDriverNameField() { return *GetNativePointerField<FName*>(this, "AActor.NetDriverName"); }
	TEnumAsByte<enum ENetDormancy>& NetDormancyField() { return *GetNativePointerField<TEnumAsByte<enum ENetDormancy>*>(this, "AActor.NetDormancy"); }
	TEnumAsByte<enum EAutoReceiveInput::Type>& AutoReceiveInputField() { return *GetNativePointerField<TEnumAsByte<enum EAutoReceiveInput::Type>*>(this, "AActor.AutoReceiveInput"); }
	int& InputPriorityField() { return *GetNativePointerField<int*>(this, "AActor.InputPriority"); }
	long double& CreationTimeField() { return *GetNativePointerField<long double*>(this, "AActor.CreationTime"); }
	TObjectPtr<UInputComponent>& InputComponentField() { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AActor.InputComponent"); }
	float& NetCullDistanceSquaredField() { return *GetNativePointerField<float*>(this, "AActor.NetCullDistanceSquared"); }
	int& NetTagField() { return *GetNativePointerField<int*>(this, "AActor.NetTag"); }
	float& NetUpdateFrequencyField() { return *GetNativePointerField<float*>(this, "AActor.NetUpdateFrequency"); }
	float& MinNetUpdateFrequencyField() { return *GetNativePointerField<float*>(this, "AActor.MinNetUpdateFrequency"); }
	float& NetPriorityField() { return *GetNativePointerField<float*>(this, "AActor.NetPriority"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "AActor.LastRenderTime"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// long double& LastRenderTimeOnScreenField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// long double& LastRenderTimeIgnoreShadowField();
	TObjectPtr<APawn>& InstigatorField() { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AActor.Instigator"); }
	TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >& ChildrenField() { return *GetNativePointerField<TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "AActor.Children"); }
	TObjectPtr<USceneComponent>& RootComponentField() { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AActor.RootComponent"); }
	FTimerHandle& TimerHandle_LifeSpanExpiredField() { return *GetNativePointerField<FTimerHandle*>(this, "AActor.TimerHandle_LifeSpanExpired"); }
	TArray<FName, TSizedDefaultAllocator<32> >& LayersField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AActor.Layers"); }
	TWeakObjectPtr<UChildActorComponent>& ParentComponentField() { return *GetNativePointerField<TWeakObjectPtr<UChildActorComponent>*>(this, "AActor.ParentComponent"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AActor.Tags"); }
	int& CachedStasisGridIndexField() { return *GetNativePointerField<int*>(this, "AActor.CachedStasisGridIndex"); }
	FTakePointDamageSignature& OnTakePointDamageField() { return *GetNativePointerField<FTakePointDamageSignature*>(this, "AActor.OnTakePointDamage"); }
	FActorBeginOverlapSignature& OnActorBeginOverlapField() { return *GetNativePointerField<FActorBeginOverlapSignature*>(this, "AActor.OnActorBeginOverlap"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FActorBeginCursorOverSignature& OnBeginCursorOverField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FActorOnClickedSignature& OnClickedField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FActorOnInputTouchBeginSignature& OnInputTouchBeginField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FActorBeginTouchOverSignature& OnInputTouchEnterField();
	FActorHitSignature& OnActorHitField() { return *GetNativePointerField<FActorHitSignature*>(this, "AActor.OnActorHit"); }
	FActorEndPlaySignature& OnEndPlayField() { return *GetNativePointerField<FActorEndPlaySignature*>(this, "AActor.OnEndPlay"); }
	//UE::Net::FSubObjectRegistry& ReplicatedSubObjectsField() { return *GetNativePointerField<UE::Net::FSubObjectRegistry*>(this, "AActor.ReplicatedSubObjects"); }
	//TArray<UE::Net::FReplicatedComponentInfo, TSizedDefaultAllocator<32> >& ReplicatedComponentsInfoField() { return *GetNativePointerField<TArray<UE::Net::FReplicatedComponentInfo, TSizedDefaultAllocator<32> >*>(this, "AActor.ReplicatedComponentsInfo"); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >& ReplicatedComponentsField() { return *GetNativePointerField<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*>(this, "AActor.ReplicatedComponents"); }
	TSet<UActorComponent*, DefaultKeyFuncs<UActorComponent*, 0>, FDefaultSetAllocator>& OwnedComponentsField() { return *GetNativePointerField<TSet<UActorComponent*, DefaultKeyFuncs<UActorComponent*, 0>, FDefaultSetAllocator>*>(this, "AActor.OwnedComponents"); }
	TArray<TObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >& InstanceComponentsField() { return *GetNativePointerField<TArray<TObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >*>(this, "AActor.InstanceComponents"); }
	TArray<TObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >& BlueprintCreatedComponentsField() { return *GetNativePointerField<TArray<TObjectPtr<UActorComponent>, TSizedDefaultAllocator<32> >*>(this, "AActor.BlueprintCreatedComponents"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FRenderCommandFence& DetachFenceField();

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bNetTemporary() { return { this, "AActor.bNetTemporary" }; }
	BitFieldValue<bool, unsigned __int32> bNetStartup() { return { this, "AActor.bNetStartup" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner() { return { this, "AActor.bOnlyRelevantToOwner" }; }
	BitFieldValue<bool, unsigned __int32> bAlwaysRelevant() { return { this, "AActor.bAlwaysRelevant" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateMovement() { return { this, "AActor.bReplicateMovement" }; }
	BitFieldValue<bool, unsigned __int32> bCallPreReplication() { return { this, "AActor.bCallPreReplication" }; }
	BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay() { return { this, "AActor.bCallPreReplicationForReplay" }; }
	BitFieldValue<bool, unsigned __int32> bHidden() { return { this, "AActor.bHidden" }; }
	BitFieldValue<bool, unsigned __int32> bTearOff() { return { this, "AActor.bTearOff" }; }
	BitFieldValue<bool, unsigned __int32> bForceNetAddressable() { return { this, "AActor.bForceNetAddressable" }; }
	BitFieldValue<bool, unsigned __int32> bExchangedRoles() { return { this, "AActor.bExchangedRoles" }; }
	BitFieldValue<bool, unsigned __int32> bNetLoadOnClient() { return { this, "AActor.bNetLoadOnClient" }; }
	BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy() { return { this, "AActor.bNetUseOwnerRelevancy" }; }
	BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays() { return { this, "AActor.bRelevantForNetworkReplays" }; }
	BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds() { return { this, "AActor.bRelevantForLevelBounds" }; }
	BitFieldValue<bool, unsigned __int32> bReplayRewindable() { return { this, "AActor.bReplayRewindable" }; }
	BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay() { return { this, "AActor.bAllowTickBeforeBeginPlay" }; }
	BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication() { return { this, "AActor.bForceHighQualityViewerReplication" }; }
	BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration() { return { this, "AActor.bActorPreventPhysicsSceneRegistration" }; }
	BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished() { return { this, "AActor.bAutoDestroyWhenFinished" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeDamaged() { return { this, "AActor.bCanBeDamaged" }; }
	BitFieldValue<bool, unsigned __int32> bBlockInput() { return { this, "AActor.bBlockInput" }; }
	BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing() { return { this, "AActor.bCollideWhenPlacing" }; }
	BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget() { return { this, "AActor.bFindCameraComponentWhenViewTarget" }; }
	BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming() { return { this, "AActor.bGenerateOverlapEventsDuringLevelStreaming" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting() { return { this, "AActor.bIgnoresOriginShifting" }; }
	BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration() { return { this, "AActor.bEnableAutoLODGeneration" }; }
	BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor() { return { this, "AActor.bIsEditorOnlyActor" }; }
	BitFieldValue<bool, unsigned __int32> bActorSeamlessTraveled() { return { this, "AActor.bActorSeamlessTraveled" }; }
	BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes() { return { this, "AActor.bDisableRigidBodyAnimNodes" }; }
	BitFieldValue<bool, unsigned __int32> bReplicates() { return { this, "AActor.bReplicates" }; }
	BitFieldValue<bool, unsigned __int32> bCanBeInCluster() { return { this, "AActor.bCanBeInCluster" }; }
	BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer() { return { this, "AActor.bAllowReceiveTickEventOnDedicatedServer" }; }
	BitFieldValue<bool, unsigned __int32> bNetCheckedInitialPhysicsState() { return { this, "AActor.bNetCheckedInitialPhysicsState" }; }
	BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList() { return { this, "AActor.bReplicateUsingRegisteredSubObjectList" }; }
	BitFieldValue<bool, unsigned __int32> bHasFinishedSpawning() { return { this, "AActor.bHasFinishedSpawning" }; }
	BitFieldValue<bool, unsigned __int32> bActorInitialized() { return { this, "AActor.bActorInitialized" }; }
	BitFieldValue<bool, unsigned __int32> bActorBeginningPlayFromLevelStreaming() { return { this, "AActor.bActorBeginningPlayFromLevelStreaming" }; }
	BitFieldValue<bool, unsigned __int32> bTickFunctionsRegistered() { return { this, "AActor.bTickFunctionsRegistered" }; }
	BitFieldValue<bool, unsigned __int32> bHasDeferredComponentRegistration() { return { this, "AActor.bHasDeferredComponentRegistration" }; }
	BitFieldValue<bool, unsigned __int32> bRunningUserConstructionScript() { return { this, "AActor.bRunningUserConstructionScript" }; }
	BitFieldValue<bool, unsigned __int32> bHasRegisteredAllComponents() { return { this, "AActor.bHasRegisteredAllComponents" }; }
	BitFieldValue<bool, unsigned __int32> bDeferredBeginPlay() { return { this, "AActor.bDeferredBeginPlay" }; }
	BitFieldValue<bool, unsigned __int32> bPrimalDeferredConstruction() { return { this, "AActor.bPrimalDeferredConstruction" }; }
	BitFieldValue<bool, unsigned __int32> bActorEnableCollision() { return { this, "AActor.bActorEnableCollision" }; }
	BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed() { return { this, "AActor.bActorIsBeingDestroyed" }; }
	BitFieldValue<bool, unsigned __int32> bActorWantsDestroyDuringBeginPlay() { return { this, "AActor.bActorWantsDestroyDuringBeginPlay" }; }
	BitFieldValue<bool, unsigned __int32> ActorHasBegunPlay() { return { this, "AActor.ActorHasBegunPlay" }; }
	BitFieldValue<bool, unsigned __int32> bActorIsBeingConstructed() { return { this, "AActor.bActorIsBeingConstructed" }; }
	BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled() { return { this, "AActor.bAsyncPhysicsTickEnabled" }; }

	// Functions

//     FString* GetActorNameOrLabel(FString* result) { return NativeCall<FString*, FString*>(this, "AActor.GetActorNameOrLabel()", result); }
// FUNCTION MISSING: AActor.GetActorNameOrLabel()
	bool ServerHandleNetExecCommand(APlayerController* FromPC, FName CommandName, const FBPNetExecParams* ExecParams) { return NativeCall<bool, APlayerController*, FName, const FBPNetExecParams*>(this, "AActor.ServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)", FromPC, CommandName, ExecParams); }
	float GetRepGraphRelevantDistanceSq() { return NativeCall<float>(this, "AActor.GetRepGraphRelevantDistanceSq()"); }
	//     long double GetLastGameplayRelevantTime() { return NativeCall<long double>(this, "AActor.GetLastGameplayRelevantTime()"); }
	// FUNCTION MISSING: AActor.GetLastGameplayRelevantTime()
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool IncrementalUnregisterComponents();
	void AsyncPhysicsTickActor(float DeltaTime, float SimTime) { NativeCall<void, float, float>(this, "AActor.AsyncPhysicsTickActor(float,float)", DeltaTime, SimTime); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AActor.IsLevelBoundsRelevant()"); }
	__int64 GetDefaultAttachComponent() { return reinterpret_cast<__int64>(NativeCall<USceneComponent*>(this, "AActor.GetDefaultAttachComponent()")); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AActor"); }
	//USkeletalMeshComponent* FindComponentByClass<class USkeletalMeshComponent>() { return NativeCall<USkeletalMeshComponent*>(this, "AActor.FindComponentByClass<class USkeletalMeshComponent>()"); }
	//USplineComponent* FindComponentByClass<class USplineComponent>() { return NativeCall<USplineComponent*>(this, "AActor.FindComponentByClass<class USplineComponent>()"); }
//     bool IsHidden() { return NativeCall<bool>(this, "AActor.IsHidden()"); }
// FUNCTION MISSING: AActor.IsHidden()
	//void GetComponents<class USkeletalMeshComponent, class TSizedDefaultAllocator<32>>(TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >* OutComponents, bool bIncludeFromChildActors) { NativeCall<void, TArray<USkeletalMeshComponent*, TSizedDefaultAllocator<32> >*, bool>(this, "AActor.GetComponents<class USkeletalMeshComponent,class TSizedDefaultAllocator<32>>(TArray<USkeletalMeshComponent*,TSizedDefaultAllocator<32>>&,bool)", OutComponents, bIncludeFromChildActors); }
	//void GetComponents<class UPCGComponent, class TSizedInlineAllocator<1, 32, class TSizedDefaultAllocator<32>>>(TArray<UPCGComponent*, TSizedInlineAllocator<1, 32, TSizedDefaultAllocator<32> > >* OutComponents, bool bIncludeFromChildActors) { NativeCall<void, TArray<UPCGComponent*, TSizedInlineAllocator<1, 32, TSizedDefaultAllocator<32> > >*, bool>(this, "AActor.GetComponents<class UPCGComponent,class TSizedInlineAllocator<1,32,class TSizedDefaultAllocator<32>>>(TArray<UPCGComponent*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>>>&,bool)", OutComponents, bIncludeFromChildActors); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AActor.PostRegisterAllComponents()"); }
	void OutsideWorldBounds() { NativeCall<void>(this, "AActor.OutsideWorldBounds()"); }
	//     bool CanBeDamaged() { return NativeCall<bool>(this, "AActor.CanBeDamaged()"); }
	// FUNCTION MISSING: AActor.CanBeDamaged()
	void ForceDestroy() { NativeCall<void>(this, "AActor.ForceDestroy()"); }
	void GetUPrimitiveComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* OutComponents, bool bIncludeFromChildActors) { NativeCall<void, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, bool>(this, "AActor.GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>>(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&,bool)", OutComponents, bIncludeFromChildActors); }
	//UStaticMeshComponent* FindComponentByClass<class UStaticMeshComponent>() { return NativeCall<UStaticMeshComponent*>(this, "AActor.FindComponentByClass<class UStaticMeshComponent>()"); }
	void InitializeDefaults() { NativeCall<void>(this, "AActor.InitializeDefaults()"); }
	bool CheckDefaultSubobjectsInternal() { return NativeCall<bool>(this, "AActor.CheckDefaultSubobjectsInternal()"); }
	bool CheckActorComponents() { return NativeCall<bool>(this, "AActor.CheckActorComponents()"); }
	void ResetOwnedComponents() { NativeCall<void>(this, "AActor.ResetOwnedComponents()"); }
	void PostInitProperties() { NativeCall<void>(this, "AActor.PostInitProperties()"); }
	bool CanBeInCluster() { return NativeCall<bool>(this, "AActor.CanBeInCluster()"); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "AActor.IsEditorOnly()"); }
	bool IsAsset() { return NativeCall<bool>(this, "AActor.IsAsset()"); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "AActor.GetWorld()"); }
	FTimerManager* GetWorldTimerManager() { return NativeCall<FTimerManager*>(this, "AActor.GetWorldTimerManager()"); }
	UGameInstance* GetGameInstance() { return NativeCall<UGameInstance*>(this, "AActor.GetGameInstance()"); }
	bool IsNetStartupActor() { return NativeCall<bool>(this, "AActor.IsNetStartupActor()"); }
	void ClearCrossLevelReferences() { NativeCall<void>(this, "AActor.ClearCrossLevelReferences()"); }
	bool TeleportTo(const UE::Math::TVector<double>* DestLocation, const UE::Math::TRotator<double>* DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*, bool, bool>(this, "AActor.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", DestLocation, DestRotation, bIsATest, bNoCheck); }
	bool K2_TeleportTo(UE::Math::TVector<double>* DestLocation, UE::Math::TRotator<double>* DestRotation, bool bSimpleTeleport, float MeshInterpTimeSeconds) { if (!DestLocation) throw std::invalid_argument("Null native value parameter"); if (!DestRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, bool, float>(this, "AActor.K2_TeleportTo(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,float)", *DestLocation, *DestRotation, bSimpleTeleport, MeshInterpTimeSeconds); }
	void AddTickPrerequisiteActor(AActor* PrerequisiteActor) { NativeCall<void, AActor*>(this, "AActor.AddTickPrerequisiteActor(AActor*)", PrerequisiteActor); }
	void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) { NativeCall<void, UActorComponent*>(this, "AActor.AddTickPrerequisiteComponent(UActorComponent*)", PrerequisiteComponent); }
	void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor) { NativeCall<void, AActor*>(this, "AActor.RemoveTickPrerequisiteActor(AActor*)", PrerequisiteActor); }
	void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) { NativeCall<void, UActorComponent*>(this, "AActor.RemoveTickPrerequisiteComponent(UActorComponent*)", PrerequisiteComponent); }
	void BeginDestroy() { NativeCall<void>(this, "AActor.BeginDestroy()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "AActor.Serialize(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "AActor.PostLoad()"); }
	void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph*>(this, "AActor.PostLoadSubobjects(FObjectInstancingGraph*)", OuterInstanceGraph); }
	void ProcessEvent(UFunction* Function, void* Parameters) { NativeCall<void, UFunction*, void*>(this, "AActor.ProcessEvent(UFunction*,void*)", Function, Parameters); }
	void ApplyWorldOffset(const UE::Math::TVector<double>* InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>*, bool>(this, "AActor.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void RegisterActorTickFunctions(bool bRegister, bool bSaveAndRestoreTickState) { NativeCall<void, bool, bool>(this, "AActor.RegisterActorTickFunctions(bool,bool)", bRegister, bSaveAndRestoreTickState); }
	void RegisterAllActorTickFunctions(bool bRegister, bool bDoComponents, bool bSaveAndRestoreTickState) { NativeCall<void, bool, bool, bool>(this, "AActor.RegisterAllActorTickFunctions(bool,bool,bool)", bRegister, bDoComponents, bSaveAndRestoreTickState); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "AActor.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
	UNetConnection* GetNetConnection() { return NativeCall<UNetConnection*>(this, "AActor.GetNetConnection()"); }
	UPlayer* GetNetOwningPlayer() { return NativeCall<UPlayer*>(this, "AActor.GetNetOwningPlayer()"); }
	void TickActor(float DeltaSeconds, ELevelTick TickType, FActorTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorTickFunction*>(this, "AActor.TickActor(float,ELevelTick,FActorTickFunction&)", DeltaSeconds, TickType, ThisTickFunction); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AActor.Tick(float)", DeltaSeconds); }
	void PreReplication(IRepChangedPropertyTracker* ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker*>(this, "AActor.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void CallPreReplication(UNetDriver* NetDriver) { NativeCall<void, UNetDriver*>(this, "AActor.CallPreReplication(UNetDriver*)", NetDriver); }
	void PreReplicationForReplay(IRepChangedPropertyTracker* ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker*>(this, "AActor.PreReplicationForReplay(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void GetComponentsBoundingCylinder(float* OutCollisionRadius, float* OutCollisionHalfHeight, bool bNonColliding, bool bIncludeFromChildActors) { NativeCall<void, float*, float*, bool, bool>(this, "AActor.GetComponentsBoundingCylinder(float&,float&,bool,bool)", OutCollisionRadius, OutCollisionHalfHeight, bNonColliding, bIncludeFromChildActors); }
	void GetSimpleCollisionCylinder(float* CollisionRadius, float* CollisionHalfHeight) { NativeCall<void, float*, float*>(this, "AActor.GetSimpleCollisionCylinder(float&,float&)", CollisionRadius, CollisionHalfHeight); }
	bool IsRootComponentCollisionRegistered() { return NativeCall<bool>(this, "AActor.IsRootComponentCollisionRegistered()"); }
	bool IsAttachedTo(const AActor* Other) { return NativeCall<bool, const AActor*>(this, "AActor.IsAttachedTo(AActor*)", Other); }
	bool IsBasedOnActor(const AActor* Other) { return NativeCall<bool, const AActor*>(this, "AActor.IsBasedOnActor(AActor*)", Other); }
	bool CheckStillInWorld() { return NativeCall<bool>(this, "AActor.CheckStillInWorld()"); }
	void ClearComponentOverlaps() { NativeCall<void>(this, "AActor.ClearComponentOverlaps()"); }
	void UpdateOverlaps(bool bDoNotifies) { NativeCall<void, bool>(this, "AActor.UpdateOverlaps(bool)", bDoNotifies); }
	bool IsOverlappingActor(const AActor* Other) { return NativeCall<bool, const AActor*>(this, "AActor.IsOverlappingActor(AActor*)", Other); }
	void GetOverlappingActors(TArray<AActor*, TSizedDefaultAllocator<32> >* OutOverlappingActors, TSubclassOf<AActor> ClassFilter) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >*, TSubclassOf<AActor>>(this, "AActor.GetOverlappingActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AActor>)", OutOverlappingActors, ClassFilter); }
	void GetOverlappingActors(TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>* OutOverlappingActors, TSubclassOf<AActor> ClassFilter) { NativeCall<void, TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>*, TSubclassOf<AActor>>(this, "AActor.GetOverlappingActors(TSet<AActor*,DefaultKeyFuncs<AActor*,0>,FDefaultSetAllocator>&,TSubclassOf<AActor>)", OutOverlappingActors, ClassFilter); }
	void GetOverlappingComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* OutOverlappingComponents) { NativeCall<void, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*>(this, "AActor.GetOverlappingComponents(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", OutOverlappingComponents); }
	void GetOverlappingComponents(TSet<UPrimitiveComponent*, DefaultKeyFuncs<UPrimitiveComponent*, 0>, FDefaultSetAllocator>* OutOverlappingComponents) { NativeCall<void, TSet<UPrimitiveComponent*, DefaultKeyFuncs<UPrimitiveComponent*, 0>, FDefaultSetAllocator>*>(this, "AActor.GetOverlappingComponents(TSet<UPrimitiveComponent*,DefaultKeyFuncs<UPrimitiveComponent*,0>,FDefaultSetAllocator>&)", OutOverlappingComponents); }
	void NotifyActorBeginOverlap(AActor* OtherActor) { NativeCall<void, AActor*>(this, "AActor.NotifyActorBeginOverlap(AActor*)", OtherActor); }
	void NotifyActorEndOverlap(AActor* OtherActor) { NativeCall<void, AActor*>(this, "AActor.NotifyActorEndOverlap(AActor*)", OtherActor); }
	void NotifyActorBeginCursorOver() { NativeCall<void>(this, "AActor.NotifyActorBeginCursorOver()"); }
	void NotifyActorEndCursorOver() { NativeCall<void>(this, "AActor.NotifyActorEndCursorOver()"); }
	void NotifyActorOnClicked(FKey* ButtonPressed) { NativeCall<void, FKey*>(this, "AActor.NotifyActorOnClicked(FKey)", ButtonPressed); }
	void NotifyActorOnReleased(FKey* ButtonReleased) { NativeCall<void, FKey*>(this, "AActor.NotifyActorOnReleased(FKey)", ButtonReleased); }
	void NotifyActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "AActor.NotifyActorOnInputTouchBegin(ETouchIndex::Type)", FingerIndex); }
	void NotifyActorOnInputTouchEnd(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "AActor.NotifyActorOnInputTouchEnd(ETouchIndex::Type)", FingerIndex); }
	void NotifyActorOnInputTouchEnter(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "AActor.NotifyActorOnInputTouchEnter(ETouchIndex::Type)", FingerIndex); }
	void NotifyActorOnInputTouchLeave(const ETouchIndex::Type FingerIndex) { NativeCall<void, const ETouchIndex::Type>(this, "AActor.NotifyActorOnInputTouchLeave(ETouchIndex::Type)", FingerIndex); }
	void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, UE::Math::TVector<double>* HitLocation, UE::Math::TVector<double>* HitNormal, UE::Math::TVector<double>* NormalImpulse, const FHitResult* Hit) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FHitResult*>(this, "AActor.NotifyHit(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,FHitResult&)", MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit); }
	bool WasRecentlyRendered(float Tolerance) { return NativeCall<bool, float>(this, "AActor.WasRecentlyRendered(float)", Tolerance); }
	long double GetLastRenderTime(bool IgnoreShadow) { return NativeCall<long double, bool>(this, "AActor.GetLastRenderTime(bool)", IgnoreShadow); }
	void SetOwner(AActor* NewOwner) { NativeCall<void, AActor*>(this, "AActor.SetOwner(AActor*)", NewOwner); }
	bool HasLocalNetOwner() { return NativeCall<bool>(this, "AActor.HasLocalNetOwner()"); }
	bool HasNetOwner() { return NativeCall<bool>(this, "AActor.HasNetOwner()"); }
	void SetAutoDestroyWhenFinished(bool bVal) { NativeCall<void, bool>(this, "AActor.SetAutoDestroyWhenFinished(bool)", bVal); }
	bool AttachToComponent(USceneComponent* Parent, const FAttachmentTransformRules* AttachmentRules, FName SocketName) { return NativeCall<bool, USceneComponent*, const FAttachmentTransformRules*, FName>(this, "AActor.AttachToComponent(USceneComponent*,FAttachmentTransformRules&,FName)", Parent, AttachmentRules, SocketName); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "AActor.OnRep_AttachmentReplication()"); }
	bool AttachToActor(AActor* ParentActor, const FAttachmentTransformRules* AttachmentRules, FName SocketName) { return NativeCall<bool, AActor*, const FAttachmentTransformRules*, FName>(this, "AActor.AttachToActor(AActor*,FAttachmentTransformRules&,FName)", ParentActor, AttachmentRules, SocketName); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	AActor* GetAttachParentActor() { return NativeCall<AActor*>(this, "AActor.GetAttachParentActor()"); }
	void ForEachAttachedActors(TFunctionRef<bool __cdecl(AActor*)>* Functor) { NativeCall<void, TFunctionRef<bool __cdecl(AActor*)>*>(this, "AActor.ForEachAttachedActors(TFunctionRef<bool__cdecl(AActor*))", Functor); }
	void GetAttachedActors(TArray<AActor*, TSizedDefaultAllocator<32> >* OutActors, bool bResetArray, bool bRecursivelyIncludeAttachedActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >*, bool, bool>(this, "AActor.GetAttachedActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,bool)", OutActors, bResetArray, bRecursivelyIncludeAttachedActors); }
	bool ActorHasTag(FName Tag) { return NativeCall<bool, FName>(this, "AActor.ActorHasTag(FName)", Tag); }
	APhysicsVolume* GetPhysicsVolume() { return NativeCall<APhysicsVolume*>(this, "AActor.GetPhysicsVolume()"); }
	bool IsRelevancyOwnerFor(const AActor* ReplicatedActor, const AActor* ActorOwner, const AActor* ConnectionActor) { return NativeCall<bool, const AActor*, const AActor*, const AActor*>(this, "AActor.IsRelevancyOwnerFor(AActor*,AActor*,AActor*)", ReplicatedActor, ActorOwner, ConnectionActor); }
	void ForceNetUpdate(bool bDormantDontReplicateProperties, bool bAbsoluteForceNetUpdate, bool bDontUpdateChannel) { NativeCall<void, bool, bool, bool>(this, "AActor.ForceNetUpdate(bool,bool,bool)", bDormantDontReplicateProperties, bAbsoluteForceNetUpdate, bDontUpdateChannel); }
	void SetNetDormancy(ENetDormancy NewDormancy) { NativeCall<void, ENetDormancy>(this, "AActor.SetNetDormancy(ENetDormancy)", NewDormancy); }
	void FlushNetDormancy() { NativeCall<void>(this, "AActor.FlushNetDormancy()"); }
	void ForcePropertyCompare() { NativeCall<void>(this, "AActor.ForcePropertyCompare()"); }
	void PrestreamTextures(float Seconds, bool bEnableStreaming, int CinematicTextureGroups) { NativeCall<void, float, bool, int>(this, "AActor.PrestreamTextures(float,bool,int)", Seconds, bEnableStreaming, CinematicTextureGroups); }
	void RouteEndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AActor.RouteEndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Destroyed() { NativeCall<void>(this, "AActor.Destroyed()"); }
	void TearOff() { NativeCall<void>(this, "AActor.TearOff()"); }
	void Reset() { NativeCall<void>(this, "AActor.Reset()"); }
	void FellOutOfWorld(const UDamageType* dmgType) { NativeCall<void, const UDamageType*>(this, "AActor.FellOutOfWorld(UDamageType&)", dmgType); }
	void MakeNoise(float Loudness, APawn* NoiseInstigator, UE::Math::TVector<double>* NoiseLocation, float MaxRange, FName Tag) { NativeCall<void, float, APawn*, UE::Math::TVector<double>*, float, FName>(this, "AActor.MakeNoise(float,APawn*,UE::Math::TVector<double>,float,FName)", Loudness, NoiseInstigator, NoiseLocation, MaxRange, Tag); }
	static void MakeNoiseImpl(AActor* NoiseMaker, float Loudness, APawn* NoiseInstigator, const UE::Math::TVector<double>* NoiseLocation, float MaxRange, FName Tag) { NativeCall<void, AActor*, float, APawn*, const UE::Math::TVector<double>*, float, FName>(nullptr, "AActor.MakeNoiseImpl(AActor*,float,APawn*,UE::Math::TVector<double>&,float,FName)", NoiseMaker, Loudness, NoiseInstigator, NoiseLocation, MaxRange, Tag); }
	float TakeDamage(float DamageAmount, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "AActor.TakeDamage(float,FDamageEvent&,AController*,AActor*)", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	float InternalTakeRadialDamage(float Damage, const FRadialDamageEvent* RadialDamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FRadialDamageEvent*, AController*, AActor*>(this, "AActor.InternalTakeRadialDamage(float,FRadialDamageEvent&,AController*,AActor*)", Damage, RadialDamageEvent, EventInstigator, DamageCauser); }
	void DispatchBlockingHit(UPrimitiveComponent* MyComp, UPrimitiveComponent* OtherComp, bool bSelfMoved, const FHitResult* Hit) { NativeCall<void, UPrimitiveComponent*, UPrimitiveComponent*, bool, const FHitResult*>(this, "AActor.DispatchBlockingHit(UPrimitiveComponent*,UPrimitiveComponent*,bool,FHitResult&)", MyComp, OtherComp, bSelfMoved, Hit); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo* DebugDisplay, float* YL, float* YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo*, float*, float*>(this, "AActor.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void BecomeViewTarget(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AActor.BecomeViewTarget(APlayerController*)", PC); }
	void EndViewTarget(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "AActor.EndViewTarget(APlayerController*)", PC); }
	void CalcCamera(float DeltaTime, FMinimalViewInfo* OutResult) { NativeCall<void, float, FMinimalViewInfo*>(this, "AActor.CalcCamera(float,FMinimalViewInfo&)", DeltaTime, OutResult); }
	bool HasActiveCameraComponent() { return NativeCall<bool, bool>(this, "AActor.HasActiveCameraComponent(bool)", false); }
	bool HasActivePawnControlCameraComponent() { return NativeCall<bool>(this, "AActor.HasActivePawnControlCameraComponent()"); }
	void ForceNetRelevant() { NativeCall<void>(this, "AActor.ForceNetRelevant()"); }
	ECollisionResponse GetComponentsCollisionResponseToChannel(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "AActor.GetComponentsCollisionResponseToChannel(ECollisionChannel)", Channel); }
	void AddOwnedComponent(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "AActor.AddOwnedComponent(UActorComponent*)", Component); }
	void RemoveOwnedComponent(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "AActor.RemoveOwnedComponent(UActorComponent*)", Component); }
	void UpdateReplicatedComponent(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "AActor.UpdateReplicatedComponent(UActorComponent*)", Component); }
	void UpdateAllReplicatedComponents() { NativeCall<void>(this, "AActor.UpdateAllReplicatedComponents()"); }
	void AddInstanceComponent(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "AActor.AddInstanceComponent(UActorComponent*)", Component); }
	UActorComponent* FindComponentByClass(const TSubclassOf<UActorComponent> ComponentClass) { return NativeCall<UActorComponent*, const TSubclassOf<UActorComponent>>(this, "AActor.FindComponentByClass(TSubclassOf<UActorComponent>)", ComponentClass); }
	UActorComponent* GetComponentByClass(TSubclassOf<UActorComponent> ComponentClass) { return NativeCall<UActorComponent*, TSubclassOf<UActorComponent>>(this, "AActor.GetComponentByClass(TSubclassOf<UActorComponent>)", ComponentClass); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >* K2_GetComponentsByClass(TArray<UActorComponent*, TSizedDefaultAllocator<32> >* result, TSubclassOf<UActorComponent> ComponentClass) { return NativeCall<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TSubclassOf<UActorComponent>>(this, "AActor.K2_GetComponentsByClass(TSubclassOf<UActorComponent>)", result, ComponentClass); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >* GetComponentsByTag(TArray<UActorComponent*, TSizedDefaultAllocator<32> >* result, TSubclassOf<UActorComponent> ComponentClass, FName Tag) { return NativeCall<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TSubclassOf<UActorComponent>, FName>(this, "AActor.GetComponentsByTag(TSubclassOf<UActorComponent>,FName)", result, ComponentClass, Tag); }
	UActorComponent* FindComponentByInterface(const TSubclassOf<UInterface> Interface) { return NativeCall<UActorComponent*, const TSubclassOf<UInterface>>(this, "AActor.FindComponentByInterface(TSubclassOf<UInterface>)", Interface); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >* GetComponentsByInterface(TArray<UActorComponent*, TSizedDefaultAllocator<32> >* result, TSubclassOf<UInterface> Interface) { return NativeCall<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TSubclassOf<UInterface>>(this, "AActor.GetComponentsByInterface(TSubclassOf<UInterface>)", result, Interface); }
	void DisableComponentsSimulatePhysics() { NativeCall<void>(this, "AActor.DisableComponentsSimulatePhysics()"); }
	void PostSpawnInitialize(const UE::Math::TTransform<double>* UserSpawnTransform, AActor* InOwner, APawn* InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay, bool bPrimalDeferConstruction, ESpawnActorScaleMethod TransformScaleMethod) { NativeCall<void, const UE::Math::TTransform<double>*, AActor*, APawn*, bool, bool, bool, bool, bool, ESpawnActorScaleMethod>(this, "AActor.PostSpawnInitialize(UE::Math::TTransform<double>&,AActor*,APawn*,bool,bool,bool,bool,bool,ESpawnActorScaleMethod)", UserSpawnTransform, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay, bPrimalDeferConstruction, TransformScaleMethod); }
	bool BPClientHandleNetExecCommand(FName CommandName, const FBPNetExecParams* ExecParams, APlayerController* ForPC) { return NativeCall<bool, FName, const FBPNetExecParams*, APlayerController*>(this, "AActor.BPClientHandleNetExecCommand(FName,FBPNetExecParams&,APlayerController*)", CommandName, ExecParams, ForPC); }
	void MulticastDrawDebugLine(const UE::Math::TVector<double>* LineStart, const UE::Math::TVector<double>* LineEnd, FLinearColor* LineColor, float Duration, float Thickness, bool enableInShipping) { NativeCall<void, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, FLinearColor*, float, float, bool>(this, "AActor.MulticastDrawDebugLine(UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,float,float,bool)", LineStart, LineEnd, LineColor, Duration, Thickness, enableInShipping); }
	void MulticastDrawDebugPoint(const UE::Math::TVector<double>* Position, float Size, FLinearColor* PointColor, float Duration, bool enableInShipping) { NativeCall<void, const UE::Math::TVector<double>*, float, FLinearColor*, float, bool>(this, "AActor.MulticastDrawDebugPoint(UE::Math::TVector<double>,float,FLinearColor,float,bool)", Position, Size, PointColor, Duration, enableInShipping); }
	void MulticastDrawDebugSphere(const UE::Math::TVector<double>* Center, float Radius, int Segments, FLinearColor* LineColor, float Duration, bool enableInShipping) { NativeCall<void, const UE::Math::TVector<double>*, float, int, FLinearColor*, float, bool>(this, "AActor.MulticastDrawDebugSphere(UE::Math::TVector<double>,float,int,FLinearColor,float,bool)", Center, Radius, Segments, LineColor, Duration, enableInShipping); }
	void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, UE::Math::TVector<double>* HitLocation, UE::Math::TVector<double>* HitNormal, UE::Math::TVector<double>* NormalImpulse, const FHitResult* Hit) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FHitResult*>(this, "AActor.ReceiveHit(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,FHitResult&)", MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAActor();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void FinishSpawning(const UE::Math::TTransform<double>* UserTransform, bool bIsDefaultTransform, const FComponentInstanceDataCache* InstanceDataCache, ESpawnActorScaleMethod TransformScaleMethod) { NativeCall<void, const UE::Math::TTransform<double>*, bool, const FComponentInstanceDataCache*, ESpawnActorScaleMethod>(this, "AActor.FinishSpawning(UE::Math::TTransform<double>&,bool,FComponentInstanceDataCache*,ESpawnActorScaleMethod)", UserTransform, bIsDefaultTransform, InstanceDataCache, TransformScaleMethod); }
	void PostActorConstruction() { NativeCall<void>(this, "AActor.PostActorConstruction()"); }
	void SetReplicates(bool bInReplicates) { NativeCall<void, bool>(this, "AActor.SetReplicates(bool)", bInReplicates); }
	void SetReplicateMovement(bool bInReplicateMovement) { NativeCall<void, bool>(this, "AActor.SetReplicateMovement(bool)", bInReplicateMovement); }
	void CopyRemoteRoleFrom(const AActor* CopyFromActor) { NativeCall<void, const AActor*>(this, "AActor.CopyRemoteRoleFrom(AActor*)", CopyFromActor); }
	void PostNetInit() { NativeCall<void>(this, "AActor.PostNetInit()"); }
	void SwapRoles() { NativeCall<void>(this, "AActor.SwapRoles()"); }
	void DispatchBeginPlay(bool bFromLevelStreaming) { NativeCall<void, bool>(this, "AActor.DispatchBeginPlay(bool)", bFromLevelStreaming); }
	void BeginPlay() { NativeCall<void>(this, "AActor.BeginPlay()"); }
	void EnableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "AActor.EnableInput(APlayerController*)", PlayerController); }
	void CreateInputComponent(TSubclassOf<UInputComponent> InputComponentToCreate) { NativeCall<void, TSubclassOf<UInputComponent>>(this, "AActor.CreateInputComponent(TSubclassOf<UInputComponent>)", InputComponentToCreate); }
	void DisableInput(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "AActor.DisableInput(APlayerController*)", PlayerController); }
	float GetInputAxisValue(const FName InputAxisName) { return NativeCall<float, const FName>(this, "AActor.GetInputAxisValue(FName)", InputAxisName); }
	bool SetActorLocation(const UE::Math::TVector<double>* NewLocation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { return NativeCall<bool, const UE::Math::TVector<double>*, bool, FHitResult*, ETeleportType>(this, "AActor.SetActorLocation(UE::Math::TVector<double>&,bool,FHitResult*,ETeleportType)", NewLocation, bSweep, OutSweepHitResult, Teleport); }
	bool SetActorRotation(UE::Math::TRotator<double>* NewRotation, ETeleportType Teleport) { return NativeCall<bool, UE::Math::TRotator<double>*, ETeleportType>(this, "AActor.SetActorRotation(UE::Math::TRotator<double>,ETeleportType)", NewRotation, Teleport); }
	bool SetActorLocationAndRotation(UE::Math::TVector<double>* NewLocation, UE::Math::TRotator<double>* NewRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { return NativeCall<bool, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool, FHitResult*, ETeleportType>(this, "AActor.SetActorLocationAndRotation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", NewLocation, NewRotation, bSweep, OutSweepHitResult, Teleport); }
	// TODO: Might need manual analysis
	bool SetActorLocationAndRotation(UE::Math::TVector<double>* NewLocation, const UE::Math::TQuat<double>* NewRotation, __int64 bSweep) { return NativeCall<bool, UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, __int64>(this, "AActor.SetActorLocationAndRotation(UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", NewLocation, NewRotation, bSweep); }
	bool SetActorTransform(const UE::Math::TTransform<double>* NewTransform, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { return NativeCall<bool, const UE::Math::TTransform<double>*, bool, FHitResult*, ETeleportType>(this, "AActor.SetActorTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", NewTransform, bSweep, OutSweepHitResult, Teleport); }
	void SetActorRelativeLocation(UE::Math::TVector<double>* NewRelativeLocation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TVector<double>*, bool, FHitResult*, ETeleportType>(this, "AActor.SetActorRelativeLocation(UE::Math::TVector<double>,bool,FHitResult*,ETeleportType)", NewRelativeLocation, bSweep, OutSweepHitResult, Teleport); }
	void SetActorRelativeRotation(UE::Math::TRotator<double>* NewRelativeRotation, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, UE::Math::TRotator<double>*, bool, FHitResult*, ETeleportType>(this, "AActor.SetActorRelativeRotation(UE::Math::TRotator<double>,bool,FHitResult*,ETeleportType)", NewRelativeRotation, bSweep, OutSweepHitResult, Teleport); }
	void SetActorRelativeTransform(const UE::Math::TTransform<double>* NewRelativeTransform, bool bSweep, FHitResult* OutSweepHitResult, ETeleportType Teleport) { NativeCall<void, const UE::Math::TTransform<double>*, bool, FHitResult*, ETeleportType>(this, "AActor.SetActorRelativeTransform(UE::Math::TTransform<double>&,bool,FHitResult*,ETeleportType)", NewRelativeTransform, bSweep, OutSweepHitResult, Teleport); }
	void SetActorRelativeScale3D(UE::Math::TVector<double>* NewRelativeScale) { NativeCall<void, UE::Math::TVector<double>*>(this, "AActor.SetActorRelativeScale3D(UE::Math::TVector<double>)", NewRelativeScale); }
	void SetActorHiddenInGame(bool bNewHidden) { NativeCall<void, bool>(this, "AActor.SetActorHiddenInGame(bool)", bNewHidden); }
	void SetActorEnableCollision(bool bNewActorEnableCollision) { NativeCall<void, bool>(this, "AActor.SetActorEnableCollision(bool)", bNewActorEnableCollision); }
	bool Destroy(bool bNetForce, bool bShouldModifyLevel) { return NativeCall<bool, bool, bool>(this, "AActor.Destroy(bool,bool)", bNetForce, bShouldModifyLevel); }
	bool SetRootComponent(USceneComponent* NewRootComponent) { return NativeCall<bool, USceneComponent*>(this, "AActor.SetRootComponent(USceneComponent*)", NewRootComponent); }
	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>* Origin, UE::Math::TVector<double>* BoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AActor.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors); }
	AWorldSettings* GetWorldSettings() { return NativeCall<AWorldSettings*>(this, "AActor.GetWorldSettings()"); }
	ENetMode InternalGetNetMode() { return NativeCall<ENetMode>(this, "AActor.InternalGetNetMode()"); }
	UNetDriver* GetNetDriver() { return NativeCall<UNetDriver*>(this, "AActor.GetNetDriver()"); }
	void SetNetDriverName(FName NewNetDriverName) { NativeCall<void, FName>(this, "AActor.SetNetDriverName(FName)", NewNetDriverName); }
	int GetFunctionCallspace(UFunction* Function, FFrame* Stack) { return NativeCall<int, UFunction*, FFrame*>(this, "AActor.GetFunctionCallspace(UFunction*,FFrame*)", Function, Stack); }
	bool CallRemoteFunction(UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack) { return NativeCall<bool, UFunction*, void*, FOutParmRec*, FFrame*>(this, "AActor.CallRemoteFunction(UFunction*,void*,FOutParmRec*,FFrame*)", Function, Parameters, OutParms, Stack); }
	void DispatchPhysicsCollisionHit(const FRigidBodyCollisionInfo* MyInfo, const FRigidBodyCollisionInfo* OtherInfo, const FCollisionImpactData* RigidCollisionData) { NativeCall<void, const FRigidBodyCollisionInfo*, const FRigidBodyCollisionInfo*, const FCollisionImpactData*>(this, "AActor.DispatchPhysicsCollisionHit(FRigidBodyCollisionInfo&,FRigidBodyCollisionInfo&,FCollisionImpactData&)", MyInfo, OtherInfo, RigidCollisionData); }
	bool IsSelectionChild() { return NativeCall<bool>(this, "AActor.IsSelectionChild()"); }
	AActor* GetSelectionParent() { return NativeCall<AActor*>(this, "AActor.GetSelectionParent()"); }
	AActor* GetRootSelectionParent() { return NativeCall<AActor*>(this, "AActor.GetRootSelectionParent()"); }
	bool IsActorOrSelectionParentSelected() { return NativeCall<bool>(this, "AActor.IsActorOrSelectionParentSelected()"); }
	void PushSelectionToProxies() { NativeCall<void>(this, "AActor.PushSelectionToProxies()"); }
	bool IsChildActor() { return NativeCall<bool>(this, "AActor.IsChildActor()"); }
	UChildActorComponent* GetParentComponent() { return NativeCall<UChildActorComponent*>(this, "AActor.GetParentComponent()"); }
	void GetAllChildActors(TArray<AActor*, TSizedDefaultAllocator<32> >* ChildActors, bool bIncludeDescendants) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >*, bool>(this, "AActor.GetAllChildActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,bool)", ChildActors, bIncludeDescendants); }
	void UnregisterAllComponents(bool bForReregister) { NativeCall<void, bool>(this, "AActor.UnregisterAllComponents(bool)", bForReregister); }
	void RegisterAllComponents() { NativeCall<void>(this, "AActor.RegisterAllComponents()"); }
	bool IncrementalRegisterComponents(int NumComponentsToRegister, FRegisterComponentContext* Context) { return NativeCall<bool, int, FRegisterComponentContext*>(this, "AActor.IncrementalRegisterComponents(int,FRegisterComponentContext*)", NumComponentsToRegister, Context); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void MarkComponentsAsPendingKill(__int64 a2);
	void ReregisterAllComponents(bool a2) { NativeCall<void, bool>(this, "AActor.ReregisterAllComponents()", a2); }
	void UpdateComponentTransforms() { NativeCall<void>(this, "AActor.UpdateComponentTransforms()"); }
	void MarkComponentsRenderStateDirty() { NativeCall<void>(this, "AActor.MarkComponentsRenderStateDirty()"); }
	void InitializeComponents() { NativeCall<void>(this, "AActor.InitializeComponents()"); }
	void UninitializeComponents(const EEndPlayReason::Type* EndPlayReason) { NativeCall<void, const EEndPlayReason::Type*>(this, "AActor.UninitializeComponents(EEndPlayReason::Type&)", EndPlayReason); }
	bool ActorLineTraceSingle(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, ECollisionChannel TraceChannel, const FCollisionQueryParams* Params) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, ECollisionChannel, const FCollisionQueryParams*>(this, "AActor.ActorLineTraceSingle(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionQueryParams&)", OutHit, Start, End, TraceChannel, Params); }
	void SetLifeSpan(float InLifespan) { NativeCall<void, float>(this, "AActor.SetLifeSpan(float)", InLifespan); }
	float GetLifeSpan() { return NativeCall<float>(this, "AActor.GetLifeSpan()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AActor.PreInitializeComponents()"); }
	float GetActorTimeDilation() { return NativeCall<float>(this, "AActor.GetActorTimeDilation()"); }
	float GetDistanceTo(const AActor* OtherActor) { return NativeCall<float, const AActor*>(this, "AActor.GetDistanceTo(AActor*)", OtherActor); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "AActor.IsHLODRelevant()"); }
	void SetLODParent(UPrimitiveComponent* InLODParent, float InParentDrawDistance) { NativeCall<void, UPrimitiveComponent*, float>(this, "AActor.SetLODParent(UPrimitiveComponent*,float)", InLODParent, InParentDrawDistance); }
	int GetRayTracingGroupId() { return NativeCall<int>(this, "AActor.GetRayTracingGroupId()"); }
	void SetCanBeDamaged(bool bInCanBeDamaged) { NativeCall<void, bool>(this, "AActor.SetCanBeDamaged(bool)", bInCanBeDamaged); }
	void RealtimeThrottledTick_Implementation(long double DeltaTime) { NativeCall<void, long double>(this, "AActor.RealtimeThrottledTick_Implementation(double)", DeltaTime); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void DestroyConstructedComponents();
	bool ExecuteConstruction(const UE::Math::TTransform<double>* Transform, const FRotationConversionCache* TransformRotationCache, const FComponentInstanceDataCache* InstanceDataCache, bool bIsDefaultTransform, ESpawnActorScaleMethod TransformScaleMethod) { return NativeCall<bool, const UE::Math::TTransform<double>*, const FRotationConversionCache*, const FComponentInstanceDataCache*, bool, ESpawnActorScaleMethod>(this, "AActor.ExecuteConstruction(UE::Math::TTransform<double>&,FRotationConversionCache*,FComponentInstanceDataCache*,bool,ESpawnActorScaleMethod)", Transform, TransformRotationCache, InstanceDataCache, bIsDefaultTransform, TransformScaleMethod); }
	void ProcessUserConstructionScript() { NativeCall<void>(this, "AActor.ProcessUserConstructionScript()"); }
	UActorComponent* CreateComponentFromTemplate(UActorComponent* Template, const FName InName) { return NativeCall<UActorComponent*, UActorComponent*, const FName>(this, "AActor.CreateComponentFromTemplate(UActorComponent*,FName)", Template, InName); }
	UActorComponent* CreateComponentFromTemplateData(const FBlueprintCookedComponentInstancingData* TemplateData, const FName InName) { return NativeCall<UActorComponent*, const FBlueprintCookedComponentInstancingData*, const FName>(this, "AActor.CreateComponentFromTemplateData(FBlueprintCookedComponentInstancingData*,FName)", TemplateData, InName); }
	UActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const UE::Math::TTransform<double>* RelativeTransform, const UObject* ComponentTemplateContext, bool bDeferredFinish) { return NativeCall<UActorComponent*, FName, bool, const UE::Math::TTransform<double>*, const UObject*, bool>(this, "AActor.AddComponent(FName,bool,UE::Math::TTransform<double>&,UObject*,bool)", TemplateName, bManualAttachment, RelativeTransform, ComponentTemplateContext, bDeferredFinish); }
	void FinishAddComponent(UActorComponent* NewActorComp, bool bManualAttachment, const UE::Math::TTransform<double>* RelativeTransform) { NativeCall<void, UActorComponent*, bool, const UE::Math::TTransform<double>*>(this, "AActor.FinishAddComponent(UActorComponent*,bool,UE::Math::TTransform<double>&)", NewActorComp, bManualAttachment, RelativeTransform); }
	void CheckComponentInstanceName(const FName InName) { NativeCall<void, const FName>(this, "AActor.CheckComponentInstanceName(FName)", InName); }
	void PostCreateBlueprintComponent(UActorComponent* NewActorComp) { NativeCall<void, UActorComponent*>(this, "AActor.PostCreateBlueprintComponent(UActorComponent*)", NewActorComp); }
	float GetNetPriority(const UE::Math::TVector<double>* ViewPos, const UE::Math::TVector<double>* ViewDir, AActor* Viewer, AActor* ViewTarget, UActorChannel* InChannel, float Time, bool bLowBandwidth) { return NativeCall<float, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, AActor*, AActor*, UActorChannel*, float, bool>(this, "AActor.GetNetPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UActorChannel*,float,bool)", ViewPos, ViewDir, Viewer, ViewTarget, InChannel, Time, bLowBandwidth); }
	float GetReplayPriority(const UE::Math::TVector<double>* ViewPos, const UE::Math::TVector<double>* ViewDir, AActor* Viewer, AActor* ViewTarget, UActorChannel* const InChannel, float Time) { return NativeCall<float, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, AActor*, AActor*, UActorChannel* const, float>(this, "AActor.GetReplayPriority(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UActorChannel*const,float)", ViewPos, ViewDir, Viewer, ViewTarget, InChannel, Time); }
	void PreNetReceive() { NativeCall<void>(this, "AActor.PreNetReceive()"); }
	void PostNetReceive() { NativeCall<void>(this, "AActor.PostNetReceive()"); }
	void OnRep_ReplicatedMovement() { NativeCall<void>(this, "AActor.OnRep_ReplicatedMovement()"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "AActor.PostNetReceiveLocationAndRotation()"); }
	void PostNetReceivePhysicState() { NativeCall<void>(this, "AActor.PostNetReceivePhysicState()"); }
	void SyncReplicatedPhysicsSimulation() { NativeCall<void>(this, "AActor.SyncReplicatedPhysicsSimulation()"); }
	bool IsWithinNetRelevancyDistance(const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const UE::Math::TVector<double>*>(this, "AActor.IsWithinNetRelevancyDistance(UE::Math::TVector<double>&)", SrcLocation); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>* SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*>(this, "AActor.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
	bool IsReplayRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>* SrcLocation, const float CullDistanceOverrideSq) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>*, const float>(this, "AActor.IsReplayRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&,float)", RealViewer, ViewTarget, SrcLocation, CullDistanceOverrideSq); }
	void GatherCurrentMovement() { NativeCall<void>(this, "AActor.GatherCurrentMovement()"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AActor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void GetReplicatedCustomConditionState(FCustomPropertyConditionState* OutActiveState) { NativeCall<void, FCustomPropertyConditionState*>(this, "AActor.GetReplicatedCustomConditionState(FCustomPropertyConditionState&)", OutActiveState); }
	bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) { return NativeCall<bool, UActorChannel*, FOutBunch*, FReplicationFlags*>(this, "AActor.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)", Channel, Bunch, RepFlags); }
	ELifetimeCondition AllowActorComponentToReplicate(const UActorComponent* ComponentToReplicate) { return NativeCall<ELifetimeCondition, const UActorComponent*>(this, "AActor.AllowActorComponentToReplicate(UActorComponent*)", ComponentToReplicate); }
	void AddComponentForReplication(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "AActor.AddComponentForReplication(UActorComponent*)", Component); }
	void BuildReplicatedComponentsInfo() { NativeCall<void>(this, "AActor.BuildReplicatedComponentsInfo()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void GetSubobjectsWithStableNamesForNetworking(TArray<UObject*, TSizedDefaultAllocator<32> >* ObjList);
	void OnSubobjectCreatedFromReplication(UObject* NewSubobject) { NativeCall<void, UObject*>(this, "AActor.OnSubobjectCreatedFromReplication(UObject*)", NewSubobject); }
	void OnSubobjectDestroyFromReplication(UObject* Subobject) { NativeCall<void, UObject*>(this, "AActor.OnSubobjectDestroyFromReplication(UObject*)", Subobject); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "AActor.IsNameStableForNetworking()"); }
	void Stasis() { NativeCall<void>(this, "AActor.Stasis()"); }
	void ResetSpatialComponent() { NativeCall<void>(this, "AActor.ResetSpatialComponent()"); }
	void Unstasis() { NativeCall<void>(this, "AActor.Unstasis()"); }
	void ClearNetworkSpatializationParent() { NativeCall<void>(this, "AActor.ClearNetworkSpatializationParent()"); }
	void SetNetworkSpatializationParent(AActor* NewParent) { NativeCall<void, AActor*>(this, "AActor.SetNetworkSpatializationParent(AActor*)", NewParent); }
	void PostInitializeComponents() { NativeCall<void>(this, "AActor.PostInitializeComponents()"); }
	//UMovementComponent* FindComponentByClass<class UMovementComponent>() { return NativeCall<UMovementComponent*>(this, "AActor.FindComponentByClass<class UMovementComponent>()"); }
	bool IsInOrOwnedBy(const UObject* SomeOuter) { return NativeCall<bool, const UObject*>(this, "AActor.IsInOrOwnedBy(UObject*)", SomeOuter); }
	UActorComponent* GetComponentByCustomTag(FName TheTag) { return NativeCall<UActorComponent*, FName>(this, "AActor.GetComponentByCustomTag(FName)", TheTag); }
	UPrimitiveComponent* GetVisibleComponentByClass(TSubclassOf<UPrimitiveComponent> ComponentClass) { return NativeCall<UPrimitiveComponent*, TSubclassOf<UPrimitiveComponent>>(this, "AActor.GetVisibleComponentByClass(TSubclassOf<UPrimitiveComponent>)", ComponentClass); }
	UPrimitiveComponent* GetVisibleUnhiddenComponentByClass(TSubclassOf<UPrimitiveComponent> ComponentClass) { return NativeCall<UPrimitiveComponent*, TSubclassOf<UPrimitiveComponent>>(this, "AActor.GetVisibleUnhiddenComponentByClass(TSubclassOf<UPrimitiveComponent>)", ComponentClass); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >* GetComponentsByCustomTag(TArray<UActorComponent*, TSizedDefaultAllocator<32> >* result, FName TheTag) { return NativeCall<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, FName>(this, "AActor.GetComponentsByCustomTag(FName)", result, TheTag); }
	void SendExecCommand(FName CommandName, const FNetExecParams* ExecParams, bool bIsReliable, bool bAllowAsPlayerServer) { NativeCall<void, FName, const FNetExecParams*, bool, bool>(this, "AActor.SendExecCommand(FName,FNetExecParams&,bool,bool)", CommandName, ExecParams, bIsReliable, bAllowAsPlayerServer); }
	void ServerSendExecCommandToEveryone(FName CommandName, const FBPNetExecParams* ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy, bool bAllowAsPlayerServer) { NativeCall<void, FName, const FBPNetExecParams*, bool, bool, bool, bool>(this, "AActor.ServerSendExecCommandToEveryone(FName,FBPNetExecParams&,bool,bool,bool,bool)", CommandName, ExecParams, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy, bAllowAsPlayerServer); }
	void ServerSendSimpleExecCommandToEveryone(FName CommandName, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy, bool bAllowAsPlayerServer) { NativeCall<void, FName, bool, bool, bool, bool>(this, "AActor.ServerSendSimpleExecCommandToEveryone(FName,bool,bool,bool,bool)", CommandName, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy, bAllowAsPlayerServer); }
	void ServerSendExecCommandToPlayer(APrimalPlayerController* aPC, FName CommandName, const FBPNetExecParams* ExecParams, bool bIsReliable, bool bForceSendToLocalPlayer, bool bIgnoreRelevancy, bool bAllowAsPlayerServer) { NativeCall<void, APrimalPlayerController*, FName, const FBPNetExecParams*, bool, bool, bool, bool>(this, "AActor.ServerSendExecCommandToPlayer(APrimalPlayerController*,FName,FBPNetExecParams&,bool,bool,bool,bool)", aPC, CommandName, ExecParams, bIsReliable, bForceSendToLocalPlayer, bIgnoreRelevancy, bAllowAsPlayerServer); }
	void NetActorSpawnActor_Implementation(TSubclassOf<AActor> ActorClass, UE::Math::TVector<double>* AtLoc, UE::Math::TRotator<double>* AtRot, bool bIgnoreOnDedicatedServer, USceneComponent* AttachToComponent, FName BoneName, AActor* SpawnOwner) { NativeCall<void, TSubclassOf<AActor>, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool, USceneComponent*, FName, AActor*>(this, "AActor.NetActorSpawnActor_Implementation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,USceneComponent*,FName,AActor*)", ActorClass, AtLoc, AtRot, bIgnoreOnDedicatedServer, AttachToComponent, BoneName, SpawnOwner); }
	void NetActorSpawnActorUnreliable_Implementation(TSubclassOf<AActor> ActorClass, UE::Math::TVector<double>* AtLoc, UE::Math::TRotator<double>* AtRot, bool bIgnoreOnDedicatedServer, USceneComponent* AttachToComponent, FName BoneName, AActor* SpawnOwner) { NativeCall<void, TSubclassOf<AActor>, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, bool, USceneComponent*, FName, AActor*>(this, "AActor.NetActorSpawnActorUnreliable_Implementation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,USceneComponent*,FName,AActor*)", ActorClass, AtLoc, AtRot, bIgnoreOnDedicatedServer, AttachToComponent, BoneName, SpawnOwner); }
	void ActorPlaySound_Implementation(USoundBase* SoundAsset, bool bAttach, FName BoneName, UE::Math::TVector<double>* LocOffset) { NativeCall<void, USoundBase*, bool, FName, UE::Math::TVector<double>*>(this, "AActor.ActorPlaySound_Implementation(USoundBase*,bool,FName,UE::Math::TVector<double>)", SoundAsset, bAttach, BoneName, LocOffset); }
	void StopActorSound(USoundBase* SoundAsset, float FadeOutTime) { NativeCall<void, USoundBase*, float>(this, "AActor.StopActorSound(USoundBase*,float)", SoundAsset, FadeOutTime); }
	APlayerController* GetOwnerController() { return NativeCall<APlayerController*>(this, "AActor.GetOwnerController()"); }
	bool IsOwnedOrControlledBy(const AActor* TestOwner) { return NativeCall<bool, const AActor*>(this, "AActor.IsOwnedOrControlledBy(AActor*)", TestOwner); }
	void MulticastDrawDebugLine_Implementation(const UE::Math::TVector<double>* TextLocation, const FString* Text, AActor* TestBaseActor) { NativeCall<void, const UE::Math::TVector<double>*, const FString*, AActor*>(this, "AActor.MulticastDrawDebugLine_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,float,float,bool)", TextLocation, Text, TestBaseActor); }
	void MulticastDrawDebugLineTraceHitResult_Implementation(const FHitResult* Hit, UE::Math::TVector<double>* TraceStart, UE::Math::TVector<double>* TraceEnd) { NativeCall<void, const FHitResult*, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AActor.MulticastDrawDebugLineTraceHitResult_Implementation(FHitResult,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,FLinearColor,float,float,bool,FLinearColor,float,float,bool)", Hit, TraceStart, TraceEnd); }
	//UPathFollowingComponent* FindComponentByClass<class UPathFollowingComponent>() { return NativeCall<UPathFollowingComponent*>(this, "AActor.FindComponentByClass<class UPathFollowingComponent>()"); }

	unsigned char& ActorCategoryField() { return *GetNativePointerField<unsigned char*>(this, "AActor.ActorCategory"); }
	TWeakObjectPtr<AKillZVolume, FWeakObjectPtr>& DelayedFellOutOfWorldKillZVolumeField() { return *GetNativePointerField<TWeakObjectPtr<AKillZVolume, FWeakObjectPtr>*>(this, "AActor.DelayedFellOutOfWorldKillZVolume"); }
	ESpawnActorCollisionHandlingMethod& SpawnCollisionHandlingMethodField() { return *GetNativePointerField<ESpawnActorCollisionHandlingMethod*>(this, "AActor.SpawnCollisionHandlingMethod"); }
	FTakeAnyDamageSignature& OnTakeAnyDamageField() { return *GetNativePointerField<FTakeAnyDamageSignature*>(this, "AActor.OnTakeAnyDamage"); }
	FTakeRadialDamageSignature& OnTakeRadialDamageField() { return *GetNativePointerField<FTakeRadialDamageSignature*>(this, "AActor.OnTakeRadialDamage"); }
	FActorEndOverlapSignature& OnActorEndOverlapField() { return *GetNativePointerField<FActorEndOverlapSignature*>(this, "AActor.OnActorEndOverlap"); }
	FActorDestroyedSignature& OnDestroyedField() { return *GetNativePointerField<FActorDestroyedSignature*>(this, "AActor.OnDestroyed"); }
	BitFieldValue<bool, unsigned char> bEditorOnlyActorShowInPIE() { return { this, "AActor.bEditorOnlyActorShowInPIE"}; }
	BitFieldValue<bool, unsigned char> bHasPreRegisteredAllComponents() { return { this, "AActor.bHasPreRegisteredAllComponents"}; }
	BitFieldValue<bool, unsigned char> bActorIsPendingPostNetInit() { return { this, "AActor.bActorIsPendingPostNetInit"}; }
	BitFieldValue<bool, unsigned char> bIsInvincible() { return { this, "AActor.bIsInvincible"}; }
	bool HasDataLayers() { return NativeCall<bool>(this, "AActor.HasDataLayers()"); }
	UE::Math::TVector<double>* GetTargetLocation(UE::Math::TVector<double>* result, AActor* RequestedBy) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, AActor*>(this, "AActor.GetTargetLocation(AActor*)", result, RequestedBy); }
	UE::Math::TVector<double>* GetAttackingFromLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AActor.GetAttackingFromLocation()", result); }
	bool UseShortConnectTimeout() { return NativeCall<bool>(this, "AActor.UseShortConnectTimeout()"); }
	void PostRenderFor(APlayerController* PC, UCanvas* Canvas, UE::Math::TVector<double>* CameraPosition, UE::Math::TVector<double>* CameraDir) { if (!CameraPosition) throw std::invalid_argument("Null native value parameter"); if (!CameraDir) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, APlayerController *, UCanvas *, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(this, "AActor.PostRenderFor(APlayerController*,UCanvas*,UE::Math::TVector<double>,UE::Math::TVector<double>)", PC, Canvas, *CameraPosition, *CameraDir); }
	void SetTickGroup(ETickingGroup NewTickGroup) { NativeCall<void, ETickingGroup>(this, "AActor.SetTickGroup(ETickingGroup)", NewTickGroup); }
	bool IsRootComponentMovable() { return NativeCall<bool>(this, "AActor.IsRootComponentMovable()"); }
	void SetDelayedFellOutOfWorld(AKillZVolume* ForVolume) { NativeCall<void, AKillZVolume*>(this, "AActor.SetDelayedFellOutOfWorld(AKillZVolume*)", ForVolume); }
	UPlayer* GetNetOwningPlayerAnyRole() { return NativeCall<UPlayer*>(this, "AActor.GetNetOwningPlayerAnyRole()"); }
	void RemoveActorComponentReplicatedSubObject(UActorComponent* OwnerComponent, UObject* SubObject) { NativeCall<void, UActorComponent*, UObject*>(this, "AActor.RemoveActorComponentReplicatedSubObject(UActorComponent*,UObject*)", OwnerComponent, SubObject); }
	bool IsPendingKillPending() { return NativeCall<bool>(this, "AActor.IsPendingKillPending()"); }
	FName GetAttachParentSocketName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "AActor.GetAttachParentSocketName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void SetInstigator(APawn* InInstigator) { NativeCall<void, APawn*>(this, "AActor.SetInstigator(APawn*)", InInstigator); }
	APawn* GetInstigator() { return NativeCall<APawn*>(this, "AActor.GetInstigator()"); }
	bool HasHLODRelevantComponents() { return NativeCall<bool>(this, "AActor.HasHLODRelevantComponents()"); }
	bool ContainsDataLayer(const UDataLayerAsset* DataLayerAsset) { return NativeCall<bool, const UDataLayerAsset*>(this, "AActor.ContainsDataLayer(UDataLayerAsset*)", DataLayerAsset); }
	void ActorPlaySound(USoundBase* SoundAsset, bool bAttach, FName BoneName, UE::Math::TVector<double>* LocOffset) { if (!LocOffset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, USoundBase *, bool, FName, UE :: Math :: TVector < double >>(this, "AActor.ActorPlaySound(USoundBase*,bool,FName,UE::Math::TVector<double>)", SoundAsset, bAttach, BoneName, *LocOffset); }
	void MulticastDrawDebugCoordinateSystem_Implementation(UE::Math::TVector<double>* AxisLoc, UE::Math::TRotator<double>* AxisRot, float Scale, float Duration, float Thickness, bool enableInShipping) { if (!AxisLoc) throw std::invalid_argument("Null native value parameter"); if (!AxisRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, float, float, float, bool>(this, "AActor.MulticastDrawDebugCoordinateSystem_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,bool)", *AxisLoc, *AxisRot, Scale, Duration, Thickness, enableInShipping); }
	float GetResimulationThreshold() { return NativeCall<float>(this, "AActor.GetResimulationThreshold()"); }
	void DoDestroy() { NativeCall<void>(this, "AActor.DoDestroy()"); }
	void PostActorCreated() { NativeCall<void>(this, "AActor.PostActorCreated()"); }
	void OnSerializeNewActor(FOutBunch& OutBunch) { NativeCall<void, FOutBunch&>(this, "AActor.OnSerializeNewActor(FOutBunch&)", OutBunch); }
	bool DestroyNetworkActorHandled() { return NativeCall<bool>(this, "AActor.DestroyNetworkActorHandled()"); }
	bool SupportsIncrementalPreRegisterComponents() { return NativeCall<bool>(this, "AActor.SupportsIncrementalPreRegisterComponents()"); }
	void SetReplicatingMovement(bool bInReplicateMovement) { NativeCall<void, bool>(this, "AActor.SetReplicatingMovement(bool)", bInReplicateMovement); }
	bool IsSelectionParentOfAttachedActors() { return NativeCall<bool>(this, "AActor.IsSelectionParentOfAttachedActors()"); }
	bool IsRootComponentStationary() { return NativeCall<bool>(this, "AActor.IsRootComponentStationary()"); }
	bool AllowRegisterComponentWithWorld(UActorComponent* MyComponent) { return NativeCall<bool, UActorComponent*>(this, "AActor.AllowRegisterComponentWithWorld(UActorComponent*)", MyComponent); }
	void PostNetReceiveVelocity(const UE::Math::TVector<double>& NewVelocity) { NativeCall<void, const UE::Math::TVector<double>&>(this, "AActor.PostNetReceiveVelocity(UE::Math::TVector<double>&)", NewVelocity); }
	bool SupportsIncrementalPreUnregisterComponents() { return NativeCall<bool>(this, "AActor.SupportsIncrementalPreUnregisterComponents()"); }
	ENetMode GetNetMode() { return NativeCall<ENetMode>(this, "AActor.GetNetMode()"); }
	bool GetNetDormancy(const UE::Math::TVector<double>& ViewPos, const UE::Math::TVector<double>& ViewDir, AActor* Viewer, AActor* ViewTarget, UActorChannel* InChannel, float Time, bool bLowBandwidth) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, AActor*, AActor*, UActorChannel*, float, bool>(this, "AActor.GetNetDormancy(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,AActor*,UActorChannel*,float,bool)", ViewPos, ViewDir, Viewer, ViewTarget, InChannel, Time, bLowBandwidth); }
	AController* GetInstigatorController() { return NativeCall<AController*>(this, "AActor.GetInstigatorController()"); }
	float InternalTakePointDamage(float Damage, const FPointDamageEvent& PointDamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FPointDamageEvent&, AController*, AActor*>(this, "AActor.InternalTakePointDamage(float,FPointDamageEvent&,AController*,AActor*)", Damage, PointDamageEvent, EventInstigator, DamageCauser); }
	bool CanBeBaseForCharacter(APawn* AsaArg0) { return NativeCall<bool, APawn*>(this, "AActor.CanBeBaseForCharacter(APawn*)", AsaArg0); }
	void BeginReplication() { NativeCall<void>(this, "AActor.BeginReplication()"); }
	void RemoveReplicatedComponent(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "AActor.RemoveReplicatedComponent(UActorComponent*)", Component); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "AActor.PreRegisterAllComponents()"); }
	void SetCallPreReplication(bool bCall) { NativeCall<void, bool>(this, "AActor.SetCallPreReplication(bool)", bCall); }
	UE::Math::TVector<double>* GetActorUpVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AActor.GetActorUpVector()", result); }
	void SetAutonomousProxy(bool bInAutonomousProxy, bool bAllowForcePropertyCompare) { NativeCall<void, bool, bool>(this, "AActor.SetAutonomousProxy(bool,bool)", bInAutonomousProxy, bAllowForcePropertyCompare); }
	void SetHidden(bool bInHidden) { NativeCall<void, bool>(this, "AActor.SetHidden(bool)", bInHidden); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AActor.PostUnregisterAllComponents()"); }
	ULevel* GetLevel() { return NativeCall<ULevel*>(this, "AActor.GetLevel()"); }
	void AddReplicatedSubObject(UObject* SubObject, ELifetimeCondition NetCondition) { NativeCall<void, UObject*, ELifetimeCondition>(this, "AActor.AddReplicatedSubObject(UObject*,ELifetimeCondition)", SubObject, NetCondition); }
	void IncrementalPreUnregisterComponents() { NativeCall<void>(this, "AActor.IncrementalPreUnregisterComponents()"); }
	float GetNetCullDistanceSquared() { return NativeCall<float>(this, "AActor.GetNetCullDistanceSquared()"); }
	bool IsComponentRelevantForNavigation(UActorComponent* Component) { return NativeCall<bool, UActorComponent*>(this, "AActor.IsComponentRelevantForNavigation(UActorComponent*)", Component); }
	void InvalidateLightingCacheDetailed(bool bTranslationOnly) { NativeCall<void, bool>(this, "AActor.InvalidateLightingCacheDetailed(bool)", bTranslationOnly); }
	void SetRole(ENetRole InRole) { NativeCall<void, ENetRole>(this, "AActor.SetRole(ENetRole)", InRole); }
	bool LocalExecCommand(FName CommandName, const FBPNetExecParams& ExecParams) { return NativeCall<bool, FName, const FBPNetExecParams&>(this, "AActor.LocalExecCommand(FName,FBPNetExecParams&)", CommandName, ExecParams); }
	const TArray<UActorComponent*, TSizedDefaultAllocator<32> >& GetInstanceComponents() { return NativeCall<const TArray<UActorComponent*, TSizedDefaultAllocator<32> >&>(this, "AActor.GetInstanceComponents()"); }
	void MulticastDrawDebugCoordinateSystem(UE::Math::TVector<double>* AxisLoc, UE::Math::TRotator<double>* AxisRot, float Scale, float Duration, float Thickness, bool enableInShipping) { if (!AxisLoc) throw std::invalid_argument("Null native value parameter"); if (!AxisRot) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, float, float, float, bool>(this, "AActor.MulticastDrawDebugCoordinateSystem(UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,bool)", *AxisLoc, *AxisRot, Scale, Duration, Thickness, enableInShipping); }
	bool IsRuntimeOnly() { return NativeCall<bool>(this, "AActor.IsRuntimeOnly()"); }
	void SetMinNetUpdateFrequency(float MinFrequency) { NativeCall<void, float>(this, "AActor.SetMinNetUpdateFrequency(float)", MinFrequency); }
	bool BPServerHandleNetExecCommand(APlayerController* FromPC, FName CommandName, const FBPNetExecParams& ExecParams) { return NativeCall<bool, APlayerController*, FName, const FBPNetExecParams&>(this, "AActor.BPServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)", FromPC, CommandName, ExecParams); }
	void SetFakeNetPhysicsState(bool bShouldSleep) { NativeCall<void, bool>(this, "AActor.SetFakeNetPhysicsState(bool)", bShouldSleep); }
	FString* GetHumanReadableName(FString* result) { return NativeCall<FString*, FString*>(this, "AActor.GetHumanReadableName()", result); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "AActor.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void UnregisterAsFocalPointInPhysicsReplicationLOD() { NativeCall<void>(this, "AActor.UnregisterAsFocalPointInPhysicsReplicationLOD()"); }
	void ReceiveAsyncPhysicsTick(float DeltaSeconds, float SimSeconds) { NativeCall<void, float, float>(this, "AActor.ReceiveAsyncPhysicsTick(float,float)", DeltaSeconds, SimSeconds); }
	bool InstanceBlueprintComponentsWithoutWorld() { return NativeCall<bool>(this, "AActor.InstanceBlueprintComponentsWithoutWorld()"); }
	void SetNetCullDistanceSquared(float DistanceSq) { NativeCall<void, float>(this, "AActor.SetNetCullDistanceSquared(float)", DistanceSq); }
	bool IsActorTickEnabled() { return NativeCall<bool>(this, "AActor.IsActorTickEnabled()"); }
	bool IsInLevel(const ULevel* TestLevel) { return NativeCall<bool, const ULevel*>(this, "AActor.IsInLevel(ULevel*)", TestLevel); }
	bool IsEditorOnlyLoadedInPIE() { return NativeCall<bool>(this, "AActor.IsEditorOnlyLoadedInPIE()"); }
	void UpdateComponentVisibility() { NativeCall<void>(this, "AActor.UpdateComponentVisibility()"); }
	TArray<UActorComponent*, TSizedDefaultAllocator<32> >* GetHLODRelevantComponents(TArray<UActorComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UActorComponent*, TSizedDefaultAllocator<32> >*, TArray<UActorComponent*, TSizedDefaultAllocator<32> >*>(this, "AActor.GetHLODRelevantComponents()", result); }
	bool IsRootComponentStatic() { return NativeCall<bool>(this, "AActor.IsRootComponentStatic()"); }
	bool IsInPersistentLevel(bool bIncludeLevelStreamingPersistent) { return NativeCall<bool, bool>(this, "AActor.IsInPersistentLevel(bool)", bIncludeLevelStreamingPersistent); }
	void ActorPlaySoundUnreliable_Implementation(USoundBase* SoundAsset, bool bAttach, FName BoneName, UE::Math::TVector<double>* LocOffset) { if (!LocOffset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, USoundBase *, bool, FName, UE :: Math :: TVector < double >>(this, "AActor.ActorPlaySoundUnreliable_Implementation(USoundBase*,bool,FName,UE::Math::TVector<double>)", SoundAsset, bAttach, BoneName, *LocOffset); }
	void ReceiveAnyDamage_Implementation(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) { NativeCall<void, float, const UDamageType*, AController*, AActor*>(this, "AActor.ReceiveAnyDamage_Implementation(float,UDamageType*,AController*,AActor*)", Damage, DamageType, InstigatedBy, DamageCauser); }
	bool SupportsSubRootSelection() { return NativeCall<bool>(this, "AActor.SupportsSubRootSelection()"); }
	AActor* GetParentActor() { return NativeCall<AActor*>(this, "AActor.GetParentActor()"); }
	void RemoveReplicatedSubObject(UObject* SubObject) { NativeCall<void, UObject*>(this, "AActor.RemoveReplicatedSubObject(UObject*)", SubObject); }
	float GetMinNetUpdateFrequency() { return NativeCall<float>(this, "AActor.GetMinNetUpdateFrequency()"); }
	void PreDuplicateFromRoot(FObjectDuplicationParameters& DupParams) { NativeCall<void, FObjectDuplicationParameters&>(this, "AActor.PreDuplicateFromRoot(FObjectDuplicationParameters&)", DupParams); }
	bool BPLocalExecCommand(FName CommandName, const FBPNetExecParams& ExecParams) { return NativeCall<bool, FName, const FBPNetExecParams&>(this, "AActor.BPLocalExecCommand(FName,FBPNetExecParams&)", CommandName, ExecParams); }
	float GetSquaredDistanceTo(const AActor* OtherActor) { return NativeCall<float, const AActor*>(this, "AActor.GetSquaredDistanceTo(AActor*)", OtherActor); }
	void InternalDispatchBlockingHit(UPrimitiveComponent* MyComp, UPrimitiveComponent* OtherComp, bool bSelfMoved, const FHitResult& Hit) { NativeCall<void, UPrimitiveComponent*, UPrimitiveComponent*, bool, const FHitResult&>(this, "AActor.InternalDispatchBlockingHit(UPrimitiveComponent*,UPrimitiveComponent*,bool,FHitResult&)", MyComp, OtherComp, bSelfMoved, Hit); }
	void HandleRegisterComponentWithWorld(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "AActor.HandleRegisterComponentWithWorld(UActorComponent*)", Component); }
	void DetachFromActor(const FDetachmentTransformRules& DetachmentRules) { NativeCall<void, const FDetachmentTransformRules&>(this, "AActor.DetachFromActor(FDetachmentTransformRules&)", DetachmentRules); }
	void SetActorScale3D(UE::Math::TVector<double>* NewScale3D) { if (!NewScale3D) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "AActor.SetActorScale3D(UE::Math::TVector<double>)", *NewScale3D); }
	UE::Math::TVector<double>* GetActorScale3D(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AActor.GetActorScale3D()", result); }
	void SetNetAddressable() { NativeCall<void>(this, "AActor.SetNetAddressable()"); }
	bool NetExecCommand(FName CommandName, const FNetExecParams& ExecParams) { return NativeCall<bool, FName, const FNetExecParams&>(this, "AActor.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
	void StartMeshTeleportInterp(float InterpTimeSeconds, const UE::Math::TVector<double>& PreTeleportLocation) { NativeCall<void, float, const UE::Math::TVector<double>&>(this, "AActor.StartMeshTeleportInterp(float,UE::Math::TVector<double>&)", InterpTimeSeconds, PreTeleportLocation); }
	void UserConstructionScript() { NativeCall<void>(this, "AActor.UserConstructionScript()"); }
	float GetNetUpdateFrequency() { return NativeCall<float>(this, "AActor.GetNetUpdateFrequency()"); }
	void OnRep_Owner() { NativeCall<void>(this, "AActor.OnRep_Owner()"); }
	void SetNetUpdateFrequency(float Frequency) { NativeCall<void, float>(this, "AActor.SetNetUpdateFrequency(float)", Frequency); }
	UE::Math::TVector<double>* GetActorRightVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AActor.GetActorRightVector()", result); }
	UE::Math::TRotator<double>* GetActorRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "AActor.GetActorRotation()", result); }
	void ActorPlaySoundUnreliable(USoundBase* SoundAsset, bool bAttach, FName BoneName, UE::Math::TVector<double>* LocOffset) { if (!LocOffset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, USoundBase *, bool, FName, UE :: Math :: TVector < double >>(this, "AActor.ActorPlaySoundUnreliable(USoundBase*,bool,FName,UE::Math::TVector<double>)", SoundAsset, bAttach, BoneName, *LocOffset); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "AActor.ShouldTickIfViewportsOnly()"); }
	void SetActorTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "AActor.SetActorTickEnabled(bool)", bEnabled); }
	void IncrementalPreRegisterComponents() { NativeCall<void>(this, "AActor.IncrementalPreRegisterComponents()"); }
	float GetSimpleCollisionHalfHeight() { return NativeCall<float>(this, "AActor.GetSimpleCollisionHalfHeight()"); }
	UE::Math::TVector<double>* GetVelocity(UE::Math::TVector<double>* result, bool bIsForRagdoll) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool>(this, "AActor.GetVelocity(bool)", result, bIsForRagdoll); }
	void PostNetReceiveRole() { NativeCall<void>(this, "AActor.PostNetReceiveRole()"); }
	void K2_DestroyActor() { NativeCall<void>(this, "AActor.K2_DestroyActor()"); }
	void MarkNeedsRecomputeBoundsOnceForGame() { NativeCall<void>(this, "AActor.MarkNeedsRecomputeBoundsOnceForGame()"); }
	void OnRep_ReplicateMovement() { NativeCall<void>(this, "AActor.OnRep_ReplicateMovement()"); }
	float GetGameTimeSinceCreation() { return NativeCall<float>(this, "AActor.GetGameTimeSinceCreation()"); }
	float ActorGetDistanceToCollision(const UE::Math::TVector<double>& Point, ECollisionChannel TraceChannel, UE::Math::TVector<double>& ClosestPointOnCollision, UPrimitiveComponent** OutPrimitiveComponent) { return NativeCall<float, const UE::Math::TVector<double>&, ECollisionChannel, UE::Math::TVector<double>&, UPrimitiveComponent**>(this, "AActor.ActorGetDistanceToCollision(UE::Math::TVector<double>&,ECollisionChannel,UE::Math::TVector<double>&,UPrimitiveComponent**)", Point, TraceChannel, ClosestPointOnCollision, OutPrimitiveComponent); }
	UE::Math::TQuat<double>* GetActorQuat(UE::Math::TQuat<double>* result) { return NativeCall<UE::Math::TQuat<double>*, UE::Math::TQuat<double>*>(this, "AActor.GetActorQuat()", result); }
	void MarkComponentsAsGarbage(bool bModify) { NativeCall<void, bool>(this, "AActor.MarkComponentsAsGarbage(bool)", bModify); }
	void RemoveInstanceComponent(UActorComponent* Component) { NativeCall<void, UActorComponent*>(this, "AActor.RemoveInstanceComponent(UActorComponent*)", Component); }
	void EndReplication(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AActor.EndReplication(EEndPlayReason::Type)", EndPlayReason); }
	void AddActorComponentReplicatedSubObject(UActorComponent* OwnerComponent, UObject* SubObject, ELifetimeCondition NetCondition) { NativeCall<void, UActorComponent*, UObject*, ELifetimeCondition>(this, "AActor.AddActorComponentReplicatedSubObject(UActorComponent*,UObject*,ELifetimeCondition)", OwnerComponent, SubObject, NetCondition); }
	bool Primal_IncrementalUnregisterAllComponents(bool bForReregister) { return NativeCall<bool, bool>(this, "AActor.Primal_IncrementalUnregisterAllComponents(bool)", bForReregister); }
	UE::Math::TVector<double>* GetActorForwardVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AActor.GetActorForwardVector()", result); }
	void NetSpawnedActor(AActor* SpawnedActor) { NativeCall<void, AActor*>(this, "AActor.NetSpawnedActor(AActor*)", SpawnedActor); }
	void LifeSpanExpired() { NativeCall<void>(this, "AActor.LifeSpanExpired()"); }
	void RegisterAsFocalPointInPhysicsReplicationLOD() { NativeCall<void>(this, "AActor.RegisterAsFocalPointInPhysicsReplicationLOD()"); }
	void PostRename(UObject* OldOuter, FName OldName) { NativeCall<void, UObject*, FName>(this, "AActor.PostRename(UObject*,FName)", OldOuter, OldName); }
	void OnNetCleanup(UNetConnection* Connection) { NativeCall<void, UNetConnection*>(this, "AActor.OnNetCleanup(UNetConnection*)", Connection); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "AActor.IsSupportedForNetworking()"); }
	UE::Math::TVector<double>* GetActorLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AActor.GetActorLocation()", result); }
	void UpdateOwningNetConnection() { NativeCall<void>(this, "AActor.UpdateOwningNetConnection()"); }
	const AActor* GetNetOwner() { return NativeCall<const AActor*>(this, "AActor.GetNetOwner()"); }
	void TeleportSucceeded(bool bIsATest, bool bSimpleTeleport) { NativeCall<void, bool, bool>(this, "AActor.TeleportSucceeded(bool,bool)", bIsATest, bSimpleTeleport); }
	void DelayedFellOutOfWorld() { NativeCall<void>(this, "AActor.DelayedFellOutOfWorld()"); }
	bool CanTriggerResimulation() { return NativeCall<bool>(this, "AActor.CanTriggerResimulation()"); }
	void OnActorChannelOpen(FInBunch& InBunch, UNetConnection* Connection) { NativeCall<void, FInBunch&, UNetConnection*>(this, "AActor.OnActorChannelOpen(FInBunch&,UNetConnection*)", InBunch, Connection); }
	float GetSimpleCollisionRadius() { return NativeCall<float>(this, "AActor.GetSimpleCollisionRadius()"); }
	void DetachAllSceneComponents(USceneComponent* InParentComponent, const FDetachmentTransformRules& DetachmentRules) { NativeCall<void, USceneComponent*, const FDetachmentTransformRules&>(this, "AActor.DetachAllSceneComponents(USceneComponent*,FDetachmentTransformRules&)", InParentComponent, DetachmentRules); }
	void RewindForReplay() { NativeCall<void>(this, "AActor.RewindForReplay()"); }
	FRepMovement& GetReplicatedMovement_Mutable() { return NativeCall<FRepMovement&>(this, "AActor.GetReplicatedMovement_Mutable()"); }
	void OnRep_Instigator() { NativeCall<void>(this, "AActor.OnRep_Instigator()"); }
	void TornOff() { NativeCall<void>(this, "AActor.TornOff()"); }
	void GetActorEyesViewPoint(UE::Math::TVector<double>& OutLocation, UE::Math::TRotator<double>& OutRotation) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&>(this, "AActor.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutLocation, OutRotation); }
};