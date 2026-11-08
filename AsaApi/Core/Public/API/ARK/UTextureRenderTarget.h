#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTexture.h"

class UTextureRenderTarget : public UTexture
{
public:
	UTextureRenderTarget() = delete;
	~UTextureRenderTarget() = delete;
	UTextureRenderTarget(const UTextureRenderTarget&) = delete;
	UTextureRenderTarget& operator=(const UTextureRenderTarget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextureRenderTarget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextureRenderTarget"); }
	float& TargetGammaField() { return *GetNativePointerField<float*>(this, "UTextureRenderTarget.TargetGamma"); }
	BitFieldValue<bool, unsigned __int32> bUsedWithComputeMaterial() { return { this, "UTextureRenderTarget.bUsedWithComputeMaterial"}; }
	BitFieldValue<bool, unsigned __int32> bNeedsTwoCopies() { return { this, "UTextureRenderTarget.bNeedsTwoCopies"}; }
	BitFieldValue<bool, unsigned __int32> bCanCreateUAV() { return { this, "UTextureRenderTarget.bCanCreateUAV"}; }
	BitFieldValue<bool, unsigned __int32> bTargetArraySlicesIndependently() { return { this, "UTextureRenderTarget.bTargetArraySlicesIndependently"}; }
	BitFieldValue<bool, unsigned __int32> bSupportsRenderTargetScalabilityRules() { return { this, "UTextureRenderTarget.bSupportsRenderTargetScalabilityRules"}; }
	float GetDisplayGamma() { return NativeCall<float>(this, "UTextureRenderTarget.GetDisplayGamma()"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTextureRenderTarget.CreateResource()"); }
	FTextureRenderTargetResource* GameThread_GetRenderTargetResource() { return NativeCall<FTextureRenderTargetResource*>(this, "UTextureRenderTarget.GameThread_GetRenderTargetResource()"); }
	int GetNumMips() { return NativeCall<int>(this, "UTextureRenderTarget.GetNumMips()"); }
	FTextureRenderTargetResource* GetRenderTargetResource() { return NativeCall<FTextureRenderTargetResource*>(this, "UTextureRenderTarget.GetRenderTargetResource()"); }
	bool IsSRGB() { return NativeCall<bool>(this, "UTextureRenderTarget.IsSRGB()"); }
	static float GetDefaultDisplayGamma() { return NativeCall<float>(nullptr, "UTextureRenderTarget.GetDefaultDisplayGamma()"); }
};
