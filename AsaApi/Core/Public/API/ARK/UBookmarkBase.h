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
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBookmarkBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBookmarkBase"); }
	void OnCleared() { NativeCall<void>(this, "UBookmarkBase.OnCleared()"); }
};
