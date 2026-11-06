#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UAnimCurveCompressionSettings : public UObject
{
public:
	UAnimCurveCompressionSettings() = delete;
	~UAnimCurveCompressionSettings() = delete;
	UAnimCurveCompressionSettings(const UAnimCurveCompressionSettings&) = delete;
	UAnimCurveCompressionSettings& operator=(const UAnimCurveCompressionSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAnimCurveCompressionSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAnimCurveCompressionSettings"); }
};
