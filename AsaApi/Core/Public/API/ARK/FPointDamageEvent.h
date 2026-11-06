#pragma once


struct FPointDamageEvent : FDamageEvent
{
	// Fields

	float& DamageField() { return *GetNativePointerField<float*>(this, "FPointDamageEvent.Damage"); }
	FVector_NetQuantizeNormal& ShotDirectionField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FPointDamageEvent.ShotDirection"); }
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "FPointDamageEvent.HitInfo"); }

	// Bitfields

	// Functions

	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>* OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*>(this, "FPointDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
	int GetTypeID()const { return NativeCall<int>(this, "FPointDamageEvent.GetTypeID()"); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPointDamageEvent>(); }
	bool IsOfType(int InID) const { return NativeCall<bool, int>(this, "FPointDamageEvent.IsOfType(int)", InID); }
};