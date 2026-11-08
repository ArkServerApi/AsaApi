#pragma once
#include "BulkForward.h"
#include "APointOfInterestActor.h"

struct ACompanionEventTrigger : public APointOfInterestActor
{
public:
	ACompanionEventTrigger() = delete;
	~ACompanionEventTrigger() = delete;
	ACompanionEventTrigger(const ACompanionEventTrigger&) = delete;
	ACompanionEventTrigger& operator=(const ACompanionEventTrigger&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACompanionEventTrigger"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACompanionEventTrigger"); }

	UBoxComponent*& BoxTriggerCompField() { return *GetNativePointerField<UBoxComponent**>(this, "ACompanionEventTrigger.BoxTriggerComp"); }
	UTextRenderComponent*& EventTitleTextCompField() { return *GetNativePointerField<UTextRenderComponent**>(this, "ACompanionEventTrigger.EventTitleTextComp"); }
	FCompanionEventData& MyEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "ACompanionEventTrigger.MyEventData"); }
	void OnEndOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ACompanionEventTrigger.OnEndOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	void OnBeginOverlap(AActor* OverlappedActor, AActor* Actor) { NativeCall<void, AActor*, AActor*>(this, "ACompanionEventTrigger.OnBeginOverlap(AActor*,AActor*)", OverlappedActor, Actor); }
	void BeginPlay() { NativeCall<void>(this, "ACompanionEventTrigger.BeginPlay()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "ACompanionEventTrigger.Tick(float)", DeltaSeconds); }
	UE::Math::TVector<double>* GetHUDWorldDrawLocation(UE::Math::TVector<double>* result, const FName& HUDTag) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const FName&>(this, "ACompanionEventTrigger.GetHUDWorldDrawLocation(FName&)", result, HUDTag); }
};
