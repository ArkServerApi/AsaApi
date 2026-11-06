#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UAnimNotifyState : public UObject
{
public:
	UAnimNotifyState() = delete;
	~UAnimNotifyState() = delete;
	UAnimNotifyState(const UAnimNotifyState&) = delete;
	UAnimNotifyState& operator=(const UAnimNotifyState&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimNotifyState"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimNotifyState"); }
	bool& bIsNativeBranchingPointField() { return *GetNativePointerField<bool*>(this, "UAnimNotifyState.bIsNativeBranchingPoint"); }
	unsigned char& NotifyStateBehaviorFlagsField() { return *GetNativePointerField<unsigned char*>(this, "UAnimNotifyState.NotifyStateBehaviorFlags"); }
	bool& bIgnoreOnDediServerField() { return *GetNativePointerField<bool*>(this, "UAnimNotifyState.bIgnoreOnDediServer"); }
	int& LODThresholdField() { return *GetNativePointerField<int*>(this, "UAnimNotifyState.LODThreshold"); }
	bool& bCanClobberEventReferenceField() { return *GetNativePointerField<bool*>(this, "UAnimNotifyState.bCanClobberEventReference"); }
	void BranchingPointNotifyTick(FBranchingPointNotifyPayload& BranchingPointPayload, float FrameDeltaTime) { NativeCall<void, FBranchingPointNotifyPayload&, float>(this, "UAnimNotifyState.BranchingPointNotifyTick(FBranchingPointNotifyPayload&,float)", BranchingPointPayload, FrameDeltaTime); }
	FString* GetNotifyName_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "UAnimNotifyState.GetNotifyName_Implementation()", result); }
	bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) { return NativeCall<bool, USkeletalMeshComponent*, UAnimSequenceBase*, float, const FAnimNotifyEventReference&>(this, "UAnimNotifyState.Received_NotifyBegin(USkeletalMeshComponent*,UAnimSequenceBase*,float,FAnimNotifyEventReference&)", MeshComp, Animation, TotalDuration, EventReference); }
	float GetDefaultTriggerWeightThreshold_Implementation() { return NativeCall<float>(this, "UAnimNotifyState.GetDefaultTriggerWeightThreshold_Implementation()"); }
	void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) { NativeCall<void, USkeletalMeshComponent*, UAnimSequenceBase*, float, const FAnimNotifyEventReference&>(this, "UAnimNotifyState.NotifyBegin(USkeletalMeshComponent*,UAnimSequenceBase*,float,FAnimNotifyEventReference&)", MeshComp, Animation, TotalDuration, EventReference); }
	void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) { NativeCall<void, USkeletalMeshComponent*, UAnimSequenceBase*, float, const FAnimNotifyEventReference&>(this, "UAnimNotifyState.NotifyTick(USkeletalMeshComponent*,UAnimSequenceBase*,float,FAnimNotifyEventReference&)", MeshComp, Animation, FrameDeltaTime, EventReference); }
	FString* GetEditorComment(FString* result) { return NativeCall<FString*, FString*>(this, "UAnimNotifyState.GetEditorComment()", result); }
	void BranchingPointNotifyEnd(FBranchingPointNotifyPayload& BranchingPointPayload) { NativeCall<void, FBranchingPointNotifyPayload&>(this, "UAnimNotifyState.BranchingPointNotifyEnd(FBranchingPointNotifyPayload&)", BranchingPointPayload); }
	bool Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) { return NativeCall<bool, USkeletalMeshComponent*, UAnimSequenceBase*, float, const FAnimNotifyEventReference&>(this, "UAnimNotifyState.Received_NotifyTick(USkeletalMeshComponent*,UAnimSequenceBase*,float,FAnimNotifyEventReference&)", MeshComp, Animation, FrameDeltaTime, EventReference); }
	void BranchingPointNotifyBegin(FBranchingPointNotifyPayload& BranchingPointPayload) { NativeCall<void, FBranchingPointNotifyPayload&>(this, "UAnimNotifyState.BranchingPointNotifyBegin(FBranchingPointNotifyPayload&)", BranchingPointPayload); }
	bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) { return NativeCall<bool, USkeletalMeshComponent*, UAnimSequenceBase*, const FAnimNotifyEventReference&>(this, "UAnimNotifyState.Received_NotifyEnd(USkeletalMeshComponent*,UAnimSequenceBase*,FAnimNotifyEventReference&)", MeshComp, Animation, EventReference); }
	void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) { NativeCall<void, USkeletalMeshComponent*, UAnimSequenceBase*, const FAnimNotifyEventReference&>(this, "UAnimNotifyState.NotifyEnd(USkeletalMeshComponent*,UAnimSequenceBase*,FAnimNotifyEventReference&)", MeshComp, Animation, EventReference); }
	void PostLoad() { NativeCall<void>(this, "UAnimNotifyState.PostLoad()"); }
};
