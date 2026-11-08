#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UMaterialCacheVirtualTextureTag : public UObject
{
public:
	UMaterialCacheVirtualTextureTag() = delete;
	~UMaterialCacheVirtualTextureTag() = delete;
	UMaterialCacheVirtualTextureTag(const UMaterialCacheVirtualTextureTag&) = delete;
	UMaterialCacheVirtualTextureTag& operator=(const UMaterialCacheVirtualTextureTag&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMaterialCacheVirtualTextureTag"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMaterialCacheVirtualTextureTag"); }
	bool& bEnableCompressionField() { return *GetNativePointerField<bool*>(this, "UMaterialCacheVirtualTextureTag.bEnableCompression"); }
	bool& bEnableBaseColorHQField() { return *GetNativePointerField<bool*>(this, "UMaterialCacheVirtualTextureTag.bEnableBaseColorHQ"); }
	bool& bEnableNormalHQField() { return *GetNativePointerField<bool*>(this, "UMaterialCacheVirtualTextureTag.bEnableNormalHQ"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "UMaterialCacheVirtualTextureTag.Guid"); }
};
