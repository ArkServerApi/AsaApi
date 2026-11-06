#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ACameraRig_Crane : public AActor
{
public:
	ACameraRig_Crane() = delete;
	~ACameraRig_Crane() = delete;
	ACameraRig_Crane(const ACameraRig_Crane&) = delete;
	ACameraRig_Crane& operator=(const ACameraRig_Crane&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACameraRig_Crane"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACameraRig_Crane"); }

	float& CranePitchField() { return *GetNativePointerField<float*>(this, "ACameraRig_Crane.CranePitch"); }
	float& CraneYawField() { return *GetNativePointerField<float*>(this, "ACameraRig_Crane.CraneYaw"); }
	float& CraneArmLengthField() { return *GetNativePointerField<float*>(this, "ACameraRig_Crane.CraneArmLength"); }
	bool& bLockMountPitchField() { return *GetNativePointerField<bool*>(this, "ACameraRig_Crane.bLockMountPitch"); }
	bool& bLockMountYawField() { return *GetNativePointerField<bool*>(this, "ACameraRig_Crane.bLockMountYaw"); }
	USceneComponent* GetDefaultAttachComponent() { return NativeCall<USceneComponent*>(this, "ACameraRig_Crane.GetDefaultAttachComponent()"); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ACameraRig_Crane.ShouldTickIfViewportsOnly()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ACameraRig_Crane.Tick(float)", DeltaTime); }
};
