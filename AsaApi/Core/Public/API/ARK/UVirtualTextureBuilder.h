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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	unsigned __int64& BuildHashField() { return *GetNativePointerField<unsigned __int64*>(this, "UVirtualTextureBuilder.BuildHash"); }
	bool& bSeparateTextureForMobileField() { return *GetNativePointerField<bool*>(this, "UVirtualTextureBuilder.bSeparateTextureForMobile"); }
	void PostLoad() { NativeCall<void>(this, "UVirtualTextureBuilder.PostLoad()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UVirtualTextureBuilder.Serialize(FArchive&)", Ar); }
};
