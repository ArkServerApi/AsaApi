#pragma once
#include "BulkForward.h"
#include "UContextMenuItem.h"

struct UContextMenuItem_CosmeticEntry : public UContextMenuItem
{
public:
	UContextMenuItem_CosmeticEntry() = delete;
	~UContextMenuItem_CosmeticEntry() = delete;
	UContextMenuItem_CosmeticEntry(const UContextMenuItem_CosmeticEntry&) = delete;
	UContextMenuItem_CosmeticEntry& operator=(const UContextMenuItem_CosmeticEntry&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FItemNetID& TargetItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "UContextMenuItem_CosmeticEntry.TargetItemID"); }
	__int64& CosmeticModIDField() { return *GetNativePointerField<__int64*>(this, "UContextMenuItem_CosmeticEntry.CosmeticModID"); }
	int& CosmeticVariantIDField() { return *GetNativePointerField<int*>(this, "UContextMenuItem_CosmeticEntry.CosmeticVariantID"); }
	UImage*& ImageContainerField() { return *GetNativePointerField<UImage**>(this, "UContextMenuItem_CosmeticEntry.ImageContainer"); }
	void InternalRefresh() { NativeCall<void>(this, "UContextMenuItem_CosmeticEntry.InternalRefresh()"); }
	void SetImage(UTexture2D* Image) { NativeCall<void, UTexture2D*>(this, "UContextMenuItem_CosmeticEntry.SetImage(UTexture2D*)", Image); }
};
