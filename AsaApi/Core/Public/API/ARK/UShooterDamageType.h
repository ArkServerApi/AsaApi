#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalDamageType.h"

struct UShooterDamageType : UPrimalDamageType
{
public:
	UShooterDamageType() = delete;
	~UShooterDamageType() = delete;
	UShooterDamageType(const UShooterDamageType&) = delete;
	UShooterDamageType& operator=(const UShooterDamageType&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterDamageType"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterDamageType"); }

	float& DamageTorpidityIncreaseMultiplierField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.DamageTorpidityIncreaseMultiplier"); }
	float& DamageInstigatorPercentageField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.DamageInstigatorPercentage"); }
	float& UseSpecialDamageIntervalField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.UseSpecialDamageInterval"); }
	float& WildDinoForcedAggroDurationField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.WildDinoForcedAggroDuration"); }
	float& MassScaleDamageImpulseExponentField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.MassScaleDamageImpulseExponent"); }
	float& PercentTrueDamageField() { return *GetNativePointerField<float*>(this, "UShooterDamageType.PercentTrueDamage"); }

	void ApplyEffectToVictimStructure(APrimalStructure* Victim, AActor* DamageCauser) { NativeCall<void, APrimalStructure*, AActor*>(this, "UShooterDamageType.ApplyEffectToVictimStructure(APrimalStructure*,AActor*)", Victim, DamageCauser); }

	BitFieldValue<bool, unsigned __int32> bIsMeleeDamage() { return { this, "UShooterDamageType.bIsMeleeDamage"}; }
	BitFieldValue<bool, unsigned __int32> bDontActuallyDealDamage() { return { this, "UShooterDamageType.bDontActuallyDealDamage"}; }
	BitFieldValue<bool, unsigned __int32> bPreventMeleeHarvesting() { return { this, "UShooterDamageType.bPreventMeleeHarvesting"}; }
	BitFieldValue<bool, unsigned __int32> bHarvestDamageWithNoResourceGrab() { return { this, "UShooterDamageType.bHarvestDamageWithNoResourceGrab"}; }
	BitFieldValue<bool, unsigned __int32> bPreventMomentumWhenFalling() { return { this, "UShooterDamageType.bPreventMomentumWhenFalling"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyGiveBuffToPlayerOrTamed() { return { this, "UShooterDamageType.bOnlyGiveBuffToPlayerOrTamed"}; }
	BitFieldValue<bool, unsigned __int32> bDamageProjectiles() { return { this, "UShooterDamageType.bDamageProjectiles"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyGiveBuffToPlayer() { return { this, "UShooterDamageType.bOnlyGiveBuffToPlayer"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyGiveBuffToDino() { return { this, "UShooterDamageType.bOnlyGiveBuffToDino"}; }
	BitFieldValue<bool, unsigned __int32> bApplyBuffOnKillingDamage() { return { this, "UShooterDamageType.bApplyBuffOnKillingDamage"}; }
	BitFieldValue<bool, unsigned __int32> bHasRiderIgnoreDamage() { return { this, "UShooterDamageType.bHasRiderIgnoreDamage"}; }
	BitFieldValue<bool, unsigned __int32> bAllowShieldBlockAllPointDamage() { return { this, "UShooterDamageType.bAllowShieldBlockAllPointDamage"}; }
	BitFieldValue<bool, unsigned __int32> bPreventPointDamageShieldBlock() { return { this, "UShooterDamageType.bPreventPointDamageShieldBlock"}; }
	BitFieldValue<bool, unsigned __int32> bPreventDefaultTargetHurtEffect() { return { this, "UShooterDamageType.bPreventDefaultTargetHurtEffect"}; }
	BitFieldValue<bool, unsigned __int32> bDamageInstigator() { return { this, "UShooterDamageType.bDamageInstigator"}; }
	BitFieldValue<bool, unsigned __int32> bApplyMomentumToBigPawns() { return { this, "UShooterDamageType.bApplyMomentumToBigPawns"}; }
	BitFieldValue<bool, unsigned __int32> bAutoDragDeadDino() { return { this, "UShooterDamageType.bAutoDragDeadDino"}; }
	BitFieldValue<bool, unsigned __int32> bImpulseResetsDinoVelocity() { return { this, "UShooterDamageType.bImpulseResetsDinoVelocity"}; }
	BitFieldValue<bool, unsigned __int32> bPreventHitPawnEffectsFromLocalInstigator() { return { this, "UShooterDamageType.bPreventHitPawnEffectsFromLocalInstigator"}; }
	BitFieldValue<bool, unsigned __int32> bRiderIgnoreDamage() { return { this, "UShooterDamageType.bRiderIgnoreDamage"}; }
	BitFieldValue<bool, unsigned __int32> bNoFriendlyDamage() { return { this, "UShooterDamageType.bNoFriendlyDamage"}; }
	BitFieldValue<bool, unsigned __int32> bIsTurretDamage() { return { this, "UShooterDamageType.bIsTurretDamage"}; }
	BitFieldValue<bool, unsigned __int32> bForceGeneralArmorUsage() { return { this, "UShooterDamageType.bForceGeneralArmorUsage"}; }
	BitFieldValue<bool, unsigned __int32> bDamageImpulseOnly() { return { this, "UShooterDamageType.bDamageImpulseOnly"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreDinoFlyers() { return { this, "UShooterDamageType.bIgnoreDinoFlyers"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage() { return { this, "UShooterDamageType.bUseBPAdjustDamage"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustAggro() { return { this, "UShooterDamageType.bUseBPAdjustAggro"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustHarvestingDamage() { return { this, "UShooterDamageType.bUseBPAdjustHarvestingDamage"}; }
	BitFieldValue<bool, unsigned __int32> bDisplayHitMarker() { return { this, "UShooterDamageType.bDisplayHitMarker"}; }
	BitFieldValue<bool, unsigned __int32> bHitMarkerPlaySound() { return { this, "UShooterDamageType.bHitMarkerPlaySound"}; }
	BitFieldValue<bool, unsigned __int32> bDinoDamageCauserAllowSameTeam() { return { this, "UShooterDamageType.bDinoDamageCauserAllowSameTeam"}; }
	BitFieldValue<bool, unsigned __int32> bOnlyApplyDamageTorpidityToPlayersAndTames() { return { this, "UShooterDamageType.bOnlyApplyDamageTorpidityToPlayersAndTames"}; }
	BitFieldValue<bool, unsigned __int32> bDinoOnDinoDamageCauserAllowSameTeam() { return { this, "UShooterDamageType.bDinoOnDinoDamageCauserAllowSameTeam"}; }
	BitFieldValue<bool, unsigned __int32> bForceRespawnCooldown() { return { this, "UShooterDamageType.bForceRespawnCooldown"}; }
	BitFieldValue<bool, unsigned __int32> bAllowDamageCorpses() { return { this, "UShooterDamageType.bAllowDamageCorpses"}; }
	BitFieldValue<bool, unsigned __int32> bForceAllowFriendlyFire() { return { this, "UShooterDamageType.bForceAllowFriendlyFire"}; }
	BitFieldValue<bool, unsigned __int32> bForceAllowPvEDamage() { return { this, "UShooterDamageType.bForceAllowPvEDamage"}; }
	BitFieldValue<bool, unsigned __int32> bDestroyOnKill() { return { this, "UShooterDamageType.bDestroyOnKill"}; }
	BitFieldValue<bool, unsigned __int32> bPreventDinoKillVictimItemCollection() { return { this, "UShooterDamageType.bPreventDinoKillVictimItemCollection"}; }
	BitFieldValue<bool, unsigned __int32> bIsInstantDamage() { return { this, "UShooterDamageType.bIsInstantDamage"}; }
	BitFieldValue<bool, unsigned __int32> bPreventHurtAnim() { return { this, "UShooterDamageType.bPreventHurtAnim"}; }
	BitFieldValue<bool, unsigned __int32> bPreventHurtSoundAndCameraShake() { return { this, "UShooterDamageType.bPreventHurtSoundAndCameraShake"}; }
	BitFieldValue<bool, unsigned __int32> bUseOverrideDamageHarvestEntriesForValidHarvesting() { return { this, "UShooterDamageType.bUseOverrideDamageHarvestEntriesForValidHarvesting"}; }

	UForceFeedbackEffect*& HitForceFeedbackField() { return *GetNativePointerField<UForceFeedbackEffect**>(this, "UShooterDamageType.HitForceFeedback"); }
	UForceFeedbackEffect*& KilledForceFeedbackField() { return *GetNativePointerField<UForceFeedbackEffect**>(this, "UShooterDamageType.KilledForceFeedback"); }

	FCanvasIcon& KillIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "UShooterDamageType.KillIcon"); }
	FName& StructureEffectToApplyField() { return *GetNativePointerField<FName*>(this, "UShooterDamageType.StructureEffectToApply"); }
};
