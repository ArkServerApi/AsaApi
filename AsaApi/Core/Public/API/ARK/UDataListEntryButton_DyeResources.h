#pragma once
#include "BulkForward.h"
#include "UPrimalUI.h"

struct UDataListEntryButton_DyeResources : public UPrimalUI
{
public:
	UDataListEntryButton_DyeResources() = delete;
	~UDataListEntryButton_DyeResources() = delete;
	UDataListEntryButton_DyeResources(const UDataListEntryButton_DyeResources&) = delete;
	UDataListEntryButton_DyeResources& operator=(const UDataListEntryButton_DyeResources&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataListEntryButton_DyeResources"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataListEntryButton_DyeResources"); }

	UTextBlock*& DisplayStringField() { return *GetNativePointerField<UTextBlock**>(this, "UDataListEntryButton_DyeResources.DisplayString"); }
	UImage*& ItemIconField() { return *GetNativePointerField<UImage**>(this, "UDataListEntryButton_DyeResources.ItemIcon"); }
	void SetItemIcon(UMaterialInterface* aMat) { NativeCall<void, UMaterialInterface*>(this, "UDataListEntryButton_DyeResources.SetItemIcon(UMaterialInterface*)", aMat); }
	void InitializeMe() { NativeCall<void>(this, "UDataListEntryButton_DyeResources.InitializeMe()"); }
};
