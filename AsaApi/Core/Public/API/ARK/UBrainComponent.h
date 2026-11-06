#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UBrainComponent : public UActorComponent
{
public:
	UBrainComponent() = delete;
	~UBrainComponent() = delete;
	UBrainComponent(const UBrainComponent&) = delete;
	UBrainComponent& operator=(const UBrainComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBrainComponent"); }

	TArray<FAIMessageObserver*, TSizedDefaultAllocator<32> >& MessageObserversField() { return *GetNativePointerField<TArray<FAIMessageObserver*, TSizedDefaultAllocator<32> >*>(this, "UBrainComponent.MessageObservers"); }
	FAIResourceLock& ResourceLockField() { return *GetNativePointerField<FAIResourceLock*>(this, "UBrainComponent.ResourceLock"); }
	BitFieldValue<bool, unsigned __int32> bDoLogicRestartOnUnlock() { return { this, "UBrainComponent.bDoLogicRestartOnUnlock"}; }
	EAILogicResuming::Type ResumeLogic(const FString& Reason) { return NativeCall<EAILogicResuming::Type, const FString&>(this, "UBrainComponent.ResumeLogic(FString&)", Reason); }
	bool IsPaused() { return NativeCall<bool>(this, "UBrainComponent.IsPaused()"); }
	void ClearResourceLock(EAIRequestPriority::Type LockSource) { NativeCall<void, EAIRequestPriority::Type>(this, "UBrainComponent.ClearResourceLock(EAIRequestPriority::Type)", LockSource); }
	void OnRegister() { NativeCall<void>(this, "UBrainComponent.OnRegister()"); }
	bool IsRunning() { return NativeCall<bool>(this, "UBrainComponent.IsRunning()"); }
	void ForceUnlockResource() { NativeCall<void>(this, "UBrainComponent.ForceUnlockResource()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UBrainComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RestartLogic() { NativeCall<void>(this, "UBrainComponent.RestartLogic()"); }
	bool IsResourceLocked() { return NativeCall<bool>(this, "UBrainComponent.IsResourceLocked()"); }
	void Cleanup() { NativeCall<void>(this, "UBrainComponent.Cleanup()"); }
	void HandleMessage(const FAIMessage& Message) { NativeCall<void, const FAIMessage&>(this, "UBrainComponent.HandleMessage(FAIMessage&)", Message); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UBrainComponent._getUObject()"); }
	void InitializeComponent() { NativeCall<void>(this, "UBrainComponent.InitializeComponent()"); }
	void StopLogic(const FString& Reason) { NativeCall<void, const FString&>(this, "UBrainComponent.StopLogic(FString&)", Reason); }
	void PauseLogic(const FString& Reason) { NativeCall<void, const FString&>(this, "UBrainComponent.PauseLogic(FString&)", Reason); }
	void CacheBlackboardComponent(UBlackboardComponent* BBComp) { NativeCall<void, UBlackboardComponent*>(this, "UBrainComponent.CacheBlackboardComponent(UBlackboardComponent*)", BBComp); }
	FString* GetDebugInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "UBrainComponent.GetDebugInfoString()", result); }
	void StartLogic() { NativeCall<void>(this, "UBrainComponent.StartLogic()"); }
	void LockResource(EAIRequestPriority::Type LockSource) { NativeCall<void, EAIRequestPriority::Type>(this, "UBrainComponent.LockResource(EAIRequestPriority::Type)", LockSource); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBrainComponent"); }
};
