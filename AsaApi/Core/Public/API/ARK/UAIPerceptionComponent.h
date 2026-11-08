#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UAIPerceptionComponent : public UActorComponent
{
public:
	UAIPerceptionComponent() = delete;
	~UAIPerceptionComponent() = delete;
	UAIPerceptionComponent(const UAIPerceptionComponent&) = delete;
	UAIPerceptionComponent& operator=(const UAIPerceptionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAIPerceptionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAIPerceptionComponent"); }

	FPerceptionChannelAllowList& PerceptionFilterField() { return *GetNativePointerField<FPerceptionChannelAllowList*>(this, "UAIPerceptionComponent.PerceptionFilter"); }
	TArray<float, TSizedDefaultAllocator<32> >& MaxActiveAgeField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UAIPerceptionComponent.MaxActiveAge"); }
	FPerceptionUpdatedDelegate& OnPerceptionUpdatedField() { return *GetNativePointerField<FPerceptionUpdatedDelegate*>(this, "UAIPerceptionComponent.OnPerceptionUpdated"); }
	FActorPerceptionForgetUpdatedDelegate& OnTargetPerceptionForgottenField() { return *GetNativePointerField<FActorPerceptionForgetUpdatedDelegate*>(this, "UAIPerceptionComponent.OnTargetPerceptionForgotten"); }
	FActorPerceptionUpdatedDelegate& OnTargetPerceptionUpdatedField() { return *GetNativePointerField<FActorPerceptionUpdatedDelegate*>(this, "UAIPerceptionComponent.OnTargetPerceptionUpdated"); }
	FActorPerceptionInfoUpdatedDelegate& OnTargetPerceptionInfoUpdatedField() { return *GetNativePointerField<FActorPerceptionInfoUpdatedDelegate*>(this, "UAIPerceptionComponent.OnTargetPerceptionInfoUpdated"); }
	BitFieldValue<bool, unsigned __int32> bForgetStaleActors() { return { this, "UAIPerceptionComponent.bForgetStaleActors"}; }
	BitFieldValue<bool, unsigned __int32> bCleanedUp() { return { this, "UAIPerceptionComponent.bCleanedUp"}; }
	void RegisterSenseConfig(const UAISenseConfig& SenseConfig, UAIPerceptionSystem& AIPerceptionSys) { NativeCall<void, const UAISenseConfig&, UAIPerceptionSystem&>(this, "UAIPerceptionComponent.RegisterSenseConfig(UAISenseConfig&,UAIPerceptionSystem&)", SenseConfig, AIPerceptionSys); }
	void RequestStimuliListenerUpdate() { NativeCall<void>(this, "UAIPerceptionComponent.RequestStimuliListenerUpdate()"); }
	void OnRegister() { NativeCall<void>(this, "UAIPerceptionComponent.OnRegister()"); }
	void PostInitProperties() { NativeCall<void>(this, "UAIPerceptionComponent.PostInitProperties()"); }
	void BeginDestroy() { NativeCall<void>(this, "UAIPerceptionComponent.BeginDestroy()"); }
	void RegisterStimulus(AActor* Source, const FAIStimulus& Stimulus) { NativeCall<void, AActor*, const FAIStimulus&>(this, "UAIPerceptionComponent.RegisterStimulus(AActor*,FAIStimulus&)", Source, Stimulus); }
	const AActor* GetBodyActor() { return NativeCall<const AActor*>(this, "UAIPerceptionComponent.GetBodyActor()"); }
	void ProcessStimuli() { NativeCall<void>(this, "UAIPerceptionComponent.ProcessStimuli()"); }
	void GetHostileActors(TArray<AActor*, TSizedDefaultAllocator<32> >& OutActors) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >&>(this, "UAIPerceptionComponent.GetHostileActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", OutActors); }
	bool AgeStimuli(float ConstPerceptionAgingRate) { return NativeCall<bool, float>(this, "UAIPerceptionComponent.AgeStimuli(float)", ConstPerceptionAgingRate); }
	void OnUnregister() { NativeCall<void>(this, "UAIPerceptionComponent.OnUnregister()"); }
	void CleanUp() { NativeCall<void>(this, "UAIPerceptionComponent.CleanUp()"); }
	void ForgetActor(AActor* ActorToForget) { NativeCall<void, AActor*>(this, "UAIPerceptionComponent.ForgetActor(AActor*)", ActorToForget); }
	void ForgetAll() { NativeCall<void>(this, "UAIPerceptionComponent.ForgetAll()"); }
	void HandleExpiredStimulus(FAIStimulus& StimulusStore) { NativeCall<void, FAIStimulus&>(this, "UAIPerceptionComponent.HandleExpiredStimulus(FAIStimulus&)", StimulusStore); }
	bool ConditionallyStoreSuccessfulStimulus(FAIStimulus& StimulusStore, const FAIStimulus& NewStimulus) { return NativeCall<bool, FAIStimulus&, const FAIStimulus&>(this, "UAIPerceptionComponent.ConditionallyStoreSuccessfulStimulus(FAIStimulus&,FAIStimulus&)", StimulusStore, NewStimulus); }
	void RefreshStimulus(FAIStimulus& StimulusStore, const FAIStimulus& NewStimulus) { NativeCall<void, FAIStimulus&, const FAIStimulus&>(this, "UAIPerceptionComponent.RefreshStimulus(FAIStimulus&,FAIStimulus&)", StimulusStore, NewStimulus); }
	void RemoveDeadData() { NativeCall<void>(this, "UAIPerceptionComponent.RemoveDeadData()"); }
};
