#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UHoldoutCompositeComponent : public USceneComponent
{
public:
	UHoldoutCompositeComponent() = delete;
	~UHoldoutCompositeComponent() = delete;
	UHoldoutCompositeComponent(const UHoldoutCompositeComponent&) = delete;
	UHoldoutCompositeComponent& operator=(const UHoldoutCompositeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoldoutCompositeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoldoutCompositeComponent"); }

	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "UHoldoutCompositeComponent.bIsEnabled"); }
	void BeginDestroy() { NativeCall<void>(this, "UHoldoutCompositeComponent.BeginDestroy()"); }
	void DetachFromComponent(const FDetachmentTransformRules& DetachmentRules) { NativeCall<void, const FDetachmentTransformRules&>(this, "UHoldoutCompositeComponent.DetachFromComponent(FDetachmentTransformRules&)", DetachmentRules); }
	void UnregisterCompositeImpl() { NativeCall<void>(this, "UHoldoutCompositeComponent.UnregisterCompositeImpl()"); }
	void OnUnregister() { NativeCall<void>(this, "UHoldoutCompositeComponent.OnUnregister()"); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UHoldoutCompositeComponent.OnAttachmentChanged()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UHoldoutCompositeComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RegisterCompositeImpl() { NativeCall<void>(this, "UHoldoutCompositeComponent.RegisterCompositeImpl()"); }
	void OnComponentCreated() { NativeCall<void>(this, "UHoldoutCompositeComponent.OnComponentCreated()"); }
	void OnRegister() { NativeCall<void>(this, "UHoldoutCompositeComponent.OnRegister()"); }
};
