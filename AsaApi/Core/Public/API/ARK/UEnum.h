#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UField.h"

class UEnum : public UField
{
public:
	UEnum() = delete;
	~UEnum() = delete;
	UEnum(const UEnum&) = delete;
	UEnum& operator=(const UEnum&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UEnum"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UEnum"); }
	FString& CppTypeField() { return *GetNativePointerField<FString*>(this, "UEnum.CppType"); }
	FName& EnumPackageField() { return *GetNativePointerField<FName*>(this, "UEnum.EnumPackage"); }
	static __int64 ParseEnum(const wchar_t*& Str) { return NativeCall<__int64, const wchar_t*&>(nullptr, "UEnum.ParseEnum(wchar_t*&)", Str); }
	FString* GetAuthoredNameStringByIndex(FString* result, int InIndex) { return NativeCall<FString*, FString*, int>(this, "UEnum.GetAuthoredNameStringByIndex(int)", result, InIndex); }
	FString* GetValueOrBitfieldAsString(FString* result, __int64 InValue) { return NativeCall<FString*, FString*, __int64>(this, "UEnum.GetValueOrBitfieldAsString(__int64)", result, InValue); }
	__int64 ResolveEnumerator(FArchive& Ar, __int64 EnumeratorIndex) { return NativeCall<__int64, FArchive&, __int64>(this, "UEnum.ResolveEnumerator(FArchive&,__int64)", Ar, EnumeratorIndex); }
	__int64 GetMaxEnumValue() { return NativeCall<__int64>(this, "UEnum.GetMaxEnumValue()"); }
	FString* GenerateEnumPrefix(FString* result) { return NativeCall<FString*, FString*>(this, "UEnum.GenerateEnumPrefix()", result); }
	void RemoveNamesFromPrimaryList() { NativeCall<void>(this, "UEnum.RemoveNamesFromPrimaryList()"); }
	void BeginDestroy() { NativeCall<void>(this, "UEnum.BeginDestroy()"); }
	FString* GenerateFullEnumName(FString* result, const wchar_t* InEnumName) { return NativeCall<FString*, FString*, const wchar_t*>(this, "UEnum.GenerateFullEnumName(wchar_t*)", result, InEnumName); }
	FName GetNameByIndex(int Index) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "UEnum.GetNameByIndex(int)", AsaReturnPointer, Index); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	FString* GetNameStringByValue(FString* result, __int64 Value) { return NativeCall<FString*, FString*, __int64>(this, "UEnum.GetNameStringByValue(__int64)", result, Value); }
	void AddNamesToPrimaryList() { NativeCall<void>(this, "UEnum.AddNamesToPrimaryList()"); }
	FName GetNameByValue(__int64 InValue) { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, __int64>(this, "UEnum.GetNameByValue(__int64)", AsaReturnPointer, InValue); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool ContainsExistingMax() { return NativeCall<bool>(this, "UEnum.ContainsExistingMax()"); }
	FString* GetNameStringByIndex(FString* result, int InIndex) { return NativeCall<FString*, FString*, int>(this, "UEnum.GetNameStringByIndex(int)", result, InIndex); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UEnum.Serialize(FArchive&)", Ar); }
	bool IsValidEnumValueOrBitfield(__int64 InValue) { return NativeCall<bool, __int64>(this, "UEnum.IsValidEnumValueOrBitfield(__int64)", InValue); }
	int NumEnums() { return NativeCall<int>(this, "UEnum.NumEnums()"); }
	bool IsValidEnumValue(__int64 InValue) { return NativeCall<bool, __int64>(this, "UEnum.IsValidEnumValue(__int64)", InValue); }
	FString* GetAuthoredNameStringByValue(FString* result, __int64 Value) { return NativeCall<FString*, FString*, __int64>(this, "UEnum.GetAuthoredNameStringByValue(__int64)", result, Value); }
	__int64 GetValueByIndex(int Index) { return NativeCall<__int64, int>(this, "UEnum.GetValueByIndex(int)", Index); }
};
