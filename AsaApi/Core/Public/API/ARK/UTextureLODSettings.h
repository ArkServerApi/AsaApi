#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UTextureLODSettings : public UObject
{
public:
	UTextureLODSettings() = delete;
	~UTextureLODSettings() = delete;
	UTextureLODSettings(const UTextureLODSettings&) = delete;
	UTextureLODSettings& operator=(const UTextureLODSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTextureLODSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTextureLODSettings"); }
	int& TextureGroupOptionalQualityLevelField() { return *GetNativePointerField<int*>(this, "UTextureLODSettings.TextureGroupOptionalQualityLevel"); }
	int CalculateLODBias(const UTexture* Texture, bool bIncCinematicMips) { return NativeCall<int, const UTexture*, bool>(this, "UTextureLODSettings.CalculateLODBias(UTexture*,bool)", Texture, bIncCinematicMips); }
	void SetupLODGroup(int GroupId) { NativeCall<void, int>(this, "UTextureLODSettings.SetupLODGroup(int)", GroupId); }
};
