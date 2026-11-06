#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UVirtualTextureBuilder : public UObject
{
public:
	UVirtualTextureBuilder() = delete;
	~UVirtualTextureBuilder() = delete;
	UVirtualTextureBuilder(const UVirtualTextureBuilder&) = delete;
	UVirtualTextureBuilder& operator=(const UVirtualTextureBuilder&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVirtualTextureBuilder"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVirtualTextureBuilder"); }
	unsigned __int64& BuildHashField() { return *GetNativePointerField<unsigned __int64*>(this, "UVirtualTextureBuilder.BuildHash"); }
	bool& bSeparateTextureForMobileField() { return *GetNativePointerField<bool*>(this, "UVirtualTextureBuilder.bSeparateTextureForMobile"); }
	void PostLoad() { NativeCall<void>(this, "UVirtualTextureBuilder.PostLoad()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UVirtualTextureBuilder.Serialize(FArchive&)", Ar); }
};
