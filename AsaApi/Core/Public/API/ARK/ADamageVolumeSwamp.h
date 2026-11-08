#pragma once


struct ADamageVolumeSwamp : ADamageVolumeBase
{
	// Fields

	long double& lastDamageTimeField() { return *GetNativePointerField<long double*>(this, "ADamageVolumeSwamp.lastDamageTime"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADamageVolumeSwamp"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ADamageVolumeSwamp.Tick(float)", DeltaSeconds); }
	void OnBeginOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ADamageVolumeSwamp.OnBeginOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	void OnEndOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ADamageVolumeSwamp.OnEndOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	float GetDamageNegationModifier(AActor* Actor) { return NativeCall<float, AActor*>(this, "ADamageVolumeSwamp.GetDamageNegationModifier(AActor*)", Actor); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADamageVolumeSwamp"); }
};