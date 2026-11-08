#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UVariableFrameStrippingSettings : public UObject
{
public:
	UVariableFrameStrippingSettings() = delete;
	~UVariableFrameStrippingSettings() = delete;
	UVariableFrameStrippingSettings(const UVariableFrameStrippingSettings&) = delete;
	UVariableFrameStrippingSettings& operator=(const UVariableFrameStrippingSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVariableFrameStrippingSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVariableFrameStrippingSettings"); }
	FPerPlatformBool& UseVariableFrameStrippingField() { return *GetNativePointerField<FPerPlatformBool*>(this, "UVariableFrameStrippingSettings.UseVariableFrameStripping"); }
	FPerPlatformInt& FrameStrippingRateField() { return *GetNativePointerField<FPerPlatformInt*>(this, "UVariableFrameStrippingSettings.FrameStrippingRate"); }
};
