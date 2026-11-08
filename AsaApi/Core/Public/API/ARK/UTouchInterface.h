#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UTouchInterface : public UObject
{
public:
	UTouchInterface() = delete;
	~UTouchInterface() = delete;
	UTouchInterface(const UTouchInterface&) = delete;
	UTouchInterface& operator=(const UTouchInterface&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UTouchInterface"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UTouchInterface"); }
	float& ActiveOpacityField() { return *GetNativePointerField<float*>(this, "UTouchInterface.ActiveOpacity"); }
	float& InactiveOpacityField() { return *GetNativePointerField<float*>(this, "UTouchInterface.InactiveOpacity"); }
	float& TimeUntilDeactiveField() { return *GetNativePointerField<float*>(this, "UTouchInterface.TimeUntilDeactive"); }
	float& TimeUntilResetField() { return *GetNativePointerField<float*>(this, "UTouchInterface.TimeUntilReset"); }
	float& ActivationDelayField() { return *GetNativePointerField<float*>(this, "UTouchInterface.ActivationDelay"); }
	bool& bPreventRecenterField() { return *GetNativePointerField<bool*>(this, "UTouchInterface.bPreventRecenter"); }
	float& StartupDelayField() { return *GetNativePointerField<float*>(this, "UTouchInterface.StartupDelay"); }
};
