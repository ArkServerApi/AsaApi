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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALandscapeStreamingProxy"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALandscapeStreamingProxy"); }

	UMaterialInterface* GetLandscapeHoleMaterial() { return NativeCall<UMaterialInterface*>(this, "ALandscapeStreamingProxy.GetLandscapeHoleMaterial()"); }
};
