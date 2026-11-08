#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UDataTable : public UObject
{
public:
	UDataTable() = delete;
	~UDataTable() = delete;
	UDataTable(const UDataTable&) = delete;
	UDataTable& operator=(const UDataTable&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDataTable"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDataTable"); }
	FString& ImportKeyFieldField() { return *GetNativePointerField<FString*>(this, "UDataTable.ImportKeyField"); }
	BitFieldValue<bool, unsigned char> bStripFromClientBuilds() { return { this, "UDataTable.bStripFromClientBuilds"}; }
	BitFieldValue<bool, unsigned char> bIgnoreExtraFields() { return { this, "UDataTable.bIgnoreExtraFields"}; }
	BitFieldValue<bool, unsigned char> bIgnoreMissingFields() { return { this, "UDataTable.bIgnoreMissingFields"}; }
	BitFieldValue<bool, unsigned char> bPreserveExistingValues() { return { this, "UDataTable.bPreserveExistingValues"}; }
	FProperty* FindTableProperty(const FName& PropertyName) { return NativeCall<FProperty*, const FName&>(this, "UDataTable.FindTableProperty(FName&)", PropertyName); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UDataTable.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetRowNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UDataTable.GetRowNames()", result); }
	unsigned char* FindRowUnchecked(FName RowName) { return NativeCall<unsigned char*, FName>(this, "UDataTable.FindRowUnchecked(FName)", RowName); }
	bool AllowDuplicateRowsOnImport() { return NativeCall<bool>(this, "UDataTable.AllowDuplicateRowsOnImport()"); }
	void RemoveRowInternal(FName RowName) { NativeCall<void, FName>(this, "UDataTable.RemoveRowInternal(FName)", RowName); }
	void FinishDestroy() { NativeCall<void>(this, "UDataTable.FinishDestroy()"); }
	void EmptyTable() { NativeCall<void>(this, "UDataTable.EmptyTable()"); }
	void AddRow(FName RowName, const FTableRowBase& RowData) { NativeCall<void, FName, const FTableRowBase&>(this, "UDataTable.AddRow(FName,FTableRowBase&)", RowName, RowData); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UDataTable.Serialize(FArchive&)", Ar); }
	void AddRowInternal(FName RowName, unsigned char* RowData) { NativeCall<void, FName, unsigned char*>(this, "UDataTable.AddRowInternal(FName,unsignedchar*)", RowName, RowData); }
	void AddRow(FName RowName, const unsigned char* RowData, const UScriptStruct* RowType) { NativeCall<void, FName, const unsigned char*, const UScriptStruct*>(this, "UDataTable.AddRow(FName,unsignedchar*,UScriptStruct*)", RowName, RowData, RowType); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "UDataTable.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void HandleDataTableChanged(FName ChangedRowName) { NativeCall<void, FName>(this, "UDataTable.HandleDataTableChanged(FName)", ChangedRowName); }
	bool NeedsLoadForEditorGame() { return NativeCall<bool>(this, "UDataTable.NeedsLoadForEditorGame()"); }
	unsigned char* FindRowInternal(UScriptStruct* Type, FName RowName, const wchar_t* ContextString, bool bWarnIfRowMissing) { return NativeCall<unsigned char*, UScriptStruct*, FName, const wchar_t*, bool>(this, "UDataTable.FindRowInternal(UScriptStruct*,FName,wchar_t*,bool)", Type, RowName, ContextString, bWarnIfRowMissing); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UDataTable.NeedsLoadForClient()"); }
	void RemoveRow(FName RowName) { NativeCall<void, FName>(this, "UDataTable.RemoveRow(FName)", RowName); }
	bool CommonTypeCheck(UScriptStruct* Type, const wchar_t* MethodName, const wchar_t* ContextString) { return NativeCall<bool, UScriptStruct*, const wchar_t*, const wchar_t*>(this, "UDataTable.CommonTypeCheck(UScriptStruct*,wchar_t*,wchar_t*)", Type, MethodName, ContextString); }
	void GetPreloadDependencies(TArray<UObject*, TSizedDefaultAllocator<32> >& OutDeps) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >&>(this, "UDataTable.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", OutDeps); }
};
