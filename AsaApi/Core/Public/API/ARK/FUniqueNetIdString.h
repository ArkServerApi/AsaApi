#pragma once


struct FUniqueNetIdString : FUniqueNetId
{
	// Fields

	FString& UniqueNetIdStrField() { return *GetNativePointerField<FString*>(this, "FUniqueNetIdString.UniqueNetIdStr"); }
	FName& TypeField() { return *GetNativePointerField<FName*>(this, "FUniqueNetIdString.Type"); }

	// Bitfields

	// Functions

	unsigned char const* GetBytes()const { return NativeCall<unsigned char const*>(this, "FUniqueNetIdString.GetBytes()"); }
	bool IsValid()const { return NativeCall<bool>(this, "FUniqueNetIdString.IsValid()"); }
	int GetSize()const { return NativeCall<int>(this, "FUniqueNetIdString.GetSize()"); }
	FString* ToString(FString* result) { return NativeCall<FString*, FString*>(this, "FUniqueNetIdString.ToString()", result); }
	FName GetType() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "FUniqueNetIdString.GetType()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	unsigned int GetTypeHash()const { return NativeCall<unsigned int>(this, "FUniqueNetIdString.GetTypeHash()"); }
	FString* ToDebugString(FString* result) { return NativeCall<FString*, FString*>(this, "FUniqueNetIdString.ToDebugString()", result); }
	//static TSharedRef<FUniqueNetIdString const> Create(const FString& InUniqueNetId, FName InType) { return NativeCall<TSharedRef<FUniqueNetIdString const>, const FString&, FName>(this, "FUniqueNetIdString.Create(FString&,FName)", InUniqueNetId, InType); }
};