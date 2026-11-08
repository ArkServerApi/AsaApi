#pragma once
#include "BulkForward.h"
#include "AWindBooster.h"

struct AWindBoosterTunnel : public AWindBooster
{
public:
	AWindBoosterTunnel() = delete;
	~AWindBoosterTunnel() = delete;
	AWindBoosterTunnel(const AWindBoosterTunnel&) = delete;
	AWindBoosterTunnel& operator=(const AWindBoosterTunnel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWindBoosterTunnel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWindBoosterTunnel"); }

	USplineComponent*& TunnelSplineField() { return *GetNativePointerField<USplineComponent**>(this, "AWindBoosterTunnel.TunnelSpline"); }
	UBoxComponent*& TunnelVolumeField() { return *GetNativePointerField<UBoxComponent**>(this, "AWindBoosterTunnel.TunnelVolume"); }
	float& TunnelSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.TunnelSpeedMultiplier"); }
	float& TunnelAccelerationRateField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.TunnelAccelerationRate"); }
	float& TunnelMinEntrySpeedRatioField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.TunnelMinEntrySpeedRatio"); }
	float& EntryBlendTimeField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.EntryBlendTime"); }
	float& TunnelTurnRateField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.TunnelTurnRate"); }
	float& BodyTurnSmoothingField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.BodyTurnSmoothing"); }
	float& DragonLookaheadField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.DragonLookahead"); }
	float& MagnetStrengthField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.MagnetStrength"); }
	float& TunnelReleaseTimeField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.TunnelReleaseTime"); }
	float& EscapeLookAngleStartField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.EscapeLookAngleStart"); }
	float& EscapeLookAngleFullField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.EscapeLookAngleFull"); }
	float& EscapeBrakeInputRatioField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.EscapeBrakeInputRatio"); }
	float& DriftRadiusRatioField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.DriftRadiusRatio"); }
	float& DriftWavelengthField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.DriftWavelength"); }
	float& CameraAssistLookaheadField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraAssistLookahead"); }
	float& CameraTurnSmoothingField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraTurnSmoothing"); }
	float& CameraAssistSpeedField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraAssistSpeed"); }
	float& CameraAssistYieldRateField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraAssistYieldRate"); }
	float& CameraAssistResumeDelayField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraAssistResumeDelay"); }
	float& CameraTubeRadiusRatioField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraTubeRadiusRatio"); }
	float& CameraLateralFollowField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraLateralFollow"); }
	float& CameraBlendTimeField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraBlendTime"); }
	float& CameraSmoothSpeedField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.CameraSmoothSpeed"); }
	UStaticMesh*& TubeMeshField() { return *GetNativePointerField<UStaticMesh**>(this, "AWindBoosterTunnel.TubeMesh"); }
	UMaterialInterface*& TubeMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "AWindBoosterTunnel.TubeMaterial"); }
	UMaterialInterface*& TubeDisabledMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "AWindBoosterTunnel.TubeDisabledMaterial"); }
	TEnumAsByte<ESplineMeshAxis::Type>& TubeMeshForwardAxisField() { return *GetNativePointerField<TEnumAsByte<ESplineMeshAxis::Type>*>(this, "AWindBoosterTunnel.TubeMeshForwardAxis"); }
	float& TubeRadiusScaleField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.TubeRadiusScale"); }
	float& TubePieceLengthField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.TubePieceLength"); }
	float& TubeMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "AWindBoosterTunnel.TubeMaxDrawDistance"); }
	FDelegateHandle& PlayerDataUpdatedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AWindBoosterTunnel.PlayerDataUpdatedHandle"); }
	bool& bTubeShowsActiveField() { return *GetNativePointerField<bool*>(this, "AWindBoosterTunnel.bTubeShowsActive"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& DragonsInVolumeField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "AWindBoosterTunnel.DragonsInVolume"); }
	TWeakObjectPtr<AWindBoosterTunnel, FWeakObjectPtr>& NextTunnelField() { return *GetNativePointerField<TWeakObjectPtr<AWindBoosterTunnel, FWeakObjectPtr>*>(this, "AWindBoosterTunnel.NextTunnel"); }
	TWeakObjectPtr<AWindBoosterTunnel, FWeakObjectPtr>& PreviousTunnelField() { return *GetNativePointerField<TWeakObjectPtr<AWindBoosterTunnel, FWeakObjectPtr>*>(this, "AWindBoosterTunnel.PreviousTunnel"); }
	float GetSplineLength() { return NativeCall<float>(this, "AWindBoosterTunnel.GetSplineLength()"); }
	float GetMaxLateralDeviation() { return NativeCall<float>(this, "AWindBoosterTunnel.GetMaxLateralDeviation()"); }
	void BeginPlay() { NativeCall<void>(this, "AWindBoosterTunnel.BeginPlay()"); }
	void BuildTubeMesh() { NativeCall<void>(this, "AWindBoosterTunnel.BuildTubeMesh()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AWindBoosterTunnel.Tick(float)", DeltaSeconds); }
	void ApplyTubeMaterial() { NativeCall<void>(this, "AWindBoosterTunnel.ApplyTubeMaterial()"); }
	void HandleReachedTunnelEndBP(APrimalDinoCharacter* Dragon) { NativeCall<void, APrimalDinoCharacter*>(this, "AWindBoosterTunnel.HandleReachedTunnelEndBP(APrimalDinoCharacter*)", Dragon); }
	void HandlePlayerDataUpdated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "AWindBoosterTunnel.HandlePlayerDataUpdated(AShooterPlayerController*)", PC); }
	UE::Math::TVector<double>* GetSplineWorldLocationAtDistance(UE::Math::TVector<double>* result, float Distance) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "AWindBoosterTunnel.GetSplineWorldLocationAtDistance(float)", result, Distance); }
	void SetTubeMaterial(UMaterialInterface* NewMaterial) { NativeCall<void, UMaterialInterface*>(this, "AWindBoosterTunnel.SetTubeMaterial(UMaterialInterface*)", NewMaterial); }
	void OnTunnelVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "AWindBoosterTunnel.OnTunnelVolumeBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnTunnelVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "AWindBoosterTunnel.OnTunnelVolumeEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex); }
	UE::Math::TVector<double>* GetSplineWorldTangentAtDistance(UE::Math::TVector<double>* result, float Distance) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "AWindBoosterTunnel.GetSplineWorldTangentAtDistance(float)", result, Distance); }
	void LinkChainNeighbors() { NativeCall<void>(this, "AWindBoosterTunnel.LinkChainNeighbors()"); }
	void ApplyBoostToDragon(APrimalDinoCharacter* Dragon) { NativeCall<void, APrimalDinoCharacter*>(this, "AWindBoosterTunnel.ApplyBoostToDragon(APrimalDinoCharacter*)", Dragon); }
	void RefreshTubeActivation() { NativeCall<void>(this, "AWindBoosterTunnel.RefreshTubeActivation()"); }
	void HandleReachedTunnelEnd(APrimalDinoCharacter* Dragon) { NativeCall<void, APrimalDinoCharacter*>(this, "AWindBoosterTunnel.HandleReachedTunnelEnd(APrimalDinoCharacter*)", Dragon); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AWindBoosterTunnel.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
