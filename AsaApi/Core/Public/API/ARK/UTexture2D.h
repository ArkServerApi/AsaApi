#pragma once


struct UTexture2D : UTexture
{
	// Fields

	UE::Math::TIntPoint<int>& ImportedSizeField() { return *GetNativePointerField<UE::Math::TIntPoint<int>*>(this, "UTexture2D.ImportedSize"); }
	FTexturePlatformData*& PrivatePlatformDataField() { return *GetNativePointerField<FTexturePlatformData**>(this, "UTexture2D.PrivatePlatformData"); }
	//TFieldPtrAccessor<FTexturePlatformData>& PlatformDataField() { return *GetNativePointerField<TFieldPtrAccessor<FTexturePlatformData>*>(this, "UTexture2D.PlatformData"); }
	FTexture2DResourceMem*& ResourceMemField() { return *GetNativePointerField<FTexture2DResourceMem**>(this, "UTexture2D.ResourceMem"); }

	// Bitfields

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTexture2D"); }
	TextureAddress GetTextureAddressY() { return NativeCall<TextureAddress>(this, "UTexture2D.GetTextureAddressY()"); }
	TextureAddress GetTextureAddressX() { return NativeCall<TextureAddress>(this, "UTexture2D.GetTextureAddressX()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture2D.GetSurfaceHeight()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture2D.GetSurfaceWidth()"); }
	int CalcCumulativeLODSize(int NumLODs) { return NativeCall<int, int>(this, "UTexture2D.CalcCumulativeLODSize(int)", NumLODs); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUTexture2D();
	//void ~UTexture2D() { NativeCall<void>(this, "UTexture2D.~UTexture2D()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UTexture2D.Serialize(FStructuredArchiveRecord)", Record); }
	//void UTexture2D(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UTexture2D.UTexture2D(FObjectInitializer*)", ObjectInitializer); }
	FTexturePlatformData** GetRunningPlatformData() { return NativeCall<FTexturePlatformData**>(this, "UTexture2D.GetRunningPlatformData()"); }
	int GetNumMips() { return NativeCall<int>(this, "UTexture2D.GetNumMips()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UTexture2D.Serialize(FStructuredArchiveRecord)", Ar); }
	int GetNumResidentMips() { return NativeCall<int>(this, "UTexture2D.GetNumResidentMips()"); }
	bool IsReadyForAsyncPostLoad() { return NativeCall<bool>(this, "UTexture2D.IsReadyForAsyncPostLoad()"); }
	//void PreSave(FObjectPreSaveContext ObjectSaveContext) { NativeCall<void, FObjectPreSaveContext>(this, "UTexture2D.PreSave(FObjectPreSaveContext)", ObjectSaveContext); }
	//void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag, TSizedDefaultAllocator<32> >* OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag, TSizedDefaultAllocator<32> >*>(this, "UTexture2D.GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>>*)", OutTags); }
	//void UpdateResource() { NativeCall<void>(this, "UTexture2D.UpdateResource()"); }
	void BeginDestroy() { NativeCall<void>(this, "UTexture2D.BeginDestroy()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "UTexture2D.GetDesc()", result); }
	int CalcTextureMemorySize(int MipCount) { return NativeCall<int, int>(this, "UTexture2D.CalcTextureMemorySize(int)", MipCount); }
	int GetNumMipsAllowed(bool bIgnoreMinResidency) { return NativeCall<int, bool>(this, "UTexture2D.GetNumMipsAllowed(bool)", bIgnoreMinResidency); }
	//unsigned int CalcTextureMemorySizeEnum(ETextureMipCount Enum) { return NativeCall<unsigned int, ETextureMipCount>(this, "UTexture2D.CalcTextureMemorySizeEnum(ETextureMipCount)", Enum); }
	//FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTexture2D.CreateResource()"); }
	//EMaterialValueType GetMaterialType() { return NativeCall<EMaterialValueType>(this, "UTexture2D.GetMaterialType()"); }
	void GetResourceSizeEx(FResourceSizeEx* CumulativeResourceSize) { NativeCall<void, FResourceSizeEx*>(this, "UTexture2D.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	//static UTexture2D* CreateTransient(int InSizeX, int InSizeY, EPixelFormat InFormat, const FName InName) { return NativeCall<UTexture2D*, int, int, EPixelFormat, const FName>(nullptr, "UTexture2D.CreateTransient(int,int,EPixelFormat,FName)", InSizeX, InSizeY, InFormat, InName); }
	static float GetGlobalMipMapLODBias() { return NativeCall<float>(nullptr, "UTexture2D.GetGlobalMipMapLODBias()"); }
	void RefreshSamplerStates() { NativeCall<void>(this, "UTexture2D.RefreshSamplerStates()"); }
	bool IsCurrentlyVirtualTextured() { return NativeCall<bool>(this, "UTexture2D.IsCurrentlyVirtualTextured()"); }
	bool StreamIn(int NewMipCount, bool bHighPrio) { return NativeCall<bool, int, bool>(this, "UTexture2D.StreamIn(int,bool)", NewMipCount, bHighPrio); }
	bool StreamOut(int NewMipCount) { return NativeCall<bool, int>(this, "UTexture2D.StreamOut(int)", NewMipCount); }
	void GetMipData(int FirstMipToLoad, void** OutMipData) { NativeCall<void, int, void**>(this, "UTexture2D.GetMipData(int,void**)", FirstMipToLoad, OutMipData); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UTexture2D"); }
};