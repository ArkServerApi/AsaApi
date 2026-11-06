#pragma once
#include "BulkForward.h"
#include "AReflectionCapture.h"

struct APlaneReflectionCapture : public AReflectionCapture
{
public:
	APlaneReflectionCapture() = delete;
	~APlaneReflectionCapture() = delete;
	APlaneReflectionCapture(const APlaneReflectionCapture&) = delete;
	APlaneReflectionCapture& operator=(const APlaneReflectionCapture&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APlaneReflectionCapture"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APlaneReflectionCapture"); }

};
