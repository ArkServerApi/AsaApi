#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UAnimNotify : public UObject
{
public:
	UAnimNotify() = delete;
	~UAnimNotify() = delete;
	UAnimNotify(const UAnimNotify&) = delete;
	UAnimNotify& operator=(const UAnimNotify&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimNotify"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimNotify"); }
	bool& bIsNativeBranchingPointField() { return *GetNativePointerField<bool*>(this, "UAnimNotify.bIsNativeBranchingPoint"); }
	USkeletalMeshComponent*& MeshContextField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "UAnimNotify.MeshContext"); }
	bool& bIgnoreOnDediServerField() { return *GetNativePointerField<bool*>(this, "UAnimNotify.bIgnoreOnDediServer"); }
	bool& bCanClobberEventReferenceField() { return *GetNativePointerField<bool*>(this, "UAnimNotify.bCanClobberEventReference"); }
	void BranchingPointNotify(FBranchingPointNotifyPayload& BranchingPointPayload) { NativeCall<void, FBranchingPointNotifyPayload&>(this, "UAnimNotify.BranchingPointNotify(FBranchingPointNotifyPayload&)", BranchingPointPayload); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UAnimNotify.GetWorld()"); }
	FString* GetEditorComment(FString* result) { return NativeCall<FString*, FString*>(this, "UAnimNotify.GetEditorComment()", result); }
	void PostLoad() { NativeCall<void>(this, "UAnimNotify.PostLoad()"); }
	void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) { NativeCall<void, USkeletalMeshComponent*, UAnimSequenceBase*, const FAnimNotifyEventReference&>(this, "UAnimNotify.Notify(USkeletalMeshComponent*,UAnimSequenceBase*,FAnimNotifyEventReference&)", MeshComp, Animation, EventReference); }
	FString* GetNotifyName_Implementation(FString* result) { return NativeCall<FString*, FString*>(this, "UAnimNotify.GetNotifyName_Implementation()", result); }
	float GetDefaultTriggerWeightThreshold_Implementation() { return NativeCall<float>(this, "UAnimNotify.GetDefaultTriggerWeightThreshold_Implementation()"); }
};
