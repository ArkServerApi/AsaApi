#pragma once
#include "BulkForward.h"
#include "ASpectatorPawn.h"

struct AShooterSpectatorPawn : public ASpectatorPawn
{
public:
	AShooterSpectatorPawn() = delete;
	~AShooterSpectatorPawn() = delete;
	AShooterSpectatorPawn(const AShooterSpectatorPawn&) = delete;
	AShooterSpectatorPawn& operator=(const AShooterSpectatorPawn&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterSpectatorPawn"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterSpectatorPawn"); }

	bool& bIsAutoCyclingField() { return *GetNativePointerField<bool*>(this, "AShooterSpectatorPawn.bIsAutoCycling"); }
	double& LastAutoCycleTargetAliveTimeField() { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastAutoCycleTargetAliveTime"); }
	FTimerHandle& DoAutoCycleHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AShooterSpectatorPawn.DoAutoCycleHandle"); }
	float& MaxOrbitRadiusField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.MaxOrbitRadius"); }
	float& MinOrbitRadiusField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.MinOrbitRadius"); }
	UE::Math::TRotator<double>& OrbitCamRotField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "AShooterSpectatorPawn.OrbitCamRot"); }
	float& OrbitCamZoomField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.OrbitCamZoom"); }
	bool& bUseRealGimbalField() { return *GetNativePointerField<bool*>(this, "AShooterSpectatorPawn.bUseRealGimbal"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& CurrentOrbitCamTargetField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "AShooterSpectatorPawn.CurrentOrbitCamTarget"); }
	double& LastOrbitCamTargetAliveTimeField() { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastOrbitCamTargetAliveTime"); }
	float& DefaultBaseSpeedField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.DefaultBaseSpeed"); }
	float& DefaultBaseSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.DefaultBaseSpeedMultiplier"); }
	float& BaseSpeedField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.BaseSpeed"); }
	float& BaseSpeedAccelField() { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.BaseSpeedAccel"); }
	double& LastTeleportTimeField() { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastTeleportTime"); }
	double& LastOrbitCamOffField() { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastOrbitCamOff"); }
	BitFieldValue<bool, unsigned char> bOrbitCamera() { return { this, "AShooterSpectatorPawn.bOrbitCamera"}; }
	BitFieldValue<bool, unsigned char> bActiveWorldCollisions() { return { this, "AShooterSpectatorPawn.bActiveWorldCollisions"}; }
	void MoveForward(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.MoveForward(float)", Val); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.MoveUp(float)", Val); }
	void SpectatorDecreaseBaseSpeed() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeed()"); }
	void LoadSpectatorPositionFromIndex(int Index) { NativeCall<void, int>(this, "AShooterSpectatorPawn.LoadSpectatorPositionFromIndex(int)", Index); }
	void SpectatorNextPlayer() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorNextPlayer()"); }
	void BPOrbitCamOn(AActor* OrbitTarget) { NativeCall<void, AActor*>(this, "AShooterSpectatorPawn.BPOrbitCamOn(AActor*)", OrbitTarget); }
	void AutoCycle(float Duration) { NativeCall<void, float>(this, "AShooterSpectatorPawn.AutoCycle(float)", Duration); }
	void OrbitCamOn(TWeakObjectPtr<AActor, FWeakObjectPtr> OrbitTarget) { NativeCall<void, TWeakObjectPtr<AActor, FWeakObjectPtr>>(this, "AShooterSpectatorPawn.OrbitCamOn(TWeakObjectPtr<AActor,FWeakObjectPtr>)", OrbitTarget); }
	void LookUpAtRate(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.LookUpAtRate(float)", Val); }
	void DoAutoCycle() { NativeCall<void>(this, "AShooterSpectatorPawn.DoAutoCycle()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterSpectatorPawn.Tick(float)", DeltaSeconds); }
	void SpectatorDecreaseBaseSpeedEnd() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeedEnd()"); }
	void SpectatorIncreaseBaseSpeedEnd_Implementation() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorIncreaseBaseSpeedEnd_Implementation()"); }
	void TeleportSpectatorTo(UE::Math::TVector<double>* Location) { if (!Location) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "AShooterSpectatorPawn.TeleportSpectatorTo(UE::Math::TVector<double>)", *Location); }
	void PawnClientRestart() { NativeCall<void>(this, "AShooterSpectatorPawn.PawnClientRestart()"); }
	void SpectatorIncreaseBaseSpeedEnd() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorIncreaseBaseSpeedEnd()"); }
	void SpectatorIncreaseBaseSpeedStart_Implementation() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorIncreaseBaseSpeedStart_Implementation()"); }
	void TurnAtRate(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.TurnAtRate(float)", Val); }
	void TryOrbitCamOnMousePosition() { NativeCall<void>(this, "AShooterSpectatorPawn.TryOrbitCamOnMousePosition()"); }
	void SpectatorDecreaseBaseSpeedEnd_Implementation() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeedEnd_Implementation()"); }
	void SpectatorIncreaseBaseSpeedStart() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorIncreaseBaseSpeedStart()"); }
	void GetSavedSpectatorPositions(TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& Positions, TArray<UE::Math::TRotator<double>, TSizedDefaultAllocator<32> >& Rotations) { NativeCall<void, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >&, TArray<UE::Math::TRotator<double>, TSizedDefaultAllocator<32> >&>(this, "AShooterSpectatorPawn.GetSavedSpectatorPositions(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>>&)", Positions, Rotations); }
	float GetCurrentSpeed(float Val) { return NativeCall<float, float>(this, "AShooterSpectatorPawn.GetCurrentSpeed(float)", Val); }
	void SaveSpectatorPositionForIndex(int Index) { NativeCall<void, int>(this, "AShooterSpectatorPawn.SaveSpectatorPositionForIndex(int)", Index); }
	void SpectatorFire(bool bStart) { NativeCall<void, bool>(this, "AShooterSpectatorPawn.SpectatorFire(bool)", bStart); }
	void SpectatorPreviousPlayer() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorPreviousPlayer()"); }
	void OrbitCamOff() { NativeCall<void>(this, "AShooterSpectatorPawn.OrbitCamOff()"); }
	void SpectatorResetBaseSpeed() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorResetBaseSpeed()"); }
	void SpectatorTargeting(bool bStart) { NativeCall<void, bool>(this, "AShooterSpectatorPawn.SpectatorTargeting(bool)", bStart); }
	void LookInput(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.LookInput(float)", Val); }
	void SetSavedSpectatorPositionForIndex(int Index, UE::Math::TVector<double>* Position, UE::Math::TRotator<double>* Rotation) { if (!Position) throw std::invalid_argument("Null native value parameter"); if (!Rotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, int, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "AShooterSpectatorPawn.SetSavedSpectatorPositionForIndex(int,UE::Math::TVector<double>,UE::Math::TRotator<double>)", Index, *Position, *Rotation); }
	void SpectatorDecreaseBaseSpeedStart_Implementation() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeedStart_Implementation()"); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.MoveRight(float)", Val); }
	void SpectatorDecreaseBaseSpeedStart() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeedStart()"); }
	void SpectatorIncreaseBaseSpeed() { NativeCall<void>(this, "AShooterSpectatorPawn.SpectatorIncreaseBaseSpeed()"); }
	void TurnInput(float Val) { NativeCall<void, float>(this, "AShooterSpectatorPawn.TurnInput(float)", Val); }
	void SetupPlayerInputComponent(UInputComponent* WithInputComponent) { NativeCall<void, UInputComponent*>(this, "AShooterSpectatorPawn.SetupPlayerInputComponent(UInputComponent*)", WithInputComponent); }
};
