#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AAmbientSound : public AActor
{
public:
	AAmbientSound() = delete;
	~AAmbientSound() = delete;
	AAmbientSound(const AAmbientSound&) = delete;
	AAmbientSound& operator=(const AAmbientSound&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AAmbientSound"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AAmbientSound"); }

	float& DefaultVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "AAmbientSound.DefaultVolumeMultiplier"); }
	BitFieldValue<bool, unsigned __int32> bAddedToArray() { return { this, "AAmbientSound.bAddedToArray"}; }
	BitFieldValue<bool, unsigned __int32> bOverrideAutoplay() { return { this, "AAmbientSound.bOverrideAutoplay"}; }
	void UpdateAmbientSound() { NativeCall<void>(this, "AAmbientSound.UpdateAmbientSound()"); }
	void BeginPlay() { NativeCall<void>(this, "AAmbientSound.BeginPlay()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AAmbientSound.PreInitializeComponents()"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AAmbientSound.IsLevelBoundsRelevant()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AAmbientSound.PostRegisterAllComponents()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AAmbientSound.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Destroyed() { NativeCall<void>(this, "AAmbientSound.Destroyed()"); }
};
