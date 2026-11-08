#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UStringTable : public UObject
{
public:
	UStringTable() = delete;
	~UStringTable() = delete;
	UStringTable(const UStringTable&) = delete;
	UStringTable& operator=(const UStringTable&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStringTable"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStringTable"); }
	FName& StringTableIdField() { return *GetNativePointerField<FName*>(this, "UStringTable.StringTableId"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UStringTable.Serialize(FArchive&)", Ar); }
	static void InitializeEngineBridge() { NativeCall<void>(nullptr, "UStringTable.InitializeEngineBridge()"); }
	void FinishDestroy() { NativeCall<void>(this, "UStringTable.FinishDestroy()"); }
	bool Rename(const wchar_t* NewName, UObject* NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t*, UObject*, unsigned int>(this, "UStringTable.Rename(wchar_t*,UObject*,unsignedint)", NewName, NewOuter, Flags); }
	FName GetStringTableId() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UStringTable.GetStringTableId()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	void PostLoad() { NativeCall<void>(this, "UStringTable.PostLoad()"); }
};
