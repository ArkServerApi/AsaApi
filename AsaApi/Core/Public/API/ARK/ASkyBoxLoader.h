#pragma once
#include "BulkForward.h"
#include "AHideActorList.h"

struct ASkyBoxLoader : public AHideActorList
{
public:
	ASkyBoxLoader() = delete;
	~ASkyBoxLoader() = delete;
	ASkyBoxLoader(const ASkyBoxLoader&) = delete;
	ASkyBoxLoader& operator=(const ASkyBoxLoader&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASkyBoxLoader"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASkyBoxLoader"); }

	TArray<UTexture2D*, TSizedDefaultAllocator<32> >& LoadedSkyTexturesField() { return *GetNativePointerField<TArray<UTexture2D*, TSizedDefaultAllocator<32> >*>(this, "ASkyBoxLoader.LoadedSkyTextures"); }
	TArray<UTexture2D*, TSizedDefaultAllocator<32> >& LoadedFogScatterTexturesField() { return *GetNativePointerField<TArray<UTexture2D*, TSizedDefaultAllocator<32> >*>(this, "ASkyBoxLoader.LoadedFogScatterTextures"); }
	TArray<UTexture2D*, TSizedDefaultAllocator<32> >& LoadedFogLossTexturesField() { return *GetNativePointerField<TArray<UTexture2D*, TSizedDefaultAllocator<32> >*>(this, "ASkyBoxLoader.LoadedFogLossTextures"); }
	bool& bHasProcessedAnyField() { return *GetNativePointerField<bool*>(this, "ASkyBoxLoader.bHasProcessedAny"); }
	void FinishTextureLoads() { NativeCall<void>(this, "ASkyBoxLoader.FinishTextureLoads()"); }
	void LoadResource(int TextureIndex, int ResourceIndex) { NativeCall<void, int, int>(this, "ASkyBoxLoader.LoadResource(int,int)", TextureIndex, ResourceIndex); }
	bool LoadSkyTextureIndexArray(const TArray<int, TSizedDefaultAllocator<32> >& TextureIndices) { return NativeCall<bool, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "ASkyBoxLoader.LoadSkyTextureIndexArray(TArray<int,TSizedDefaultAllocator<32>>&)", TextureIndices); }
	void RequestAsyncLoad(const FSoftObjectPath& AssetRef, int TextureIndex, int ResourceIndex) { NativeCall<void, const FSoftObjectPath&, int, int>(this, "ASkyBoxLoader.RequestAsyncLoad(FSoftObjectPath&,int,int)", AssetRef, TextureIndex, ResourceIndex); }
	void K2_OnTextureIndicesLoaded(const TArray<int, TSizedDefaultAllocator<32> >& TextureIndices) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "ASkyBoxLoader.K2_OnTextureIndicesLoaded(TArray<int,TSizedDefaultAllocator<32>>&)", TextureIndices); }
	void BeginPlay() { NativeCall<void>(this, "ASkyBoxLoader.BeginPlay()"); }
	void AsyncLoadComplete(const FSoftObjectPath& InAssetReference, int TextureIndex, int ResourceIndex) { NativeCall<void, const FSoftObjectPath&, int, int>(this, "ASkyBoxLoader.AsyncLoadComplete(FSoftObjectPath&,int,int)", InAssetReference, TextureIndex, ResourceIndex); }
	bool SetSkyTextureIndices(int Texture0, int Texture1) { return NativeCall<bool, int, int>(this, "ASkyBoxLoader.SetSkyTextureIndices(int,int)", Texture0, Texture1); }
	bool LoadSkyTextureIndex(int TextureIdx) { return NativeCall<bool, int>(this, "ASkyBoxLoader.LoadSkyTextureIndex(int)", TextureIdx); }
};
