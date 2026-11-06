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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	int& MaxAllowedSpeedIndexField() { return *GetNativePointerField<int*>(this, "AHoverDroneSpeedLimitBox.MaxAllowedSpeedIndex"); }
};
