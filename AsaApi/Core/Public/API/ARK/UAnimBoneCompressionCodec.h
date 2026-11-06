#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAnimBoneCompressionCodec : public UObject
{
public:
	UAnimBoneCompressionCodec() = delete;
	~UAnimBoneCompressionCodec() = delete;
	UAnimBoneCompressionCodec(const UAnimBoneCompressionCodec&) = delete;
	UAnimBoneCompressionCodec& operator=(const UAnimBoneCompressionCodec&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimBoneCompressionCodec"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimBoneCompressionCodec"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UAnimBoneCompressionCodec.Description"); }
	FString* GetCodecDDCHandle(FString* result) { return NativeCall<FString*, FString*>(this, "UAnimBoneCompressionCodec.GetCodecDDCHandle()", result); }
	UAnimBoneCompressionCodec* GetCodec(const FString& DDCHandle) { return NativeCall<UAnimBoneCompressionCodec*, const FString&>(this, "UAnimBoneCompressionCodec.GetCodec(FString&)", DDCHandle); }
};
