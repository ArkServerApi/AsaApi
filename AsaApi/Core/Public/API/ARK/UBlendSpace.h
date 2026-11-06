#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UAnimationAsset.h"

struct UBlendSpace : public UAnimationAsset
{
public:
	UBlendSpace() = delete;
	~UBlendSpace() = delete;
	UBlendSpace(const UBlendSpace&) = delete;
	UBlendSpace& operator=(const UBlendSpace&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBlendSpace"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBlendSpace"); }
	bool& bContainsRotationOffsetMeshSpaceSamplesField() { return *GetNativePointerField<bool*>(this, "UBlendSpace.bContainsRotationOffsetMeshSpaceSamples"); }
	float& TargetWeightInterpolationSpeedPerSecField() { return *GetNativePointerField<float*>(this, "UBlendSpace.TargetWeightInterpolationSpeedPerSec"); }
	bool& bTargetWeightInterpolationEaseInOutField() { return *GetNativePointerField<bool*>(this, "UBlendSpace.bTargetWeightInterpolationEaseInOut"); }
	bool& bAllowMeshSpaceBlendingField() { return *GetNativePointerField<bool*>(this, "UBlendSpace.bAllowMeshSpaceBlending"); }
	bool& bLoopField() { return *GetNativePointerField<bool*>(this, "UBlendSpace.bLoop"); }
	bool& bAllowMarkerBasedSyncField() { return *GetNativePointerField<bool*>(this, "UBlendSpace.bAllowMarkerBasedSync"); }
	bool& bShouldMatchSyncPhasesField() { return *GetNativePointerField<bool*>(this, "UBlendSpace.bShouldMatchSyncPhases"); }
	bool& bUseLegacySamplePointAnimationLengthCalculationsField() { return *GetNativePointerField<bool*>(this, "UBlendSpace.bUseLegacySamplePointAnimationLengthCalculations"); }
	float& AnimLengthField() { return *GetNativePointerField<float*>(this, "UBlendSpace.AnimLength"); }
	bool& bInterpolateUsingGridField() { return *GetNativePointerField<bool*>(this, "UBlendSpace.bInterpolateUsingGrid"); }
	FBlendSpaceBlendProfile& PerBoneBlendProfileField() { return *GetNativePointerField<FBlendSpaceBlendProfile*>(this, "UBlendSpace.PerBoneBlendProfile"); }
	int& SampleIndexWithMarkersField() { return *GetNativePointerField<int*>(this, "UBlendSpace.SampleIndexWithMarkers"); }
	FBlendSpaceData& BlendSpaceDataField() { return *GetNativePointerField<FBlendSpaceData*>(this, "UBlendSpace.BlendSpaceData"); }
	TArray<int, TSizedDefaultAllocator<32> >& DimensionIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UBlendSpace.DimensionIndices"); }
	UE::Math::TVector<double>* ConvertBlendInputToGridSpace(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& BlendInput) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "UBlendSpace.ConvertBlendInputToGridSpace(UE::Math::TVector<double>&)", result, BlendInput); }
	float GetPlayLength() { return NativeCall<float>(this, "UBlendSpace.GetPlayLength()"); }
	UE::Math::TVector<double>* GetClampedAndWrappedBlendInput(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& BlendInput) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "UBlendSpace.GetClampedAndWrappedBlendInput(UE::Math::TVector<double>&)", result, BlendInput); }
	const FBlendSample& GetBlendSample(int SampleIndex) { return NativeCall<const FBlendSample&, int>(this, "UBlendSpace.GetBlendSample(int)", SampleIndex); }
	bool IsValidAdditive() { return NativeCall<bool>(this, "UBlendSpace.IsValidAdditive()"); }
	void TickAssetPlayer(FAnimTickRecord& Instance, FAnimNotifyQueue& NotifyQueue, FAnimAssetTickContext& Context) { NativeCall<void, FAnimTickRecord&, FAnimNotifyQueue&, FAnimAssetTickContext&>(this, "UBlendSpace.TickAssetPlayer(FAnimTickRecord&,FAnimNotifyQueue&,FAnimAssetTickContext&)", Instance, NotifyQueue, Context); }
	UE::Math::TVector<double>* FilterInput(UE::Math::TVector<double>* result, FBlendFilter* Filter, const UE::Math::TVector<double>& BlendInput, float DeltaTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FBlendFilter*, const UE::Math::TVector<double>&, float>(this, "UBlendSpace.FilterInput(FBlendFilter*,UE::Math::TVector<double>&,float)", result, Filter, BlendInput, DeltaTime); }
	void InitializeFilter(FBlendFilter* Filter, int NumDimensions) { NativeCall<void, FBlendFilter*, int>(this, "UBlendSpace.InitializeFilter(FBlendFilter*,int)", Filter, NumDimensions); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UBlendSpace.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UBlendSpace.Serialize(FArchive&)", Ar); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetUniqueMarkerNames() { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UBlendSpace.GetUniqueMarkerNames()"); }
	void PostLoad() { NativeCall<void>(this, "UBlendSpace.PostLoad()"); }
	float ComputeAxisScaleFactor(const UE::Math::TVector<double>& BlendSpacePosition, const UE::Math::TVector<double>& FilteredBlendInput) { return NativeCall<float, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UBlendSpace.ComputeAxisScaleFactor(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", BlendSpacePosition, FilteredBlendInput); }
};
