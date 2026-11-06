#pragma once
#include "BulkForward.h"
#include "UAnimationSharingStateProcessor.h"

struct UPrimalAnimSharingStateProcessor : public UAnimationSharingStateProcessor
{
public:
	UPrimalAnimSharingStateProcessor() = delete;
	~UPrimalAnimSharingStateProcessor() = delete;
	UPrimalAnimSharingStateProcessor(const UPrimalAnimSharingStateProcessor&) = delete;
	UPrimalAnimSharingStateProcessor& operator=(const UPrimalAnimSharingStateProcessor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAnimSharingStateProcessor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAnimSharingStateProcessor"); }

	UEnum* GetAnimationStateEnum_Internal() { return NativeCall<UEnum*>(this, "UPrimalAnimSharingStateProcessor.GetAnimationStateEnum_Internal()"); }
	void ProcessActorState_Internal(int& OutState, AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool& bShouldProcess) { NativeCall<void, int&, AActor*, unsigned char, unsigned char, bool&>(this, "UPrimalAnimSharingStateProcessor.ProcessActorState_Internal(int&,AActor*,unsignedchar,unsignedchar,bool&)", OutState, InActor, CurrentState, OnDemandState, bShouldProcess); }
};
