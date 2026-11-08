#pragma once


struct UTexture : UStreamableRenderAsset
{
	// Fields

	FGuid& LightingGuidField() { return *GetNativePointerField<FGuid*>(this, "UTexture.LightingGuid"); }
	int& LevelIndexField() { return *GetNativePointerField<int*>(this, "UTexture.LevelIndex"); }
	//FPerPlatformInt& LODBiasField() { return *GetNativePointerField<FPerPlatformInt*>(this, "UTexture.LODBias"); }
	TEnumAsByte<enum TextureFilter>& FilterField() { return *GetNativePointerField<TEnumAsByte<enum TextureFilter>*>(this, "UTexture.Filter"); }
	TEnumAsByte<enum TextureCookPlatformTilingSettings>& CookPlatformTilingSettingsField() { return *GetNativePointerField<TEnumAsByte<enum TextureCookPlatformTilingSettings>*>(this, "UTexture.CookPlatformTilingSettings"); }
	//FPerPlatformFloat& DownscaleField() { return *GetNativePointerField<FPerPlatformFloat*>(this, "UTexture.Downscale"); }
	//TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >& AssetUserDataField() { return *GetNativePointerField<TArray<TObjectPtr<UAssetUserData>, TSizedDefaultAllocator<32> >*>(this, "UTexture.AssetUserData"); }
	//FTextureResource*& PrivateResourceField() { return *GetNativePointerField<FTextureResource**>(this, "UTexture.PrivateResource"); }
	//FTextureResource*& PrivateResourceRenderThreadField() { return *GetNativePointerField<FTextureResource**>(this, "UTexture.PrivateResourceRenderThread"); }
	//FTextureResource*& PrivateResourceToDeleteField() { return *GetNativePointerField<FTextureResource**>(this, "UTexture.PrivateResourceToDelete"); }
	//TFieldPtrAccessor<FTextureResource>& ResourceField() { return *GetNativePointerField<TFieldPtrAccessor<FTextureResource>*>(this, "UTexture.Resource"); }
	//FTextureReference*& TextureReferenceField() { return *GetNativePointerField<FTextureReference**>(this, "UTexture.TextureReference"); }
	FRenderCommandFence& ReleaseFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UTexture.ReleaseFence"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> SRGB() { return { this, "UTexture.SRGB" }; }
	BitFieldValue<bool, unsigned __int32> bNoTiling() { return { this, "UTexture.bNoTiling" }; }
	BitFieldValue<bool, unsigned __int32> VirtualTextureStreaming() { return { this, "UTexture.VirtualTextureStreaming" }; }
	BitFieldValue<bool, unsigned __int32> CompressionYCoCg() { return { this, "UTexture.CompressionYCoCg" }; }
	BitFieldValue<bool, unsigned __int32> bNotOfflineProcessed() { return { this, "UTexture.bNotOfflineProcessed" }; }
	BitFieldValue<bool, unsigned __int32> bAsyncResourceReleaseHasBeenStarted() { return { this, "UTexture.bAsyncResourceReleaseHasBeenStarted" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTexture"); }
	const FString* GetAssetUserDataArray() { return NativeCall<const FString*>(this, "UTexture.GetAssetUserDataArray()"); }
	EMaterialValueType GetMaterialType() { return NativeCall<EMaterialValueType>(this, "UTexture.GetMaterialType()"); }
	FTextureResource* CreateResource() { return NativeCall<FTextureResource*>(this, "UTexture.CreateResource()"); }
	int GetCachedLODBias() { return NativeCall<int>(this, "UTexture.GetCachedLODBias()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUTexture();
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UTexture.Serialize(FStructuredArchiveRecord)", Record); }
	//void UTexture(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UTexture.UTexture(FObjectInitializer*)", ObjectInitializer); }
	const FTextureResource* GetResource() { return NativeCall<const FTextureResource*>(this, "UTexture.GetResource()"); }
	//void ~UTexture() { NativeCall<void>(this, "UTexture.~UTexture()"); }
	void ReleaseResource() { NativeCall<void>(this, "UTexture.ReleaseResource()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UTexture.Serialize(FStructuredArchiveRecord)", Ar); }
	void PostLoad() { NativeCall<void>(this, "UTexture.PostLoad()"); }
	void BeginFinalReleaseResource() { NativeCall<void>(this, "UTexture.BeginFinalReleaseResource()"); }
	void BeginDestroy() { NativeCall<void>(this, "UTexture.BeginDestroy()"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UTexture.IsReadyForFinishDestroy()"); }
	void FinishDestroy() { NativeCall<void>(this, "UTexture.FinishDestroy()"); }
	//void PreSave(FObjectPreSaveContext ObjectSaveContext) { NativeCall<void, FObjectPreSaveContext>(this, "UTexture.PreSave(FObjectPreSaveContext)", ObjectSaveContext); }
	unsigned int GetMipIoFilenameHash(const int MipIndex) { return NativeCall<unsigned int, const int>(this, "UTexture.GetMipIoFilenameHash(int)", MipIndex); }
	bool DoesMipDataExist(const int MipIndex) { return NativeCall<bool, const int>(this, "UTexture.DoesMipDataExist(int)", MipIndex); }
	bool HasPendingRenderResourceInitialization() { return NativeCall<bool>(this, "UTexture.HasPendingRenderResourceInitialization()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool HasPendingLODTransition();
	float GetLastRenderTimeForStreaming() { return NativeCall<float>(this, "UTexture.GetLastRenderTimeForStreaming()"); }
	void InvalidateLastRenderTimeForStreaming() { NativeCall<void>(this, "UTexture.InvalidateLastRenderTimeForStreaming()"); }
	bool ShouldMipLevelsBeForcedResident() { return NativeCall<bool>(this, "UTexture.ShouldMipLevelsBeForcedResident()"); }
	static void CancelPendingTextureStreaming() { NativeCall<void>(nullptr, "UTexture.CancelPendingTextureStreaming()"); }
	static const wchar_t* GetTextureGroupString(TextureGroup InGroup) { return NativeCall<const wchar_t*, TextureGroup>(nullptr, "UTexture.GetTextureGroupString(TextureGroup)", InGroup); }
	static UEnum* GetPixelFormatEnum() { return NativeCall<UEnum*>(nullptr, "UTexture.GetPixelFormatEnum()"); }
	void PostCDOContruct() { NativeCall<void>(this, "UTexture.PostCDOContruct()"); }
	void AddAssetUserData(UAssetUserData* InUserData) { NativeCall<void, UAssetUserData*>(this, "UTexture.AddAssetUserData(UAssetUserData*)", InUserData); }
	UAssetUserData* GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData*, TSubclassOf<UAssetUserData>>(this, "UTexture.GetAssetUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "UTexture.RemoveUserDataOfClass(TSubclassOf<UAssetUserData>)", InUserDataClass); }
	FStreamableRenderResourceState* GetResourcePostInitState(FStreamableRenderResourceState* result, const FTexturePlatformData* PlatformData, bool bAllowStreaming, int MinRequestMipCount, int MaxMipCount, bool bSkipCanBeLoaded) { return NativeCall<FStreamableRenderResourceState*, FStreamableRenderResourceState*, const FTexturePlatformData*, bool, int, int, bool>(this, "UTexture.GetResourcePostInitState(FTexturePlatformData*,bool,int,int,bool)", result, PlatformData, bAllowStreaming, MinRequestMipCount, MaxMipCount, bSkipCanBeLoaded); }
	void GetVirtualTextureBuildSettings(FVirtualTextureBuildSettings* OutSettings) { NativeCall<void, FVirtualTextureBuildSettings*>(this, "UTexture.GetVirtualTextureBuildSettings(FVirtualTextureBuildSettings&)", OutSettings); }
	void SerializeCookedPlatformData(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UTexture.SerializeCookedPlatformData(FArchive&,bool)", Ar); }
	unsigned int GetSurfaceArraySize() { return NativeCall<unsigned int>(this, "UTexture.GetSurfaceArraySize()"); }
	float GetSurfaceDepth() { return NativeCall<float>(this, "UTexture.GetSurfaceDepth()"); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture.GetSurfaceHeight()"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture.GetSurfaceWidth()"); }
	ETextureClass GetTextureClass() { return NativeCall<ETextureClass>(this, "UTexture.GetTextureClass()"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UTexture"); }
};