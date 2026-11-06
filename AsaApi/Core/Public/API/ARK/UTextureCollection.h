#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataAsset.h"

class UTextureCollection : public UDataAsset
{
public:
	UTextureCollection() = delete;
	~UTextureCollection() = delete;
	UTextureCollection(const UTextureCollection&) = delete;
	UTextureCollection& operator=(const UTextureCollection&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UTextureCollection.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	FTextureCollectionResource*& PrivateResourceField() { return *GetNativePointerField<FTextureCollectionResource**>(this, "UTextureCollection.PrivateResource"); }
	FTextureCollectionResource*& PrivateResourceRenderThreadField() { return *GetNativePointerField<FTextureCollectionResource**>(this, "UTextureCollection.PrivateResourceRenderThread"); }
	FTextureCollectionResource* CreateResource() { return NativeCall<FTextureCollectionResource*>(this, "UTextureCollection.CreateResource()"); }
	void PostLoad() { NativeCall<void>(this, "UTextureCollection.PostLoad()"); }
	void UpdateResource(bool bNotifyMaterials) { NativeCall<void, bool>(this, "UTextureCollection.UpdateResource(bool)", bNotifyMaterials); }
	bool IsVirtualCollection() { return NativeCall<bool>(this, "UTextureCollection.IsVirtualCollection()"); }
	void ReleaseResource() { NativeCall<void>(this, "UTextureCollection.ReleaseResource()"); }
};
