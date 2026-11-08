#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UThumbnailInfo : public UObject
{
public:
	UThumbnailInfo() = delete;
	~UThumbnailInfo() = delete;
	UThumbnailInfo(const UThumbnailInfo&) = delete;
	UThumbnailInfo& operator=(const UThumbnailInfo&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UThumbnailInfo"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UThumbnailInfo"); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "UThumbnailInfo.IsEditorOnly()"); }
};
