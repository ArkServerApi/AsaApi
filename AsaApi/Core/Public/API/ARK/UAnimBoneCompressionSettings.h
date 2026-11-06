#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAnimBoneCompressionSettings : public UObject
{
public:
	UAnimBoneCompressionSettings() = delete;
	~UAnimBoneCompressionSettings() = delete;
	UAnimBoneCompressionSettings(const UAnimBoneCompressionSettings&) = delete;
	UAnimBoneCompressionSettings& operator=(const UAnimBoneCompressionSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimBoneCompressionSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimBoneCompressionSettings"); }
	void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph*>(this, "UAnimBoneCompressionSettings.PostLoadSubobjects(FObjectInstancingGraph*)", OuterInstanceGraph); }
};
