#pragma once
#include "BulkForward.h"

struct APrimalBotAIController : APrimalDinoAIController
{
    // Fields

    float& DinoSearchRadiusField() { return *GetNativePointerField<float*>(this, "APrimalBotAIController.DinoSearchRadius"); }
    AAIAttackCoordinator*& AttackCoordinatorField() { return *GetNativePointerField<AAIAttackCoordinator**>(this, "APrimalBotAIController.AttackCoordinator"); }
    TSubclassOf<APrimalDinoAIController>& RiddenDinoControllerClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoAIController>*>(this, "APrimalBotAIController.RiddenDinoControllerClass"); }
    TWeakObjectPtr<APrimalDinoCharacter>& ClaimedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalBotAIController.ClaimedDino"); }
    long double& LastTimeGivenAttackPriorityField() { return *GetNativePointerField<long double*>(this, "APrimalBotAIController.LastTimeGivenAttackPriority"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBotAIController"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalBotAIController();
    //void InitializeBlackboardValues(const APrimalBotCharacter* Bot) { NativeCall<void, const APrimalBotCharacter*>(this, "APrimalBotAIController.InitializeBlackboardValues(APrimalBotCharacter*)", Bot); }
    void OnPossess(APawn* InPawn) { NativeCall<void, APawn*>(this, "APrimalBotAIController.OnPossess(APawn*)", InPawn); }
    float TimeSinceGivenAttackPriority() { return NativeCall<float>(this, "APrimalBotAIController.TimeSinceGivenAttackPriority()"); }
    void UpdateDinoClaim() { NativeCall<void>(this, "APrimalBotAIController.UpdateDinoClaim()"); }
    APrimalDinoCharacter* FindADinoToClaim() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalBotAIController.FindADinoToClaim()"); }
    bool ClaimDino(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBotAIController.ClaimDino(APrimalDinoCharacter*)", Dino); }
    void ReleaseClaimOnDino() { NativeCall<void>(this, "APrimalBotAIController.ReleaseClaimOnDino()"); }
    bool IsDinoRideable(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBotAIController.IsDinoRideable(APrimalDinoCharacter*)", Dino); }
    void OnCharacterAttachedToDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.OnCharacterAttachedToDino(APrimalDinoCharacter*)", Dino); }
    void OnCharacterDetachedFromDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.OnCharacterDetachedFromDino(APrimalDinoCharacter*)", Dino); }
    void ChangedAITarget_Implementation(AActor* OldTarget) { NativeCall<void, AActor*>(this, "APrimalBotAIController.ChangedAITarget_Implementation(AActor*)", OldTarget); }
    void SetHasAttackPriority(bool Value) { NativeCall<void, bool>(this, "APrimalBotAIController.SetHasAttackPriority(bool)", Value); }
    bool WantsAttackPriority() { return NativeCall<bool>(this, "APrimalBotAIController.WantsAttackPriority()"); }
    bool GetHasAttackPriority() { return NativeCall<bool>(this, "APrimalBotAIController.GetHasAttackPriority()"); }
    void SetRiddenDinoAttackPriority() { NativeCall<void>(this, "APrimalBotAIController.SetRiddenDinoAttackPriority()"); }
    void SetControllerOnDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.SetControllerOnDino(APrimalDinoCharacter*)", Dino); }
    //UPrimalBotRidingComponent* GetBotRidingComponent(const APrimalDinoCharacter* Dino) { return NativeCall<UPrimalBotRidingComponent*, const APrimalDinoCharacter*>(this, "APrimalBotAIController.GetBotRidingComponent(APrimalDinoCharacter*)", Dino); }

	float& SeatingStructureSearchRadiusField() { return *GetNativePointerField<float*>(this, "APrimalBotAIController.SeatingStructureSearchRadius"); }
	float& SeatingStructureSearchRadiusStationairyField() { return *GetNativePointerField<float*>(this, "APrimalBotAIController.SeatingStructureSearchRadiusStationairy"); }
	int& ClaimedSeatingStructureSeatNumberField() { return *GetNativePointerField<int*>(this, "APrimalBotAIController.ClaimedSeatingStructureSeatNumber"); }

	TWeakObjectPtr<APrimalStructureSeating, FWeakObjectPtr>& ClaimedSeatingStructureField() { return *GetNativePointerField<TWeakObjectPtr<APrimalStructureSeating, FWeakObjectPtr>*>(this, "APrimalBotAIController.ClaimedSeatingStructure"); }
	TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>& ControlledBotField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>*>(this, "APrimalBotAIController.ControlledBot"); }
	BitFieldValue<bool, unsigned char> bClaimTamedDinos() { return { this, "APrimalBotAIController.bClaimTamedDinos"}; }
	void SetIsDodgingBlackboardValue(bool value) { NativeCall<void, bool>(this, "APrimalBotAIController.SetIsDodgingBlackboardValue(bool)", value); }
	bool IsTooCloseToAttack() { return NativeCall<bool>(this, "APrimalBotAIController.IsTooCloseToAttack()"); }
	APrimalStructureSeating* FindSeatingStructureToClaim(int& outSeatNumber) { return NativeCall<APrimalStructureSeating*, int&>(this, "APrimalBotAIController.FindSeatingStructureToClaim(int&)", outSeatNumber); }
	void SetForcePathUpdate(bool value) { NativeCall<void, bool>(this, "APrimalBotAIController.SetForcePathUpdate(bool)", value); }
	bool IsTooFarToAttack() { return NativeCall<bool>(this, "APrimalBotAIController.IsTooFarToAttack()"); }
	void InitializeBlackboardValues(const APrimalBotCharacter* Bot) { NativeCall<void, const APrimalBotCharacter*>(this, "APrimalBotAIController.InitializeBlackboardValues(APrimalBotCharacter*)", Bot); }
	APrimalStructureSeating* BPFindSeatingStructureToClaim(int& outSeatNumber) { return NativeCall<APrimalStructureSeating*, int&>(this, "APrimalBotAIController.BPFindSeatingStructureToClaim(int&)", outSeatNumber); }
	bool CanSitOnStructure(APrimalStructureSeating* Structure) { return NativeCall<bool, APrimalStructureSeating*>(this, "APrimalBotAIController.CanSitOnStructure(APrimalStructureSeating*)", Structure); }
	void UpdateSeatingStructureClaim() { NativeCall<void>(this, "APrimalBotAIController.UpdateSeatingStructureClaim()"); }
	void SetAttackCoordinator(AAIAttackCoordinator* Coordinator) { NativeCall<void, AAIAttackCoordinator*>(this, "APrimalBotAIController.SetAttackCoordinator(AAIAttackCoordinator*)", Coordinator); }
	bool ShouldReleaseFromSeatingStructure() { return NativeCall<bool>(this, "APrimalBotAIController.ShouldReleaseFromSeatingStructure()"); }
	void BPOnCharacterDetachedFromStructure(APrimalStructureSeating* Structure) { NativeCall<void, APrimalStructureSeating*>(this, "APrimalBotAIController.BPOnCharacterDetachedFromStructure(APrimalStructureSeating*)", Structure); }
	void OnUnPossess() { NativeCall<void>(this, "APrimalBotAIController.OnUnPossess()"); }
	AActor* GetAlternativeSourceActorForOverlapTargetCheckTraces() { return NativeCall<AActor*>(this, "APrimalBotAIController.GetAlternativeSourceActorForOverlapTargetCheckTraces()"); }
	void BPOnCharacterDetachedFromDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.BPOnCharacterDetachedFromDino(APrimalDinoCharacter*)", Dino); }
	void BPOnCharacterAttachedToDino(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.BPOnCharacterAttachedToDino(APrimalDinoCharacter*)", Dino); }
	void SetIsStationairyBlackboardValue(bool value) { NativeCall<void, bool>(this, "APrimalBotAIController.SetIsStationairyBlackboardValue(bool)", value); }
	void OnCharacterAttachedToStructure(APrimalStructureSeating* Structure, int SeatNumber) { NativeCall<void, APrimalStructureSeating*, int>(this, "APrimalBotAIController.OnCharacterAttachedToStructure(APrimalStructureSeating*,int)", Structure, SeatNumber); }
	void OnCharacterDetachedFromStructure(APrimalStructureSeating* Structure) { NativeCall<void, APrimalStructureSeating*>(this, "APrimalBotAIController.OnCharacterDetachedFromStructure(APrimalStructureSeating*)", Structure); }
	void BPOnCharacterAttachedToStructure(APrimalStructureSeating* Structure, int SeatNumber) { NativeCall<void, APrimalStructureSeating*, int>(this, "APrimalBotAIController.BPOnCharacterAttachedToStructure(APrimalStructureSeating*,int)", Structure, SeatNumber); }
	APrimalDinoCharacter* BPFindDinoToClaim() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalBotAIController.BPFindDinoToClaim()"); }
	UPrimalBotRidingComponent* GetBotRidingComponent(const APrimalDinoCharacter* Dino) { return NativeCall<UPrimalBotRidingComponent*, const APrimalDinoCharacter*>(this, "APrimalBotAIController.GetBotRidingComponent(APrimalDinoCharacter*)", Dino); }
	void BPOnDinoClaimed(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBotAIController.BPOnDinoClaimed(APrimalDinoCharacter*)", Dino); }
	bool ClaimSeatingStructure(APrimalStructureSeating* Structure, int SeatNumber) { return NativeCall<bool, APrimalStructureSeating*, int>(this, "APrimalBotAIController.ClaimSeatingStructure(APrimalStructureSeating*,int)", Structure, SeatNumber); }
	void BPOnClaimedSeatingStructure(APrimalStructureSeating* Structure, int SeatNumber) { NativeCall<void, APrimalStructureSeating*, int>(this, "APrimalBotAIController.BPOnClaimedSeatingStructure(APrimalStructureSeating*,int)", Structure, SeatNumber); }
	void ReleaseClaimOnSeatingStructure() { NativeCall<void>(this, "APrimalBotAIController.ReleaseClaimOnSeatingStructure()"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBotAIController"); }
};