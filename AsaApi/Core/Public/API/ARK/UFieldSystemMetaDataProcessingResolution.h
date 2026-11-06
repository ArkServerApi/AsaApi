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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FFieldSystemMetaData* NewMetaData() { return NativeCall<FFieldSystemMetaData*>(this, "UFieldSystemMetaDataProcessingResolution.NewMetaData()"); }
};
