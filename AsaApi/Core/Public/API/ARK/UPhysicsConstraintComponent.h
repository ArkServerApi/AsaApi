#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UPhysicsConstraintComponent : public USceneComponent
{
public:
	UPhysicsConstraintComponent() = delete;
	~UPhysicsConstraintComponent() = delete;
	UPhysicsConstraintComponent(const UPhysicsConstraintComponent&) = delete;
	UPhysicsConstraintComponent& operator=(const UPhysicsConstraintComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsConstraintComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsConstraintComponent"); }

	FConstrainComponentPropName& ComponentName1Field() { return *GetNativePointerField<FConstrainComponentPropName*>(this, "UPhysicsConstraintComponent.ComponentName1"); }
	FConstrainComponentPropName& ComponentName2Field() { return *GetNativePointerField<FConstrainComponentPropName*>(this, "UPhysicsConstraintComponent.ComponentName2"); }
	TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>& OverrideComponent1Field() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>*>(this, "UPhysicsConstraintComponent.OverrideComponent1"); }
	TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>& OverrideComponent2Field() { return *GetNativePointerField<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>*>(this, "UPhysicsConstraintComponent.OverrideComponent2"); }
	FConstraintBrokenSignature& OnConstraintBrokenField() { return *GetNativePointerField<FConstraintBrokenSignature*>(this, "UPhysicsConstraintComponent.OnConstraintBroken"); }
	FPlasticDeformationEventSignature& OnPlasticDeformationField() { return *GetNativePointerField<FPlasticDeformationEventSignature*>(this, "UPhysicsConstraintComponent.OnPlasticDeformation"); }
	FConstraintInstance& ConstraintInstanceField() { return *GetNativePointerField<FConstraintInstance*>(this, "UPhysicsConstraintComponent.ConstraintInstance"); }
	bool& bIsBrokenLocalField() { return *GetNativePointerField<bool*>(this, "UPhysicsConstraintComponent.bIsBrokenLocal"); }
	void UpdateConstraintFrames() { NativeCall<void>(this, "UPhysicsConstraintComponent.UpdateConstraintFrames()"); }
	void PostLoad() { NativeCall<void>(this, "UPhysicsConstraintComponent.PostLoad()"); }
	UPrimitiveComponent* GetComponentInternal(EConstraintFrame::Type Frame) { return NativeCall<UPrimitiveComponent*, EConstraintFrame::Type>(this, "UPhysicsConstraintComponent.GetComponentInternal(EConstraintFrame::Type)", Frame); }
	void BeginDestroy() { NativeCall<void>(this, "UPhysicsConstraintComponent.BeginDestroy()"); }
	void OnConstraintBrokenWrapper(int ConstraintIndex) { NativeCall<void, int>(this, "UPhysicsConstraintComponent.OnConstraintBrokenWrapper(int)", ConstraintIndex); }
	void OnUnregister() { NativeCall<void>(this, "UPhysicsConstraintComponent.OnUnregister()"); }
	void InitComponentConstraint() { NativeCall<void>(this, "UPhysicsConstraintComponent.InitComponentConstraint()"); }
	UE::Math::TTransform<double>* GetBodyTransformInternal(UE::Math::TTransform<double>* result, EConstraintFrame::Type Frame, FName InBoneName) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, EConstraintFrame::Type, FName>(this, "UPhysicsConstraintComponent.GetBodyTransformInternal(EConstraintFrame::Type,FName)", result, Frame, InBoneName); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UPhysicsConstraintComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void InitializeComponent() { NativeCall<void>(this, "UPhysicsConstraintComponent.InitializeComponent()"); }
};
