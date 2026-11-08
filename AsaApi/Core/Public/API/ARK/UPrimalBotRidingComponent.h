#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UActorComponent.h"

struct UPrimalBotRidingComponent : UActorComponent
{
public:
	UPrimalBotRidingComponent() = delete;
	~UPrimalBotRidingComponent() = delete;
	UPrimalBotRidingComponent(const UPrimalBotRidingComponent&) = delete;
	UPrimalBotRidingComponent& operator=(const UPrimalBotRidingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalBotRidingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalBotRidingComponent"); }



	void LifeSpanCallback() { NativeCall<void>(this, "UPrimalBotRidingComponent.LifeSpanCallback()"); }
	void SetLifeSpan(float LifeSpan) { NativeCall<void, float>(this, "UPrimalBotRidingComponent.SetLifeSpan(float)", LifeSpan); }

	TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>& RiderField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>*>(this, "UPrimalBotRidingComponent.Rider"); }
	TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>& ClaimerField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>*>(this, "UPrimalBotRidingComponent.Claimer"); }
	FTimerHandle& TimerHandle_DestroyComponentField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalBotRidingComponent.TimerHandle_DestroyComponent"); }
};
