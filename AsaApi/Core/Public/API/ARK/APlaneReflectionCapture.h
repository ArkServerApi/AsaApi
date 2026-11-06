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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
