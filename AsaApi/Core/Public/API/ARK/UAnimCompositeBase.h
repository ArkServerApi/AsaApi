#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UAnimSequenceBase.h"

class UAnimCompositeBase : public UAnimSequenceBase
{
public:
	UAnimCompositeBase() = delete;
	~UAnimCompositeBase() = delete;
	UAnimCompositeBase(const UAnimCompositeBase&) = delete;
	UAnimCompositeBase& operator=(const UAnimCompositeBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimCompositeBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimCompositeBase"); }
	FFrameRate& CommonTargetFrameRateField() { return *GetNativePointerField<FFrameRate*>(this, "UAnimCompositeBase.CommonTargetFrameRate"); }
	void ExtractRootMotionFromTrack(const FAnimTrack& SlotAnimTrack, float StartTrackPosition, float EndTrackPosition, const FAnimExtractContext& Context, FRootMotionMovementParams& RootMotion) { NativeCall<void, const FAnimTrack&, float, float, const FAnimExtractContext&, FRootMotionMovementParams&>(this, "UAnimCompositeBase.ExtractRootMotionFromTrack(FAnimTrack&,float,float,FAnimExtractContext&,FRootMotionMovementParams&)", SlotAnimTrack, StartTrackPosition, EndTrackPosition, Context, RootMotion); }
	void PostLoad() { NativeCall<void>(this, "UAnimCompositeBase.PostLoad()"); }
	void InvalidateRecursiveAsset() { NativeCall<void>(this, "UAnimCompositeBase.InvalidateRecursiveAsset()"); }
	void SetCompositeLength(float InLength) { NativeCall<void, float>(this, "UAnimCompositeBase.SetCompositeLength(float)", InLength); }
};
