#pragma once
#include "BulkForward.h"
#include "UFieldSystemMetaData.h"

struct UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	UFieldSystemMetaDataIteration() = delete;
	~UFieldSystemMetaDataIteration() = delete;
	UFieldSystemMetaDataIteration(const UFieldSystemMetaDataIteration&) = delete;
	UFieldSystemMetaDataIteration& operator=(const UFieldSystemMetaDataIteration&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFieldSystemMetaDataIteration"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFieldSystemMetaDataIteration"); }

	int& IterationsField() { return *GetNativePointerField<int*>(this, "UFieldSystemMetaDataIteration.Iterations"); }
	FFieldSystemMetaData* NewMetaData() { return NativeCall<FFieldSystemMetaData*>(this, "UFieldSystemMetaDataIteration.NewMetaData()"); }
};
