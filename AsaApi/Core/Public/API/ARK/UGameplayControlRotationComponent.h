#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UGameplayControlRotationComponent : public UActorComponent
{
public:
	UGameplayControlRotationComponent() = delete;
	~UGameplayControlRotationComponent() = delete;
	UGameplayControlRotationComponent(const UGameplayControlRotationComponent&) = delete;
	UGameplayControlRotationComponent& operator=(const UGameplayControlRotationComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameplayControlRotationComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameplayControlRotationComponent"); }

	float& AxisActionAngularSpeedThresholdField() { return *GetNativePointerField<float*>(this, "UGameplayControlRotationComponent.AxisActionAngularSpeedThreshold"); }
	float& AxisActionMagnitudeThresholdField() { return *GetNativePointerField<float*>(this, "UGameplayControlRotationComponent.AxisActionMagnitudeThreshold"); }
	TEnumAsByte<EAutoReceiveInput::Type>& AutoActivateForPlayerField() { return *GetNativePointerField<TEnumAsByte<EAutoReceiveInput::Type>*>(this, "UGameplayControlRotationComponent.AutoActivateForPlayer"); }
	void TeardownControlRotationService(bool bAllowUninitialized) { NativeCall<void, bool>(this, "UGameplayControlRotationComponent.TeardownControlRotationService(bool)", bAllowUninitialized); }
	void InitializeControlRotationService(APlayerController* InPlayerController) { NativeCall<void, APlayerController*>(this, "UGameplayControlRotationComponent.InitializeControlRotationService(APlayerController*)", InPlayerController); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGameplayControlRotationComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UGameplayControlRotationComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "UGameplayControlRotationComponent.BeginPlay()"); }
};
