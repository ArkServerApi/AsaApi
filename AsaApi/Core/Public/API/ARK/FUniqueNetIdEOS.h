#pragma once


struct FUniqueNetIdEOS : FUniqueNetId
{
	// Fields

	//EOS_ProductUserIdDetails*& ProductUserIdField() { return *GetNativePointerField<EOS_ProductUserIdDetails**>(this, "FUniqueNetIdEOS.ProductUserId"); }
	unsigned __int8*& DataBytesField() { return *GetNativePointerField<unsigned __int8**>(this, "FUniqueNetIdEOS.DataBytes"); }
	int& DataBytesSizeField() { return *GetNativePointerField<int*>(this, "FUniqueNetIdEOS.DataBytesSize"); }

	// Bitfields

	// Functions

	FName* GetType(FName* result) { return NativeCall<FName*, FName*>(this, "FUniqueNetIdEOS.GetType()", result); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static TSharedRef<FUniqueNetIdEOS const>* MakeInvalidId(TSharedRef<FUniqueNetIdEOS const>* result);
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static TSharedRef<FUniqueNetIdEOS const>* MakeDedicatedServerId(TSharedRef<FUniqueNetIdEOS const>* result);
	bool Compare(const FUniqueNetId* Other) { return NativeCall<bool, const FUniqueNetId*>(this, "FUniqueNetIdEOS.Compare(FUniqueNetId&)", Other); }
	bool IsValid() { return NativeCall<bool>(this, "FUniqueNetIdEOS.IsValid()"); }
	FString* ToString(FString* result) { return NativeCall<FString*, FString*>(this, "FUniqueNetIdEOS.ToString()", result); }
	FString* ToDebugString(FString* result) { return NativeCall<FString*, FString*>(this, "FUniqueNetIdEOS.ToDebugString()", result); }
	static TSharedPtr<FUniqueNetIdEOS const>* ParseFromString(TSharedPtr<FUniqueNetIdEOS const>* result, const FString* ProductUserIdStr) { return NativeCall<TSharedPtr<FUniqueNetIdEOS const> *, TSharedPtr<FUniqueNetIdEOS const>*, const FString*>(nullptr, "FUniqueNetIdEOS.ParseFromString(FString&)", result, ProductUserIdStr); }
	static const TSharedRef<FUniqueNetIdEOS const>* InvalidId() { return NativeCall<const TSharedRef<FUniqueNetIdEOS const> *>(nullptr, "FUniqueNetIdEOS.InvalidId()"); }
	static const TSharedRef<FUniqueNetIdEOS const>* DedicatedServerId() { return NativeCall<const TSharedRef<FUniqueNetIdEOS const> *>(nullptr, "FUniqueNetIdEOS.DedicatedServerId()"); }
};