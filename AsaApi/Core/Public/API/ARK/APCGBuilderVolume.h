#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct APCGBuilderVolume : public AVolume
{
public:
	APCGBuilderVolume() = delete;
	~APCGBuilderVolume() = delete;
	APCGBuilderVolume(const APCGBuilderVolume&) = delete;
	APCGBuilderVolume& operator=(const APCGBuilderVolume&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool IsEditorOnly() { return NativeCall<bool>(this, "APCGBuilderVolume.IsEditorOnly()"); }
};
