#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ACameraRig_Rail : public AActor
{
public:
	ACameraRig_Rail() = delete;
	~ACameraRig_Rail() = delete;
	ACameraRig_Rail(const ACameraRig_Rail&) = delete;
	ACameraRig_Rail& operator=(const ACameraRig_Rail&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACameraRig_Rail"); }

	float& CurrentPositionOnRailField() { return *GetNativePointerField<float*>(this, "ACameraRig_Rail.CurrentPositionOnRail"); }
	bool& bLockOrientationToRailField() { return *GetNativePointerField<bool*>(this, "ACameraRig_Rail.bLockOrientationToRail"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ACameraRig_Rail.Tick(float)", DeltaTime); }
	void UpdateRailComponents() { NativeCall<void>(this, "ACameraRig_Rail.UpdateRailComponents()"); }
	USceneComponent* GetDefaultAttachComponent() { return NativeCall<USceneComponent*>(this, "ACameraRig_Rail.GetDefaultAttachComponent()"); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "ACameraRig_Rail.ShouldTickIfViewportsOnly()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACameraRig_Rail"); }
};
