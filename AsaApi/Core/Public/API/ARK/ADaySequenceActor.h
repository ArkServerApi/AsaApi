#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct ADaySequenceActor : public AInfo
{
public:
	ADaySequenceActor() = delete;
	~ADaySequenceActor() = delete;
	ADaySequenceActor(const ADaySequenceActor&) = delete;
	ADaySequenceActor& operator=(const ADaySequenceActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADaySequenceActor"); }

	int& BiasField() { return *GetNativePointerField<int*>(this, "ADaySequenceActor.Bias"); }
	bool& bForceDisableDayInterpCurveField() { return *GetNativePointerField<bool*>(this, "ADaySequenceActor.bForceDisableDayInterpCurve"); }
	float& SequenceUpdateIntervalField() { return *GetNativePointerField<float*>(this, "ADaySequenceActor.SequenceUpdateInterval"); }
	bool& bRunDayCycleField() { return *GetNativePointerField<bool*>(this, "ADaySequenceActor.bRunDayCycle"); }
	bool& bUseInterpCurveField() { return *GetNativePointerField<bool*>(this, "ADaySequenceActor.bUseInterpCurve"); }
	FDaySequenceTime& DayLengthField() { return *GetNativePointerField<FDaySequenceTime*>(this, "ADaySequenceActor.DayLength"); }
	FDaySequenceTime& TimePerCycleField() { return *GetNativePointerField<FDaySequenceTime*>(this, "ADaySequenceActor.TimePerCycle"); }
	FDaySequenceTime& InitialTimeOfDayField() { return *GetNativePointerField<FDaySequenceTime*>(this, "ADaySequenceActor.InitialTimeOfDay"); }
	FTimerHandle& DaySequenceUpdateTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "ADaySequenceActor.DaySequenceUpdateTimerHandle"); }
	TArray<UMovieSceneSubSection*, TSizedDefaultAllocator<32> >& SubSectionsField() { return *GetNativePointerField<TArray<UMovieSceneSubSection*, TSizedDefaultAllocator<32> >*>(this, "ADaySequenceActor.SubSections"); }
	BitFieldValue<bool, unsigned char> bReplicatePlayback() { return { this, "ADaySequenceActor.bReplicatePlayback"}; }
	void PostInitializeComponents() { NativeCall<void>(this, "ADaySequenceActor.PostInitializeComponents()"); }
	void PostLoad() { NativeCall<void>(this, "ADaySequenceActor.PostLoad()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ADaySequenceActor.Tick(float)", DeltaTime); }
	void BeginDestroy() { NativeCall<void>(this, "ADaySequenceActor.BeginDestroy()"); }
	float GetStaticTimeOfDay() { return NativeCall<float>(this, "ADaySequenceActor.GetStaticTimeOfDay()"); }
	void WarpEvaluationRange(FMovieSceneEvaluationRange& InOutRange) { NativeCall<void, FMovieSceneEvaluationRange&>(this, "ADaySequenceActor.WarpEvaluationRange(FMovieSceneEvaluationRange&)", InOutRange); }
	bool IsPlaying() { return NativeCall<bool>(this, "ADaySequenceActor.IsPlaying()"); }
	void Destroyed() { NativeCall<void>(this, "ADaySequenceActor.Destroyed()"); }
	void SetPlayRate_Implementation(float NewRate) { NativeCall<void, float>(this, "ADaySequenceActor.SetPlayRate_Implementation(float)", NewRate); }
	void UpdateSubSectionTimeScale(UMovieSceneSubSection* InSubSection) { NativeCall<void, UMovieSceneSubSection*>(this, "ADaySequenceActor.UpdateSubSectionTimeScale(UMovieSceneSubSection*)", InSubSection); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ADaySequenceActor.Serialize(FArchive&)", Ar); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ADaySequenceActor._getUObject()"); }
	void RewindForReplay() { NativeCall<void>(this, "ADaySequenceActor.RewindForReplay()"); }
	void StopDaySequenceUpdateTimer() { NativeCall<void>(this, "ADaySequenceActor.StopDaySequenceUpdateTimer()"); }
	void InitializePlayer() { NativeCall<void>(this, "ADaySequenceActor.InitializePlayer()"); }
	void Play() { NativeCall<void>(this, "ADaySequenceActor.Play()"); }
	UMovieSceneSubSection* InitializeDaySequence(const FDaySequenceCollectionEntry& SequenceAsset) { return NativeCall<UMovieSceneSubSection*, const FDaySequenceCollectionEntry&>(this, "ADaySequenceActor.InitializeDaySequence(FDaySequenceCollectionEntry&)", SequenceAsset); }
	void InitializeDaySequences() { NativeCall<void>(this, "ADaySequenceActor.InitializeDaySequences()"); }
	IDaySequencePlayer* GetSequencePlayer() { return NativeCall<IDaySequencePlayer*>(this, "ADaySequenceActor.GetSequencePlayer()"); }
	bool SetTimeOfDay(float InHours) { return NativeCall<bool, float>(this, "ADaySequenceActor.SetTimeOfDay(float)", InHours); }
	void StartDaySequenceUpdateTimer() { NativeCall<void>(this, "ADaySequenceActor.StartDaySequenceUpdateTimer()"); }
	void BeginPlay() { NativeCall<void>(this, "ADaySequenceActor.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ADaySequenceActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	float GetBasePlayRate() { return NativeCall<float>(this, "ADaySequenceActor.GetBasePlayRate()"); }
	float GetBaseDuration() { return NativeCall<float>(this, "ADaySequenceActor.GetBaseDuration()"); }
	static void GetbRunDayCycle_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "ADaySequenceActor.GetbRunDayCycle_WrapperImpl(void*,void*)", Object, OutValue); }
	void InitializeRootSequence() { NativeCall<void>(this, "ADaySequenceActor.InitializeRootSequence()"); }
	bool GetIsReplicatedPlayback() { return NativeCall<bool>(this, "ADaySequenceActor.GetIsReplicatedPlayback()"); }
	UObject* GetInstanceData() { return NativeCall<UObject*>(this, "ADaySequenceActor.GetInstanceData()"); }
	float GetTimeOfDay() { return NativeCall<float>(this, "ADaySequenceActor.GetTimeOfDay()"); }
	void SequencePlayerUpdated(float CurrentTime, float PreviousTime) { NativeCall<void, float, float>(this, "ADaySequenceActor.SequencePlayerUpdated(float,float)", CurrentTime, PreviousTime); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADaySequenceActor"); }
	void Pause() { NativeCall<void>(this, "ADaySequenceActor.Pause()"); }
	void Multicast_SetTimePerCycle_Implementation(float InHours) { NativeCall<void, float>(this, "ADaySequenceActor.Multicast_SetTimePerCycle_Implementation(float)", InHours); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ADaySequenceActor.ShouldTickIfViewportsOnly()"); }
	static void SetbRunDayCycle_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "ADaySequenceActor.SetbRunDayCycle_WrapperImpl(void*,void*)", Object, InValue); }
};
