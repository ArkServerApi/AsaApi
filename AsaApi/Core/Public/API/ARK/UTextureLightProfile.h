#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTexture2D.h"

class UTextureLightProfile : public UTexture2D
{
public:
	UTextureLightProfile() = delete;
	~UTextureLightProfile() = delete;
	UTextureLightProfile(const UTextureLightProfile&) = delete;
	UTextureLightProfile& operator=(const UTextureLightProfile&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextureLightProfile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextureLightProfile"); }
	float& BrightnessField() { return *GetNativePointerField<float*>(this, "UTextureLightProfile.Brightness"); }
	float& TextureMultiplierField() { return *GetNativePointerField<float*>(this, "UTextureLightProfile.TextureMultiplier"); }
};
