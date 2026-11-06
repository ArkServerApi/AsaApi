#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UAttributeBasedRootMotionComponent : public UActorComponent
{
public:
	UAttributeBasedRootMotionComponent() = delete;
	~UAttributeBasedRootMotionComponent() = delete;
	UAttributeBasedRootMotionComponent(const UAttributeBasedRootMotionComponent&) = delete;
	UAttributeBasedRootMotionComponent& operator=(const UAttributeBasedRootMotionComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAttributeBasedRootMotionComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAttributeBasedRootMotionComponent"); }

	bool& bEnableRootMotionField() { return *GetNativePointerField<bool*>(this, "UAttributeBasedRootMotionComponent.bEnableRootMotion"); }
	FAttributeBasedRootMotionComponentPrePhysicsTickFunction& PrePhysicsTickFunctionField() { return *GetNativePointerField<FAttributeBasedRootMotionComponentPrePhysicsTickFunction*>(this, "UAttributeBasedRootMotionComponent.PrePhysicsTickFunction"); }
	TWeakObjectPtr<ACharacter, FWeakObjectPtr>& CharacterOwnerField() { return *GetNativePointerField<TWeakObjectPtr<ACharacter, FWeakObjectPtr>*>(this, "UAttributeBasedRootMotionComponent.CharacterOwner"); }
	bool& PrevTransformValidField() { return *GetNativePointerField<bool*>(this, "UAttributeBasedRootMotionComponent.PrevTransformValid"); }
	UE::Math::TVector<double>& TranslationVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UAttributeBasedRootMotionComponent.TranslationVelocity"); }
	UE::Math::TVector<double>& RotationVelocityField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UAttributeBasedRootMotionComponent.RotationVelocity"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UAttributeBasedRootMotionComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void RegisterComponentTickFunctions(bool bRegister, bool bSaveAndRestoreComponentTickState) { NativeCall<void, bool, bool>(this, "UAttributeBasedRootMotionComponent.RegisterComponentTickFunctions(bool,bool)", bRegister, bSaveAndRestoreComponentTickState); }
	void InitializeComponent() { NativeCall<void>(this, "UAttributeBasedRootMotionComponent.InitializeComponent()"); }
};
