#pragma once
#include "BulkForward.h"
#include "UDataAsset.h"

struct UPrimalWordList : public UDataAsset
{
public:
	UPrimalWordList() = delete;
	~UPrimalWordList() = delete;
	UPrimalWordList(const UPrimalWordList&) = delete;
	UPrimalWordList& operator=(const UPrimalWordList&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalWordList"); }

	FString& ActiveWordListRefField() { return *GetNativePointerField<FString*>(this, "UPrimalWordList.ActiveWordListRef"); }
	bool SanitizeString(FString& ToSanitize) { return NativeCall<bool, FString&>(this, "UPrimalWordList.SanitizeString(FString&)", ToSanitize); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalWordList"); }
};
