#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTexture2D.h"

class UVirtualTexture2D : public UTexture2D
{
public:
	UVirtualTexture2D() = delete;
	~UVirtualTexture2D() = delete;
	UVirtualTexture2D(const UVirtualTexture2D&) = delete;
	UVirtualTexture2D& operator=(const UVirtualTexture2D&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVirtualTexture2D"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVirtualTexture2D"); }
	FVirtualTextureBuildSettings& SettingsField() { return *GetNativePointerField<FVirtualTextureBuildSettings*>(this, "UVirtualTexture2D.Settings"); }
	bool& bContinuousUpdate_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UVirtualTexture2D.bContinuousUpdate_DEPRECATED"); }
	bool& bSinglePhysicalSpaceField() { return *GetNativePointerField<bool*>(this, "UVirtualTexture2D.bSinglePhysicalSpace"); }
	bool IsVirtualTexturedWithSinglePhysicalSpace() { return NativeCall<bool>(this, "UVirtualTexture2D.IsVirtualTexturedWithSinglePhysicalSpace()"); }
	void GetVirtualTextureBuildSettings(FVirtualTextureBuildSettings& OutSettings) { NativeCall<void, FVirtualTextureBuildSettings&>(this, "UVirtualTexture2D.GetVirtualTextureBuildSettings(FVirtualTextureBuildSettings&)", OutSettings); }
};
