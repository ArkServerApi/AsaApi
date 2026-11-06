#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UPackage : public UObject
{
public:
	UPackage() = delete;
	~UPackage() = delete;
	UPackage(const UPackage&) = delete;
	UPackage& operator=(const UPackage&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPackage"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPackage"); }
	FPackageId& PackageIdField() { return *GetNativePointerField<FPackageId*>(this, "UPackage.PackageId"); }
	FPackagePath& LoadedPathField() { return *GetNativePointerField<FPackagePath*>(this, "UPackage.LoadedPath"); }
	BitFieldValue<bool, unsigned char> bDirty() { return { this, "UPackage.bDirty"}; }
	BitFieldValue<bool, unsigned char> bHasBeenFullyLoaded() { return { this, "UPackage.bHasBeenFullyLoaded"}; }
	BitFieldValue<bool, unsigned char> bCanBeImported() { return { this, "UPackage.bCanBeImported"}; }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UPackage.NeedsLoadForServer()"); }
	bool IsFullyLoaded() { return NativeCall<bool>(this, "UPackage.IsFullyLoaded()"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UPackage.IsNameStableForNetworking()"); }
	static void WaitForAsyncFileWrites() { NativeCall<void>(nullptr, "UPackage.WaitForAsyncFileWrites()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPackage.Serialize(FArchive&)", Ar); }
	void SetDirtyFlag(bool bInIsDirty) { NativeCall<void, bool>(this, "UPackage.SetDirtyFlag(bool)", bInIsDirty); }
	const FCustomVersionContainer& GetLinkerCustomVersions() { return NativeCall<const FCustomVersionContainer&>(this, "UPackage.GetLinkerCustomVersions()"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UPackage.NeedsLoadForClient()"); }
	void FinishDestroy() { NativeCall<void>(this, "UPackage.FinishDestroy()"); }
	static bool IsEmptyPackage(UPackage* Package, const UObject* LastReferencer) { return NativeCall<bool, UPackage*, const UObject*>(nullptr, "UPackage.IsEmptyPackage(UPackage*,UObject*)", Package, LastReferencer); }
	void SetLoadedPath(const FPackagePath& InPackagePath) { NativeCall<void, const FPackagePath&>(this, "UPackage.SetLoadedPath(FPackagePath&)", InPackagePath); }
	static bool SavePackage(UPackage* InOuter, UObject* InAsset, const wchar_t* Filename, const FSavePackageArgs& SaveArgs) { return NativeCall<bool, UPackage*, UObject*, const wchar_t*, const FSavePackageArgs&>(nullptr, "UPackage.SavePackage(UPackage*,UObject*,wchar_t*,FSavePackageArgs&)", InOuter, InAsset, Filename, SaveArgs); }
	void SetLinker(FLinkerLoad* InLinker) { NativeCall<void, FLinkerLoad*>(this, "UPackage.SetLinker(FLinkerLoad*)", InLinker); }
	const FPackagePath& GetLoadedPath() { return NativeCall<const FPackagePath&>(this, "UPackage.GetLoadedPath()"); }
	bool Rename(const wchar_t* InName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UPackage.Rename(wchar_t*,UObject*,unsignedint)", InName, NewOuter, Flags); }
	void PostInitProperties() { NativeCall<void>(this, "UPackage.PostInitProperties()"); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UPackage.IsPostLoadThreadSafe()"); }
	void FullyLoad() { NativeCall<void>(this, "UPackage.FullyLoad()"); }
	bool IsAsset() { return NativeCall<bool>(this, "UPackage.IsAsset()"); }
	void SetLinkerLicenseeVersion(int InVersion) { NativeCall<void, int>(this, "UPackage.SetLinkerLicenseeVersion(int)", InVersion); }
};
