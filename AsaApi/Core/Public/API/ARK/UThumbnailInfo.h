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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	bool IsEditorOnly() { return NativeCall<bool>(this, "UThumbnailInfo.IsEditorOnly()"); }
};
