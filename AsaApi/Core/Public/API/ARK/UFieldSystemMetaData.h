#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UFieldSystemMetaData : public UActorComponent
{
public:
	UFieldSystemMetaData() = delete;
	~UFieldSystemMetaData() = delete;
	UFieldSystemMetaData(const UFieldSystemMetaData&) = delete;
	UFieldSystemMetaData& operator=(const UFieldSystemMetaData&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UFieldSystemMetaData.StaticClass()"); }
	FFieldSystemMetaData* NewMetaData() { return NativeCall<FFieldSystemMetaData*>(this, "UFieldSystemMetaData.NewMetaData()"); }
};
