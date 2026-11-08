#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UTimelineComponent : public UActorComponent
{
public:
	UTimelineComponent() = delete;
	~UTimelineComponent() = delete;
	UTimelineComponent(const UTimelineComponent&) = delete;
	UTimelineComponent& operator=(const UTimelineComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTimelineComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTimelineComponent"); }

	FTimeline& TheTimelineField() { return *GetNativePointerField<FTimeline*>(this, "UTimelineComponent.TheTimeline"); }
	BitFieldValue<bool, unsigned __int32> bIgnoreTimeDilation() { return { this, "UTimelineComponent.bIgnoreTimeDilation"}; }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UTimelineComponent.IsPostLoadThreadSafe()"); }
	void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation) { NativeCall<void, bool>(this, "UTimelineComponent.SetIgnoreTimeDilation(bool)", bNewIgnoreTimeDilation); }
	bool IsLooping() { return NativeCall<bool>(this, "UTimelineComponent.IsLooping()"); }
	void PlayFromStart() { NativeCall<void>(this, "UTimelineComponent.PlayFromStart()"); }
	void Reverse() { NativeCall<void>(this, "UTimelineComponent.Reverse()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UTimelineComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	float GetScaledTimelineLength() { return NativeCall<float>(this, "UTimelineComponent.GetScaledTimelineLength()"); }
	void Deactivate() { NativeCall<void>(this, "UTimelineComponent.Deactivate()"); }
	void SetPropertySetObject(UObject* NewPropertySetObject) { NativeCall<void, UObject*>(this, "UTimelineComponent.SetPropertySetObject(UObject*)", NewPropertySetObject); }
	void SetPlayRate(float NewRate) { NativeCall<void, float>(this, "UTimelineComponent.SetPlayRate(float)", NewRate); }
	void OnRep_Timeline(FTimeline& OldTimeline) { NativeCall<void, FTimeline&>(this, "UTimelineComponent.OnRep_Timeline(FTimeline&)", OldTimeline); }
	bool IsReversing() { return NativeCall<bool>(this, "UTimelineComponent.IsReversing()"); }
	void SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName) { NativeCall<void, UCurveFloat*, FName>(this, "UTimelineComponent.SetFloatCurve(UCurveFloat*,FName)", NewFloatCurve, FloatTrackName); }
	float GetPlayRate() { return NativeCall<float>(this, "UTimelineComponent.GetPlayRate()"); }
	bool IsReadyForOwnerToAutoDestroy() { return NativeCall<bool>(this, "UTimelineComponent.IsReadyForOwnerToAutoDestroy()"); }
	void SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName) { NativeCall<void, UCurveLinearColor*, FName>(this, "UTimelineComponent.SetLinearColorCurve(UCurveLinearColor*,FName)", NewLinearColorCurve, LinearColorTrackName); }
	bool GetIgnoreTimeDilation() { return NativeCall<bool>(this, "UTimelineComponent.GetIgnoreTimeDilation()"); }
	void SetNewTime(float NewTime) { NativeCall<void, float>(this, "UTimelineComponent.SetNewTime(float)", NewTime); }
	void ReverseFromEnd() { NativeCall<void>(this, "UTimelineComponent.ReverseFromEnd()"); }
	float GetPlaybackPosition() { return NativeCall<float>(this, "UTimelineComponent.GetPlaybackPosition()"); }
	void SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName) { NativeCall<void, UCurveVector*, FName>(this, "UTimelineComponent.SetVectorCurve(UCurveVector*,FName)", NewVectorCurve, VectorTrackName); }
	void Play() { NativeCall<void>(this, "UTimelineComponent.Play()"); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UTimelineComponent.Activate(bool)", bReset); }
	void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate) { NativeCall<void, float, bool, bool>(this, "UTimelineComponent.SetPlaybackPosition(float,bool,bool)", NewPosition, bFireEvents, bFireUpdate); }
	bool IsPlaying() { return NativeCall<bool>(this, "UTimelineComponent.IsPlaying()"); }
	void Stop() { NativeCall<void>(this, "UTimelineComponent.Stop()"); }
	float GetTimelineLength() { return NativeCall<float>(this, "UTimelineComponent.GetTimelineLength()"); }
	void SetTimelineLength(float NewLength) { NativeCall<void, float>(this, "UTimelineComponent.SetTimelineLength(float)", NewLength); }
	void SetTimelineLengthMode(ETimelineLengthMode NewLengthMode) { NativeCall<void, ETimelineLengthMode>(this, "UTimelineComponent.SetTimelineLengthMode(ETimelineLengthMode)", NewLengthMode); }
	void SetDirectionPropertyName(FName DirectionPropertyName) { NativeCall<void, FName>(this, "UTimelineComponent.SetDirectionPropertyName(FName)", DirectionPropertyName); }
	void SetLooping(bool bNewLooping) { NativeCall<void, bool>(this, "UTimelineComponent.SetLooping(bool)", bNewLooping); }
};
