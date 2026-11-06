#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APirateFleetCoordinator : public AActor
{
public:
	APirateFleetCoordinator() = delete;
	~APirateFleetCoordinator() = delete;
	APirateFleetCoordinator(const APirateFleetCoordinator&) = delete;
	APirateFleetCoordinator& operator=(const APirateFleetCoordinator&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APirateFleetCoordinator"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APirateFleetCoordinator"); }

	float& FormationSpawnJitterField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.FormationSpawnJitter"); }
	int& BossRewardCratesToDropField() { return *GetNativePointerField<int*>(this, "APirateFleetCoordinator.BossRewardCratesToDrop"); }
	FName& FollowTargetKeyNameField() { return *GetNativePointerField<FName*>(this, "APirateFleetCoordinator.FollowTargetKeyName"); }
	FName& FollowOffsetKeyNameField() { return *GetNativePointerField<FName*>(this, "APirateFleetCoordinator.FollowOffsetKeyName"); }
	float& LeashRadiusField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.LeashRadius"); }
	float& LeashGraceSecondsField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.LeashGraceSeconds"); }
	float& AggroDropRadiusField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.AggroDropRadius"); }
	float& MaxLifetimeSecondsField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.MaxLifetimeSeconds"); }
	float& AbandonRadiusField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.AbandonRadius"); }
	float& AbandonTimeoutSecondsField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.AbandonTimeoutSeconds"); }
	float& CoordinatorIntervalField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.CoordinatorInterval"); }
	float& GovernorIntervalField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.GovernorInterval"); }
	float& GovernorNearLagField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.GovernorNearLag"); }
	float& GovernorFarLagField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.GovernorFarLag"); }
	float& GovernorFloorField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.GovernorFloor"); }
	float& GovernorMaxHoldSecondsField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.GovernorMaxHoldSeconds"); }
	float& CaptainWanderConeHalfAngleField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.CaptainWanderConeHalfAngle"); }
	TWeakObjectPtr<APrimalPlayerFollowingShip, FWeakObjectPtr>& CaptainField() { return *GetNativePointerField<TWeakObjectPtr<APrimalPlayerFollowingShip, FWeakObjectPtr>*>(this, "APirateFleetCoordinator.Captain"); }
	TWeakObjectPtr<APrimalPlayerFollowingShip, FWeakObjectPtr>& HostField() { return *GetNativePointerField<TWeakObjectPtr<APrimalPlayerFollowingShip, FWeakObjectPtr>*>(this, "APirateFleetCoordinator.Host"); }
	TWeakObjectPtr<APrimalShip, FWeakObjectPtr>& SharedTargetField() { return *GetNativePointerField<TWeakObjectPtr<APrimalShip, FWeakObjectPtr>*>(this, "APirateFleetCoordinator.SharedTarget"); }
	double& SpawnTimeField() { return *GetNativePointerField<double*>(this, "APirateFleetCoordinator.SpawnTime"); }
	double& LastPlayerNearTimeField() { return *GetNativePointerField<double*>(this, "APirateFleetCoordinator.LastPlayerNearTime"); }
	bool& bRewardUpgradedField() { return *GetNativePointerField<bool*>(this, "APirateFleetCoordinator.bRewardUpgraded"); }
	bool& bAnyMemberDiedField() { return *GetNativePointerField<bool*>(this, "APirateFleetCoordinator.bAnyMemberDied"); }
	bool& bGovernorHoldingField() { return *GetNativePointerField<bool*>(this, "APirateFleetCoordinator.bGovernorHolding"); }
	bool& bGovernorStalledField() { return *GetNativePointerField<bool*>(this, "APirateFleetCoordinator.bGovernorStalled"); }
	double& GovernorHoldStartedAtField() { return *GetNativePointerField<double*>(this, "APirateFleetCoordinator.GovernorHoldStartedAt"); }
	float& LagAtHoldStartField() { return *GetNativePointerField<float*>(this, "APirateFleetCoordinator.LagAtHoldStart"); }
	bool& bFleetAwakeField() { return *GetNativePointerField<bool*>(this, "APirateFleetCoordinator.bFleetAwake"); }
	FTimerHandle& CoordinatorTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "APirateFleetCoordinator.CoordinatorTimer"); }
	FTimerHandle& GovernorTimerField() { return *GetNativePointerField<FTimerHandle*>(this, "APirateFleetCoordinator.GovernorTimer"); }
	BitFieldValue<bool, unsigned char> bMatchCaptainColorization() { return { this, "APirateFleetCoordinator.bMatchCaptainColorization"}; }
	bool AnyPlayerWithin(float Radius, const UE::Math::TVector<double>& Loc) { return NativeCall<bool, float, const UE::Math::TVector<double>&>(this, "APirateFleetCoordinator.AnyPlayerWithin(float,UE::Math::TVector<double>&)", Radius, Loc); }
	void RegisterMember(APrimalPlayerFollowingShip* Ship, const UE::Math::TVector2<double>& Offset, bool bIsCaptain) { NativeCall<void, APrimalPlayerFollowingShip*, const UE::Math::TVector2<double>&, bool>(this, "APirateFleetCoordinator.RegisterMember(APrimalPlayerFollowingShip*,UE::Math::TVector2<double>&,bool)", Ship, Offset, bIsCaptain); }
	void TickCoordinator() { NativeCall<void>(this, "APirateFleetCoordinator.TickCoordinator()"); }
	void OnMemberDied(APrimalCharacter* DiedCharacter) { NativeCall<void, APrimalCharacter*>(this, "APirateFleetCoordinator.OnMemberDied(APrimalCharacter*)", DiedCharacter); }
	void GovernCaptainSpeed() { NativeCall<void>(this, "APirateFleetCoordinator.GovernCaptainSpeed()"); }
	void SpawnEscorts() { NativeCall<void>(this, "APirateFleetCoordinator.SpawnEscorts()"); }
	void UpdateSharedAggro(const TArray<int, TSizedDefaultAllocator<32> >& LivingIndices, const UE::Math::TVector<double>& FleetLoc) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&, const UE::Math::TVector<double>&>(this, "APirateFleetCoordinator.UpdateSharedAggro(TArray<int,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&)", LivingIndices, FleetLoc); }
	UE::Math::TVector<double>* FormationPoint(UE::Math::TVector<double>* result, const UE::Math::TVector2<double>& Offset) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector2<double>&>(this, "APirateFleetCoordinator.FormationPoint(UE::Math::TVector2<double>&)", result, Offset); }
	APrimalPlayerFollowingShip* ResolveHost() { return NativeCall<APrimalPlayerFollowingShip*>(this, "APirateFleetCoordinator.ResolveHost()"); }
	void DespawnFleet() { NativeCall<void>(this, "APirateFleetCoordinator.DespawnFleet()"); }
	void UpdateLeash(const TArray<int, TSizedDefaultAllocator<32> >& LivingIndices) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "APirateFleetCoordinator.UpdateLeash(TArray<int,TSizedDefaultAllocator<32>>&)", LivingIndices); }
	void InitializeFleet(APrimalPlayerFollowingShip* InCaptain) { NativeCall<void, APrimalPlayerFollowingShip*>(this, "APirateFleetCoordinator.InitializeFleet(APrimalPlayerFollowingShip*)", InCaptain); }
};
