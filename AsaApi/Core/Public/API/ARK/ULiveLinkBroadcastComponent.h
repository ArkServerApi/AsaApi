#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct ULiveLinkBroadcastComponent : public UActorComponent
{
public:
	ULiveLinkBroadcastComponent() = delete;
	~ULiveLinkBroadcastComponent() = delete;
	ULiveLinkBroadcastComponent(const ULiveLinkBroadcastComponent&) = delete;
	ULiveLinkBroadcastComponent& operator=(const ULiveLinkBroadcastComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULiveLinkBroadcastComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULiveLinkBroadcastComponent"); }

	bool& bEnableField() { return *GetNativePointerField<bool*>(this, "ULiveLinkBroadcastComponent.bEnable"); }
	FName& SubjectNameField() { return *GetNativePointerField<FName*>(this, "ULiveLinkBroadcastComponent.SubjectName"); }
	FComponentReference& SourceMeshField() { return *GetNativePointerField<FComponentReference*>(this, "ULiveLinkBroadcastComponent.SourceMesh"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AllowedBoneNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ULiveLinkBroadcastComponent.AllowedBoneNames"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AllowedCurveNamesField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ULiveLinkBroadcastComponent.AllowedCurveNames"); }
	bool& bRemoveSubjectWhenDisabledField() { return *GetNativePointerField<bool*>(this, "ULiveLinkBroadcastComponent.bRemoveSubjectWhenDisabled"); }
	UActorComponent*& CachedResolvedObjectField() { return *GetNativePointerField<UActorComponent**>(this, "ULiveLinkBroadcastComponent.CachedResolvedObject"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "ULiveLinkBroadcastComponent.bIsDirty"); }
	FLiveLinkSubjectKey& SubjectKeyField() { return *GetNativePointerField<FLiveLinkSubjectKey*>(this, "ULiveLinkBroadcastComponent.SubjectKey"); }
	TArray<int, TSizedDefaultAllocator<32> >* GetSkeletalBoneParents(TArray<int, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*>(this, "ULiveLinkBroadcastComponent.GetSkeletalBoneParents()", result); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetSkeletalBoneNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ULiveLinkBroadcastComponent.GetSkeletalBoneNames()", result); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "ULiveLinkBroadcastComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "ULiveLinkBroadcastComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void OnComponentCreated() { NativeCall<void>(this, "ULiveLinkBroadcastComponent.OnComponentCreated()"); }
	void BroadcastStaticData() { NativeCall<void>(this, "ULiveLinkBroadcastComponent.BroadcastStaticData()"); }
	TArray<float, TSizedDefaultAllocator<32> >* GetCurveValues(TArray<float, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<float, TSizedDefaultAllocator<32> >*, TArray<float, TSizedDefaultAllocator<32> >*>(this, "ULiveLinkBroadcastComponent.GetCurveValues()", result); }
	void BroadcastFrameData() { NativeCall<void>(this, "ULiveLinkBroadcastComponent.BroadcastFrameData()"); }
};
