#pragma once
#include "TStringOverload.h"
#include "RestoredNativeForward.h"
#include "../UE/Containers/Utf8String.h"


struct FSoftObjectPath
{
	// Fields
	FTopLevelAssetPath AssetPath;
	FUtf8String SubPathString;

	FTopLevelAssetPath& AssetPathField() { return *GetNativePointerField<FTopLevelAssetPath*>(this, "FSoftObjectPath.AssetPath"); }
	FUtf8String& SubPathStringField() { return *GetNativePointerField<FUtf8String*>(this, "FSoftObjectPath.SubPathString"); }

	// Bitfields

	// Functions

	FString* ToString(FString* result) { return NativeCall<FString*, FString*>(this, "FSoftObjectPath.ToString()", result); }
	void ToString(TStringBuilderBase<wchar_t>& Builder) { NativeCall<void, TStringBuilderBase<wchar_t>&>(this, "FSoftObjectPath.ToString(TStringBuilderBase<wchar_t>&)", Builder); }
	void ToString(TStringBuilderBase<wchar_t>* Builder) const { NativeCall<void, TStringBuilderBase<wchar_t>*>(this, "FSoftObjectPath.ToString(TStringBuilderBase<wchar_t>&)", Builder); }
	UObject* ResolveObjectInternal()const { return NativeCall<UObject*>(this, "FSoftObjectPath.ResolveObjectInternal()"); }
	bool operator==(const FSoftObjectPath* Other) const { return NativeCall<bool, const FSoftObjectPath*>(this, "FSoftObjectPath.operator==(FSoftObjectPath&)", Other); }
	FSoftObjectPath& operator=(const FString& Path) { return NativeCall<FSoftObjectPath&, const FString&>(this, "FSoftObjectPath.operator=(FString&)", Path); }
	FSoftObjectPath& operator=(const FSoftObjectPath* __that) { return NativeCall<FSoftObjectPath&, const FSoftObjectPath*>(this, "FSoftObjectPath.operator=(FSoftObjectPath&)", __that); }
	FSoftObjectPath& operator=(FSoftObjectPath* __that) { return NativeCall<FSoftObjectPath&, FSoftObjectPath*>(this, "FSoftObjectPath.operator=(FSoftObjectPath&&)", __that); }
	bool FixupCoreRedirects() { return NativeCall<bool>(this, "FSoftObjectPath.FixupCoreRedirects()"); }
	static void AddPIEPackageName(FName NewPIEPackageName) { NativeCall<void, FName>(nullptr, "FSoftObjectPath.AddPIEPackageName(FName)", NewPIEPackageName); }
	void SerializePath(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FSoftObjectPath.SerializePath(FArchive&)", Ar); }
	void SerializePathWithoutFixup(FArchive* Ar) { NativeCall<void, FArchive*>(this, "FSoftObjectPath.SerializePathWithoutFixup(FArchive&)", Ar); }
	//bool SerializeFromMismatchedTag(const FPropertyTag* Tag, FStructuredArchiveSlot Slot) { return NativeCall<bool, const FPropertyTag*, FStructuredArchiveSlot>(this, "FSoftObjectPath.SerializeFromMismatchedTag(FPropertyTag&,FStructuredArchiveSlot)", Tag, Slot); }
	bool Serialize(FArchive* Ar) { return NativeCall<bool, FArchive*>(this, "FSoftObjectPath.Serialize(FArchive&)", Ar); }
	bool Serialize(FStructuredArchiveSlot Slot) { return NativeCall<bool, FStructuredArchiveSlot>(this, "FSoftObjectPath.Serialize(FStructuredArchiveSlot)", Slot); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void Reset();
	void SetPath(TStringView<char>* Path) { NativeCall<void, TStringView<char>*>(this, "FSoftObjectPath.SetPath(TStringView<char>)", Path); }
	void SetPath(const UObject* InObject) { NativeCall<void, const UObject*>(this, "FSoftObjectPath.SetPath(UObject*)", InObject); }
	void SetPath(const FTopLevelAssetPath& InAssetPath) { NativeCall<void, const FTopLevelAssetPath&>(this, "FSoftObjectPath.SetPath(FTopLevelAssetPath&)", InAssetPath); }
	void SetPath(const FTopLevelAssetPath& InAssetPath, TStringOverload<FUtf8String> InSubPathString) { NativeCall<void, const FTopLevelAssetPath&, TStringOverload<FUtf8String>>(this, "FSoftObjectPath.SetPath(FTopLevelAssetPath&,TStringOverload<FUtf8String>)", InAssetPath, std::move(InSubPathString)); }
	void SetPath(const FTopLevelAssetPath& InAssetPath, const TStringOverload<FUtf8String>* InSubPathString) { if (!InSubPathString) throw std::invalid_argument("Null string argument"); SetPath(InAssetPath, *InSubPathString); }
	void SetPath(TStringView<wchar_t>* Path) { NativeCall<void, TStringView<wchar_t>*>(this, "FSoftObjectPath.SetPath(TStringView<wchar_t>)", Path); }
	void SetPath(TStringView<wchar_t> Path) { NativeCall<void, TStringView<wchar_t>>(this, "FSoftObjectPath.SetPath(TStringView<wchar_t>)", Path); }
	// Current counterpart already declared for: void SetPath(FName PathName);
	//bool ExportTextItem(FString& ValueStr, const FSoftObjectPath* DefaultValue, UObject* Parent, int PortFlags, UObject* ExportRootScope) const { return NativeCall<bool, FString&, const FSoftObjectPath*, UObject* int, UObject*>(this, "FSoftObjectPath.ExportTextItem(FString&,FSoftObjectPath&,UObject*,int,UObject*)", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	//bool FixupForPIE(TFunctionRef<void __cdecl(int, FSoftObjectPath&)>* InPreFixupForPIECustomFunction) > ) { return NativeCall<bool, TFunctionRef<void __cdecl(int, FSoftObjectPath&)>*>(this, "FSoftObjectPath.FixupForPIE(TFunctionRef<void__cdecl(int,FSoftObjectPath&)", InPreFixupForPIECustomFunction); }
	FString* GetAssetName(FString* result) { return NativeCall<FString*, FString*>(this, "FSoftObjectPath.GetAssetName()", result); }
	bool PreSavePath(bool* bReportSoftObjectPathRedirects) { return NativeCall<bool, bool*>(this, "FSoftObjectPath.PreSavePath(bool*)", bReportSoftObjectPathRedirects); }
	bool ImportTextItem(const wchar_t** Buffer, int PortFlags, UObject* Parent, FOutputDevice* ErrorText, FArchive* InSerializingArchive) { return NativeCall<bool, const wchar_t**, int, UObject*, FOutputDevice*, FArchive*>(this, "FSoftObjectPath.ImportTextItem(wchar_t*&,int,UObject*,FOutputDevice*,FArchive*)", Buffer, PortFlags, Parent, ErrorText, InSerializingArchive); }
	// 	static int GetCurrentTag() { return NativeCall<int>(nullptr, "FSoftObjectPath.GetCurrentTag()"); }
	// FUNCTION MISSING: FSoftObjectPath.GetCurrentTag()
	UObject* ResolveObject()const { return NativeCall<UObject*>(this, "FSoftObjectPath.ResolveObject()"); }
	//FSoftObjectPath<UHLODLayer const >(const TObjectPtr<UHLODLayer const >* InObject) { return NativeCall < FSoftObjectPath<UHLODLayer const, const TObjectPtr<UHLODLayer const >*>(this, "FSoftObjectPath.FSoftObjectPath<UHLODLayer const >(TObjectPtr<UHLODLayer>&)", InObject); }
	static FSoftObjectPath* GetOrCreateIDForObject(FSoftObjectPath* result, FObjectPtr* Object) { return NativeCall<FSoftObjectPath*, FSoftObjectPath*, FObjectPtr*>(nullptr, "FSoftObjectPath.GetOrCreateIDForObject(FObjectPtr)", result, Object); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FName GetAssetPathName()const;
	UObject* TryLoad(FUObjectSerializeContext* InLoadContext, ELoadFlags LoadFlags) { return NativeCall<UObject*, FUObjectSerializeContext*, ELoadFlags>(this, "FSoftObjectPath.TryLoad(FUObjectSerializeContext*,ELoadFlags)", InLoadContext, LoadFlags); }
	FString* GetLongPackageName(FString* result) { return NativeCall<FString*, FString*>(this, "FSoftObjectPath.GetLongPackageName()", result); }
};