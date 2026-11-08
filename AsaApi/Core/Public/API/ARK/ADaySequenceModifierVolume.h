#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADaySequenceModifierVolume : public AActor
{
public:
	ADaySequenceModifierVolume() = delete;
	~ADaySequenceModifierVolume() = delete;
	ADaySequenceModifierVolume(const ADaySequenceModifierVolume&) = delete;
	ADaySequenceModifierVolume& operator=(const ADaySequenceModifierVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADaySequenceModifierVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADaySequenceModifierVolume"); }

	FDelegateHandle& ReplayScrubbedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "ADaySequenceModifierVolume.ReplayScrubbedHandle"); }
	bool& bEnableSplitscreenSupportField() { return *GetNativePointerField<bool*>(this, "ADaySequenceModifierVolume.bEnableSplitscreenSupport"); }
	FDelegateHandle& ActorSpawnedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "ADaySequenceModifierVolume.ActorSpawnedHandle"); }
	void Initialize() { NativeCall<void>(this, "ADaySequenceModifierVolume.Initialize()"); }
	bool IsSplitscreenSupported() { return NativeCall<bool>(this, "ADaySequenceModifierVolume.IsSplitscreenSupported()"); }
	void CreatePlayer(APlayerController* InPC) { NativeCall<void, APlayerController*>(this, "ADaySequenceModifierVolume.CreatePlayer(APlayerController*)", InPC); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ADaySequenceModifierVolume.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BindToDaySequenceActor() { NativeCall<void>(this, "ADaySequenceModifierVolume.BindToDaySequenceActor()"); }
	void DaySequenceActorSetup() { NativeCall<void>(this, "ADaySequenceModifierVolume.DaySequenceActorSetup()"); }
	void BeginPlay() { NativeCall<void>(this, "ADaySequenceModifierVolume.BeginPlay()"); }
};
