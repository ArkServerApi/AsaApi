#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UAnimationAsset.h"

struct UAnimSequenceBase : public UAnimationAsset
{
public:
	UAnimSequenceBase() = delete;
	~UAnimSequenceBase() = delete;
	UAnimSequenceBase(const UAnimSequenceBase&) = delete;
	UAnimSequenceBase& operator=(const UAnimSequenceBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimSequenceBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimSequenceBase"); }
	float& SequenceLengthField() { return *GetNativePointerField<float*>(this, "UAnimSequenceBase.SequenceLength"); }
	FRawCurveTracks& RawCurveDataField() { return *GetNativePointerField<FRawCurveTracks*>(this, "UAnimSequenceBase.RawCurveData"); }
	float& RateScaleField() { return *GetNativePointerField<float*>(this, "UAnimSequenceBase.RateScale"); }
	bool& bLoopField() { return *GetNativePointerField<bool*>(this, "UAnimSequenceBase.bLoop"); }
	UE::Math::TTransform<double>* ExtractRootMotionFromRange(UE::Math::TTransform<double>* result, double StartTime, double EndTime, const FAnimExtractContext& ExtractionContext) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, double, double, const FAnimExtractContext&>(this, "UAnimSequenceBase.ExtractRootMotionFromRange(double,double,FAnimExtractContext&)", result, StartTime, EndTime, ExtractionContext); }
	const FRawCurveTracks& GetCurveData() { return NativeCall<const FRawCurveTracks&>(this, "UAnimSequenceBase.GetCurveData()"); }
	float EvaluateCurveData(FName CurveName, const FAnimExtractContext& AnimExtractContext, bool bForceUseRawData) { return NativeCall<float, FName, const FAnimExtractContext&, bool>(this, "UAnimSequenceBase.EvaluateCurveData(FName,FAnimExtractContext&,bool)", CurveName, AnimExtractContext, bForceUseRawData); }
	void AdvanceMarkerPhaseAsFollower(const FMarkerTickContext& Context, float DeltaRemaining, bool bLooping, float& CurrentTime, FMarkerPair& PreviousMarker, FMarkerPair& NextMarker, const UMirrorDataTable* MirrorTable) { NativeCall<void, const FMarkerTickContext&, float, bool, float&, FMarkerPair&, FMarkerPair&, const UMirrorDataTable*>(this, "UAnimSequenceBase.AdvanceMarkerPhaseAsFollower(FMarkerTickContext&,float,bool,float&,FMarkerPair&,FMarkerPair&,UMirrorDataTable*)", Context, DeltaRemaining, bLooping, CurrentTime, PreviousMarker, NextMarker, MirrorTable); }
	void GetAnimNotifiesFromDeltaPositions(const float& PreviousPosition, const float& CurrentPosition, FAnimNotifyContext& NotifyContext) { NativeCall<void, const float&, const float&, FAnimNotifyContext&>(this, "UAnimSequenceBase.GetAnimNotifiesFromDeltaPositions(float&,float&,FAnimNotifyContext&)", PreviousPosition, CurrentPosition, NotifyContext); }
	void GetAnimationPose(FAnimationPoseData& OutPoseData, const FAnimExtractContext& ExtractionContext) { NativeCall<void, FAnimationPoseData&, const FAnimExtractContext&>(this, "UAnimSequenceBase.GetAnimationPose(FAnimationPoseData&,FAnimExtractContext&)", OutPoseData, ExtractionContext); }
	void EvaluateCurveData(FBlendedCurve& OutCurve, const FAnimExtractContext& AnimExtractContext, bool bForceUseRawData) { NativeCall<void, FBlendedCurve&, const FAnimExtractContext&, bool>(this, "UAnimSequenceBase.EvaluateCurveData(FBlendedCurve&,FAnimExtractContext&,bool)", OutCurve, AnimExtractContext, bForceUseRawData); }
	bool HasRootMotion() { return NativeCall<bool>(this, "UAnimSequenceBase.HasRootMotion()"); }
	bool GetEnableRootMotionSettingFromMontage() { return NativeCall<bool>(this, "UAnimSequenceBase.GetEnableRootMotionSettingFromMontage()"); }
	void PostDuplicate(EDuplicateMode::Type DuplicateMode) { NativeCall<void, EDuplicateMode::Type>(this, "UAnimSequenceBase.PostDuplicate(EDuplicateMode::Type)", DuplicateMode); }
	void PostLoad() { NativeCall<void>(this, "UAnimSequenceBase.PostLoad()"); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UAnimSequenceBase.IsPostLoadThreadSafe()"); }
	void TickByMarkerAsLeader(FMarkerTickRecord& Instance, FMarkerTickContext& MarkerContext, float& CurrentTime, float& OutPreviousTime, float MoveDelta, bool bLooping, const UMirrorDataTable* MirrorTable) { NativeCall<void, FMarkerTickRecord&, FMarkerTickContext&, float&, float&, float, bool, const UMirrorDataTable*>(this, "UAnimSequenceBase.TickByMarkerAsLeader(FMarkerTickRecord&,FMarkerTickContext&,float&,float&,float,bool,UMirrorDataTable*)", Instance, MarkerContext, CurrentTime, OutPreviousTime, MoveDelta, bLooping, MirrorTable); }
	void GetMarkerIndicesForTime(float CurrentTime, bool bLooping, const TArray<FName, TSizedDefaultAllocator<32> >& ValidMarkerNames, FMarkerPair& OutPrevMarker, FMarkerPair& OutNextMarker) { NativeCall<void, float, bool, const TArray<FName, TSizedDefaultAllocator<32> >&, FMarkerPair&, FMarkerPair&>(this, "UAnimSequenceBase.GetMarkerIndicesForTime(float,bool,TArray<FName,TSizedDefaultAllocator<32>>&,FMarkerPair&,FMarkerPair&)", CurrentTime, bLooping, ValidMarkerNames, OutPrevMarker, OutNextMarker); }
	float GetFirstMatchingPosFromMarkerSyncPos(const FMarkerSyncAnimPosition& InMarkerSyncGroupPosition) { return NativeCall<float, const FMarkerSyncAnimPosition&>(this, "UAnimSequenceBase.GetFirstMatchingPosFromMarkerSyncPos(FMarkerSyncAnimPosition&)", InMarkerSyncGroupPosition); }
	UE::Math::TTransform<double>* ExtractRootTrackTransform(UE::Math::TTransform<double>* result, const FAnimExtractContext& ExtractionContext, const FBoneContainer* RequiredBones) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, const FAnimExtractContext&, const FBoneContainer*>(this, "UAnimSequenceBase.ExtractRootTrackTransform(FAnimExtractContext&,FBoneContainer*)", result, ExtractionContext, RequiredBones); }
	float GetPlayLength() { return NativeCall<float>(this, "UAnimSequenceBase.GetPlayLength()"); }
	void TickAssetPlayer(FAnimTickRecord& Instance, FAnimNotifyQueue& NotifyQueue, FAnimAssetTickContext& Context) { NativeCall<void, FAnimTickRecord&, FAnimNotifyQueue&, FAnimAssetTickContext&>(this, "UAnimSequenceBase.TickAssetPlayer(FAnimTickRecord&,FAnimNotifyQueue&,FAnimAssetTickContext&)", Instance, NotifyQueue, Context); }
	bool CanBeUsedInComposition() { return NativeCall<bool>(this, "UAnimSequenceBase.CanBeUsedInComposition()"); }
	void GetAnimNotifies(const float& StartTime, const float& DeltaTime, FAnimNotifyContext& NotifyContext) { NativeCall<void, const float&, const float&, FAnimNotifyContext&>(this, "UAnimSequenceBase.GetAnimNotifies(float&,float&,FAnimNotifyContext&)", StartTime, DeltaTime, NotifyContext); }
	void TickByMarkerAsFollower(FMarkerTickRecord& Instance, FMarkerTickContext& MarkerContext, float& CurrentTime, float& OutPreviousTime, float MoveDelta, bool bLooping, const UMirrorDataTable* MirrorTable) { NativeCall<void, FMarkerTickRecord&, FMarkerTickContext&, float&, float&, float, bool, const UMirrorDataTable*>(this, "UAnimSequenceBase.TickByMarkerAsFollower(FMarkerTickRecord&,FMarkerTickContext&,float&,float&,float,bool,UMirrorDataTable*)", Instance, MarkerContext, CurrentTime, OutPreviousTime, MoveDelta, bLooping, MirrorTable); }
	UE::Math::TTransform<double>* ExtractRootMotion(UE::Math::TTransform<double>* result, const FAnimExtractContext& ExtractionContext) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, const FAnimExtractContext&>(this, "UAnimSequenceBase.ExtractRootMotion(FAnimExtractContext&)", result, ExtractionContext); }
	bool HasCurveData(FName CurveName, bool bForceUseRawData) { return NativeCall<bool, FName, bool>(this, "UAnimSequenceBase.HasCurveData(FName,bool)", CurveName, bForceUseRawData); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UAnimSequenceBase.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	float GetTimeAtFrame(int Frame) { return NativeCall<float, int>(this, "UAnimSequenceBase.GetTimeAtFrame(int)", Frame); }
	float GetPrevMatchingPosFromMarkerSyncPos(const FMarkerSyncAnimPosition& InMarkerSyncGroupPosition, const float& StartingPosition) { return NativeCall<float, const FMarkerSyncAnimPosition&, const float&>(this, "UAnimSequenceBase.GetPrevMatchingPosFromMarkerSyncPos(FMarkerSyncAnimPosition&,float&)", InMarkerSyncGroupPosition, StartingPosition); }
	void RefreshCacheData() { NativeCall<void>(this, "UAnimSequenceBase.RefreshCacheData()"); }
	void SortNotifies() { NativeCall<void>(this, "UAnimSequenceBase.SortNotifies()"); }
	bool IsNotifyAvailable() { return NativeCall<bool>(this, "UAnimSequenceBase.IsNotifyAvailable()"); }
	int GetNumberOfSampledKeys() { return NativeCall<int>(this, "UAnimSequenceBase.GetNumberOfSampledKeys()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UAnimSequenceBase.Serialize(FArchive&)", Ar); }
	void HandleAssetPlayerTickedInternal(FAnimAssetTickContext& Context, float PreviousTime, float MoveDelta, const FAnimTickRecord& Instance, FAnimNotifyQueue& NotifyQueue) { NativeCall<void, FAnimAssetTickContext&, float, float, const FAnimTickRecord&, FAnimNotifyQueue&>(this, "UAnimSequenceBase.HandleAssetPlayerTickedInternal(FAnimAssetTickContext&,float,float,FAnimTickRecord&,FAnimNotifyQueue&)", Context, PreviousTime, MoveDelta, Instance, NotifyQueue); }
	void GetMarkerIndicesForPosition(const FMarkerSyncAnimPosition& SyncPosition, bool bLooping, FMarkerPair& OutPrevMarker, FMarkerPair& OutNextMarker, float& CurrentTime, const UMirrorDataTable* MirrorTable) { NativeCall<void, const FMarkerSyncAnimPosition&, bool, FMarkerPair&, FMarkerPair&, float&, const UMirrorDataTable*>(this, "UAnimSequenceBase.GetMarkerIndicesForPosition(FMarkerSyncAnimPosition&,bool,FMarkerPair&,FMarkerPair&,float&,UMirrorDataTable*)", SyncPosition, bLooping, OutPrevMarker, OutNextMarker, CurrentTime, MirrorTable); }
	float GetNextMatchingPosFromMarkerSyncPos(const FMarkerSyncAnimPosition& InMarkerSyncGroupPosition, const float& StartingPosition) { return NativeCall<float, const FMarkerSyncAnimPosition&, const float&>(this, "UAnimSequenceBase.GetNextMatchingPosFromMarkerSyncPos(FMarkerSyncAnimPosition&,float&)", InMarkerSyncGroupPosition, StartingPosition); }
};
