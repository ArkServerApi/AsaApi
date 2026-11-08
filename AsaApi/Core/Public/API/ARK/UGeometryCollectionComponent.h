#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include <API/UE/Math/Sphere.h>
#include "UMeshComponent.h"

struct UGeometryCollectionComponent : public UMeshComponent
{
public:
	UGeometryCollectionComponent() = delete;
	~UGeometryCollectionComponent() = delete;
	UGeometryCollectionComponent(const UGeometryCollectionComponent&) = delete;
	UGeometryCollectionComponent& operator=(const UGeometryCollectionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGeometryCollectionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGeometryCollectionComponent"); }

	bool& Simulating_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.Simulating_DEPRECATED"); }
	ESimulationInitializationState& InitializationStateField() { return *GetNativePointerField<ESimulationInitializationState*>(this, "UGeometryCollectionComponent.InitializationState"); }
	EObjectStateTypeEnum& ObjectTypeField() { return *GetNativePointerField<EObjectStateTypeEnum*>(this, "UGeometryCollectionComponent.ObjectType"); }
	int& GravityGroupIndexField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.GravityGroupIndex"); }
	int& OneWayInteractionLevelField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.OneWayInteractionLevel"); }
	bool& bDensityFromPhysicsMaterialField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bDensityFromPhysicsMaterial"); }
	bool& bForceMotionBlurField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bForceMotionBlur"); }
	bool& EnableClusteringField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.EnableClustering"); }
	int& ClusterGroupIndexField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.ClusterGroupIndex"); }
	int& MaxClusterLevelField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.MaxClusterLevel"); }
	int& MaxSimulatedLevelField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.MaxSimulatedLevel"); }
	TArray<float, TSizedDefaultAllocator<32> >& DamageThresholdField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UGeometryCollectionComponent.DamageThreshold"); }
	bool& bUseSizeSpecificDamageThresholdField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bUseSizeSpecificDamageThreshold"); }
	bool& bUseMaterialDamageModifiersField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bUseMaterialDamageModifiers"); }
	FGeometryCollectionDamagePropagationData& DamagePropagationDataField() { return *GetNativePointerField<FGeometryCollectionDamagePropagationData*>(this, "UGeometryCollectionComponent.DamagePropagationData"); }
	bool& bEnableDamageFromCollisionField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bEnableDamageFromCollision"); }
	bool& bAllowRemovalOnSleepField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bAllowRemovalOnSleep"); }
	bool& bAllowRemovalOnBreakField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bAllowRemovalOnBreak"); }
	bool& bPrimalForceStartSleepRemovalField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bPrimalForceStartSleepRemoval"); }
	bool& bPreventGameplayVelocitiesAndForcesField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bPreventGameplayVelocitiesAndForces"); }
	TArray<int, TSizedDefaultAllocator<32> >& PrimalForceSleepIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UGeometryCollectionComponent.PrimalForceSleepIndices"); }
	bool& bForceUpdateActiveTransformsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bForceUpdateActiveTransforms"); }
	EClusterConnectionTypeEnum& ClusterConnectionType_DEPRECATEDField() { return *GetNativePointerField<EClusterConnectionTypeEnum*>(this, "UGeometryCollectionComponent.ClusterConnectionType_DEPRECATED"); }
	int& CollisionGroupField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.CollisionGroup"); }
	float& CollisionSampleFractionField() { return *GetNativePointerField<float*>(this, "UGeometryCollectionComponent.CollisionSampleFraction"); }
	float& LinearEtherDrag_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UGeometryCollectionComponent.LinearEtherDrag_DEPRECATED"); }
	EInitialVelocityTypeEnum& InitialVelocityTypeField() { return *GetNativePointerField<EInitialVelocityTypeEnum*>(this, "UGeometryCollectionComponent.InitialVelocityType"); }
	UE::Math::TVector<double>& InitialLinearVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGeometryCollectionComponent.InitialLinearVelocity"); }
	UE::Math::TVector<double>& InitialAngularVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGeometryCollectionComponent.InitialAngularVelocity"); }
	FGeomComponentCacheParameters& CacheParametersField() { return *GetNativePointerField<FGeomComponentCacheParameters*>(this, "UGeometryCollectionComponent.CacheParameters"); }
	TArray<bool, TSizedDefaultAllocator<32> >& DisabledFlagsField() { return *GetNativePointerField<TArray<bool, TSizedDefaultAllocator<32> >*>(this, "UGeometryCollectionComponent.DisabledFlags"); }
	int& BaseRigidBodyIndexField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.BaseRigidBodyIndex"); }
	int& NumParticlesAddedField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.NumParticlesAdded"); }
	FOnChaosBreakEvent& OnChaosBreakEventField() { return *GetNativePointerField<FOnChaosBreakEvent*>(this, "UGeometryCollectionComponent.OnChaosBreakEvent"); }
	FOnChaosRemovalEvent& OnChaosRemovalEventField() { return *GetNativePointerField<FOnChaosRemovalEvent*>(this, "UGeometryCollectionComponent.OnChaosRemovalEvent"); }
	FOnChaosCrumblingEvent& OnChaosCrumblingEventField() { return *GetNativePointerField<FOnChaosCrumblingEvent*>(this, "UGeometryCollectionComponent.OnChaosCrumblingEvent"); }
	FOnChaosBreakEvent& OnRootBreakEventField() { return *GetNativePointerField<FOnChaosBreakEvent*>(this, "UGeometryCollectionComponent.OnRootBreakEvent"); }
	FOnGeometryCollectionFullyDecayedEvent& OnFullyDecayedEventField() { return *GetNativePointerField<FOnGeometryCollectionFullyDecayedEvent*>(this, "UGeometryCollectionComponent.OnFullyDecayedEvent"); }
	FOnGeometryCollectionRootMovedEvent& OnRootMovedEventField() { return *GetNativePointerField<FOnGeometryCollectionRootMovedEvent*>(this, "UGeometryCollectionComponent.OnRootMovedEvent"); }
	float& DesiredCacheTimeField() { return *GetNativePointerField<float*>(this, "UGeometryCollectionComponent.DesiredCacheTime"); }
	bool& CachePlaybackField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.CachePlayback"); }
	FOnChaosPhysicsCollision& OnChaosPhysicsCollisionField() { return *GetNativePointerField<FOnChaosPhysicsCollision*>(this, "UGeometryCollectionComponent.OnChaosPhysicsCollision"); }
	bool& bNotifyBreaksField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyBreaks"); }
	bool& bNotifyCollisionsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyCollisions"); }
	bool& bNotifyTrailingField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyTrailing"); }
	bool& bNotifyRemovalsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyRemovals"); }
	bool& bNotifyCrumblingsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyCrumblings"); }
	bool& bCrumblingEventIncludesChildrenField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bCrumblingEventIncludesChildren"); }
	bool& bNotifyGlobalBreaksField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyGlobalBreaks"); }
	bool& bNotifyGlobalCollisionsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyGlobalCollisions"); }
	bool& bNotifyGlobalRemovalsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyGlobalRemovals"); }
	bool& bNotifyGlobalCrumblingsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyGlobalCrumblings"); }
	bool& bGlobalCrumblingEventIncludesChildrenField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bGlobalCrumblingEventIncludesChildren"); }
	bool& bNotifyGlobalTrailingsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bNotifyGlobalTrailings"); }
	bool& bStoreVelocitiesField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bStoreVelocities"); }
	bool& bIsCurrentlyNavigationRelevantField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bIsCurrentlyNavigationRelevant"); }
	bool& bShowBoneColorsField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bShowBoneColors"); }
	bool& bUpdateComponentTransformToRootBoneField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bUpdateComponentTransformToRootBone"); }
	bool& bUseRootProxyForNavigationField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bUseRootProxyForNavigation"); }
	bool& bUpdateNavigationInTickField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bUpdateNavigationInTick"); }
	bool& bEnableReplicationField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bEnableReplication"); }
	bool& bEnableAbandonAfterLevelField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bEnableAbandonAfterLevel"); }
	FName& AbandonedCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "UGeometryCollectionComponent.AbandonedCollisionProfileName"); }
	bool& bOverrideCustomRendererField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bOverrideCustomRenderer"); }
	bool& bAutoAssignISMPool_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bAutoAssignISMPool_DEPRECATED"); }
	bool& bAlreadyFullyDecayedField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bAlreadyFullyDecayed"); }
	bool& bUseStaticMeshCollisionForTracesField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bUseStaticMeshCollisionForTraces"); }
	int& ReplicationAbandonClusterLevel_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.ReplicationAbandonClusterLevel_DEPRECATED"); }
	TArray<FName, TSizedDefaultAllocator<32> >& CollisionProfilePerLevelField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UGeometryCollectionComponent.CollisionProfilePerLevel"); }
	TArray<FName, TSizedDefaultAllocator<32> >& CollisionProfilePerParticleField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UGeometryCollectionComponent.CollisionProfilePerParticle"); }
	int& ReplicationAbandonAfterLevelField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.ReplicationAbandonAfterLevel"); }
	int& ReplicationMaxPositionAndVelocityCorrectionLevelField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.ReplicationMaxPositionAndVelocityCorrectionLevel"); }
	FGeometryCollectionRepData& RepDataField() { return *GetNativePointerField<FGeometryCollectionRepData*>(this, "UGeometryCollectionComponent.RepData"); }
	FGeometryCollectionRepStateData& RepStateDataField() { return *GetNativePointerField<FGeometryCollectionRepStateData*>(this, "UGeometryCollectionComponent.RepStateData"); }
	FGeometryCollectionRepDynamicData& RepDynamicDataField() { return *GetNativePointerField<FGeometryCollectionRepDynamicData*>(this, "UGeometryCollectionComponent.RepDynamicData"); }
	int& VersionProcessedField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.VersionProcessed"); }
	int& DynamicRepDataVersionProcessedField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.DynamicRepDataVersionProcessed"); }
	__int64& LastAsyncPhysicsTickMsField() { return *GetNativePointerField<__int64*>(this, "UGeometryCollectionComponent.LastAsyncPhysicsTickMs"); }
	int& ViewLevelField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.ViewLevel"); }
	unsigned int& NavmeshInvalidationTimeSliceIndexField() { return *GetNativePointerField<unsigned int*>(this, "UGeometryCollectionComponent.NavmeshInvalidationTimeSliceIndex"); }
	float& CurrentCacheTimeField() { return *GetNativePointerField<float*>(this, "UGeometryCollectionComponent.CurrentCacheTime"); }
	FChaosUserData& PhysicsUserDataField() { return *GetNativePointerField<FChaosUserData*>(this, "UGeometryCollectionComponent.PhysicsUserData"); }
	TArray<bool, TSizedDefaultAllocator<32> >& EventsPlayedField() { return *GetNativePointerField<TArray<bool, TSizedDefaultAllocator<32> >*>(this, "UGeometryCollectionComponent.EventsPlayed"); }
	FGeometryCollectionPhysicsProxy*& PhysicsProxyField() { return *GetNativePointerField<FGeometryCollectionPhysicsProxy**>(this, "UGeometryCollectionComponent.PhysicsProxy"); }
	double& LastHardsnapTimeInMsField() { return *GetNativePointerField<double*>(this, "UGeometryCollectionComponent.LastHardsnapTimeInMs"); }
	int& OneOffActivatedProcessedField() { return *GetNativePointerField<int*>(this, "UGeometryCollectionComponent.OneOffActivatedProcessed"); }
	float& AngularEtherDrag_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UGeometryCollectionComponent.AngularEtherDrag_DEPRECATED"); }
	bool& bDynamicCollectionPtrHasChangedField() { return *GetNativePointerField<bool*>(this, "UGeometryCollectionComponent.bDynamicCollectionPtrHasChanged"); }
	BitFieldValue<bool, unsigned char> bForceBrokenForCustomRenderer() { return { this, "UGeometryCollectionComponent.bForceBrokenForCustomRenderer"}; }
	BitFieldValue<bool, unsigned char> bUpdateCustomRendererOnPostPhysicsSync() { return { this, "UGeometryCollectionComponent.bUpdateCustomRendererOnPostPhysicsSync"}; }
	BitFieldValue<bool, unsigned char> bCustomRendererCanUseNativeFallback() { return { this, "UGeometryCollectionComponent.bCustomRendererCanUseNativeFallback"}; }
	BitFieldValue<bool, unsigned char> bCustomRendererShouldUseNativeFallback() { return { this, "UGeometryCollectionComponent.bCustomRendererShouldUseNativeFallback"}; }
	BitFieldValue<bool, unsigned char> bForceNativeRenderer() { return { this, "UGeometryCollectionComponent.bForceNativeRenderer"}; }
	BitFieldValue<bool, unsigned char> bInitializedRemovalDynamicAttribute() { return { this, "UGeometryCollectionComponent.bInitializedRemovalDynamicAttribute"}; }
	BitFieldValue<bool, unsigned char> bEnableBoneSelection() { return { this, "UGeometryCollectionComponent.bEnableBoneSelection"}; }
	BitFieldValue<bool, unsigned char> IsObjectDynamic() { return { this, "UGeometryCollectionComponent.IsObjectDynamic"}; }
	BitFieldValue<bool, unsigned char> IsObjectLoading() { return { this, "UGeometryCollectionComponent.IsObjectLoading"}; }
	void ApplyAssetDefaults() { NativeCall<void>(this, "UGeometryCollectionComponent.ApplyAssetDefaults()"); }
	void InitializeCustomRenderer() { NativeCall<void>(this, "UGeometryCollectionComponent.InitializeCustomRenderer()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UGeometryCollectionComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SetCollisionObjectType(ECollisionChannel Channel) { NativeCall<void, ECollisionChannel>(this, "UGeometryCollectionComponent.SetCollisionObjectType(ECollisionChannel)", Channel); }
	AChaosSolverActor* GetPhysicsSolverActor() { return NativeCall<AChaosSolverActor*>(this, "UGeometryCollectionComponent.GetPhysicsSolverActor()"); }
	void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial) { NativeCall<void, UPhysicalMaterial*>(this, "UGeometryCollectionComponent.SetPhysMaterialOverride(UPhysicalMaterial*)", NewPhysMaterial); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UGeometryCollectionComponent.HasValidPhysicsState()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UGeometryCollectionComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) { NativeCall<void, bool>(this, "UGeometryCollectionComponent.SetNotifyRigidBodyCollision(bool)", bNewNotifyRigidBodyCollision); }
	void RegisterAndInitializePhysicsProxy() { NativeCall<void>(this, "UGeometryCollectionComponent.RegisterAndInitializePhysicsProxy()"); }
	void OnVisibilityChanged() { NativeCall<void>(this, "UGeometryCollectionComponent.OnVisibilityChanged()"); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "UGeometryCollectionComponent.CanEditSimulatePhysics()"); }
	void ClearEmbeddedGeometry() { NativeCall<void>(this, "UGeometryCollectionComponent.ClearEmbeddedGeometry()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UGeometryCollectionComponent._getUObject()"); }
	UE::Math::TBoxSphereBounds<double, double>* CalcLocalBounds(UE::Math::TBoxSphereBounds<double, double>* result) { return NativeCall<UE::Math::TBoxSphereBounds<double, double>*, UE::Math::TBoxSphereBounds<double, double>*>(this, "UGeometryCollectionComponent.CalcLocalBounds()", result); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UGeometryCollectionComponent.Serialize(FArchive&)", Ar); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UGeometryCollectionComponent.OnDestroyPhysicsState()"); }
	void UpdateDecay(int TransformIdx, float UpdatedDecay, bool bUseClusterCrumbling, bool bHasDynamicInternalClusterParent, FGeometryCollectionDecayContext& ContextInOut) { NativeCall<void, int, float, bool, bool, FGeometryCollectionDecayContext&>(this, "UGeometryCollectionComponent.UpdateDecay(int,float,bool,bool,FGeometryCollectionDecayContext&)", TransformIdx, UpdatedDecay, bUseClusterCrumbling, bHasDynamicInternalClusterParent, ContextInOut); }
	float GetMass() { return NativeCall<float>(this, "UGeometryCollectionComponent.GetMass()"); }
	FGeometryCollectionDynamicData* InitDynamicData(bool bInitialization) { return NativeCall<FGeometryCollectionDynamicData*, bool>(this, "UGeometryCollectionComponent.InitDynamicData(bool)", bInitialization); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UGeometryCollectionComponent.OnCreatePhysicsState()"); }
	void UpdateRepData() { NativeCall<void>(this, "UGeometryCollectionComponent.UpdateRepData()"); }
	void SetEnableGravity(bool bGravityEnabled) { NativeCall<void, bool>(this, "UGeometryCollectionComponent.SetEnableGravity(bool)", bGravityEnabled); }
	FBodyInstance* GetBodyInstance(FName BoneName, bool bGetWelded, int Index) { return NativeCall<FBodyInstance*, FName, bool, int>(this, "UGeometryCollectionComponent.GetBodyInstance(FName,bool,int)", BoneName, bGetWelded, Index); }
	void ResetRepData() { NativeCall<void>(this, "UGeometryCollectionComponent.ResetRepData()"); }
	void SetSimulatePhysics(bool bEnabled) { NativeCall<void, bool>(this, "UGeometryCollectionComponent.SetSimulatePhysics(bool)", bEnabled); }
	void OnActorVisibilityChanged() { NativeCall<void>(this, "UGeometryCollectionComponent.OnActorVisibilityChanged()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UGeometryCollectionComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void OnHiddenInGameChanged() { NativeCall<void>(this, "UGeometryCollectionComponent.OnHiddenInGameChanged()"); }
	bool ShouldCreateRenderState() { return NativeCall<bool>(this, "UGeometryCollectionComponent.ShouldCreateRenderState()"); }
	UE::Math::TTransform<double>* GetSocketTransform(UE::Math::TTransform<double>* result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, ERelativeTransformSpace>(this, "UGeometryCollectionComponent.GetSocketTransform(FName,ERelativeTransformSpace)", result, InSocketName, TransformSpace); }
	void AsyncPhysicsTickComponent(float DeltaTime, float SimTime) { NativeCall<void, float, float>(this, "UGeometryCollectionComponent.AsyncPhysicsTickComponent(float,float)", DeltaTime, SimTime); }
	void OnRegister() { NativeCall<void>(this, "UGeometryCollectionComponent.OnRegister()"); }
	void UpdateBrokenAndDecayedStates() { NativeCall<void>(this, "UGeometryCollectionComponent.UpdateBrokenAndDecayedStates()"); }
	void NotifyBreak(const FChaosBreakEvent& Event) { NativeCall<void, const FChaosBreakEvent&>(this, "UGeometryCollectionComponent.NotifyBreak(FChaosBreakEvent&)", Event); }
	void InitializeEmbeddedGeometry() { NativeCall<void>(this, "UGeometryCollectionComponent.InitializeEmbeddedGeometry()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGeometryCollectionComponent.CreateSceneProxy()"); }
	FString* GetDebugInfo(FString* result) { return NativeCall<FString*, FString*>(this, "UGeometryCollectionComponent.GetDebugInfo()", result); }
	bool FindLeafTransformByLineTrace(UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, int& OutLeafTransformIndex, FName& OutLeafTransformName) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, int &, FName &>(this, "UGeometryCollectionComponent.FindLeafTransformByLineTrace(UE::Math::TVector<double>,UE::Math::TVector<double>,int&,FName&)", *Start, *End, OutLeafTransformIndex, OutLeafTransformName); }
	FPhysScene_Chaos* GetInnerChaosScene() { return NativeCall<FPhysScene_Chaos*>(this, "UGeometryCollectionComponent.GetInnerChaosScene()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UGeometryCollectionComponent.GetNumMaterials()"); }
	void NotifyRemoval(const FChaosRemovalEvent& Event) { NativeCall<void, const FChaosRemovalEvent&>(this, "UGeometryCollectionComponent.NotifyRemoval(FChaosRemovalEvent&)", Event); }
	void RefreshEmbeddedGeometry() { NativeCall<void>(this, "UGeometryCollectionComponent.RefreshEmbeddedGeometry()"); }
	void BeginPlay() { NativeCall<void>(this, "UGeometryCollectionComponent.BeginPlay()"); }
	void ProcessRepData() { NativeCall<void>(this, "UGeometryCollectionComponent.ProcessRepData()"); }
	void ProcessRepStateDataOnPT() { NativeCall<void>(this, "UGeometryCollectionComponent.ProcessRepStateDataOnPT()"); }
	void AddImpulse(UE::Math::TVector<double>* Impulse, FName BoneName, bool bVelChange) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName, bool>(this, "UGeometryCollectionComponent.AddImpulse(UE::Math::TVector<double>,FName,bool)", *Impulse, BoneName, bVelChange); }
	FGeometryDynamicCollection* GetDynamicCollection() { return NativeCall<FGeometryDynamicCollection*>(this, "UGeometryCollectionComponent.GetDynamicCollection()"); }
	void IncrementSleepTimer(float DeltaTime) { NativeCall<void, float>(this, "UGeometryCollectionComponent.IncrementSleepTimer(float)", DeltaTime); }
	void LoadCollisionProfiles() { NativeCall<void>(this, "UGeometryCollectionComponent.LoadCollisionProfiles()"); }
	void EndPlay(EEndPlayReason::Type ReasonEnd) { NativeCall<void, EEndPlayReason::Type>(this, "UGeometryCollectionComponent.EndPlay(EEndPlayReason::Type)", ReasonEnd); }
	float CalculateMass(FName BoneName) { return NativeCall<float, FName>(this, "UGeometryCollectionComponent.CalculateMass(FName)", BoneName); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UGeometryCollectionComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	void PostLoad() { NativeCall<void>(this, "UGeometryCollectionComponent.PostLoad()"); }
	float ComputeMassScaleRelativeToAsset() { return NativeCall<float>(this, "UGeometryCollectionComponent.ComputeMassScaleRelativeToAsset()"); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UGeometryCollectionComponent.SendRenderDynamicData_Concurrent()"); }
	bool HasAnySockets() { return NativeCall<bool>(this, "UGeometryCollectionComponent.HasAnySockets()"); }
	void AddImpulseAtLocation(UE::Math::TVector<double>* Impulse, UE::Math::TVector<double>* WorldLocation, FName BoneName) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); if (!WorldLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, FName>(this, "UGeometryCollectionComponent.AddImpulseAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", *Impulse, *WorldLocation, BoneName); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UGeometryCollectionComponent.IsNavigationRelevant()"); }
	void MoveComponentToRootTransform() { NativeCall<void>(this, "UGeometryCollectionComponent.MoveComponentToRootTransform()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UGeometryCollectionComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	bool IsFullyDecayed() { return NativeCall<bool>(this, "UGeometryCollectionComponent.IsFullyDecayed()"); }
	void DispatchChaosPhysicsCollisionBlueprintEvents(const FChaosPhysicsCollisionInfo& CollisionInfo) { NativeCall<void, const FChaosPhysicsCollisionInfo&>(this, "UGeometryCollectionComponent.DispatchChaosPhysicsCollisionBlueprintEvents(FChaosPhysicsCollisionInfo&)", CollisionInfo); }
	void UpdateRemovalIfNeeded() { NativeCall<void>(this, "UGeometryCollectionComponent.UpdateRemovalIfNeeded()"); }
	bool ProcessRepData(float DeltaTime, float SimTime) { return NativeCall<bool, float, float>(this, "UGeometryCollectionComponent.ProcessRepData(float,float)", DeltaTime, SimTime); }
	void ProcessRepDataOnPT() { NativeCall<void>(this, "UGeometryCollectionComponent.ProcessRepDataOnPT()"); }
	void AddForceAtLocation(UE::Math::TVector<double>* Force, UE::Math::TVector<double>* WorldLocation, FName BoneName) { if (!Force) throw std::invalid_argument("Null native value parameter"); if (!WorldLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, FName>(this, "UGeometryCollectionComponent.AddForceAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", *Force, *WorldLocation, BoneName); }
	void AddRadialImpulse(UE::Math::TVector<double>* Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange) { if (!Origin) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, float, float, ERadialImpulseFalloff, bool>(this, "UGeometryCollectionComponent.AddRadialImpulse(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,bool)", *Origin, Radius, Strength, Falloff, bVelChange); }
	void SetAngularDamping(float InDamping) { NativeCall<void, float>(this, "UGeometryCollectionComponent.SetAngularDamping(float)", InDamping); }
	void AddRadialForce(UE::Math::TVector<double>* Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bAccelChange) { if (!Origin) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, float, float, ERadialImpulseFalloff, bool>(this, "UGeometryCollectionComponent.AddRadialForce(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,bool)", *Origin, Radius, Strength, Falloff, bAccelChange); }
	void BuildInitialFilterData() { NativeCall<void>(this, "UGeometryCollectionComponent.BuildInitialFilterData()"); }
	void UpdateCachedBounds() { NativeCall<void>(this, "UGeometryCollectionComponent.UpdateCachedBounds()"); }
	void OnUnregister() { NativeCall<void>(this, "UGeometryCollectionComponent.OnUnregister()"); }
	void InitializeRemovalDynamicAttributesIfNeeded() { NativeCall<void>(this, "UGeometryCollectionComponent.InitializeRemovalDynamicAttributesIfNeeded()"); }
	void RegisterForEvents() { NativeCall<void>(this, "UGeometryCollectionComponent.RegisterForEvents()"); }
	bool CanBeUsedInPhysicsReplication(FName BoneName) { return NativeCall<bool, FName>(this, "UGeometryCollectionComponent.CanBeUsedInPhysicsReplication(FName)", BoneName); }
	void ResetDynamicCollection() { NativeCall<void>(this, "UGeometryCollectionComponent.ResetDynamicCollection()"); }
	void OnPostPhysicsSync() { NativeCall<void>(this, "UGeometryCollectionComponent.OnPostPhysicsSync()"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UGeometryCollectionComponent.ShouldCreatePhysicsState()"); }
	void AddTorqueInRadians(UE::Math::TVector<double>* Torque, FName BoneName, bool bAccelChange) { if (!Torque) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName, bool>(this, "UGeometryCollectionComponent.AddTorqueInRadians(UE::Math::TVector<double>,FName,bool)", *Torque, BoneName, bAccelChange); }
	void OnActorEnableCollisionChanged() { NativeCall<void>(this, "UGeometryCollectionComponent.OnActorEnableCollisionChanged()"); }
	void SetLinearDamping(float InDamping) { NativeCall<void, float>(this, "UGeometryCollectionComponent.SetLinearDamping(float)", InDamping); }
	void RestTransformsChanged() { NativeCall<void>(this, "UGeometryCollectionComponent.RestTransformsChanged()"); }
	void DispatchFieldCommand(const FFieldSystemCommand& InCommand) { NativeCall<void, const FFieldSystemCommand&>(this, "UGeometryCollectionComponent.DispatchFieldCommand(FFieldSystemCommand&)", InCommand); }
	void InitializeComponent() { NativeCall<void>(this, "UGeometryCollectionComponent.InitializeComponent()"); }
	void OnComponentCollisionSettingsChanged(bool bUpdateOverlaps) { NativeCall<void, bool>(this, "UGeometryCollectionComponent.OnComponentCollisionSettingsChanged(bool)", bUpdateOverlaps); }
	void SetNotifyBreaks(bool bNewNotifyBreaks) { NativeCall<void, bool>(this, "UGeometryCollectionComponent.SetNotifyBreaks(bool)", bNewNotifyBreaks); }
	void IncrementBreakTimer(float DeltaTime) { NativeCall<void, float>(this, "UGeometryCollectionComponent.IncrementBreakTimer(float)", DeltaTime); }
	int GetRootIndex() { return NativeCall<int>(this, "UGeometryCollectionComponent.GetRootIndex()"); }
	void ForceBrokenForCustomRenderer(bool bForceBroken) { NativeCall<void, bool>(this, "UGeometryCollectionComponent.ForceBrokenForCustomRenderer(bool)", bForceBroken); }
	void SetInitialClusterBreaks(const TArray<int, TSizedDefaultAllocator<32> >& ReleaseIndices) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "UGeometryCollectionComponent.SetInitialClusterBreaks(TArray<int,TSizedDefaultAllocator<32>>&)", ReleaseIndices); }
	void UpdateRepStateAndDynamicData() { NativeCall<void>(this, "UGeometryCollectionComponent.UpdateRepStateAndDynamicData()"); }
	bool CalculateInnerSphere(int TransformIndex, UE::Math::TSphere<double>& SphereOut) { return NativeCall<bool, int, UE::Math::TSphere<double>&>(this, "UGeometryCollectionComponent.CalculateInnerSphere(int,UE::Math::TSphere<double>&)", TransformIndex, SphereOut); }
	void AddDynamicCollectionAttributes() { NativeCall<void>(this, "UGeometryCollectionComponent.AddDynamicCollectionAttributes()"); }
	void AddForce(UE::Math::TVector<double>* Force, FName BoneName, bool bAccelChange) { if (!Force) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName, bool>(this, "UGeometryCollectionComponent.AddForce(UE::Math::TVector<double>,FName,bool)", *Force, BoneName, bAccelChange); }
	bool DoesSocketExist(FName InSocketName) { return NativeCall<bool, FName>(this, "UGeometryCollectionComponent.DoesSocketExist(FName)", InSocketName); }
	void SendDynamicDataToSceneProxy() { NativeCall<void>(this, "UGeometryCollectionComponent.SendDynamicDataToSceneProxy()"); }
	UPhysicalMaterial* GetPhysicalMaterial() { return NativeCall<UPhysicalMaterial*>(this, "UGeometryCollectionComponent.GetPhysicalMaterial()"); }
	UMaterialInterface* GetMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UGeometryCollectionComponent.GetMaterial(int)", MaterialIndex); }
	void SetRestCollection(const UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults) { NativeCall<void, const UGeometryCollection*, bool>(this, "UGeometryCollectionComponent.SetRestCollection(UGeometryCollection*,bool)", RestCollectionIn, bApplyAssetDefaults); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGeometryCollectionComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
