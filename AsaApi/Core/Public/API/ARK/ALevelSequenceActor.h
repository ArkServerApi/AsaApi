#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALevelSequenceActor : public AActor
{
public:
	ALevelSequenceActor() = delete;
	~ALevelSequenceActor() = delete;
	ALevelSequenceActor(const ALevelSequenceActor&) = delete;
	ALevelSequenceActor& operator=(const ALevelSequenceActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALevelSequenceActor"); }

	FMovieSceneSequencePlaybackSettings& PlaybackSettingsField() { return *GetNativePointerField<FMovieSceneSequencePlaybackSettings*>(this, "ALevelSequenceActor.PlaybackSettings"); }
	FLevelSequenceCameraSettings& CameraSettingsField() { return *GetNativePointerField<FLevelSequenceCameraSettings*>(this, "ALevelSequenceActor.CameraSettings"); }
	bool& bShowBurninField() { return *GetNativePointerField<bool*>(this, "ALevelSequenceActor.bShowBurnin"); }
	FWorldPartitionResolveData& WorldPartitionResolveDataField() { return *GetNativePointerField<FWorldPartitionResolveData*>(this, "ALevelSequenceActor.WorldPartitionResolveData"); }
	BitFieldValue<bool, unsigned char> bAutoPlay_DEPRECATED() { return { this, "ALevelSequenceActor.bAutoPlay_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bOverrideInstanceData() { return { this, "ALevelSequenceActor.bOverrideInstanceData"}; }
	BitFieldValue<bool, unsigned char> bReplicatePlayback() { return { this, "ALevelSequenceActor.bReplicatePlayback"}; }
	bool GetIsReplicatedPlayback() { return NativeCall<bool>(this, "ALevelSequenceActor.GetIsReplicatedPlayback()"); }
	void PostLoad() { NativeCall<void>(this, "ALevelSequenceActor.PostLoad()"); }
	void PostNetReceive() { NativeCall<void>(this, "ALevelSequenceActor.PostNetReceive()"); }
	void HideBurnin() { NativeCall<void>(this, "ALevelSequenceActor.HideBurnin()"); }
	void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset) { NativeCall<void, FName, AActor*, bool>(this, "ALevelSequenceActor.AddBindingByTag(FName,AActor*,bool)", BindingTag, Actor, bAllowBindingsFromAsset); }
	UObject* GetInstanceData() { return NativeCall<UObject*>(this, "ALevelSequenceActor.GetInstanceData()"); }
	void SetSequence(ULevelSequence* InSequence) { NativeCall<void, ULevelSequence*>(this, "ALevelSequenceActor.SetSequence(ULevelSequence*)", InSequence); }
	void RewindForReplay() { NativeCall<void>(this, "ALevelSequenceActor.RewindForReplay()"); }
	void RefreshBurnIn() { NativeCall<void>(this, "ALevelSequenceActor.RefreshBurnIn()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ALevelSequenceActor._getUObject()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ALevelSequenceActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	ULevelSequence* GetSequence() { return NativeCall<ULevelSequence*>(this, "ALevelSequenceActor.GetSequence()"); }
	void SetBindingByTag(FName BindingTag, const TArray<AActor*, TSizedDefaultAllocator<32> >& Actors, bool bAllowBindingsFromAsset) { NativeCall<void, FName, const TArray<AActor*, TSizedDefaultAllocator<32> >&, bool>(this, "ALevelSequenceActor.SetBindingByTag(FName,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool)", BindingTag, Actors, bAllowBindingsFromAsset); }
	void RemoveBindingByTag(FName BindingTag, AActor* Actor) { NativeCall<void, FName, AActor*>(this, "ALevelSequenceActor.RemoveBindingByTag(FName,AActor*)", BindingTag, Actor); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALevelSequenceActor"); }
	void PostInitProperties() { NativeCall<void>(this, "ALevelSequenceActor.PostInitProperties()"); }
	void PostInitializeComponents() { NativeCall<void>(this, "ALevelSequenceActor.PostInitializeComponents()"); }
	void PreInitializeComponents() { NativeCall<void>(this, "ALevelSequenceActor.PreInitializeComponents()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ALevelSequenceActor.Tick(float)", DeltaSeconds); }
	ULevelSequencePlayer* GetSequencePlayer() { return NativeCall<ULevelSequencePlayer*>(this, "ALevelSequenceActor.GetSequencePlayer()"); }
	void BeginPlay() { NativeCall<void>(this, "ALevelSequenceActor.BeginPlay()"); }
	const FWorldPartitionResolveData& GetWorldPartitionResolveData() { return NativeCall<const FWorldPartitionResolveData&>(this, "ALevelSequenceActor.GetWorldPartitionResolveData()"); }
	void InitializePlayer() { NativeCall<void>(this, "ALevelSequenceActor.InitializePlayer()"); }
};
