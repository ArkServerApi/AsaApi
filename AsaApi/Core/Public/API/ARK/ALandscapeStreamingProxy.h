#pragma once
#include "BulkForward.h"
#include "ALandscapeProxy.h"

struct ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	ALandscapeStreamingProxy() = delete;
	~ALandscapeStreamingProxy() = delete;
	ALandscapeStreamingProxy(const ALandscapeStreamingProxy&) = delete;
	ALandscapeStreamingProxy& operator=(const ALandscapeStreamingProxy&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UMaterialInterface* GetLandscapeHoleMaterial() { return NativeCall<UMaterialInterface*>(this, "ALandscapeStreamingProxy.GetLandscapeHoleMaterial()"); }
};
