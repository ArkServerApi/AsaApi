#pragma once


struct FUniqueNetIdWrapper
{
	//void* __vftable /*VFT*/;
	//TVariant<TSharedPtr<FUniqueNetId const, 1>, UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> > Variant;

	// Unavailable in UE 5.8.3: no current assignment key exists in the runtime cache
	// FUniqueNetIdWrapper* operator=(const FUniqueNetIdWrapper* __that);
	FUniqueNetIdWrapper* operator=(const FUniqueNetIdWrapper* __that) = delete;
	FString* ToString(FString* result) { return NativeCall<FString*, FString*>(this, "FUniqueNetIdWrapper.ToString()", result); }
	//     FName* GetType(FName* result) { return NativeCall<FName*, FName*>(this, "FUniqueNetIdWrapper.GetType()", result); }
	// FUNCTION MISSING: FUniqueNetIdWrapper.GetType()
	TSharedPtr<FUniqueNetId const>* GetUniqueNetId(TSharedPtr<FUniqueNetId const>* result) { return NativeCall<TSharedPtr<FUniqueNetId const> *, TSharedPtr<FUniqueNetId const>*>(this, "FUniqueNetIdWrapper.GetUniqueNetId()", result); }
	const FUniqueNetId* operator*() { return NativeCall<const FUniqueNetId*>(this, "FUniqueNetIdWrapper.operator*()"); }
	bool IsValid() { return NativeCall<bool>(this, "FUniqueNetIdWrapper.IsValid()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TSharedPtr<FUniqueNetId const>* GetV1(TSharedPtr<FUniqueNetId const>* result);
	void SetUniqueNetId(const TSharedPtr<FUniqueNetId const>* InUniqueNetId) { NativeCall<void, const TSharedPtr<FUniqueNetId const>*>(this, "FUniqueNetIdWrapper.SetUniqueNetId(TSharedPtr<FUniqueNetId,1>&)", InUniqueNetId); }
	FString* ToDebugString(FString* result) { return NativeCall<FString*, FString*>(this, "FUniqueNetIdWrapper.ToDebugString()", result); }
};