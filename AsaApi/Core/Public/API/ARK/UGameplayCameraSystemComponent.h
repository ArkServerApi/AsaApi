#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UGameplayCameraSystemComponent : public USceneComponent
{
public:
	UGameplayCameraSystemComponent() = delete;
	~UGameplayCameraSystemComponent() = delete;
	UGameplayCameraSystemComponent(const UGameplayCameraSystemComponent&) = delete;
	UGameplayCameraSystemComponent& operator=(const UGameplayCameraSystemComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameplayCameraSystemComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameplayCameraSystemComponent"); }

	TEnumAsByte<EAutoReceiveInput::Type>& AutoActivateForPlayerField() { return *GetNativePointerField<TEnumAsByte<EAutoReceiveInput::Type>*>(this, "UGameplayCameraSystemComponent.AutoActivateForPlayer"); }
	bool& bSetPlayerControllerRotationField() { return *GetNativePointerField<bool*>(this, "UGameplayCameraSystemComponent.bSetPlayerControllerRotation"); }
	TWeakObjectPtr<APlayerController, FWeakObjectPtr>& WeakPlayerControllerField() { return *GetNativePointerField<TWeakObjectPtr<APlayerController, FWeakObjectPtr>*>(this, "UGameplayCameraSystemComponent.WeakPlayerController"); }
	void OnRegister() { NativeCall<void>(this, "UGameplayCameraSystemComponent.OnRegister()"); }
	void BeginPlay() { NativeCall<void>(this, "UGameplayCameraSystemComponent.BeginPlay()"); }
	UObject* GetAsObject() { return NativeCall<UObject*>(this, "UGameplayCameraSystemComponent.GetAsObject()"); }
	void DeactivateCameraSystem(AActor* NextViewTarget) { NativeCall<void, AActor*>(this, "UGameplayCameraSystemComponent.DeactivateCameraSystem(AActor*)", NextViewTarget); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UGameplayCameraSystemComponent._getUObject()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UGameplayCameraSystemComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void ActivateCameraSystemForPlayerController(APlayerController* PlayerController) { NativeCall<void, APlayerController*>(this, "UGameplayCameraSystemComponent.ActivateCameraSystemForPlayerController(APlayerController*)", PlayerController); }
};
