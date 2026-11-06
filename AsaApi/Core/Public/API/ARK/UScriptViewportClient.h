#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UScriptViewportClient : public UObject
{
public:
	UScriptViewportClient() = delete;
	~UScriptViewportClient() = delete;
	UScriptViewportClient(const UScriptViewportClient&) = delete;
	UScriptViewportClient& operator=(const UScriptViewportClient&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UScriptViewportClient.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

};
