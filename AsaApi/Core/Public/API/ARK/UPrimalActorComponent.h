#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalActorComponent : UObject
{
public:
	UPrimalActorComponent() = delete;
	~UPrimalActorComponent() = delete;
	UPrimalActorComponent(const UPrimalActorComponent&) = delete;
	UPrimalActorComponent& operator=(const UPrimalActorComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalActorComponent"); }



	bool IsStasisComponent() { return NativeCall<bool>(this, "UPrimalActorComponent.IsStasisComponent()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimalActorComponent._getUObject()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalActorComponent"); }

	BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries() { return { this, "UPrimalActorComponent.bHasMultiUseEntries"}; }

	static void SetMultiUseEntryName(FMultiUseEntry& Entry, FName UseName) { NativeCall<void, FMultiUseEntry&, FName>(nullptr, "UPrimalActorComponent.SetMultiUseEntryName(FMultiUseEntry&,FName)", Entry, UseName); }
};
