#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct USkeleton : public UObject
{
public:
	USkeleton() = delete;
	~USkeleton() = delete;
	USkeleton(const USkeleton&) = delete;
	USkeleton& operator=(const USkeleton&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkeleton"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkeleton"); }
	FReferenceSkeleton& ReferenceSkeletonField() { return *GetNativePointerField<FReferenceSkeleton*>(this, "USkeleton.ReferenceSkeleton"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "USkeleton.Guid"); }
	FGuid& VirtualBoneGuidField() { return *GetNativePointerField<FGuid*>(this, "USkeleton.VirtualBoneGuid"); }
	bool& bUseRetargetModesFromCompatibleSkeletonField() { return *GetNativePointerField<bool*>(this, "USkeleton.bUseRetargetModesFromCompatibleSkeleton"); }
	FSmartNameContainer& SmartNames_DEPRECATEDField() { return *GetNativePointerField<FSmartNameContainer*>(this, "USkeleton.SmartNames_DEPRECATED"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ExistingMarkerNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "USkeleton.ExistingMarkerNames"); }
	unsigned short GetAnimCurveUidVersion() { return NativeCall<unsigned short>(this, "USkeleton.GetAnimCurveUidVersion()"); }
	void BeginDestroy() { NativeCall<void>(this, "USkeleton.BeginDestroy()"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "USkeleton.PostDuplicate(bool)", bDuplicateForPIE); }
	void BuildSlotToGroupMap(bool bInRemoveDuplicates) { NativeCall<void, bool>(this, "USkeleton.BuildSlotToGroupMap(bool)", bInRemoveDuplicates); }
	void SetSlotGroupName(const FName& InSlotName, const FName& InGroupName) { NativeCall<void, const FName&, const FName&>(this, "USkeleton.SetSlotGroupName(FName&,FName&)", InSlotName, InGroupName); }
	UBlendProfile* CreateNewBlendProfile(const FName& InProfileName) { return NativeCall<UBlendProfile*, const FName&>(this, "USkeleton.CreateNewBlendProfile(FName&)", InProfileName); }
	void UpdateReferencePoseFromMesh(const USkinnedAsset* InSkinnedAsset) { NativeCall<void, const USkinnedAsset*>(this, "USkeleton.UpdateReferencePoseFromMesh(USkinnedAsset*)", InSkinnedAsset); }
	const FSkeletonToMeshLinkup& AddMeshLinkupData(const USkinnedAsset* InSkinnedAsset) { return NativeCall<const FSkeletonToMeshLinkup&, const USkinnedAsset*>(this, "USkeleton.AddMeshLinkupData(USkinnedAsset*)", InSkinnedAsset); }
	FName GetSlotGroupName(const FName& InSlotName) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, const FName &>(this, "USkeleton.GetSlotGroupName(FName&)", AsaReturnPointer, InSlotName); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool AddSlotGroupName(const FName& InNewGroupName) { return NativeCall<bool, const FName&>(this, "USkeleton.AddSlotGroupName(FName&)", InNewGroupName); }
	void GetCurveMetaDataNames(TArray<FName, TSizedDefaultAllocator<32> >& OutNames) { NativeCall<void, TArray<FName, TSizedDefaultAllocator<32> >&>(this, "USkeleton.GetCurveMetaDataNames(TArray<FName,TSizedDefaultAllocator<32>>&)", OutNames); }
	bool IsCompatibleMesh(const USkinnedAsset* InSkinnedAsset, bool bDoParentChainCheck) { return NativeCall<bool, const USkinnedAsset*, bool>(this, "USkeleton.IsCompatibleMesh(USkinnedAsset*,bool)", InSkinnedAsset, bDoParentChainCheck); }
	const FSkeletonToMeshLinkup& FindOrAddMeshLinkupData(const USkinnedAsset* InSkinnedAsset) { return NativeCall<const FSkeletonToMeshLinkup&, const USkinnedAsset*>(this, "USkeleton.FindOrAddMeshLinkupData(USkinnedAsset*)", InSkinnedAsset); }
	void BuildLinkupData(const USkinnedAsset* InSkinnedAsset, FSkeletonToMeshLinkup& NewMeshLinkup) { NativeCall<void, const USkinnedAsset*, FSkeletonToMeshLinkup&>(this, "USkeleton.BuildLinkupData(USkinnedAsset*,FSkeletonToMeshLinkup&)", InSkinnedAsset, NewMeshLinkup); }
	void HandleVirtualBoneChanges() { NativeCall<void>(this, "USkeleton.HandleVirtualBoneChanges()"); }
	bool GetUseRetargetModesFromCompatibleSkeleton() { return NativeCall<bool>(this, "USkeleton.GetUseRetargetModesFromCompatibleSkeleton()"); }
	bool AddCurveMetaData(FName CurveName, bool bTransact) { return NativeCall<bool, FName, bool>(this, "USkeleton.AddCurveMetaData(FName,bool)", CurveName, bTransact); }
	bool RegisterSlotNode(const FName& InSlotName) { return NativeCall<bool, const FName&>(this, "USkeleton.RegisterSlotNode(FName&)", InSlotName); }
	void PostLoad() { NativeCall<void>(this, "USkeleton.PostLoad()"); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "USkeleton.IsPostLoadThreadSafe()"); }
	UBlendProfile* GetBlendProfile(const FName& InProfileName) { return NativeCall<UBlendProfile*, const FName&>(this, "USkeleton.GetBlendProfile(FName&)", InProfileName); }
	void PostInitProperties() { NativeCall<void>(this, "USkeleton.PostInitProperties()"); }
	int GetMeshBoneIndexFromSkeletonBoneIndex(const USkinnedAsset* InSkinnedAsset, int SkeletonBoneIndex) { return NativeCall<int, const USkinnedAsset*, int>(this, "USkeleton.GetMeshBoneIndexFromSkeletonBoneIndex(USkinnedAsset*,int)", InSkinnedAsset, SkeletonBoneIndex); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USkeleton.Serialize(FArchive&)", Ar); }
	int GetSkeletonBoneIndexFromMeshBoneIndex(const USkinnedAsset* InSkinnedAsset, int MeshBoneIndex) { return NativeCall<int, const USkinnedAsset*, int>(this, "USkeleton.GetSkeletonBoneIndexFromMeshBoneIndex(USkinnedAsset*,int)", InSkinnedAsset, MeshBoneIndex); }
	void RemoveLinkup(const USkinnedAsset* InSkinnedAsset) { NativeCall<void, const USkinnedAsset*>(this, "USkeleton.RemoveLinkup(USkinnedAsset*)", InSkinnedAsset); }
	bool AddNewNamedVirtualBone(FName SourceBoneName, FName TargetBoneName, FName VirtualBoneName) { return NativeCall<bool, FName, FName, FName>(this, "USkeleton.AddNewNamedVirtualBone(FName,FName,FName)", SourceBoneName, TargetBoneName, VirtualBoneName); }
};
