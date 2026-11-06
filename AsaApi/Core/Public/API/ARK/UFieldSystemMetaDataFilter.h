#pragma once
#include "BulkForward.h"
#include "UFieldSystemMetaData.h"

struct UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
	UFieldSystemMetaDataFilter() = delete;
	~UFieldSystemMetaDataFilter() = delete;
	UFieldSystemMetaDataFilter(const UFieldSystemMetaDataFilter&) = delete;
	UFieldSystemMetaDataFilter& operator=(const UFieldSystemMetaDataFilter&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFieldSystemMetaDataFilter"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFieldSystemMetaDataFilter"); }

	FFieldSystemMetaData* NewMetaData() { return NativeCall<FFieldSystemMetaData*>(this, "UFieldSystemMetaDataFilter.NewMetaData()"); }
};
