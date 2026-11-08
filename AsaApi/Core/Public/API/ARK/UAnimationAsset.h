#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UAnimationAsset : public UObject
{
public:
	UAnimationAsset() = delete;
	~UAnimationAsset() = delete;
	UAnimationAsset(const UAnimationAsset&) = delete;
	UAnimationAsset& operator=(const UAnimationAsset&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimationAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimationAsset"); }
	FGuid& SkeletonGuidField() { return *GetNativePointerField<FGuid*>(this, "UAnimationAsset.SkeletonGuid"); }
	FGuid& SkeletonVirtualBoneGuidField() { return *GetNativePointerField<FGuid*>(this, "UAnimationAsset.SkeletonVirtualBoneGuid"); }
	void TickAssetPlayer(FAnimTickRecord& Instance, FAnimNotifyQueue& NotifyQueue, FAnimAssetTickContext& Context) { NativeCall<void, FAnimTickRecord&, FAnimNotifyQueue&, FAnimAssetTickContext&>(this, "UAnimationAsset.TickAssetPlayer(FAnimTickRecord&,FAnimNotifyQueue&,FAnimAssetTickContext&)", Instance, NotifyQueue, Context); }
	bool IsValidAdditive() { return NativeCall<bool>(this, "UAnimationAsset.IsValidAdditive()"); }
	void SetSkeleton(USkeleton* NewSkeleton) { NativeCall<void, USkeleton*>(this, "UAnimationAsset.SetSkeleton(USkeleton*)", NewSkeleton); }
	float GetPlayLength() { return NativeCall<float>(this, "UAnimationAsset.GetPlayLength()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UAnimationAsset.Serialize(FArchive&)", Ar); }
	void PostLoad() { NativeCall<void>(this, "UAnimationAsset.PostLoad()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetUniqueMarkerNames() { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UAnimationAsset.GetUniqueMarkerNames()"); }
};
