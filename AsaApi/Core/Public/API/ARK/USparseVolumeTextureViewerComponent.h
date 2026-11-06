#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
public:
	USparseVolumeTextureViewerComponent() = delete;
	~USparseVolumeTextureViewerComponent() = delete;
	USparseVolumeTextureViewerComponent(const USparseVolumeTextureViewerComponent&) = delete;
	USparseVolumeTextureViewerComponent& operator=(const USparseVolumeTextureViewerComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USparseVolumeTextureViewerComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USparseVolumeTextureViewerComponent"); }

	float& FrameField() { return *GetNativePointerField<float*>(this, "USparseVolumeTextureViewerComponent.Frame"); }
	float& FrameRateField() { return *GetNativePointerField<float*>(this, "USparseVolumeTextureViewerComponent.FrameRate"); }
	float& VoxelSizeField() { return *GetNativePointerField<float*>(this, "USparseVolumeTextureViewerComponent.VoxelSize"); }
	int& MipLevelField() { return *GetNativePointerField<int*>(this, "USparseVolumeTextureViewerComponent.MipLevel"); }
	float& ExtinctionField() { return *GetNativePointerField<float*>(this, "USparseVolumeTextureViewerComponent.Extinction"); }
	FSparseVolumeTextureViewerSceneProxy*& SparseVolumeTextureViewerSceneProxyField() { return *GetNativePointerField<FSparseVolumeTextureViewerSceneProxy**>(this, "USparseVolumeTextureViewerComponent.SparseVolumeTextureViewerSceneProxy"); }
	BitFieldValue<bool, unsigned __int32> bPlaying() { return { this, "USparseVolumeTextureViewerComponent.bPlaying"}; }
	BitFieldValue<bool, unsigned __int32> bLooping() { return { this, "USparseVolumeTextureViewerComponent.bLooping"}; }
	BitFieldValue<bool, unsigned __int32> bReversePlayback() { return { this, "USparseVolumeTextureViewerComponent.bReversePlayback"}; }
	BitFieldValue<bool, unsigned __int32> bBlockingStreamingRequests() { return { this, "USparseVolumeTextureViewerComponent.bBlockingStreamingRequests"}; }
	BitFieldValue<bool, unsigned __int32> bApplyPerFrameTransforms() { return { this, "USparseVolumeTextureViewerComponent.bApplyPerFrameTransforms"}; }
	BitFieldValue<bool, unsigned __int32> bPivotAtCentroid() { return { this, "USparseVolumeTextureViewerComponent.bPivotAtCentroid"}; }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "USparseVolumeTextureViewerComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "USparseVolumeTextureViewerComponent.SendRenderTransform_Concurrent()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USparseVolumeTextureViewerComponent.Serialize(FArchive&)", Ar); }
	void SendRenderTransformCommand() { NativeCall<void>(this, "USparseVolumeTextureViewerComponent.SendRenderTransformCommand()"); }
	bool SupportsStaticLighting() { return NativeCall<bool>(this, "USparseVolumeTextureViewerComponent.SupportsStaticLighting()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "USparseVolumeTextureViewerComponent.DestroyRenderState_Concurrent()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "USparseVolumeTextureViewerComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
};
