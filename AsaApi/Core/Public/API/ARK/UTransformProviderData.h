#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UTransformProviderData : public UObject
{
public:
	UTransformProviderData() = delete;
	~UTransformProviderData() = delete;
	UTransformProviderData(const UTransformProviderData&) = delete;
	UTransformProviderData& operator=(const UTransformProviderData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTransformProviderData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTransformProviderData"); }
	bool IsGpuOnly() { return NativeCall<bool>(this, "UTransformProviderData.IsGpuOnly()"); }
	void SubmitChanges() { NativeCall<void>(this, "UTransformProviderData.SubmitChanges()"); }
	bool UsesSkeletonBatching() { return NativeCall<bool>(this, "UTransformProviderData.UsesSkeletonBatching()"); }
	bool IsEnabled() { return NativeCall<bool>(this, "UTransformProviderData.IsEnabled()"); }
	unsigned int GetUniqueAnimationCount() { return NativeCall<unsigned int>(this, "UTransformProviderData.GetUniqueAnimationCount()"); }
	bool GetAnimationBounds(unsigned int AnimationIndex, FRenderBounds& OutBounds) { return NativeCall<bool, unsigned int, FRenderBounds&>(this, "UTransformProviderData.GetAnimationBounds(unsignedint,FRenderBounds&)", AnimationIndex, OutBounds); }
	const FGuid& GetTransformProviderID() { return NativeCall<const FGuid&>(this, "UTransformProviderData.GetTransformProviderID()"); }
	bool IsCompiling() { return NativeCall<bool>(this, "UTransformProviderData.IsCompiling()"); }
	FTransformProviderRenderProxy* CreateRenderProxy(FInstancedSkinningSceneExtensionProxy* ExtensionSceneProxy) { return NativeCall<FTransformProviderRenderProxy*, FInstancedSkinningSceneExtensionProxy*>(this, "UTransformProviderData.CreateRenderProxy(FInstancedSkinningSceneExtensionProxy*)", ExtensionSceneProxy); }
	UTransformProviderData* GetRootTransformProvider() { return NativeCall<UTransformProviderData*>(this, "UTransformProviderData.GetRootTransformProvider()"); }
	bool HasAnimationBounds() { return NativeCall<bool>(this, "UTransformProviderData.HasAnimationBounds()"); }
};
