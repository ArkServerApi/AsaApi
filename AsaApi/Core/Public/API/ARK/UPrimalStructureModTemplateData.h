#pragma once
#include "BulkForward.h"
#include "UDataAsset.h"

struct UPrimalStructureModTemplateData : public UDataAsset
{
public:
	UPrimalStructureModTemplateData() = delete;
	~UPrimalStructureModTemplateData() = delete;
	UPrimalStructureModTemplateData(const UPrimalStructureModTemplateData&) = delete;
	UPrimalStructureModTemplateData& operator=(const UPrimalStructureModTemplateData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalStructureModTemplateData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalStructureModTemplateData"); }

	FString& MenuTitleField() { return *GetNativePointerField<FString*>(this, "UPrimalStructureModTemplateData.MenuTitle"); }
	void ImportFromClipboard() { NativeCall<void>(this, "UPrimalStructureModTemplateData.ImportFromClipboard()"); }
};
