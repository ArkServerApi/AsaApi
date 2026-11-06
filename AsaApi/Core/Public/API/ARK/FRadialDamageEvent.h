#pragma once


struct FRadialDamageEvent : FDamageEvent
{
	// Fields

	FRadialDamageParams& ParamsField() { return *GetNativePointerField<FRadialDamageParams*>(this, "FRadialDamageEvent.Params"); }
	UE::Math::TVector<double>& OriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FRadialDamageEvent.Origin"); }
	TArray<FHitResult, TSizedDefaultAllocator<32> >& ComponentHitsField() { return *GetNativePointerField<TArray<FHitResult, TSizedDefaultAllocator<32> >*>(this, "FRadialDamageEvent.ComponentHits"); }

	// Bitfields

	// Functions

	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>& OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>&>(this, "FRadialDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
	int GetTypeID()const { return NativeCall<int>(this, "FRadialDamageEvent.GetTypeID()"); }
	bool IsOfType(int InID) const { return NativeCall<bool, int>(this, "FRadialDamageEvent.IsOfType(int)", InID); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FRadialDamageEvent>(); }
};