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
	static UClass* StaticClass() { return AsaApi::ResolveClass("APCGBuilderVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APCGBuilderVolume"); }

	bool IsEditorOnly() { return NativeCall<bool>(this, "APCGBuilderVolume.IsEditorOnly()"); }
};
