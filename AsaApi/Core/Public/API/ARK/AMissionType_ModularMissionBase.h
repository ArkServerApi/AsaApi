#pragma once
#include "BulkForward.h"
#include "AMissionType.h"

struct AMissionType_ModularMissionBase : public AMissionType
{
public:
	AMissionType_ModularMissionBase() = delete;
	~AMissionType_ModularMissionBase() = delete;
	AMissionType_ModularMissionBase(const AMissionType_ModularMissionBase&) = delete;
	AMissionType_ModularMissionBase& operator=(const AMissionType_ModularMissionBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMissionType_ModularMissionBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMissionType_ModularMissionBase"); }

	float& DelayBeforeInitalModuleField() { return *GetNativePointerField<float*>(this, "AMissionType_ModularMissionBase.DelayBeforeInitalModule"); }
	float& MissionTimeRemainingAfterEscapePhaseField() { return *GetNativePointerField<float*>(this, "AMissionType_ModularMissionBase.MissionTimeRemainingAfterEscapePhase"); }
	TArray<AShooterProjectile*, TSizedDefaultAllocator<32> >& MissionProjectilesField() { return *GetNativePointerField<TArray<AShooterProjectile*, TSizedDefaultAllocator<32> >*>(this, "AMissionType_ModularMissionBase.MissionProjectiles"); }
	int& CurrModuleField() { return *GetNativePointerField<int*>(this, "AMissionType_ModularMissionBase.CurrModule"); }
	FName& CurrRequirementsTitleField() { return *GetNativePointerField<FName*>(this, "AMissionType_ModularMissionBase.CurrRequirementsTitle"); }
	UNewMissionModuleBase*& CurrentModuleField() { return *GetNativePointerField<UNewMissionModuleBase**>(this, "AMissionType_ModularMissionBase.CurrentModule"); }
	double& CurrentModuleStartTimeField() { return *GetNativePointerField<double*>(this, "AMissionType_ModularMissionBase.CurrentModuleStartTime"); }
	float& CurrentModuleTimeLimitField() { return *GetNativePointerField<float*>(this, "AMissionType_ModularMissionBase.CurrentModuleTimeLimit"); }
	int& NumDeadMissionDinosField() { return *GetNativePointerField<int*>(this, "AMissionType_ModularMissionBase.NumDeadMissionDinos"); }
	int& NumDestroyedMissionStructuresField() { return *GetNativePointerField<int*>(this, "AMissionType_ModularMissionBase.NumDestroyedMissionStructures"); }
	TArray<AActor*, TSizedDefaultAllocator<32> >& SpawnedForModuleActorsField() { return *GetNativePointerField<TArray<AActor*, TSizedDefaultAllocator<32> >*>(this, "AMissionType_ModularMissionBase.SpawnedForModuleActors"); }
	TArray<UNewMissionModuleBase*, TSizedDefaultAllocator<32> >& AdditionalModulesField() { return *GetNativePointerField<TArray<UNewMissionModuleBase*, TSizedDefaultAllocator<32> >*>(this, "AMissionType_ModularMissionBase.AdditionalModules"); }
	BitFieldValue<bool, unsigned char> MissionCompleted() { return { this, "AMissionType_ModularMissionBase.MissionCompleted"}; }
	BitFieldValue<bool, unsigned char> CurrentModuleCompleted() { return { this, "AMissionType_ModularMissionBase.CurrentModuleCompleted"}; }
	BitFieldValue<bool, unsigned char> bDeactivatedModules() { return { this, "AMissionType_ModularMissionBase.bDeactivatedModules"}; }
	void BPOnMissionDinoDamage_Implementation(APrimalDinoCharacter* Dino, float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, APrimalDinoCharacter*, float, const FDamageEvent&, AController*, AActor*>(this, "AMissionType_ModularMissionBase.BPOnMissionDinoDamage_Implementation(APrimalDinoCharacter*,float,FDamageEvent&,AController*,AActor*)", Dino, Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool IsMissionComplete_Implementation(AShooterCharacter* ForCharacter, AShooterPlayerController* ForController) { return NativeCall<bool, AShooterCharacter*, AShooterPlayerController*>(this, "AMissionType_ModularMissionBase.IsMissionComplete_Implementation(AShooterCharacter*,AShooterPlayerController*)", ForCharacter, ForController); }
	void DeactivateModules() { NativeCall<void>(this, "AMissionType_ModularMissionBase.DeactivateModules()"); }
	void ExecuteNextMissionModule_Implementation() { NativeCall<void>(this, "AMissionType_ModularMissionBase.ExecuteNextMissionModule_Implementation()"); }
	void CreateLeaderboardEntry(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "AMissionType_ModularMissionBase.CreateLeaderboardEntry(AShooterPlayerController*)", ForPC); }
	void BPOnMissionStructureDamage_Implementation(APrimalStructure* Structure, float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, APrimalStructure*, float, const FDamageEvent&, AController*, AActor*>(this, "AMissionType_ModularMissionBase.BPOnMissionStructureDamage_Implementation(APrimalStructure*,float,FDamageEvent&,AController*,AActor*)", Structure, Damage, DamageEvent, EventInstigator, DamageCauser); }
	void Destroyed() { NativeCall<void>(this, "AMissionType_ModularMissionBase.Destroyed()"); }
	void BPOnMissionDinoDied_Implementation(APrimalDinoCharacter* Dino, float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) { NativeCall<void, APrimalDinoCharacter*, float, const FDamageEvent&, AController*, AActor*>(this, "AMissionType_ModularMissionBase.BPOnMissionDinoDied_Implementation(APrimalDinoCharacter*,float,FDamageEvent&,AController*,AActor*)", Dino, KillingDamage, DamageEvent, Killer, DamageCauser); }
	void RegisterProjectile_Implementation(AShooterProjectile* TheProjectile) { NativeCall<void, AShooterProjectile*>(this, "AMissionType_ModularMissionBase.RegisterProjectile_Implementation(AShooterProjectile*)", TheProjectile); }
	void BPOnMissionComplete_Implementation(AShooterCharacter* ForPlayer, AShooterPlayerController* ForController, bool bLastPhaseSuccess, float XPRewarded, const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& ItemsRewarded) { NativeCall<void, AShooterCharacter*, AShooterPlayerController*, bool, float, const TArray<UPrimalItem*, TSizedDefaultAllocator<32> >&>(this, "AMissionType_ModularMissionBase.BPOnMissionComplete_Implementation(AShooterCharacter*,AShooterPlayerController*,bool,float,TArray<UPrimalItem*,TSizedDefaultAllocator<32>>&)", ForPlayer, ForController, bLastPhaseSuccess, XPRewarded, ItemsRewarded); }
	void BPOnMissionPlayerAddedInventoryItem_Implementation(AShooterCharacter* Player, UPrimalInventoryComponent* Inventory, UPrimalItem* Item, int AmountAdded, bool bEquippedItem) { NativeCall<void, AShooterCharacter*, UPrimalInventoryComponent*, UPrimalItem*, int, bool>(this, "AMissionType_ModularMissionBase.BPOnMissionPlayerAddedInventoryItem_Implementation(AShooterCharacter*,UPrimalInventoryComponent*,UPrimalItem*,int,bool)", Player, Inventory, Item, AmountAdded, bEquippedItem); }
	void OnThrottledServerTick_Implementation(float DeltaTime) { NativeCall<void, float>(this, "AMissionType_ModularMissionBase.OnThrottledServerTick_Implementation(float)", DeltaTime); }
	void BPOnMissionTriggerEndOverlap_Implementation(AMissionTrigger* Trigger, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, AMissionTrigger*, AActor*, UPrimitiveComponent*, int>(this, "AMissionType_ModularMissionBase.BPOnMissionTriggerEndOverlap_Implementation(AMissionTrigger*,AActor*,UPrimitiveComponent*,int)", Trigger, OtherActor, OtherComp, OtherBodyIndex); }
	void BPOnMissionTriggerBeginOverlap_Implementation(AMissionTrigger* Trigger, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, AMissionTrigger*, AActor*, UPrimitiveComponent*, int>(this, "AMissionType_ModularMissionBase.BPOnMissionTriggerBeginOverlap_Implementation(AMissionTrigger*,AActor*,UPrimitiveComponent*,int)", Trigger, OtherActor, OtherComp, OtherBodyIndex); }
	void BPOnMissionDeactivated_Implementation() { NativeCall<void>(this, "AMissionType_ModularMissionBase.BPOnMissionDeactivated_Implementation()"); }
	void SetupMissionModules() { NativeCall<void>(this, "AMissionType_ModularMissionBase.SetupMissionModules()"); }
	void BPOnMissionProjectileExpoloded_Implementation(AShooterProjectile* TheProjectile) { NativeCall<void, AShooterProjectile*>(this, "AMissionType_ModularMissionBase.BPOnMissionProjectileExpoloded_Implementation(AShooterProjectile*)", TheProjectile); }
	void BPOnMissionDroppedItemPickedUp_Implementation(ADroppedItemMission* DroppedItem, APlayerController* ByPC, UPrimalItem* InventoryItem) { NativeCall<void, ADroppedItemMission*, APlayerController*, UPrimalItem*>(this, "AMissionType_ModularMissionBase.BPOnMissionDroppedItemPickedUp_Implementation(ADroppedItemMission*,APlayerController*,UPrimalItem*)", DroppedItem, ByPC, InventoryItem); }
	void SetupMissionModules_Implementation() { NativeCall<void>(this, "AMissionType_ModularMissionBase.SetupMissionModules_Implementation()"); }
	void BPOnMissionPlayerRemovedInventoryItem_Implementation(AShooterCharacter* Player, UPrimalInventoryComponent* Inventory, UPrimalItem* Item, int AmountRemoved) { NativeCall<void, AShooterCharacter*, UPrimalInventoryComponent*, UPrimalItem*, int>(this, "AMissionType_ModularMissionBase.BPOnMissionPlayerRemovedInventoryItem_Implementation(AShooterCharacter*,UPrimalInventoryComponent*,UPrimalItem*,int)", Player, Inventory, Item, AmountRemoved); }
	void BPOnMissionStructureDestroyed_Implementation(APrimalStructure* Structure, float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) { NativeCall<void, APrimalStructure*, float, const FDamageEvent&, AController*, AActor*>(this, "AMissionType_ModularMissionBase.BPOnMissionStructureDestroyed_Implementation(APrimalStructure*,float,FDamageEvent&,AController*,AActor*)", Structure, KillingDamage, DamageEvent, Killer, DamageCauser); }
	float GetWidgetActiveMissionPosY() { return NativeCall<float>(this, "AMissionType_ModularMissionBase.GetWidgetActiveMissionPosY()"); }
	void RegisterProjectile(AShooterProjectile* TheProjectile) { NativeCall<void, AShooterProjectile*>(this, "AMissionType_ModularMissionBase.RegisterProjectile(AShooterProjectile*)", TheProjectile); }
	bool EncapsulatedSubMissionActivated(AMissionType* StartedMission) { return NativeCall<bool, AMissionType*>(this, "AMissionType_ModularMissionBase.EncapsulatedSubMissionActivated(AMissionType*)", StartedMission); }
	void MultiDeactivateWarmerColderHUD_Implementation() { NativeCall<void>(this, "AMissionType_ModularMissionBase.MultiDeactivateWarmerColderHUD_Implementation()"); }
	void CreateLeaderboardEntry_Implementation(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "AMissionType_ModularMissionBase.CreateLeaderboardEntry_Implementation(AShooterPlayerController*)", ForPC); }
	void ExecuteNextMissionModule() { NativeCall<void>(this, "AMissionType_ModularMissionBase.ExecuteNextMissionModule()"); }
	void DeactivateWarmerColderHUD_Implementation() { NativeCall<void>(this, "AMissionType_ModularMissionBase.DeactivateWarmerColderHUD_Implementation()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AMissionType_ModularMissionBase._getUObject()"); }
	void RemoveAllSpecialWorldIndicators_Implementation() { NativeCall<void>(this, "AMissionType_ModularMissionBase.RemoveAllSpecialWorldIndicators_Implementation()"); }
	FString* BPGetMissionTimerText_Implementation(FString* result, AShooterPlayerController* ShootCont) { return NativeCall<FString*, FString*, AShooterPlayerController*>(this, "AMissionType_ModularMissionBase.BPGetMissionTimerText_Implementation(AShooterPlayerController*)", result, ShootCont); }
	bool EncapsulatedSubMissionDeactivated(AMissionType* EndedMission, bool Sub_MissionSucceeded) { return NativeCall<bool, AMissionType*, bool>(this, "AMissionType_ModularMissionBase.EncapsulatedSubMissionDeactivated(AMissionType*,bool)", EndedMission, Sub_MissionSucceeded); }
	float BPAdjustMissionDinoDamage_Implementation(APrimalDinoCharacter* Dino, float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, APrimalDinoCharacter*, float, const FDamageEvent&, AController*, AActor*>(this, "AMissionType_ModularMissionBase.BPAdjustMissionDinoDamage_Implementation(APrimalDinoCharacter*,float,FDamageEvent&,AController*,AActor*)", Dino, Damage, DamageEvent, EventInstigator, DamageCauser); }
	float BPGetMissionTargetingDesire_Implementation(APrimalDinoCharacter* MissionDino, AActor* ForTarget, float ForTargetingDesireValue) { return NativeCall<float, APrimalDinoCharacter*, AActor*, float>(this, "AMissionType_ModularMissionBase.BPGetMissionTargetingDesire_Implementation(APrimalDinoCharacter*,AActor*,float)", MissionDino, ForTarget, ForTargetingDesireValue); }
	FString* BPGetPhaseDisplayText_Implementation(FString* result, FName PhaseName) { return NativeCall<FString*, FString*, FName>(this, "AMissionType_ModularMissionBase.BPGetPhaseDisplayText_Implementation(FName)", result, PhaseName); }
	void DeactivateWarmerColderHUD() { NativeCall<void>(this, "AMissionType_ModularMissionBase.DeactivateWarmerColderHUD()"); }
	void OnMissionDeactivated() { NativeCall<void>(this, "AMissionType_ModularMissionBase.OnMissionDeactivated()"); }
	bool BPIsPhaseComplete_Implementation(FName PhaseName) { return NativeCall<bool, FName>(this, "AMissionType_ModularMissionBase.BPIsPhaseComplete_Implementation(FName)", PhaseName); }
	void BPOnMissionServerSetup_Implementation() { NativeCall<void>(this, "AMissionType_ModularMissionBase.BPOnMissionServerSetup_Implementation()"); }
};
