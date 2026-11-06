#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UClothingAssetBase : public UObject
{
public:
	UClothingAssetBase() = delete;
	~UClothingAssetBase() = delete;
	UClothingAssetBase(const UClothingAssetBase&) = delete;
	UClothingAssetBase& operator=(const UClothingAssetBase&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UClothingAssetBase.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	FGuid& AssetGuidField() { return *GetNativePointerField<FGuid*>(this, "UClothingAssetBase.AssetGuid"); }
	void PostUpdateAllAssets() { NativeCall<void>(this, "UClothingAssetBase.PostUpdateAllAssets()"); }
	int GetNumLods() { return NativeCall<int>(this, "UClothingAssetBase.GetNumLods()"); }
	bool IsValid() { return NativeCall<bool>(this, "UClothingAssetBase.IsValid()"); }
	bool IsValidLod(int InLodIndex) { return NativeCall<bool, int>(this, "UClothingAssetBase.IsValidLod(int)", InLodIndex); }
	void RefreshBoneMapping(USkeletalMesh* InSkelMesh) { NativeCall<void, USkeletalMesh*>(this, "UClothingAssetBase.RefreshBoneMapping(USkeletalMesh*)", InSkelMesh); }
};
