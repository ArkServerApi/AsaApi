#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UPhysicalAnimationComponent : public UActorComponent
{
public:
	UPhysicalAnimationComponent() = delete;
	~UPhysicalAnimationComponent() = delete;
	UPhysicalAnimationComponent(const UPhysicalAnimationComponent&) = delete;
	UPhysicalAnimationComponent& operator=(const UPhysicalAnimationComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicalAnimationComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicalAnimationComponent"); }

	float& StrengthMultiplyerField() { return *GetNativePointerField<float*>(this, "UPhysicalAnimationComponent.StrengthMultiplyer"); }
	FDelegateHandle& OnTeleportDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UPhysicalAnimationComponent.OnTeleportDelegateHandle"); }
	bool& bPhysicsEngineNeedsUpdatingField() { return *GetNativePointerField<bool*>(this, "UPhysicalAnimationComponent.bPhysicsEngineNeedsUpdating"); }
	void InitializeComponent() { NativeCall<void>(this, "UPhysicalAnimationComponent.InitializeComponent()"); }
	UE::Math::TTransform<double>* GetBodyTargetTransform(UE::Math::TTransform<double>* result, FName BodyName) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName>(this, "UPhysicalAnimationComponent.GetBodyTargetTransform(FName)", result, BodyName); }
	void UpdatePhysicsEngineImp() { NativeCall<void>(this, "UPhysicalAnimationComponent.UpdatePhysicsEngineImp()"); }
	void OnTeleport() { NativeCall<void>(this, "UPhysicalAnimationComponent.OnTeleport()"); }
	void ReleasePhysicsEngine() { NativeCall<void>(this, "UPhysicalAnimationComponent.ReleasePhysicsEngine()"); }
	void BeginDestroy() { NativeCall<void>(this, "UPhysicalAnimationComponent.BeginDestroy()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPhysicalAnimationComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void InitComponent() { NativeCall<void>(this, "UPhysicalAnimationComponent.InitComponent()"); }
};
