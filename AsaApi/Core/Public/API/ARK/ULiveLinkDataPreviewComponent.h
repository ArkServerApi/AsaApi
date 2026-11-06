#pragma once
#include "BulkForward.h"
#include "UInstancedStaticMeshComponent.h"

struct ULiveLinkDataPreviewComponent : public UInstancedStaticMeshComponent
{
public:
	ULiveLinkDataPreviewComponent() = delete;
	~ULiveLinkDataPreviewComponent() = delete;
	ULiveLinkDataPreviewComponent(const ULiveLinkDataPreviewComponent&) = delete;
	ULiveLinkDataPreviewComponent& operator=(const ULiveLinkDataPreviewComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULiveLinkDataPreviewComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULiveLinkDataPreviewComponent"); }

	FLiveLinkSubjectName& SubjectNameField() { return *GetNativePointerField<FLiveLinkSubjectName*>(this, "ULiveLinkDataPreviewComponent.SubjectName"); }
	bool& bEvaluateLiveLinkField() { return *GetNativePointerField<bool*>(this, "ULiveLinkDataPreviewComponent.bEvaluateLiveLink"); }
	bool& bDrawLabelsField() { return *GetNativePointerField<bool*>(this, "ULiveLinkDataPreviewComponent.bDrawLabels"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "ULiveLinkDataPreviewComponent.bIsDirty"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MarkerLabelsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ULiveLinkDataPreviewComponent.MarkerLabels"); }
	FLiveLinkSkeletonStaticData& CachedSkeletonDataField() { return *GetNativePointerField<FLiveLinkSkeletonStaticData*>(this, "ULiveLinkDataPreviewComponent.CachedSkeletonData"); }
	FLiveLinkAnimationFrameData& CachedAnimationDataField() { return *GetNativePointerField<FLiveLinkAnimationFrameData*>(this, "ULiveLinkDataPreviewComponent.CachedAnimationData"); }
	UE::Math::TTransform<double>* GetSingleTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "ULiveLinkDataPreviewComponent.GetSingleTransform()", result); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* GetLocatorPositions(TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*, TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "ULiveLinkDataPreviewComponent.GetLocatorPositions()", result); }
	void OnUnregister() { NativeCall<void>(this, "ULiveLinkDataPreviewComponent.OnUnregister()"); }
	void CacheSkeletalAnimationData(const FLiveLinkSkeletonStaticData* InStaticData, const FLiveLinkAnimationFrameData* InFrameData) { NativeCall<void, const FLiveLinkSkeletonStaticData*, const FLiveLinkAnimationFrameData*>(this, "ULiveLinkDataPreviewComponent.CacheSkeletalAnimationData(FLiveLinkSkeletonStaticData*,FLiveLinkAnimationFrameData*)", InStaticData, InFrameData); }
	void OnRegister() { NativeCall<void>(this, "ULiveLinkDataPreviewComponent.OnRegister()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "ULiveLinkDataPreviewComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void CreateInstances() { NativeCall<void>(this, "ULiveLinkDataPreviewComponent.CreateInstances()"); }
};
