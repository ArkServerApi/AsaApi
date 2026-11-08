#pragma once


struct FTopLevelAssetPath
{
	// Fields
	FName PackageName;
	FName AssetName;

	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FTopLevelAssetPath.PackageName"); }
	FName& AssetNameField() { return *GetNativePointerField<FName*>(this, "FTopLevelAssetPath.AssetName"); }

	// Bitfields

	// Functions

	//void FTopLevelAssetPath(const FString* Path) { NativeCall<void, const FString*>(this, "FTopLevelAssetPath.FTopLevelAssetPath(FString&)", Path); }
	void AppendString(TStringBuilderBase<wchar_t>* Builder) { NativeCall<void, TStringBuilderBase<wchar_t>*>(this, "FTopLevelAssetPath.AppendString(TStringBuilderBase<wchar_t>&)", Builder); }
	FString* ToString(FString* result) { return NativeCall<FString*, FString*>(this, "FTopLevelAssetPath.ToString(FString&)", result); }
	//void ToString(FString* OutString) { NativeCall<void, FString*>(this, "FTopLevelAssetPath.ToString(FString&)", OutString); }
	bool TrySetPath(TStringView<wchar_t>* Path) { return NativeCall<bool, TStringView<wchar_t>*>(this, "FTopLevelAssetPath.TrySetPath(TStringView<wchar_t>)", Path); }
	bool ExportTextItem(FString* ValueStr, const FTopLevelAssetPath* DefaultValue, UObject* Parent, int PortFlags, UObject* ExportRootScope) { return NativeCall<bool, FString*, const FTopLevelAssetPath*, UObject*, int, UObject*>(this, "FTopLevelAssetPath.ExportTextItem(FString&,FTopLevelAssetPath&,UObject*,int,UObject*)", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	bool ImportTextItem(const wchar_t** Buffer, int PortFlags, UObject* Parent, FOutputDevice* ErrorText, FArchive* InSerializingArchive) { return NativeCall<bool, const wchar_t**, int, UObject*, FOutputDevice*, FArchive*>(this, "FTopLevelAssetPath.ImportTextItem(wchar_t*&,int,UObject*,FOutputDevice*,FArchive*)", Buffer, PortFlags, Parent, ErrorText, InSerializingArchive); }
};