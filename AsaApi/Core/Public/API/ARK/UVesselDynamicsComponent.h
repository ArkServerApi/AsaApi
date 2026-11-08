#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UVesselDynamicsComponent : public UPrimitiveComponent
{
public:
	UVesselDynamicsComponent() = delete;
	~UVesselDynamicsComponent() = delete;
	UVesselDynamicsComponent(const UVesselDynamicsComponent&) = delete;
	UVesselDynamicsComponent& operator=(const UVesselDynamicsComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVesselDynamicsComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVesselDynamicsComponent"); }

	float& PointStepField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.PointStep"); }
	bool& bEnableBuoyancyField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bEnableBuoyancy"); }
	bool& bRealUseBuoyancyField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bRealUseBuoyancy"); }
	bool& bFrozenPhysicsField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bFrozenPhysics"); }
	int& UseLODLevelField() { return *GetNativePointerField<int*>(this, "UVesselDynamicsComponent.UseLODLevel"); }
	float& PointsOffsetField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.PointsOffset"); }
	UStaticMesh*& HullMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "UVesselDynamicsComponent.HullMesh"); }
	UStaticMesh*& DeckMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "UVesselDynamicsComponent.DeckMesh"); }
	FVesselErrorCorrection& ShipErrorCorrectionField() { return *GetNativePointerField<FVesselErrorCorrection*>(this, "UVesselDynamicsComponent.ShipErrorCorrection"); }
	FRepSailingShipMovement& ReplicatedSailingShipMovementField() { return *GetNativePointerField<FRepSailingShipMovement*>(this, "UVesselDynamicsComponent.ReplicatedSailingShipMovement"); }
	float& ReplicatedSimulationTimeField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.ReplicatedSimulationTime"); }
	bool& bDisableBuoyancySimulationOnClientField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bDisableBuoyancySimulationOnClient"); }
	bool& bDisableServerUpdatesField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bDisableServerUpdates"); }
	bool& bDisableVelocityUpdatesField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bDisableVelocityUpdates"); }
	float& SimpleBuoyancyRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SimpleBuoyancyRotationInterpSpeed"); }
	bool& bSimpleBuoyancyUseSpringField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bSimpleBuoyancyUseSpring"); }
	float& SimpleBuoyancySpringDampingField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SimpleBuoyancySpringDamping"); }
	float& SimpleBuoyancySpringStiffnessField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SimpleBuoyancySpringStiffness"); }
	float& MaxSpringZSpeedField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.MaxSpringZSpeed"); }
	float& MeanMaxZWaveBiasField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.MeanMaxZWaveBias"); }
	float& SimpleBuoyancyAngularSpringDampingField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SimpleBuoyancyAngularSpringDamping"); }
	float& SimpleBuoyancyAngularSpringStiffnessField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SimpleBuoyancyAngularSpringStiffness"); }
	float& SimpleBuoyancyShipMassField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SimpleBuoyancyShipMass"); }
	float& TranslationSpringShipMassMultiplierField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.TranslationSpringShipMassMultiplier"); }
	float& AngularSpringShipMassMultiplierField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.AngularSpringShipMassMultiplier"); }
	float& SimpleBuoyancyLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SimpleBuoyancyLocationInterpSpeed"); }
	float& SimpleBuoyancyZOffsetField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SimpleBuoyancyZOffset"); }
	bool& bEnableAirFloatField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bEnableAirFloat"); }
	float& AirFloatFrequencyField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.AirFloatFrequency"); }
	float& AirFloatHeightAmplitudeField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.AirFloatHeightAmplitude"); }
	float& AirFloatPitchAmplitudeField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.AirFloatPitchAmplitude"); }
	float& AirFloatRollAmplitudeField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.AirFloatRollAmplitude"); }
	float& AirFloatScaleField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.AirFloatScale"); }
	bool& bIsSinkingField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bIsSinking"); }
	float& SinkZVelocityField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SinkZVelocity"); }
	float& SinkingRotationSpeedField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SinkingRotationSpeed"); }
	float& SinkingBouyancyFactorModifierField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SinkingBouyancyFactorModifier"); }
	float& MaxApplySinkVelOnOceanFloorTimeField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.MaxApplySinkVelOnOceanFloorTime"); }
	float& BoundingBoxOriginForwardOffsetField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.BoundingBoxOriginForwardOffset"); }
	bool& bHadWaterVolumeField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bHadWaterVolume"); }
	bool& bSankToOceanFloorField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bSankToOceanFloor"); }
	bool& bSinkingEndedField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bSinkingEnded"); }
	float& SankToOceanFloorTimeField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SankToOceanFloorTime"); }
	double& LastTimeFinishedSeamlesslyTravellingField() { return *GetNativePointerField<double*>(this, "UVesselDynamicsComponent.LastTimeFinishedSeamlesslyTravelling"); }
	bool& bPreviousHasJustSeamlesslyTravelledToServerField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bPreviousHasJustSeamlesslyTravelledToServer"); }
	UE::Math::TRotator<double>& SinkingStartRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UVesselDynamicsComponent.SinkingStartRot"); }
	float& SinkingTargetPitchField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.SinkingTargetPitch"); }
	float& PrevLocalLocSinkZDiffField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.PrevLocalLocSinkZDiff"); }
	float& CurrLocalLocSinkZDiffField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.CurrLocalLocSinkZDiff"); }
	UE::Math::TVector<double>& VelocityFromPrevServerField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.VelocityFromPrevServer"); }
	float& CreationTimeField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.CreationTime"); }
	APhysicsVolume*& MyVolumeOverrideField() { return *GetNativePointerField<APhysicsVolume**>(this, "UVesselDynamicsComponent.MyVolumeOverride"); }
	APhysicsVolume*& LastValidVolumeOverrideField() { return *GetNativePointerField<APhysicsVolume**>(this, "UVesselDynamicsComponent.LastValidVolumeOverride"); }
	double& LastStartedFallingTimeField() { return *GetNativePointerField<double*>(this, "UVesselDynamicsComponent.LastStartedFallingTime"); }
	double& LastBasedPhysComponentOnTimeField() { return *GetNativePointerField<double*>(this, "UVesselDynamicsComponent.LastBasedPhysComponentOnTime"); }
	bool& bClientShouldUpdateThisGameTickField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bClientShouldUpdateThisGameTick"); }
	bool& bClientSnapToFinalTransformField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bClientSnapToFinalTransform"); }
	bool& bClientWasOnScreenField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bClientWasOnScreen"); }
	unsigned int& ClientStaggerPhaseField() { return *GetNativePointerField<unsigned int*>(this, "UVesselDynamicsComponent.ClientStaggerPhase"); }
	bool& bClientStaggerSleepThisTickField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bClientStaggerSleepThisTick"); }
	bool& bClientBodySleptByStaggerField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bClientBodySleptByStagger"); }
	double& LastClientStaggerUpdateTimeField() { return *GetNativePointerField<double*>(this, "UVesselDynamicsComponent.LastClientStaggerUpdateTime"); }
	float& ClientStaggerInterpDeltaTimeField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.ClientStaggerInterpDeltaTime"); }
	FDelegateHandle& OnWorldPostActorTickHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UVesselDynamicsComponent.OnWorldPostActorTickHandle"); }
	bool& bHasPreviousShipTransformField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bHasPreviousShipTransform"); }
	UE::Math::TVector<double>& SpringVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.SpringVelocity"); }
	UE::Math::TRotator<double>& SpringAngularVelocityField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UVesselDynamicsComponent.SpringAngularVelocity"); }
	UE::Math::TRotator<double>& SpringAngularPrevErrorField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "UVesselDynamicsComponent.SpringAngularPrevError"); }
	float& AirFloatPhaseField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.AirFloatPhase"); }
	float& CurrentAirFloatPitchField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.CurrentAirFloatPitch"); }
	float& CurrentAirFloatRollField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.CurrentAirFloatRoll"); }
	float& LastAppliedAirFloatHeightField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.LastAppliedAirFloatHeight"); }
	float& LastAppliedAirFloatPitchField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.LastAppliedAirFloatPitch"); }
	float& LastAppliedAirFloatRollField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.LastAppliedAirFloatRoll"); }
	double& LastRecievedTargetServerStateTimeField() { return *GetNativePointerField<double*>(this, "UVesselDynamicsComponent.LastRecievedTargetServerStateTime"); }
	FRigidBodyState& TargetServerStateField() { return *GetNativePointerField<FRigidBodyState*>(this, "UVesselDynamicsComponent.TargetServerState"); }
	bool& bDebugVesselDynamicsField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bDebugVesselDynamics"); }
	float& InvMassToCollideWithStaticMultiplierField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.InvMassToCollideWithStaticMultiplier"); }
	float& MaxImpulseToCollideWithStaticField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.MaxImpulseToCollideWithStatic"); }
	bool& bAllowVesselToFallField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bAllowVesselToFall"); }
	double& LastCheckForShouldFallTimeField() { return *GetNativePointerField<double*>(this, "UVesselDynamicsComponent.LastCheckForShouldFallTime"); }
	float& FallingCheck_Interval_MINField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.FallingCheck_Interval_MIN"); }
	float& FallingCheck_Interval_MAXField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.FallingCheck_Interval_MAX"); }
	float& FallingCheck_Interval_CurrentField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.FallingCheck_Interval_Current"); }
	float& FallingCheck_DistanceField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.FallingCheck_Distance"); }
	float& FallingCheck_SnapToOceanDistanceField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.FallingCheck_SnapToOceanDistance"); }
	UE::Math::TVector<double>& PrevLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.PrevLocation"); }
	bool& bHasValidWaveDataField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bHasValidWaveData"); }
	float& CollisionImpulseMultiplierField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.CollisionImpulseMultiplier"); }
	UE::Math::TVector<double>& KinematicCapsuleScaleField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.KinematicCapsuleScale"); }
	UE::Math::TVector<double>& KinematicCapsuleOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.KinematicCapsuleOffset"); }
	float& KinematicCollisionSkinField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.KinematicCollisionSkin"); }
	float& KinematicMaxDepenetrationPerTickField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.KinematicMaxDepenetrationPerTick"); }
	bool& bConstrainCollisionResponseToHorizontalField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bConstrainCollisionResponseToHorizontal"); }
	bool& bUseBoxKinematicSweepField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bUseBoxKinematicSweep"); }
	bool& bTreatWaterAsBlockingCollisionField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bTreatWaterAsBlockingCollision"); }
	bool& bSlideOnKinematicBlockingHitsField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bSlideOnKinematicBlockingHits"); }
	bool& bLimitKinematicPitchField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bLimitKinematicPitch"); }
	float& MaxKinematicPitchAngleField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.MaxKinematicPitchAngle"); }
	FVesselKinematicPhysicsState& KinematicStateField() { return *GetNativePointerField<FVesselKinematicPhysicsState*>(this, "UVesselDynamicsComponent.KinematicState"); }
	bool& bDebugShowKinematicCollisionCapsuleField() { return *GetNativePointerField<bool*>(this, "UVesselDynamicsComponent.bDebugShowKinematicCollisionCapsule"); }
	float& MinXYVelocityForSweepTestField() { return *GetNativePointerField<float*>(this, "UVesselDynamicsComponent.MinXYVelocityForSweepTest"); }
	FVesselKinematicAsyncSweepQuery& PendingKinematicAsyncSweepQueryField() { return *GetNativePointerField<FVesselKinematicAsyncSweepQuery*>(this, "UVesselDynamicsComponent.PendingKinematicAsyncSweepQuery"); }
	BitFieldValue<bool, unsigned __int32> bUseDeltaTime() { return { this, "UVesselDynamicsComponent.bUseDeltaTime"}; }
	BitFieldValue<bool, unsigned __int32> bEnableClientSimulationForCorrections() { return { this, "UVesselDynamicsComponent.bEnableClientSimulationForCorrections"}; }
	BitFieldValue<bool, unsigned __int32> bDisablePhysicsRelevancyUpdate() { return { this, "UVesselDynamicsComponent.bDisablePhysicsRelevancyUpdate"}; }
	BitFieldValue<bool, unsigned __int32> bDisableBuoyancyPointCreationLog() { return { this, "UVesselDynamicsComponent.bDisableBuoyancyPointCreationLog"}; }
	BitFieldValue<bool, unsigned __int32> bForceFloat() { return { this, "UVesselDynamicsComponent.bForceFloat"}; }
	BitFieldValue<bool, unsigned __int32> bUsePhysicsSubstepSimulationStartedEvent() { return { this, "UVesselDynamicsComponent.bUsePhysicsSubstepSimulationStartedEvent"}; }
	BitFieldValue<bool, unsigned char> bEnableATLASPhysicsReplication() { return { this, "UVesselDynamicsComponent.bEnableATLASPhysicsReplication"}; }
	void AddTorqueInRadians(UE::Math::TVector<double>* Torque, FName BoneName, bool bAccelChange) { if (!Torque) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName, bool>(this, "UVesselDynamicsComponent.AddTorqueInRadians(UE::Math::TVector<double>,FName,bool)", *Torque, BoneName, bAccelChange); }
	bool ApplyKinematicStaticHit(const FHitResult& Hit, bool& bHasBlockingHits, float& ClosestHitTime) { return NativeCall<bool, const FHitResult&, bool&, float&>(this, "UVesselDynamicsComponent.ApplyKinematicStaticHit(FHitResult&,bool&,float&)", Hit, bHasBlockingHits, ClosestHitTime); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UVesselDynamicsComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool ShouldApplyOwnerReplicatedVesselState() { return NativeCall<bool>(this, "UVesselDynamicsComponent.ShouldApplyOwnerReplicatedVesselState()"); }
	void RefreshOwnerVesselDynamicsState() { NativeCall<void>(this, "UVesselDynamicsComponent.RefreshOwnerVesselDynamicsState()"); }
	void PostNetReceivePhysicState() { NativeCall<void>(this, "UVesselDynamicsComponent.PostNetReceivePhysicState()"); }
	void ToggleBuoyancy(bool bEnabled) { NativeCall<void, bool>(this, "UVesselDynamicsComponent.ToggleBuoyancy(bool)", bEnabled); }
	void OnRep_MyVolumeOverride() { NativeCall<void>(this, "UVesselDynamicsComponent.OnRep_MyVolumeOverride()"); }
	void SetIsFalling(bool NewIsFalling) { NativeCall<void, bool>(this, "UVesselDynamicsComponent.SetIsFalling(bool)", NewIsFalling); }
	void ApplyKinematicAngularImpulseWorld(const UE::Math::TVector<double>& AngularImpulseWorld) { NativeCall<void, const UE::Math::TVector<double>&>(this, "UVesselDynamicsComponent.ApplyKinematicAngularImpulseWorld(UE::Math::TVector<double>&)", AngularImpulseWorld); }
	bool IsUsingOverridenPhysicsVolume() { return NativeCall<bool>(this, "UVesselDynamicsComponent.IsUsingOverridenPhysicsVolume()"); }
	void SetSimulatePhysics(bool bSimulate) { NativeCall<void, bool>(this, "UVesselDynamicsComponent.SetSimulatePhysics(bool)", bSimulate); }
	UE::Math::TVector<double>* GetVesselLinearVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.GetVesselLinearVelocity()", result); }
	void SetLinearDamping(float InDamping) { NativeCall<void, float>(this, "UVesselDynamicsComponent.SetLinearDamping(float)", InDamping); }
	float ComputeKinematicAngularImpulseDenominator(const UE::Math::TVector<double>& Radius, const UE::Math::TVector<double>& Normal) { return NativeCall<float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UVesselDynamicsComponent.ComputeKinematicAngularImpulseDenominator(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Radius, Normal); }
	float GetMass() { return NativeCall<float>(this, "UVesselDynamicsComponent.GetMass()"); }
	void BeginDestroy() { NativeCall<void>(this, "UVesselDynamicsComponent.BeginDestroy()"); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UVesselDynamicsComponent.OnCreatePhysicsState()"); }
	bool IsVesselFalling() { return NativeCall<bool>(this, "UVesselDynamicsComponent.IsVesselFalling()"); }
	UE::Math::TVector<double>* GetKinematicHullLowestPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.GetKinematicHullLowestPoint()", result); }
	void OnHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, UE::Math::TVector<double>* NormalImpulse, const FHitResult& Hit) { if (!NormalImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UPrimitiveComponent *, AActor *, UPrimitiveComponent *, UE :: Math :: TVector < double >, const FHitResult &>(this, "UVesselDynamicsComponent.OnHitCallback(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", HitComponent, OtherActor, OtherComp, *NormalImpulse, Hit); }
	void ResolveCharacterPenetrations() { NativeCall<void>(this, "UVesselDynamicsComponent.ResolveCharacterPenetrations()"); }
	bool IsAtOceanFloor() { return NativeCall<bool>(this, "UVesselDynamicsComponent.IsAtOceanFloor()"); }
	bool GetRigidBodyState(FRigidBodyState& OutState, FName BoneName) { return NativeCall<bool, FRigidBodyState&, FName>(this, "UVesselDynamicsComponent.GetRigidBodyState(FRigidBodyState&,FName)", OutState, BoneName); }
	void InitKinematicVesselStateFromCurrentBody() { NativeCall<void>(this, "UVesselDynamicsComponent.InitKinematicVesselStateFromCurrentBody()"); }
	void ApplySinkingEndedCleanup() { NativeCall<void>(this, "UVesselDynamicsComponent.ApplySinkingEndedCleanup()"); }
	float GetVesselInvMass() { return NativeCall<float>(this, "UVesselDynamicsComponent.GetVesselInvMass()"); }
	bool VesselApplyRigidBodyState(const FRigidBodyState& NewState, const FVesselErrorCorrection& ErrorCorrection) { return NativeCall<bool, const FRigidBodyState&, const FVesselErrorCorrection&>(this, "UVesselDynamicsComponent.VesselApplyRigidBodyState(FRigidBodyState&,FVesselErrorCorrection&)", NewState, ErrorCorrection); }
	void OnVolumeOverrideChanged() { NativeCall<void>(this, "UVesselDynamicsComponent.OnVolumeOverrideChanged()"); }
	bool FindWaterSurfaceBelow(const UE::Math::TVector<double>& Point, float MaxDepth, float& OutSurfaceZ, APhysicsVolume** OutVolume) { return NativeCall<bool, const UE::Math::TVector<double>&, float, float&, APhysicsVolume**>(this, "UVesselDynamicsComponent.FindWaterSurfaceBelow(UE::Math::TVector<double>&,float,float&,APhysicsVolume**)", Point, MaxDepth, OutSurfaceZ, OutVolume); }
	void ProcessAsyncSweepsResults(float DeltaTime) { NativeCall<void, float>(this, "UVesselDynamicsComponent.ProcessAsyncSweepsResults(float)", DeltaTime); }
	void UpdateBuoyancy(float DeltaTime) { NativeCall<void, float>(this, "UVesselDynamicsComponent.UpdateBuoyancy(float)", DeltaTime); }
	bool IsDistanceAboveOcean(float CheckDistance) { return NativeCall<bool, float>(this, "UVesselDynamicsComponent.IsDistanceAboveOcean(float)", CheckDistance); }
	bool IsPhysicsAwake() { return NativeCall<bool>(this, "UVesselDynamicsComponent.IsPhysicsAwake()"); }
	void Net_SetVolumeOverride(APhysicsVolume* NewVolume) { NativeCall<void, APhysicsVolume*>(this, "UVesselDynamicsComponent.Net_SetVolumeOverride(APhysicsVolume*)", NewVolume); }
	void BeginPlay() { NativeCall<void>(this, "UVesselDynamicsComponent.BeginPlay()"); }
	float GetLinearDamping() { return NativeCall<float>(this, "UVesselDynamicsComponent.GetLinearDamping()"); }
	void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker&>(this, "UVesselDynamicsComponent.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	APhysicsVolume* GetVolumeOverride() { return NativeCall<APhysicsVolume*>(this, "UVesselDynamicsComponent.GetVolumeOverride()"); }
	UE::Math::TVector<double>* GetVesselAngularVelocityRad(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.GetVesselAngularVelocityRad()", result); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UVesselDynamicsComponent.GetBodySetup()"); }
	APhysicsVolume* TraceForWaterVolumes(float TraceDistance) { return NativeCall<APhysicsVolume*, float>(this, "UVesselDynamicsComponent.TraceForWaterVolumes(float)", TraceDistance); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UVesselDynamicsComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UVesselDynamicsComponent.CreateSceneProxy()"); }
	float GetAngularDamping() { return NativeCall<float>(this, "UVesselDynamicsComponent.GetAngularDamping()"); }
	void AddImpulseAtLocation(UE::Math::TVector<double>* Impulse, UE::Math::TVector<double>* Location, FName BoneName) { if (!Impulse) throw std::invalid_argument("Null native value parameter"); if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, FName>(this, "UVesselDynamicsComponent.AddImpulseAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", *Impulse, *Location, BoneName); }
	void GatherCurrentMovement() { NativeCall<void>(this, "UVesselDynamicsComponent.GatherCurrentMovement()"); }
	void UpdatePhysicsRelevancy(bool bSimulateImmediately) { NativeCall<void, bool>(this, "UVesselDynamicsComponent.UpdatePhysicsRelevancy(bool)", bSimulateImmediately); }
	bool IsSymmetricCollision() { return NativeCall<bool>(this, "UVesselDynamicsComponent.IsSymmetricCollision()"); }
	void CheckForShouldBeFalling(float DeltaTime) { NativeCall<void, float>(this, "UVesselDynamicsComponent.CheckForShouldBeFalling(float)", DeltaTime); }
	void SimulateBuoyancy(float DeltaTime) { NativeCall<void, float>(this, "UVesselDynamicsComponent.SimulateBuoyancy(float)", DeltaTime); }
	UE::Math::TVector<double>* GetPhysicsLinearVelocity(UE::Math::TVector<double>* result, FName BoneName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UVesselDynamicsComponent.GetPhysicsLinearVelocity(FName)", result, BoneName); }
	void AddForceAtLocation(UE::Math::TVector<double>* Force, UE::Math::TVector<double>* Location, FName BoneName) { if (!Force) throw std::invalid_argument("Null native value parameter"); if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, FName>(this, "UVesselDynamicsComponent.AddForceAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", *Force, *Location, BoneName); }
	void SleepPhysics() { NativeCall<void>(this, "UVesselDynamicsComponent.SleepPhysics()"); }
	void OnRep_SailingShipReplicatedMovement() { NativeCall<void>(this, "UVesselDynamicsComponent.OnRep_SailingShipReplicatedMovement()"); }
	void SetAngularDamping(float InDamping) { NativeCall<void, float>(this, "UVesselDynamicsComponent.SetAngularDamping(float)", InDamping); }
	void ApplyKinematicVesselHit(const FHitResult& Hit) { NativeCall<void, const FHitResult&>(this, "UVesselDynamicsComponent.ApplyKinematicVesselHit(FHitResult&)", Hit); }
	bool IsSimulatingPhysics(FName BoneName) { return NativeCall<bool, FName>(this, "UVesselDynamicsComponent.IsSimulatingPhysics(FName)", BoneName); }
	UE::Math::TVector<double>* GetVesselVelocityAtPoint(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& WorldPoint) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "UVesselDynamicsComponent.GetVesselVelocityAtPoint(UE::Math::TVector<double>&)", result, WorldPoint); }
	void SetPhysicsAngularVelocityInRadians(UE::Math::TVector<double>* NewAngVel, bool bAddToCurrent, FName BoneName) { if (!NewAngVel) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool, FName>(this, "UVesselDynamicsComponent.SetPhysicsAngularVelocityInRadians(UE::Math::TVector<double>,bool,FName)", *NewAngVel, bAddToCurrent, BoneName); }
	UE::Math::TTransform<double>* GetPhysicsTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "UVesselDynamicsComponent.GetPhysicsTransform()", result); }
	UE::Math::TVector<double>* GetVesselCenterOfMass(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UVesselDynamicsComponent.GetVesselCenterOfMass()", result); }
	void OnRep_SinkingState() { NativeCall<void>(this, "UVesselDynamicsComponent.OnRep_SinkingState()"); }
	bool IsPawnOverlappingVessel(APrimalCharacter* OverlappedCharacter) { return NativeCall<bool, APrimalCharacter*>(this, "UVesselDynamicsComponent.IsPawnOverlappingVessel(APrimalCharacter*)", OverlappedCharacter); }
	void HandleWorldPostActorTick(UWorld* World, ELevelTick TickType, float DeltaSeconds) { NativeCall<void, UWorld*, ELevelTick, float>(this, "UVesselDynamicsComponent.HandleWorldPostActorTick(UWorld*,ELevelTick,float)", World, TickType, DeltaSeconds); }
	bool ComputePawnPenetrationAgainstShip(APrimalCharacter* OverlappedCharacter, FShipPawnPushPenetration& OutPenetration) { return NativeCall<bool, APrimalCharacter*, FShipPawnPushPenetration&>(this, "UVesselDynamicsComponent.ComputePawnPenetrationAgainstShip(APrimalCharacter*,FShipPawnPushPenetration&)", OverlappedCharacter, OutPenetration); }
	void ProcessCharacterPenetration(APrimalCharacter* OverlappedCharacter) { NativeCall<void, APrimalCharacter*>(this, "UVesselDynamicsComponent.ProcessCharacterPenetration(APrimalCharacter*)", OverlappedCharacter); }
	UE::Math::TVector<double>* GetPhysicsAngularVelocityInRadians(UE::Math::TVector<double>* result, FName BoneName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UVesselDynamicsComponent.GetPhysicsAngularVelocityInRadians(FName)", result, BoneName); }
	void SetAllPhysicsLinearVelocity(UE::Math::TVector<double>* NewVel, bool bAddToCurrent) { if (!NewVel) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool>(this, "UVesselDynamicsComponent.SetAllPhysicsLinearVelocity(UE::Math::TVector<double>,bool)", *NewVel, bAddToCurrent); }
	void WakePhysics() { NativeCall<void>(this, "UVesselDynamicsComponent.WakePhysics()"); }
};
