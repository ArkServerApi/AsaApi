#pragma once
#include "BulkForward.h"
#include "ADefaultPawn.h"

struct AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	AAbilitySystemTestPawn() = delete;
	~AAbilitySystemTestPawn() = delete;
	AAbilitySystemTestPawn(const AAbilitySystemTestPawn&) = delete;
	AAbilitySystemTestPawn& operator=(const AAbilitySystemTestPawn&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostInitializeComponents() { NativeCall<void>(this, "AAbilitySystemTestPawn.PostInitializeComponents()"); }
	UAbilitySystemComponent* GetAbilitySystemComponent() { return NativeCall<UAbilitySystemComponent*>(this, "AAbilitySystemTestPawn.GetAbilitySystemComponent()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AAbilitySystemTestPawn._getUObject()"); }
};
