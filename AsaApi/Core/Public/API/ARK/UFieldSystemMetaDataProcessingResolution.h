#pragma once
#include "BulkForward.h"
#include "UFieldSystemMetaData.h"

struct UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	UFieldSystemMetaDataProcessingResolution() = delete;
	~UFieldSystemMetaDataProcessingResolution() = delete;
	UFieldSystemMetaDataProcessingResolution(const UFieldSystemMetaDataProcessingResolution&) = delete;
	UFieldSystemMetaDataProcessingResolution& operator=(const UFieldSystemMetaDataProcessingResolution&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFieldSystemMetaDataProcessingResolution"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFieldSystemMetaDataProcessingResolution"); }

	FFieldSystemMetaData* NewMetaData() { return NativeCall<FFieldSystemMetaData*>(this, "UFieldSystemMetaDataProcessingResolution.NewMetaData()"); }
};
