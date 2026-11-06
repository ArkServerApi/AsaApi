#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UDaySequenceModifierComponent : public USceneComponent
{
public:
	UDaySequenceModifierComponent() = delete;
	~UDaySequenceModifierComponent() = delete;
	UDaySequenceModifierComponent(const UDaySequenceModifierComponent&) = delete;
	UDaySequenceModifierComponent& operator=(const UDaySequenceModifierComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDaySequenceModifierComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDaySequenceModifierComponent"); }

	TWeakObjectPtr<APlayerController, FWeakObjectPtr>& WeakBlendTargetField() { return *GetNativePointerField<TWeakObjectPtr<APlayerController, FWeakObjectPtr>*>(this, "UDaySequenceModifierComponent.WeakBlendTarget"); }
	int& BiasField() { return *GetNativePointerField<int*>(this, "UDaySequenceModifierComponent.Bias"); }
	float& DayNightCycleTimeField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.DayNightCycleTime"); }
	float& BlendAmountField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.BlendAmount"); }
	float& BlendTimeField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.BlendTime"); }
	float& UserBlendWeightField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.UserBlendWeight"); }
	FOnPostReinitializeSubSequences& OnPostReinitializeSubSequencesField() { return *GetNativePointerField<FOnPostReinitializeSubSequences*>(this, "UDaySequenceModifierComponent.OnPostReinitializeSubSequences"); }
	FOnPostEnableModifier& OnPostEnableModifierField() { return *GetNativePointerField<FOnPostEnableModifier*>(this, "UDaySequenceModifierComponent.OnPostEnableModifier"); }
	float& InternalBlendWeightField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.InternalBlendWeight"); }
	float& TimedBlendingLastUpdatedField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.TimedBlendingLastUpdated"); }
	float& TimedBlendingStartWeightField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.TimedBlendingStartWeight"); }
	float& TimedBlendingTargetWeightField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.TimedBlendingTargetWeight"); }
	float& TimedBlendingTargetWeightLastUpdatedField() { return *GetNativePointerField<float*>(this, "UDaySequenceModifierComponent.TimedBlendingTargetWeightLastUpdated"); }
	bool& bCachedExternalShapesInvalidField() { return *GetNativePointerField<bool*>(this, "UDaySequenceModifierComponent.bCachedExternalShapesInvalid"); }
	BitFieldValue<bool, unsigned char> bIgnoreBias() { return { this, "UDaySequenceModifierComponent.bIgnoreBias"}; }
	BitFieldValue<bool, unsigned char> bIsComponentEnabled() { return { this, "UDaySequenceModifierComponent.bIsComponentEnabled"}; }
	BitFieldValue<bool, unsigned char> bIsEnabled() { return { this, "UDaySequenceModifierComponent.bIsEnabled"}; }
	BitFieldValue<bool, unsigned char> bPreview() { return { this, "UDaySequenceModifierComponent.bPreview"}; }
	BitFieldValue<bool, unsigned char> bUseCollection() { return { this, "UDaySequenceModifierComponent.bUseCollection"}; }
	BitFieldValue<bool, unsigned char> bSmoothBlending() { return { this, "UDaySequenceModifierComponent.bSmoothBlending"}; }
	BitFieldValue<bool, unsigned char> bForceSmoothBlending() { return { this, "UDaySequenceModifierComponent.bForceSmoothBlending"}; }
	void DisableModifier() { NativeCall<void>(this, "UDaySequenceModifierComponent.DisableModifier()"); }
	static void SetTransientSequence_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UDaySequenceModifierComponent.SetTransientSequence_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetDayNightCycle_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UDaySequenceModifierComponent.GetDayNightCycle_WrapperImpl(void*,void*)", Object, OutValue); }
	UMovieSceneSubSection* InitializeDaySequence(const FDaySequenceCollectionEntry& Entry) { return NativeCall<UMovieSceneSubSection*, const FDaySequenceCollectionEntry&>(this, "UDaySequenceModifierComponent.InitializeDaySequence(FDaySequenceCollectionEntry&)", Entry); }
	void DaySequenceUpdate() { NativeCall<void>(this, "UDaySequenceModifierComponent.DaySequenceUpdate()"); }
	void SetInitialTimeOfDay() { NativeCall<void>(this, "UDaySequenceModifierComponent.SetInitialTimeOfDay()"); }
	void PostLoad() { NativeCall<void>(this, "UDaySequenceModifierComponent.PostLoad()"); }
	void UpdateCachedExternalShapes() { NativeCall<void>(this, "UDaySequenceModifierComponent.UpdateCachedExternalShapes()"); }
	static void GetTransientSequence_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UDaySequenceModifierComponent.GetTransientSequence_WrapperImpl(void*,void*)", Object, OutValue); }
	void BindToDaySequenceActor(ADaySequenceActor* DaySequenceActor) { NativeCall<void, ADaySequenceActor*>(this, "UDaySequenceModifierComponent.BindToDaySequenceActor(ADaySequenceActor*)", DaySequenceActor); }
	void EnableModifier() { NativeCall<void>(this, "UDaySequenceModifierComponent.EnableModifier()"); }
	void RemoveSubSequenceTrack() { NativeCall<void>(this, "UDaySequenceModifierComponent.RemoveSubSequenceTrack()"); }
	static void SetBlendPolicy_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UDaySequenceModifierComponent.SetBlendPolicy_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetUserDaySequence_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UDaySequenceModifierComponent.SetUserDaySequence_WrapperImpl(void*,void*)", Object, InValue); }
	void EndPlay(EEndPlayReason::Type Reason) { NativeCall<void, EEndPlayReason::Type>(this, "UDaySequenceModifierComponent.EndPlay(EEndPlayReason::Type)", Reason); }
	void OnUnregister() { NativeCall<void>(this, "UDaySequenceModifierComponent.OnUnregister()"); }
	static void SetBias_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UDaySequenceModifierComponent.SetBias_WrapperImpl(void*,void*)", Object, InValue); }
	void UnbindFromDaySequenceActor() { NativeCall<void>(this, "UDaySequenceModifierComponent.UnbindFromDaySequenceActor()"); }
	static void SetUserBlendWeight_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UDaySequenceModifierComponent.SetUserBlendWeight_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetMode_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UDaySequenceModifierComponent.SetMode_WrapperImpl(void*,void*)", Object, InValue); }
	static void SetDayNightCycle_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UDaySequenceModifierComponent.SetDayNightCycle_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetDayNightCycleTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UDaySequenceModifierComponent.GetDayNightCycleTime_WrapperImpl(void*,void*)", Object, OutValue); }
	void OnRegister() { NativeCall<void>(this, "UDaySequenceModifierComponent.OnRegister()"); }
	float GetBlendWeight() { return NativeCall<float>(this, "UDaySequenceModifierComponent.GetBlendWeight()"); }
	void BeginPlay() { NativeCall<void>(this, "UDaySequenceModifierComponent.BeginPlay()"); }
	static void GetBlendPolicy_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UDaySequenceModifierComponent.GetBlendPolicy_WrapperImpl(void*,void*)", Object, OutValue); }
	float UpdateInternalBlendWeight() { return NativeCall<float>(this, "UDaySequenceModifierComponent.UpdateInternalBlendWeight()"); }
	static void GetUserDaySequence_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UDaySequenceModifierComponent.GetUserDaySequence_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetBias_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UDaySequenceModifierComponent.GetBias_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetUserBlendWeight_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UDaySequenceModifierComponent.GetUserBlendWeight_WrapperImpl(void*,void*)", Object, OutValue); }
	static void GetMode_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UDaySequenceModifierComponent.GetMode_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetDayNightCycleTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UDaySequenceModifierComponent.SetDayNightCycleTime_WrapperImpl(void*,void*)", Object, InValue); }
};
