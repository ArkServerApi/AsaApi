#pragma once
#include "BulkForward.h"
#include "USkyAtmosphereComponent.h"

struct UAtmosphericFogComponent : public USkyAtmosphereComponent
{
public:
	UAtmosphericFogComponent() = delete;
	~UAtmosphericFogComponent() = delete;
	UAtmosphericFogComponent(const UAtmosphericFogComponent&) = delete;
	UAtmosphericFogComponent& operator=(const UAtmosphericFogComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FLinearColor& LUT_TintScatterField() { return *GetNativePointerField<FLinearColor*>(this, "UAtmosphericFogComponent.LUT_TintScatter"); }
	FLinearColor& LUT_TintLossField() { return *GetNativePointerField<FLinearColor*>(this, "UAtmosphericFogComponent.LUT_TintLoss"); }
	bool& bUseDayCycleField() { return *GetNativePointerField<bool*>(this, "UAtmosphericFogComponent.bUseDayCycle"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UAtmosphericFogComponent.Serialize(FArchive&)", Ar); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UAtmosphericFogComponent.IsPostLoadThreadSafe()"); }
};
