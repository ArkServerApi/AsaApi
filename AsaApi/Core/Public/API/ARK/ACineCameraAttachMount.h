#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ACineCameraAttachMount : public AActor
{
public:
	ACineCameraAttachMount() = delete;
	~ACineCameraAttachMount() = delete;
	ACineCameraAttachMount(const ACineCameraAttachMount&) = delete;
	ACineCameraAttachMount& operator=(const ACineCameraAttachMount&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACineCameraAttachMount"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACineCameraAttachMount"); }

	FName& TargetSocketField() { return *GetNativePointerField<FName*>(this, "ACineCameraAttachMount.TargetSocket"); }
	FTransformFilter& TransformFilterField() { return *GetNativePointerField<FTransformFilter*>(this, "ACineCameraAttachMount.TransformFilter"); }
	bool& bEnableLocationLagField() { return *GetNativePointerField<bool*>(this, "ACineCameraAttachMount.bEnableLocationLag"); }
	bool& bEnableRotationLagField() { return *GetNativePointerField<bool*>(this, "ACineCameraAttachMount.bEnableRotationLag"); }
	float& LocationLagSpeedField() { return *GetNativePointerField<float*>(this, "ACineCameraAttachMount.LocationLagSpeed"); }
	float& RotationLagSpeedField() { return *GetNativePointerField<float*>(this, "ACineCameraAttachMount.RotationLagSpeed"); }
	bool& bConstraintUpdatedField() { return *GetNativePointerField<bool*>(this, "ACineCameraAttachMount.bConstraintUpdated"); }
	UTickableParentConstraint* GetConstraint() { return NativeCall<UTickableParentConstraint*>(this, "ACineCameraAttachMount.GetConstraint()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ACineCameraAttachMount.Tick(float)", DeltaTime); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ACineCameraAttachMount.ShouldTickIfViewportsOnly()"); }
	USceneComponent* GetDefaultAttachComponent() { return NativeCall<USceneComponent*>(this, "ACineCameraAttachMount.GetDefaultAttachComponent()"); }
};
