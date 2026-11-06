#pragma once
#include "BulkForward.h"
#include "UGameplayCameraComponentBase.h"

struct UGameplayCameraRigComponent : public UGameplayCameraComponentBase
{
public:
	UGameplayCameraRigComponent() = delete;
	~UGameplayCameraRigComponent() = delete;
	UGameplayCameraRigComponent(const UGameplayCameraRigComponent&) = delete;
	UGameplayCameraRigComponent& operator=(const UGameplayCameraRigComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameplayCameraRigComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameplayCameraRigComponent"); }

	FCameraRigAssetReference& CameraRigReferenceField() { return *GetNativePointerField<FCameraRigAssetReference*>(this, "UGameplayCameraRigComponent.CameraRigReference"); }
	FInstancedPropertyBag& CachedParameterOverridesField() { return *GetNativePointerField<FInstancedPropertyBag*>(this, "UGameplayCameraRigComponent.CachedParameterOverrides"); }
	bool& bIsBuildingGeneratedCameraAssetField() { return *GetNativePointerField<bool*>(this, "UGameplayCameraRigComponent.bIsBuildingGeneratedCameraAsset"); }
	void OnRegister() { NativeCall<void>(this, "UGameplayCameraRigComponent.OnRegister()"); }
	UCameraAsset* OnCreateEvaluationContext() { return NativeCall<UCameraAsset*>(this, "UGameplayCameraRigComponent.OnCreateEvaluationContext()"); }
	void OnUpdateEvaluationContext(bool bForceApplyParameterOverrides) { NativeCall<void, bool>(this, "UGameplayCameraRigComponent.OnUpdateEvaluationContext(bool)", bForceApplyParameterOverrides); }
	void ApplyChangedParameterOverrides() { NativeCall<void>(this, "UGameplayCameraRigComponent.ApplyChangedParameterOverrides()"); }
	void OnUnregister() { NativeCall<void>(this, "UGameplayCameraRigComponent.OnUnregister()"); }
};
