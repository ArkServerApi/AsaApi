#pragma once


struct FAddressInfoResult
{
	// Fields

	FString& QueryHostNameField() { return *GetNativePointerField<FString*>(this, "FAddressInfoResult.QueryHostName"); }
	FString& QueryServiceNameField() { return *GetNativePointerField<FString*>(this, "FAddressInfoResult.QueryServiceName"); }
	FString& CanonicalNameResultField() { return *GetNativePointerField<FString*>(this, "FAddressInfoResult.CanonicalNameResult"); }
	ESocketErrors& ReturnCodeField() { return *GetNativePointerField<ESocketErrors*>(this, "FAddressInfoResult.ReturnCode"); }
	TArray<FAddressInfoResultData, TSizedDefaultAllocator<32> >& ResultsField() { return *GetNativePointerField<TArray<FAddressInfoResultData, TSizedDefaultAllocator<32> >*>(this, "FAddressInfoResult.Results"); }

	// Bitfields

	// Functions
};