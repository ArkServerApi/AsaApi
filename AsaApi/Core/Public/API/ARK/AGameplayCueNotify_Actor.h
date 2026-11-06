#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGameplayCueNotify_Actor : public AActor
{
public:
	AGameplayCueNotify_Actor() = delete;
	~AGameplayCueNotify_Actor() = delete;
	AGameplayCueNotify_Actor(const AGameplayCueNotify_Actor&) = delete;
	AGameplayCueNotify_Actor& operator=(const AGameplayCueNotify_Actor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayCueNotify_Actor"); }

	bool& bAutoDestroyOnRemoveField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bAutoDestroyOnRemove"); }
	float& AutoDestroyDelayField() { return *GetNativePointerField<float*>(this, "AGameplayCueNotify_Actor.AutoDestroyDelay"); }
	bool& WarnIfTimelineIsStillRunningField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.WarnIfTimelineIsStillRunning"); }
	bool& WarnIfLatentActionIsStillRunningField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.WarnIfLatentActionIsStillRunning"); }
	FGameplayTag& GameplayCueTagField() { return *GetNativePointerField<FGameplayTag*>(this, "AGameplayCueNotify_Actor.GameplayCueTag"); }
	FName& GameplayCueNameField() { return *GetNativePointerField<FName*>(this, "AGameplayCueNotify_Actor.GameplayCueName"); }
	bool& bAutoAttachToOwnerField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bAutoAttachToOwner"); }
	bool& IsOverrideField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.IsOverride"); }
	bool& bUniqueInstancePerInstigatorField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bUniqueInstancePerInstigator"); }
	bool& bUniqueInstancePerSourceObjectField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bUniqueInstancePerSourceObject"); }
	bool& bAllowMultipleOnActiveEventsField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bAllowMultipleOnActiveEvents"); }
	bool& bAllowMultipleWhileActiveEventsField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bAllowMultipleWhileActiveEvents"); }
	int& NumPreallocatedInstancesField() { return *GetNativePointerField<int*>(this, "AGameplayCueNotify_Actor.NumPreallocatedInstances"); }
	bool& bInRecycleQueueField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bInRecycleQueue"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& CueInstigatorField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "AGameplayCueNotify_Actor.CueInstigator"); }
	TWeakObjectPtr<UObject const , FWeakObjectPtr>& CueSourceObjectField() { return *GetNativePointerField<TWeakObjectPtr<UObject const , FWeakObjectPtr>*>(this, "AGameplayCueNotify_Actor.CueSourceObject"); }
	FTimerHandle& FinishTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "AGameplayCueNotify_Actor.FinishTimerHandle"); }
	bool& bHasHandledOnActiveEventField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bHasHandledOnActiveEvent"); }
	bool& bHasHandledWhileActiveEventField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bHasHandledWhileActiveEvent"); }
	bool& bHasHandledOnRemoveEventField() { return *GetNativePointerField<bool*>(this, "AGameplayCueNotify_Actor.bHasHandledOnRemoveEvent"); }
	bool WhileActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Actor.WhileActive_Implementation(AActor*,FGameplayCueParameters&)", MyTarget, Parameters); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AGameplayCueNotify_Actor.Serialize(FArchive&)", Ar); }
	void BeginPlay() { NativeCall<void>(this, "AGameplayCueNotify_Actor.BeginPlay()"); }
	void Destroyed() { NativeCall<void>(this, "AGameplayCueNotify_Actor.Destroyed()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AGameplayCueNotify_Actor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool OnExecute_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Actor.OnExecute_Implementation(AActor*,FGameplayCueParameters&)", MyTarget, Parameters); }
	bool GameplayCuePendingRemove() { return NativeCall<bool>(this, "AGameplayCueNotify_Actor.GameplayCuePendingRemove()"); }
	void GameplayCueFinishedCallback() { NativeCall<void>(this, "AGameplayCueNotify_Actor.GameplayCueFinishedCallback()"); }
	void K2_DestroyActor() { NativeCall<void>(this, "AGameplayCueNotify_Actor.K2_DestroyActor()"); }
	bool OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Actor.OnRemove(AActor*,FGameplayCueParameters&)", MyTarget, Parameters); }
	void DeriveGameplayCueTagFromAssetName() { NativeCall<void>(this, "AGameplayCueNotify_Actor.DeriveGameplayCueTagFromAssetName()"); }
	bool Recycle() { return NativeCall<bool>(this, "AGameplayCueNotify_Actor.Recycle()"); }
	void PostInitProperties() { NativeCall<void>(this, "AGameplayCueNotify_Actor.PostInitProperties()"); }
	void ReuseAfterRecycle() { NativeCall<void>(this, "AGameplayCueNotify_Actor.ReuseAfterRecycle()"); }
	bool OnRemove_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Actor.OnRemove_Implementation(AActor*,FGameplayCueParameters&)", MyTarget, Parameters); }
	void OnOwnerDestroyed(AActor* DestroyedActor) { NativeCall<void, AActor*>(this, "AGameplayCueNotify_Actor.OnOwnerDestroyed(AActor*)", DestroyedActor); }
	void SetOwner(AActor* InNewOwner) { NativeCall<void, AActor*>(this, "AGameplayCueNotify_Actor.SetOwner(AActor*)", InNewOwner); }
	bool OnActive_Implementation(AActor* MyTarget, const FGameplayCueParameters& Parameters) { return NativeCall<bool, AActor*, const FGameplayCueParameters&>(this, "AGameplayCueNotify_Actor.OnActive_Implementation(AActor*,FGameplayCueParameters&)", MyTarget, Parameters); }
	void K2_EndGameplayCue() { NativeCall<void>(this, "AGameplayCueNotify_Actor.K2_EndGameplayCue()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayCueNotify_Actor"); }
};
