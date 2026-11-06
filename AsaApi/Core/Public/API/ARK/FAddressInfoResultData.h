#pragma once


struct FAddressInfoResultData
{
	// Fields

	FieldArray<char, 1> AddressProtocolField() { return { this, "FAddressInfoResultData.AddressProtocol" }; }
	FName& AddressProtocolNameField() { return *GetNativePointerField<FName*>(this, "FAddressInfoResultData.AddressProtocolName"); }
	ESocketType& SocketConfigurationField() { return *GetNativePointerField<ESocketType*>(this, "FAddressInfoResultData.SocketConfiguration"); }
	unsigned __int64& AddressLenField() { return *GetNativePointerField<unsigned __int64*>(this, "FAddressInfoResultData.AddressLen"); }
	//TSharedRef<FInternetAddr, 1>& AddressField() { return *GetNativePointerField<TSharedRef<FInternetAddr, 1>*>(this, "FAddressInfoResultData.Address"); }

	// Bitfields

	// Functions
};