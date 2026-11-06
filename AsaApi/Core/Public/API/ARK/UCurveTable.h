#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UCurveTable : public UObject
{
public:
	UCurveTable() = delete;
	~UCurveTable() = delete;
	UCurveTable(const UCurveTable&) = delete;
	UCurveTable& operator=(const UCurveTable&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCurveTable"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCurveTable"); }
	void FinishDestroy() { NativeCall<void>(this, "UCurveTable.FinishDestroy()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UCurveTable.Serialize(FArchive&)", Ar); }
	void RemoveRow(FName RowName) { NativeCall<void, FName>(this, "UCurveTable.RemoveRow(FName)", RowName); }
	static FName MakeValidName(const FString& InString) { return NativeCall<FName, const FString&>(nullptr, "UCurveTable.MakeValidName(FString&)", InString); }
	void RenameRow(const FName& CurveName, const FName& NewCurveName) { NativeCall<void, const FName&, const FName&>(this, "UCurveTable.RenameRow(FName&,FName&)", CurveName, NewCurveName); }
	void EmptyTable() { NativeCall<void>(this, "UCurveTable.EmptyTable()"); }
	static void InvalidateAllCachedCurves() { NativeCall<void>(nullptr, "UCurveTable.InvalidateAllCachedCurves()"); }
	FString* GetTableAsJSON(FString* result) { return NativeCall<FString*, FString*>(this, "UCurveTable.GetTableAsJSON()", result); }
};
