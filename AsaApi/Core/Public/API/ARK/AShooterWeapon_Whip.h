#pragma once


struct AShooterWeapon_Whip : AShooterWeapon_Melee
{
	// Fields

	TSubclassOf<APrimalBuff>& StunBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "AShooterWeapon_Whip.StunBuff"); }
	TSubclassOf<APrimalBuff>& BlockedByShieldBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "AShooterWeapon_Whip.BlockedByShieldBuff"); }
	TSubclassOf<APrimalBuff>& HerdDinoBuffField() { return *GetNativePointerField<TSubclassOf<APrimalBuff>*>(this, "AShooterWeapon_Whip.HerdDinoBuff"); }
	UE::Math::TVector<double>& HarvestingBoxExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Whip.HarvestingBoxExtent"); }
	UE::Math::TVector<double>& HarvestingWhipTipOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AShooterWeapon_Whip.HarvestingWhipTipOffset"); }
	float& MaxDinoDragWeightToApplyBuffField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.MaxDinoDragWeightToApplyBuff"); }
	float& MaxFlyerDinoDragWeightToApplyBuffField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.MaxFlyerDinoDragWeightToApplyBuff"); }
	float& DurabilityMultiplierForFriendDinosField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.DurabilityMultiplierForFriendDinos"); }
	float& DurabilityMultiplierForHarvestingField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.DurabilityMultiplierForHarvesting"); }
	float& PreviousMaxUseDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.PreviousMaxUseDistance"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Whip"); }
	void Destroyed(__int16 a2) { NativeCall<void, __int16>(this, "AShooterWeapon_Whip.Destroyed()", a2); }
	void OnEquipFinished() { NativeCall<void>(this, "AShooterWeapon_Whip.OnEquipFinished()"); }
	void DoMeleeAttack() { NativeCall<void>(this, "AShooterWeapon_Whip.DoMeleeAttack()"); }
	void TickMeleeSwing(float DeltaTime) { NativeCall<void, float>(this, "AShooterWeapon_Whip.TickMeleeSwing(float)", DeltaTime); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const UAnimNotify* AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent*, UAnimSequenceBase*, const UAnimNotify*>(this, "AShooterWeapon_Whip.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void HarvestWhipExtended() { NativeCall<void>(this, "AShooterWeapon_Whip.HarvestWhipExtended()"); }
	void HarvestWhipNear() { NativeCall<void>(this, "AShooterWeapon_Whip.HarvestWhipNear()"); }
	bool CanStunDino(APrimalDinoCharacter* DinoCharacter) { return NativeCall<bool, APrimalDinoCharacter*>(this, "AShooterWeapon_Whip.CanStunDino(APrimalDinoCharacter*)", DinoCharacter); }
	bool CanHerdDino(APrimalDinoCharacter* DinoCharacter) { return NativeCall<bool, APrimalDinoCharacter*>(this, "AShooterWeapon_Whip.CanHerdDino(APrimalDinoCharacter*)", DinoCharacter); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterWeapon_Whip"); }
};