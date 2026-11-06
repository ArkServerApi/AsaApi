#pragma once
#include "BulkForward.h"
#include "UGameplayCameraComponentBase.h"

struct UGameplayCameraComponent : public UGameplayCameraComponentBase
{
public:
	UGameplayCameraComponent() = delete;
	~UGameplayCameraComponent() = delete;
	UGameplayCameraComponent(const UGameplayCameraComponent&) = delete;
	UGameplayCameraComponent& operator=(const UGameplayCameraComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameplayCameraComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameplayCameraComponent"); }

	FCameraAssetReference& CameraReferenceField() { return *GetNativePointerField<FCameraAssetReference*>(this, "UGameplayCameraComponent.CameraReference"); }
	FInstancedPropertyBag& CachedParameterOverridesField() { return *GetNativePointerField<FInstancedPropertyBag*>(this, "UGameplayCameraComponent.CachedParameterOverrides"); }
	UCameraAsset* OnCreateEvaluationContext() { return NativeCall<UCameraAsset*>(this, "UGameplayCameraComponent.OnCreateEvaluationContext()"); }
	void OnRegister() { NativeCall<void>(this, "UGameplayCameraComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UGameplayCameraComponent.OnUnregister()"); }
	void OnUpdateEvaluationContext(bool bForceApplyParameterOverrides) { NativeCall<void, bool>(this, "UGameplayCameraComponent.OnUpdateEvaluationContext(bool)", bForceApplyParameterOverrides); }
	void PostLoad() { NativeCall<void>(this, "UGameplayCameraComponent.PostLoad()"); }
};
