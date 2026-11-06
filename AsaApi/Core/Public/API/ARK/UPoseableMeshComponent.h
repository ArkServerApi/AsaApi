#pragma once
#include "BulkForward.h"
#include "USkinnedMeshComponent.h"

struct UPoseableMeshComponent : public USkinnedMeshComponent
{
public:
	UPoseableMeshComponent() = delete;
	~UPoseableMeshComponent() = delete;
	UPoseableMeshComponent(const UPoseableMeshComponent&) = delete;
	UPoseableMeshComponent& operator=(const UPoseableMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPoseableMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPoseableMeshComponent"); }

	FBoneContainer& RequiredBonesField() { return *GetNativePointerField<FBoneContainer*>(this, "UPoseableMeshComponent.RequiredBones"); }
	bool& bNeedsRefreshTransformField() { return *GetNativePointerField<bool*>(this, "UPoseableMeshComponent.bNeedsRefreshTransform"); }
	void FillComponentSpaceTransforms() { NativeCall<void>(this, "UPoseableMeshComponent.FillComponentSpaceTransforms()"); }
	bool AllocateTransformData() { return NativeCall<bool>(this, "UPoseableMeshComponent.AllocateTransformData()"); }
	void RefreshBoneTransforms(FActorComponentTickFunction* TickFunction) { NativeCall<void, FActorComponentTickFunction*>(this, "UPoseableMeshComponent.RefreshBoneTransforms(FActorComponentTickFunction*)", TickFunction); }
	bool ShouldUpdateTransform(bool bLODHasChanged) { return NativeCall<bool, bool>(this, "UPoseableMeshComponent.ShouldUpdateTransform(bool)", bLODHasChanged); }
	UE::Math::TTransform<double>* GetBoneTransformByName(UE::Math::TTransform<double>* result, FName BoneName, EBoneSpaces::Type BoneSpace) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, EBoneSpaces::Type>(this, "UPoseableMeshComponent.GetBoneTransformByName(FName,EBoneSpaces::Type)", result, BoneName, BoneSpace); }
};
