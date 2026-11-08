#pragma once
#include "BulkForward.h"
#include "UCommandlet.h"

struct UPrimalExportAssetRegistryCommandlet : public UCommandlet
{
public:
	UPrimalExportAssetRegistryCommandlet() = delete;
	~UPrimalExportAssetRegistryCommandlet() = delete;
	UPrimalExportAssetRegistryCommandlet(const UPrimalExportAssetRegistryCommandlet&) = delete;
	UPrimalExportAssetRegistryCommandlet& operator=(const UPrimalExportAssetRegistryCommandlet&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalExportAssetRegistryCommandlet"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalExportAssetRegistryCommandlet"); }

	int Main(const FString& CmdLineParams) { return NativeCall<int, const FString&>(this, "UPrimalExportAssetRegistryCommandlet.Main(FString&)", CmdLineParams); }
};
