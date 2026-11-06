#pragma once
#include "BulkForward.h"
#include "UDataAsset.h"

struct UCachedDB : public UDataAsset
{
public:
	UCachedDB() = delete;
	~UCachedDB() = delete;
	UCachedDB(const UCachedDB&) = delete;
	UCachedDB& operator=(const UCachedDB&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UCachedDB.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
