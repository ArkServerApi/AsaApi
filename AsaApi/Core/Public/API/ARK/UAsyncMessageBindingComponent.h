#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UAsyncMessageBindingComponent : public UActorComponent
{
public:
	UAsyncMessageBindingComponent() = delete;
	~UAsyncMessageBindingComponent() = delete;
	UAsyncMessageBindingComponent(const UAsyncMessageBindingComponent&) = delete;
	UAsyncMessageBindingComponent& operator=(const UAsyncMessageBindingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAsyncMessageBindingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAsyncMessageBindingComponent"); }

	void UninitializeComponent() { NativeCall<void>(this, "UAsyncMessageBindingComponent.UninitializeComponent()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UAsyncMessageBindingComponent._getUObject()"); }
	void InitializeComponent() { NativeCall<void>(this, "UAsyncMessageBindingComponent.InitializeComponent()"); }
	void CleanupEndpoint() { NativeCall<void>(this, "UAsyncMessageBindingComponent.CleanupEndpoint()"); }
	void CreateEndpoint() { NativeCall<void>(this, "UAsyncMessageBindingComponent.CreateEndpoint()"); }
};
