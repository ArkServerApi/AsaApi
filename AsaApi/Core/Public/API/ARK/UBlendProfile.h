#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UBlendProfile : public UObject
{
public:
	UBlendProfile() = delete;
	~UBlendProfile() = delete;
	UBlendProfile(const UBlendProfile&) = delete;
	UBlendProfile& operator=(const UBlendProfile&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBlendProfile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBlendProfile"); }
	void FillBoneScalesArray(TArray<float, TSizedDefaultAllocator<32> >& OutBoneBlendProfileFactors, const FBoneContainer& BoneContainer) { NativeCall<void, TArray<float, TSizedDefaultAllocator<32> >&, const FBoneContainer&>(this, "UBlendProfile.FillBoneScalesArray(TArray<float,TSizedDefaultAllocator<32>>&,FBoneContainer&)", OutBoneBlendProfileFactors, BoneContainer); }
	bool IsSafeForRootSet() { return NativeCall<bool>(this, "UBlendProfile.IsSafeForRootSet()"); }
	void UpdateBoneWeights(FBlendSampleData& InOutCurrentData, const FAlphaBlend& BlendInfo, float BlendStartAlpha, float MainWeight, bool bInverse) { NativeCall<void, FBlendSampleData&, const FAlphaBlend&, float, float, bool>(this, "UBlendProfile.UpdateBoneWeights(FBlendSampleData&,FAlphaBlend&,float,float,bool)", InOutCurrentData, BlendInfo, BlendStartAlpha, MainWeight, bInverse); }
	void SetSingleBoneBlendScale(int InBoneIdx, float InScale, bool bCreate) { NativeCall<void, int, float, bool>(this, "UBlendProfile.SetSingleBoneBlendScale(int,float,bool)", InBoneIdx, InScale, bCreate); }
	void SetBoneBlendScale(const FName& InBoneName, float InScale, bool bRecurse, bool bCreate) { NativeCall<void, const FName&, float, bool, bool>(this, "UBlendProfile.SetBoneBlendScale(FName&,float,bool,bool)", InBoneName, InScale, bRecurse, bCreate); }
	void PostLoad() { NativeCall<void>(this, "UBlendProfile.PostLoad()"); }
	float GetDefaultBlendScale() { return NativeCall<float>(this, "UBlendProfile.GetDefaultBlendScale()"); }
};
