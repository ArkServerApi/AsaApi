#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UDynamicBlueprintBinding : public UObject
{
public:
	UDynamicBlueprintBinding() = delete;
	~UDynamicBlueprintBinding() = delete;
	UDynamicBlueprintBinding(const UDynamicBlueprintBinding&) = delete;
	UDynamicBlueprintBinding& operator=(const UDynamicBlueprintBinding&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDynamicBlueprintBinding"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDynamicBlueprintBinding"); }
	void UnbindDynamicDelegates(UObject* Instance) { NativeCall<void, UObject*>(this, "UDynamicBlueprintBinding.UnbindDynamicDelegates(UObject*)", Instance); }
	void BindDynamicDelegates(UObject* InInstance) { NativeCall<void, UObject*>(this, "UDynamicBlueprintBinding.BindDynamicDelegates(UObject*)", InInstance); }
	void UnbindDynamicDelegatesForProperty(UObject* InInstance, const FObjectProperty* InObjectProperty) { NativeCall<void, UObject*, const FObjectProperty*>(this, "UDynamicBlueprintBinding.UnbindDynamicDelegatesForProperty(UObject*,FObjectProperty*)", InInstance, InObjectProperty); }
};
