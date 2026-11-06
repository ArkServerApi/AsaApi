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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FCameraAssetReference& CameraReferenceField() { return *GetNativePointerField<FCameraAssetReference*>(this, "UGameplayCameraComponent.CameraReference"); }
	FInstancedPropertyBag& CachedParameterOverridesField() { return *GetNativePointerField<FInstancedPropertyBag*>(this, "UGameplayCameraComponent.CachedParameterOverrides"); }
	UCameraAsset* OnCreateEvaluationContext() { return NativeCall<UCameraAsset*>(this, "UGameplayCameraComponent.OnCreateEvaluationContext()"); }
	void OnRegister() { NativeCall<void>(this, "UGameplayCameraComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UGameplayCameraComponent.OnUnregister()"); }
	void OnUpdateEvaluationContext(bool bForceApplyParameterOverrides) { NativeCall<void, bool>(this, "UGameplayCameraComponent.OnUpdateEvaluationContext(bool)", bForceApplyParameterOverrides); }
	void PostLoad() { NativeCall<void>(this, "UGameplayCameraComponent.PostLoad()"); }
};
