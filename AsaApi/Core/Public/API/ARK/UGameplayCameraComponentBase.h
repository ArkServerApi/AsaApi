#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UGameplayCameraComponentBase : public USceneComponent
{
public:
	UGameplayCameraComponentBase() = delete;
	~UGameplayCameraComponentBase() = delete;
	UGameplayCameraComponentBase(const UGameplayCameraComponentBase&) = delete;
	UGameplayCameraComponentBase& operator=(const UGameplayCameraComponentBase&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameplayCameraComponentBase"); }

	TEnumAsByte<EAutoReceiveInput::Type>& DefaultPlayerField() { return *GetNativePointerField<TEnumAsByte<EAutoReceiveInput::Type>*>(this, "UGameplayCameraComponentBase.DefaultPlayer"); }
	bool& bRunStandaloneCameraSystemField() { return *GetNativePointerField<bool*>(this, "UGameplayCameraComponentBase.bRunStandaloneCameraSystem"); }
	bool& bSetControlRotationWhenViewTargetField() { return *GetNativePointerField<bool*>(this, "UGameplayCameraComponentBase.bSetControlRotationWhenViewTarget"); }
	bool& bPlaybackModeField() { return *GetNativePointerField<bool*>(this, "UGameplayCameraComponentBase.bPlaybackMode"); }
	bool& bIsOwnedOutputCameraComponentField() { return *GetNativePointerField<bool*>(this, "UGameplayCameraComponentBase.bIsOwnedOutputCameraComponent"); }
	bool& bIsCameraCutNextFrameField() { return *GetNativePointerField<bool*>(this, "UGameplayCameraComponentBase.bIsCameraCutNextFrame"); }
	UCameraAsset* OnCreateEvaluationContext() { return NativeCall<UCameraAsset*>(this, "UGameplayCameraComponentBase.OnCreateEvaluationContext()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameplayCameraComponentBase"); }
	bool EnsureCameraSystemHostIfNeeded() { return NativeCall<bool>(this, "UGameplayCameraComponentBase.EnsureCameraSystemHostIfNeeded()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UGameplayCameraComponentBase.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void ActivateCameraForPlayerController(APlayerController* PlayerController, bool bSetAsViewTarget) { NativeCall<void, APlayerController*, bool>(this, "UGameplayCameraComponentBase.ActivateCameraForPlayerController(APlayerController*,bool)", PlayerController, bSetAsViewTarget); }
	void OnUpdateEvaluationContext(bool bForceApplyParameterOverrides) { NativeCall<void, bool>(this, "UGameplayCameraComponentBase.OnUpdateEvaluationContext(bool)", bForceApplyParameterOverrides); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGameplayCameraComponentBase.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void UpdateOutputCameraComponent() { NativeCall<void>(this, "UGameplayCameraComponentBase.UpdateOutputCameraComponent()"); }
	void OnRegister() { NativeCall<void>(this, "UGameplayCameraComponentBase.OnRegister()"); }
	void DestroyCameraSystemHost() { NativeCall<void>(this, "UGameplayCameraComponentBase.DestroyCameraSystemHost()"); }
	void GetChangedParameterOverrides(const FInstancedPropertyBag& InParameterOverrides, FInstancedPropertyBag& InOutCachedParameterOverrides, TArray<FGuid, TSizedDefaultAllocator<32> >& OutChangedParameterGuids) { NativeCall<void, const FInstancedPropertyBag&, FInstancedPropertyBag&, TArray<FGuid, TSizedDefaultAllocator<32> >&>(this, "UGameplayCameraComponentBase.GetChangedParameterOverrides(FInstancedPropertyBag&,FInstancedPropertyBag&,TArray<FGuid,TSizedDefaultAllocator<32>>&)", InParameterOverrides, InOutCachedParameterOverrides, OutChangedParameterGuids); }
	void EnsureEvaluationContext(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "UGameplayCameraComponentBase.EnsureEvaluationContext(APlayerController*)", PlayerController); }
	void Deactivate() { NativeCall<void>(this, "UGameplayCameraComponentBase.Deactivate()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UGameplayCameraComponentBase.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void BeginPlay() { NativeCall<void>(this, "UGameplayCameraComponentBase.BeginPlay()"); }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UGameplayCameraComponentBase.Activate(bool)", bReset); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UGameplayCameraComponentBase._getUObject()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UGameplayCameraComponentBase.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void EnsureOutputCameraComponent() { NativeCall<void>(this, "UGameplayCameraComponentBase.EnsureOutputCameraComponent()"); }
	void UpdateEvaluationContext(bool bForceApplyParameterOverrides) { NativeCall<void, bool>(this, "UGameplayCameraComponentBase.UpdateEvaluationContext(bool)", bForceApplyParameterOverrides); }
	UObject* GetAsObject() { return NativeCall<UObject*>(this, "UGameplayCameraComponentBase.GetAsObject()"); }
	void BeginDestroy() { NativeCall<void>(this, "UGameplayCameraComponentBase.BeginDestroy()"); }
};
