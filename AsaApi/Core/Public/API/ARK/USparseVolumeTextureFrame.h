#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "USparseVolumeTexture.h"

class USparseVolumeTextureFrame : public USparseVolumeTexture
{
public:
	USparseVolumeTextureFrame() = delete;
	~USparseVolumeTextureFrame() = delete;
	USparseVolumeTextureFrame(const USparseVolumeTextureFrame&) = delete;
	USparseVolumeTextureFrame& operator=(const USparseVolumeTextureFrame&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USparseVolumeTextureFrame"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USparseVolumeTextureFrame"); }
	int& FrameIndexField() { return *GetNativePointerField<int*>(this, "USparseVolumeTextureFrame.FrameIndex"); }
	void FinishDestroy() { NativeCall<void>(this, "USparseVolumeTextureFrame.FinishDestroy()"); }
	static USparseVolumeTextureFrame* GetFrameAndIssueStreamingRequest(USparseVolumeTexture* SparseVolumeTexture, unsigned int StreamingInstanceKey, float FrameRate, float FrameIndex, float MipLevel, bool bBlocking, bool bHasValidFrameRate) { return NativeCall<USparseVolumeTextureFrame*, USparseVolumeTexture*, unsigned int, float, float, float, bool, bool>(nullptr, "USparseVolumeTextureFrame.GetFrameAndIssueStreamingRequest(USparseVolumeTexture*,unsignedint,float,float,float,bool,bool)", SparseVolumeTexture, StreamingInstanceKey, FrameRate, FrameIndex, MipLevel, bBlocking, bHasValidFrameRate); }
	UE::Math::TTransform<double>* GetFrameTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "USparseVolumeTextureFrame.GetFrameTransform()", result); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "USparseVolumeTextureFrame.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USparseVolumeTextureFrame.Serialize(FArchive&)", Ar); }
	int GetNumMipLevels() { return NativeCall<int>(this, "USparseVolumeTextureFrame.GetNumMipLevels()"); }
	void BeginDestroy() { NativeCall<void>(this, "USparseVolumeTextureFrame.BeginDestroy()"); }
	int GetNumFrames() { return NativeCall<int>(this, "USparseVolumeTextureFrame.GetNumFrames()"); }
	void PostLoad() { NativeCall<void>(this, "USparseVolumeTextureFrame.PostLoad()"); }
};
