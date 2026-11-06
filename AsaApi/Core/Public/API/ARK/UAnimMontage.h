#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UAnimCompositeBase.h"

struct UAnimMontage : public UAnimCompositeBase
{
public:
	UAnimMontage() = delete;
	~UAnimMontage() = delete;
	UAnimMontage(const UAnimMontage&) = delete;
	UAnimMontage& operator=(const UAnimMontage&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimMontage"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimMontage"); }
	FAlphaBlend& BlendInField() { return *GetNativePointerField<FAlphaBlend*>(this, "UAnimMontage.BlendIn"); }
	FAlphaBlend& BlendOutField() { return *GetNativePointerField<FAlphaBlend*>(this, "UAnimMontage.BlendOut"); }
	float& BlendOutTriggerTimeField() { return *GetNativePointerField<float*>(this, "UAnimMontage.BlendOutTriggerTime"); }
	FName& SyncGroupField() { return *GetNativePointerField<FName*>(this, "UAnimMontage.SyncGroup"); }
	int& SyncSlotIndexField() { return *GetNativePointerField<int*>(this, "UAnimMontage.SyncSlotIndex"); }
	FMarkerSyncData& MarkerDataField() { return *GetNativePointerField<FMarkerSyncData*>(this, "UAnimMontage.MarkerData"); }
	bool& bEnableRootMotionTranslationField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bEnableRootMotionTranslation"); }
	bool& bEnableRootMotionRotationField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bEnableRootMotionRotation"); }
	float& RootMotionScaleField() { return *GetNativePointerField<float*>(this, "UAnimMontage.RootMotionScale"); }
	float& RootMotionCharacterTurnRateScaleField() { return *GetNativePointerField<float*>(this, "UAnimMontage.RootMotionCharacterTurnRateScale"); }
	bool& bEnableAutoBlendOutField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bEnableAutoBlendOut"); }
	TArray<int, TSizedDefaultAllocator<32> >& BranchingPointStateNotifyIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UAnimMontage.BranchingPointStateNotifyIndices"); }
	FTimeStretchCurve& TimeStretchCurveField() { return *GetNativePointerField<FTimeStretchCurve*>(this, "UAnimMontage.TimeStretchCurve"); }
	FName& TimeStretchCurveNameField() { return *GetNativePointerField<FName*>(this, "UAnimMontage.TimeStretchCurveName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& AnimationTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UAnimMontage.AnimationTags"); }
	BitFieldValue<bool, unsigned char> bLocalOnlyRootMotion() { return { this, "UAnimMontage.bLocalOnlyRootMotion"}; }
	BitFieldValue<bool, unsigned char> bClientPlayWhenNotRendered() { return { this, "UAnimMontage.bClientPlayWhenNotRendered"}; }
	BitFieldValue<bool, unsigned char> bForceTickPoseAndServerUpdateMesh() { return { this, "UAnimMontage.bForceTickPoseAndServerUpdateMesh"}; }
	BitFieldValue<bool, unsigned char> bAnimPauseOnFinish() { return { this, "UAnimMontage.bAnimPauseOnFinish"}; }
	BitFieldValue<bool, unsigned char> bIsEmoteMontage() { return { this, "UAnimMontage.bIsEmoteMontage"}; }
	UAnimSequenceBase* GetFirstAnimReference() { return NativeCall<UAnimSequenceBase*>(this, "UAnimMontage.GetFirstAnimReference()"); }
	const FAnimTrack* GetAnimationData(FName InSlotName) { return NativeCall<const FAnimTrack*, FName>(this, "UAnimMontage.GetAnimationData(FName)", InSlotName); }
	void GetSectionStartAndEndTime(int SectionIndex, float& OutStartTime, float& OutEndTime) { NativeCall<void, int, float&, float&>(this, "UAnimMontage.GetSectionStartAndEndTime(int,float&,float&)", SectionIndex, OutStartTime, OutEndTime); }
	float CalculateSequenceLength() { return NativeCall<float>(this, "UAnimMontage.CalculateSequenceLength()"); }
	void SetCompositeLength(float InLength) { NativeCall<void, float>(this, "UAnimMontage.SetCompositeLength(float)", InLength); }
	bool IsWithinPos(int FirstIndex, int SecondIndex, float CurrentTime) { return NativeCall<bool, int, int, float>(this, "UAnimMontage.IsWithinPos(int,int,float)", FirstIndex, SecondIndex, CurrentTime); }
	float GetSectionLength(int SectionIndex) { return NativeCall<float, int>(this, "UAnimMontage.GetSectionLength(int)", SectionIndex); }
	static UAnimMontage* CreateSlotAnimationAsDynamicMontage_WithFractionalLoops(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float LoopCount, float BlendOutTriggerTime) { return NativeCall<UAnimMontage*, UAnimSequenceBase*, FName, float, float, float, float>(nullptr, "UAnimMontage.CreateSlotAnimationAsDynamicMontage_WithFractionalLoops(UAnimSequenceBase*,FName,float,float,float,float)", Asset, SlotNodeName, BlendInTime, BlendOutTime, LoopCount, BlendOutTriggerTime); }
	int GetSectionIndex(FName InSectionName) { return NativeCall<int, FName>(this, "UAnimMontage.GetSectionIndex(FName)", InSectionName); }
	void CollectMarkers() { NativeCall<void>(this, "UAnimMontage.CollectMarkers()"); }
	void RefreshBranchingPointMarkers() { NativeCall<void>(this, "UAnimMontage.RefreshBranchingPointMarkers()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UAnimMontage.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	bool IsValidAdditive() { return NativeCall<bool>(this, "UAnimMontage.IsValidAdditive()"); }
	FCompositeSection& GetAnimCompositeSection(int SectionIndex) { return NativeCall<FCompositeSection&, int>(this, "UAnimMontage.GetAnimCompositeSection(int)", SectionIndex); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetUniqueMarkerNames() { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UAnimMontage.GetUniqueMarkerNames()"); }
	bool IsValidSectionIndex(int SectionIndex) { return NativeCall<bool, int>(this, "UAnimMontage.IsValidSectionIndex(int)", SectionIndex); }
	void GetAnimationPose(FAnimationPoseData& OutPoseData, const FAnimExtractContext& ExtractionContext) { NativeCall<void, FAnimationPoseData&, const FAnimExtractContext&>(this, "UAnimMontage.GetAnimationPose(FAnimationPoseData&,FAnimExtractContext&)", OutPoseData, ExtractionContext); }
	bool IsValidSlot(FName InSlotName) { return NativeCall<bool, FName>(this, "UAnimMontage.IsValidSlot(FName)", InSlotName); }
	int GetAnimCompositeSectionIndexFromPos(float CurrentTime, float& PosWithinCompositeSection) { return NativeCall<int, float, float&>(this, "UAnimMontage.GetAnimCompositeSectionIndexFromPos(float,float&)", CurrentTime, PosWithinCompositeSection); }
	bool CanBeUsedInComposition() { return NativeCall<bool>(this, "UAnimMontage.CanBeUsedInComposition()"); }
	void TickAssetPlayer(FAnimTickRecord& Instance, FAnimNotifyQueue& NotifyQueue, FAnimAssetTickContext& Context) { NativeCall<void, FAnimTickRecord&, FAnimNotifyQueue&, FAnimAssetTickContext&>(this, "UAnimMontage.TickAssetPlayer(FAnimTickRecord&,FAnimNotifyQueue&,FAnimAssetTickContext&)", Instance, NotifyQueue, Context); }
	void InvalidateRecursiveAsset() { NativeCall<void>(this, "UAnimMontage.InvalidateRecursiveAsset()"); }
	void PostLoad() { NativeCall<void>(this, "UAnimMontage.PostLoad()"); }
	int GetSectionIndexFromPosition(float Position) { return NativeCall<int, float>(this, "UAnimMontage.GetSectionIndexFromPosition(float)", Position); }
	void RefreshCacheData() { NativeCall<void>(this, "UAnimMontage.RefreshCacheData()"); }
	bool HasRootMotion() { return NativeCall<bool>(this, "UAnimMontage.HasRootMotion()"); }
	UE::Math::TTransform<double>* ExtractRootMotionFromTrackRange(UE::Math::TTransform<double>* result, float StartTrackPosition, float EndTrackPosition, const FAnimExtractContext& Context) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, float, float, const FAnimExtractContext&>(this, "UAnimMontage.ExtractRootMotionFromTrackRange(float,float,FAnimExtractContext&)", result, StartTrackPosition, EndTrackPosition, Context); }
	FName GetGroupName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UAnimMontage.GetGroupName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	static UAnimMontage* CreateSlotAnimationAsDynamicMontage_WithBlendSettings(UAnimSequenceBase* Asset, FName SlotNodeName, const FMontageBlendSettings& BlendInSettings, const FMontageBlendSettings& BlendOutSettings, float InPlayRate, int LoopCount, float InBlendOutTriggerTime) { return NativeCall<UAnimMontage*, UAnimSequenceBase*, FName, const FMontageBlendSettings&, const FMontageBlendSettings&, float, int, float>(nullptr, "UAnimMontage.CreateSlotAnimationAsDynamicMontage_WithBlendSettings(UAnimSequenceBase*,FName,FMontageBlendSettings&,FMontageBlendSettings&,float,int,float)", Asset, SlotNodeName, BlendInSettings, BlendOutSettings, InPlayRate, LoopCount, InBlendOutTriggerTime); }
	static UAnimMontage* CreateSlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) { return NativeCall<UAnimMontage*, UAnimSequenceBase*, FName, float, float, float, int, float, float>(nullptr, "UAnimMontage.CreateSlotAnimationAsDynamicMontage(UAnimSequenceBase*,FName,float,float,float,int,float,float)", Asset, SlotNodeName, BlendInTime, BlendOutTime, InPlayRate, LoopCount, BlendOutTriggerTime, InTimeToStartMontageAt); }
	bool IsDynamicMontage() { return NativeCall<bool>(this, "UAnimMontage.IsDynamicMontage()"); }
	void GetMarkerIndicesForTime(float CurrentTime, bool bLooping, const TArray<FName, TSizedDefaultAllocator<32> >& ValidMarkerNames, FMarkerPair& OutPrevMarker, FMarkerPair& OutNextMarker) { NativeCall<void, float, bool, const TArray<FName, TSizedDefaultAllocator<32> >&, FMarkerPair&, FMarkerPair&>(this, "UAnimMontage.GetMarkerIndicesForTime(float,bool,TArray<FName,TSizedDefaultAllocator<32>>&,FMarkerPair&,FMarkerPair&)", CurrentTime, bLooping, ValidMarkerNames, OutPrevMarker, OutNextMarker); }
	FName GetSectionName(int SectionIndex) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "UAnimMontage.GetSectionName(int)", AsaReturnPointer, SectionIndex); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool HasValidSlotSetup() { return NativeCall<bool>(this, "UAnimMontage.HasValidSlotSetup()"); }
};
