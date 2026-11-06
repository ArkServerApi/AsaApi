#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct AHoverDroneSpeedLimitBox : public AVolume
{
public:
	AHoverDroneSpeedLimitBox() = delete;
	~AHoverDroneSpeedLimitBox() = delete;
	AHoverDroneSpeedLimitBox(const AHoverDroneSpeedLimitBox&) = delete;
	AHoverDroneSpeedLimitBox& operator=(const AHoverDroneSpeedLimitBox&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AHoverDroneSpeedLimitBox"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHoverDroneSpeedLimitBox"); }

	int& MaxAllowedSpeedIndexField() { return *GetNativePointerField<int*>(this, "AHoverDroneSpeedLimitBox.MaxAllowedSpeedIndex"); }
};
