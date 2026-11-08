#pragma once

#include "EFindObjectFlags.h"
#include "RuntimeGlobalForward.h"
#include "UWorldProxy.h"
#include <cstdint>
#include <type_traits>
#include <Containers/StringView.h>


struct Globals
{

	static UObject* StaticFindObject(UClass* objectClass, UObject* outer, const wchar_t* name, bool exactClass = false)
	{
		static_assert(sizeof(TStringView<wchar_t>) == 16);
		static_assert(alignof(TStringView<wchar_t>) == 8);
		return NativeCall<UObject*, UClass*, UObject*, TStringView<wchar_t>, EFindObjectFlags>(
			nullptr, "Global.StaticFindObject(UClass*,UObject*,TStringView<wchar_t>,EFindObjectFlags)",
			objectClass, outer, TStringView<wchar_t>(name),
			exactClass ? EFindObjectFlags::ExactClass : EFindObjectFlags::None);
	}

	static UObject* StaticConstructObject(FStaticConstructObjectParameters& Params)
	{
		return NativeCall<UObject*, FStaticConstructObjectParameters&>(nullptr, "Global.StaticConstructObject_Internal(FStaticConstructObjectParameters&)", Params);
	}

	static DataValue<struct UEngine*> GEngine() { return { "Global.GEngine" }; }
	static DataValue<FString> GGameUserSettingsIni() { return { "Global.GGameUserSettingsIni" }; }
	static DataValue<struct FConfigCacheIni*> GConfig() { return { "Global.GConfig" }; }
	static DataValue<FUObjectArray> GUObjectArray() { return { "Global.GUObjectArray" }; }
	static bool IsAsyncLoading() { const auto Callback = *GetNativeDataPointerField<bool(**)()>("Global.IsAsyncLoading"); if (!Callback) throw std::runtime_error("Loading status callback is unavailable"); return Callback(); }
	static DataValue<FString> GInputIni() { return {"Global.GInputIni"}; }
	static DataValue<unsigned int> GFrameNumber() { return {"Global.GFrameNumber"}; }
	static DataValue<FString> GEngineIni() { return {"Global.GEngineIni"}; }
	static DataValue<bool> GIsGarbageCollecting() { return {"Global.GIsGarbageCollecting"}; }
	static DataValue<unsigned int> GGameThreadId() { return {"Global.GGameThreadId"}; }
	static DataValue<bool> GIsServer() { return {"Global.GIsServer"}; }
	static DataValue<bool> GIsInitialLoad() { return {"Global.GIsInitialLoad"}; }
	static DataValue<FString> GScalabilityIni() { return {"Global.GScalabilityIni"}; }
	static DataValue<unsigned __int64> GFrameCounter() { return {"Global.GFrameCounter"}; }
	static bool IsAsyncLoadingMultithreaded() { const auto Callback = *GetNativeDataPointerField<bool(**)()>("Global.IsAsyncLoadingMultithreaded"); if (!Callback) throw std::runtime_error("Loading status callback is unavailable"); return Callback(); }
	static DataValue<bool> GIsClient() { return {"Global.GIsClient"}; }
	static DataValue<UWorldProxy> GWorld() { return {"Global.GWorld"}; }
	static DataValue<bool> GIsRunning() { return {"Global.GIsRunning"}; }
	static bool IsAsyncLoadingSuspended() { const auto Callback = *GetNativeDataPointerField<bool(**)()>("Global.IsAsyncLoadingSuspended"); if (!Callback) throw std::runtime_error("Loading status callback is unavailable"); return Callback(); }
	static DataValue<double> GStartTime() { return {"Global.GStartTime"}; }
	static DataValue<bool> GIsRequestingExit() { return {"Global.GIsRequestingExit"}; }
	static DataValue<FString> GGameIni() { return {"Global.GGameIni"}; }
	static bool TryCollectGarbage(EObjectFlags KeepFlags, bool bPerformFullPurge) { return NativeCall<bool, EObjectFlags, bool>(nullptr, "Global.TryCollectGarbage(EObjectFlags,bool)", KeepFlags, bPerformFullPurge); }
	static UObject* StaticConstructObject_Internal(const FStaticConstructObjectParameters& Params) { return NativeCall<UObject*, const FStaticConstructObjectParameters&>(nullptr, "Global.StaticConstructObject_Internal(FStaticConstructObjectParameters&)", Params); }
	static UObject* StaticFindObjectFast(UClass* ObjectClass, UObject* ObjectPackage, FName ObjectName, EFindObjectFlags Flags, EObjectFlags ExclusiveFlags, EInternalObjectFlags ExclusiveInternalFlags) { return NativeCall<UObject*, UClass*, UObject*, FName, EFindObjectFlags, EObjectFlags, EInternalObjectFlags>(nullptr, "Global.StaticFindObjectFast(UClass*,UObject*,FName,EFindObjectFlags,EObjectFlags,EInternalObjectFlags)", ObjectClass, ObjectPackage, ObjectName, Flags, ExclusiveFlags, ExclusiveInternalFlags); }
	static UPackage* LoadPackage(UPackage* InOuter, const wchar_t* InLongPackageNameOrFilename, unsigned int LoadFlags, FArchive* InReaderOverride, const FLinkerInstancingContext* InstancingContext) { return NativeCall<UPackage*, UPackage*, const wchar_t*, unsigned int, FArchive*, const FLinkerInstancingContext*>(nullptr, "Global.LoadPackage(UPackage*,wchar_t*,unsignedint,FArchive*,FLinkerInstancingContext*)", InOuter, InLongPackageNameOrFilename, LoadFlags, InReaderOverride, InstancingContext); }
	static bool IsInAsyncLoadingThreadCoreUObjectInternal() { return NativeCall<bool>(nullptr, "Global.IsInAsyncLoadingThreadCoreUObjectInternal()"); }
	static UObject* StaticDuplicateObjectEx(FObjectDuplicationParameters& Parameters) { return NativeCall<UObject*, FObjectDuplicationParameters&>(nullptr, "Global.StaticDuplicateObjectEx(FObjectDuplicationParameters&)", Parameters); }
	static UPackage* LoadPackage(UPackage* InOuter, const FPackagePath& PackagePath, unsigned int LoadFlags, FArchive* InReaderOverride, const FLinkerInstancingContext* InstancingContext, const FPackagePath* DiffPackagePath) { return NativeCall<UPackage*, UPackage*, const FPackagePath&, unsigned int, FArchive*, const FLinkerInstancingContext*, const FPackagePath*>(nullptr, "Global.LoadPackage(UPackage*,FPackagePath&,unsignedint,FArchive*,FLinkerInstancingContext*,FPackagePath*)", InOuter, PackagePath, LoadFlags, InReaderOverride, InstancingContext, DiffPackagePath); }
	static void GetObjectsWithPackage(const UPackage* Package, TArray<UObject*, TSizedDefaultAllocator<32> >& Results, EGetObjectsFlags Flags, EObjectFlags ExclusionFlags, EInternalObjectFlags ExclusionInternalFlags) { NativeCall<void, const UPackage*, TArray<UObject*, TSizedDefaultAllocator<32> >&, EGetObjectsFlags, EObjectFlags, EInternalObjectFlags>(nullptr, "Global.GetObjectsWithPackage(UPackage*,TArray<UObject*,TSizedDefaultAllocator<32>>&,EGetObjectsFlags,EObjectFlags,EInternalObjectFlags)", Package, Results, Flags, ExclusionFlags, ExclusionInternalFlags); }
	static UObject* StaticFindObjectSafe(UClass* ObjectClass, UObject* Outer, TStringView<wchar_t> Name, EFindObjectFlags Flags = EFindObjectFlags::None) { return NativeCall<UObject*, UClass*, UObject*, TStringView<wchar_t>, EFindObjectFlags>(nullptr, "Global.StaticFindObjectSafe(UClass*,UObject*,TStringView<wchar_t>,EFindObjectFlags)", ObjectClass, Outer, Name, Flags); }
	static UObject* StaticFindObjectSafe(UClass* ObjectClass, UObject* Outer, const wchar_t* Name, bool ExactClass = false) { return StaticFindObjectSafe(ObjectClass, Outer, TStringView<wchar_t>(Name ? Name : L""), ExactClass ? EFindObjectFlags::ExactClass : EFindObjectFlags::None); }
	static int LoadPackageAsync(const FString& InName, const FGuid* InGuid) { return NativeCall<int, const FString&, const FGuid*>(nullptr, "Global.LoadPackageAsync(FString&,FGuid*)", InName, InGuid); }
	static UPackage* FindPackage(UObject* InOuter, const wchar_t* PackageName) { return NativeCall<UPackage*, UObject*, const wchar_t*>(nullptr, "Global.FindPackage(UObject*,wchar_t*)", InOuter, PackageName); }
	static void GetObjectsWithOuter(const UObjectBase* Outer, TArray<UObject*, TSizedDefaultAllocator<32> >& Results, EGetObjectsFlags Flags, EObjectFlags ExclusionFlags, EInternalObjectFlags ExclusionInternalFlags) { NativeCall<void, const UObjectBase*, TArray<UObject*, TSizedDefaultAllocator<32> >&, EGetObjectsFlags, EObjectFlags, EInternalObjectFlags>(nullptr, "Global.GetObjectsWithOuter(UObjectBase*,TArray<UObject*,TSizedDefaultAllocator<32>>&,EGetObjectsFlags,EObjectFlags,EInternalObjectFlags)", Outer, Results, Flags, ExclusionFlags, ExclusionInternalFlags); }
	static UObject* StaticDuplicateObject(const UObject* SourceObject, UObject* DestOuter, FName DestName, EObjectFlags FlagMask, UClass* DestClass, EDuplicateMode::Type DuplicateMode, EInternalObjectFlags InternalFlagsMask) { return NativeCall<UObject*, const UObject*, UObject*, FName, EObjectFlags, UClass*, EDuplicateMode::Type, EInternalObjectFlags>(nullptr, "Global.StaticDuplicateObject(UObject*,UObject*,FName,EObjectFlags,UClass*,EDuplicateMode::Type,EInternalObjectFlags)", SourceObject, DestOuter, DestName, FlagMask, DestClass, DuplicateMode, InternalFlagsMask); }
	static void FlushAsyncLoading(int RequestId) { NativeCall<void, int>(nullptr, "Global.FlushAsyncLoading(int)", RequestId); }
	static FName MakeUniqueObjectName(UObject* Parent, const UClass* Class, FName InBaseName, EUniqueObjectNameOptions Options) { return NativeCall<FName, UObject*, const UClass*, FName, EUniqueObjectNameOptions>(nullptr, "Global.MakeUniqueObjectName(UObject*,UClass*,FName,EUniqueObjectNameOptions)", Parent, Class, InBaseName, Options); }
	static UObject* GetTransientPackageAsObject() { return NativeCall<UObject*>(nullptr, "Global.GetTransientPackageAsObject()"); }
	static UPackage* CreatePackage(const wchar_t* PackageName) { return NativeCall<UPackage*, const wchar_t*>(nullptr, "Global.CreatePackage(wchar_t*)", PackageName); }
	static void RequestEngineExit(const wchar_t* ReasonString) { NativeCall<void, const wchar_t*>(nullptr, "Global.RequestEngineExit(wchar_t*)", ReasonString); }
	static UPackage* GetTransientPackage() { return NativeCall<UPackage*>(nullptr, "Global.GetTransientPackage()"); }
	static void ResetLoaders(UObject* InPkg) { NativeCall<void, UObject*>(nullptr, "Global.ResetLoaders(UObject*)", InPkg); }
	static bool IsGarbageCollectingAndLockingUObjectHashTables() { return NativeCall<bool>(nullptr, "Global.IsGarbageCollectingAndLockingUObjectHashTables()"); }
	static bool IsInActualRenderingThread() { return NativeCall<bool>(nullptr, "Global.IsInActualRenderingThread()"); }
	static UObject* StaticFindObjectFastSafe(UClass* ObjectClass, UObject* ObjectPackage, FName ObjectName, EFindObjectFlags Flags, EObjectFlags ExclusiveFlags, EInternalObjectFlags ExclusiveInternalFlags) { return NativeCall<UObject*, UClass*, UObject*, FName, EFindObjectFlags, EObjectFlags, EInternalObjectFlags>(nullptr, "Global.StaticFindObjectFastSafe(UClass*,UObject*,FName,EFindObjectFlags,EObjectFlags,EInternalObjectFlags)", ObjectClass, ObjectPackage, ObjectName, Flags, ExclusiveFlags, ExclusiveInternalFlags); }
	static UClass* StaticLoadClass(UClass* ObjectClass, UObject* InOuter, TStringView<wchar_t> InName, TStringView<wchar_t> Filename = {}, unsigned int LoadFlags = 0, UPackageMap* Sandbox = nullptr) { return NativeCall<UClass*, UClass*, UObject*, TStringView<wchar_t>, TStringView<wchar_t>, unsigned int, UPackageMap*>(nullptr, "Global.StaticLoadClass(UClass*,UObject*,TStringView<wchar_t>,TStringView<wchar_t>,unsignedint,UPackageMap*)", ObjectClass, InOuter, InName, Filename, LoadFlags, Sandbox); }
	static UClass* StaticLoadClass(UClass* ObjectClass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename = nullptr, unsigned int LoadFlags = 0, UPackageMap* Sandbox = nullptr) { return StaticLoadClass(ObjectClass, InOuter, TStringView<wchar_t>(InName ? InName : L""), TStringView<wchar_t>(Filename ? Filename : L""), LoadFlags, Sandbox); }
	static void FlushRenderingCommands() { NativeCall<void>(nullptr, "Global.FlushRenderingCommands()"); }
	static bool IsInGameThread() { return NativeCall<bool>(nullptr, "Global.IsInGameThread()"); }
	static bool IsInAsyncLoadingThreadCoreInternal() { return NativeCall<bool>(nullptr, "Global.IsInAsyncLoadingThreadCoreInternal()"); }
	static void GetDerivedClasses(const UClass* ClassToLookFor, TArray<UClass*, TSizedDefaultAllocator<32> >& Results, bool bRecursive) { NativeCall<void, const UClass*, TArray<UClass*, TSizedDefaultAllocator<32> >&, bool>(nullptr, "Global.GetDerivedClasses(UClass*,TArray<UClass*,TSizedDefaultAllocator<32>>&,bool)", ClassToLookFor, Results, bRecursive); }
	static void CollectGarbage(EObjectFlags KeepFlags, bool bPerformFullPurge) { NativeCall<void, EObjectFlags, bool>(nullptr, "Global.CollectGarbage(EObjectFlags,bool)", KeepFlags, bPerformFullPurge); }
	static void GetObjectsOfClass(const UClass* ClassToLookFor, TArray<UObject*, TSizedDefaultAllocator<32> >& Results, bool bIncludeDerivedClasses, EObjectFlags ExclusionFlags, EInternalObjectFlags ExclusionInternalFlags) { NativeCall<void, const UClass*, TArray<UObject*, TSizedDefaultAllocator<32> >&, bool, EObjectFlags, EInternalObjectFlags>(nullptr, "Global.GetObjectsOfClass(UClass*,TArray<UObject*,TSizedDefaultAllocator<32>>&,bool,EObjectFlags,EInternalObjectFlags)", ClassToLookFor, Results, bIncludeDerivedClasses, ExclusionFlags, ExclusionInternalFlags); }
	static UObject* StaticFindObjectChecked(UClass* ObjectClass, UObject* Outer, TStringView<wchar_t> Name, EFindObjectFlags Flags = EFindObjectFlags::None) { return NativeCall<UObject*, UClass*, UObject*, TStringView<wchar_t>, EFindObjectFlags>(nullptr, "Global.StaticFindObjectChecked(UClass*,UObject*,TStringView<wchar_t>,EFindObjectFlags)", ObjectClass, Outer, Name, Flags); }
	static UObject* StaticFindObjectChecked(UClass* ObjectClass, UObject* Outer, const wchar_t* Name, bool ExactClass = false) { return StaticFindObjectChecked(ObjectClass, Outer, TStringView<wchar_t>(Name ? Name : L""), ExactClass ? EFindObjectFlags::ExactClass : EFindObjectFlags::None); }
	static UObject* StaticLoadObject(UClass* ObjectClass, UObject* InOuter, TStringView<wchar_t> InName, TStringView<wchar_t> Filename = {}, unsigned int LoadFlags = 0, UPackageMap* Sandbox = nullptr, bool bAllowObjectReconciliation = true, const FLinkerInstancingContext* InstancingContext = nullptr) { return NativeCall<UObject*, UClass*, UObject*, TStringView<wchar_t>, TStringView<wchar_t>, unsigned int, UPackageMap*, bool, const FLinkerInstancingContext*>(nullptr, "Global.StaticLoadObject(UClass*,UObject*,TStringView<wchar_t>,TStringView<wchar_t>,unsignedint,UPackageMap*,bool,FLinkerInstancingContext*)", ObjectClass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation, InstancingContext); }
	static UObject* StaticLoadObject(UClass* ObjectClass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename = nullptr, unsigned int LoadFlags = 0, UPackageMap* Sandbox = nullptr, bool bAllowObjectReconciliation = true, const FLinkerInstancingContext* InstancingContext = nullptr) { return StaticLoadObject(ObjectClass, InOuter, TStringView<wchar_t>(InName ? InName : L""), TStringView<wchar_t>(Filename ? Filename : L""), LoadFlags, Sandbox, bAllowObjectReconciliation, InstancingContext); }
	template<class SandboxType, std::enable_if_t<std::is_integral_v<SandboxType>, int> = 0>
	static UObject* StaticLoadObject(UClass* ObjectClass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, unsigned int LoadFlags, SandboxType Sandbox, bool bAllowObjectReconciliation) { return StaticLoadObject(ObjectClass, InOuter, InName, Filename, LoadFlags, reinterpret_cast<UPackageMap*>(static_cast<std::uintptr_t>(Sandbox)), bAllowObjectReconciliation); }
};

static_assert(sizeof(EClassFlags) == 4);
static_assert(sizeof(EObjectFlags) == 4);
static_assert(sizeof(EInternalObjectFlags) == 4);
static_assert(sizeof(EGetObjectsFlags) == 4);
static_assert(sizeof(EFindObjectFlags) == 4);
static_assert(sizeof(EUniqueObjectNameOptions) == 4);
static_assert(sizeof(EDuplicateMode::Type) == 4);
static_assert(sizeof(TStringView<wchar_t>) == 16);
static_assert(alignof(TStringView<wchar_t>) == 8);
static_assert(sizeof(TArray<UClass*>) == 16);
static_assert(alignof(TArray<UClass*>) == 8);
