#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTexture.h"

class UTexture2DDynamic : public UTexture
{
public:
	UTexture2DDynamic() = delete;
	~UTexture2DDynamic() = delete;
	UTexture2DDynamic(const UTexture2DDynamic&) = delete;
	UTexture2DDynamic& operator=(const UTexture2DDynamic&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTexture2DDynamic"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTexture2DDynamic"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UTexture2DDynamic.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UTexture2DDynamic.SizeY"); }
	int& NumMipsField() { return *GetNativePointerField<int*>(this, "UTexture2DDynamic.NumMips"); }
	BitFieldValue<bool, unsigned char> bIsResolveTarget() { return { this, "UTexture2DDynamic.bIsResolveTarget"}; }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UTexture2DDynamic.GetSurfaceArraySize()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture2DDynamic.GetSurfaceWidth()"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UTexture2DDynamic.GetSurfaceDepth()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture2DDynamic.GetSurfaceHeight()"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTexture2DDynamic.CreateResource()"); }
};
