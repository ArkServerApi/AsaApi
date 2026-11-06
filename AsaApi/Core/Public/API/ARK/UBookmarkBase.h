#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UBookmarkBase : public UObject
{
public:
	UBookmarkBase() = delete;
	~UBookmarkBase() = delete;
	UBookmarkBase(const UBookmarkBase&) = delete;
	UBookmarkBase& operator=(const UBookmarkBase&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UBookmarkBase.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	void OnCleared() { NativeCall<void>(this, "UBookmarkBase.OnCleared()"); }
};
