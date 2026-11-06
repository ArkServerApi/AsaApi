#pragma once
#include "BulkForward.h"
#include "APawn.h"

struct AWheeledVehiclePawn : public APawn
{
public:
	AWheeledVehiclePawn() = delete;
	~AWheeledVehiclePawn() = delete;
	AWheeledVehiclePawn(const AWheeledVehiclePawn&) = delete;
	AWheeledVehiclePawn& operator=(const AWheeledVehiclePawn&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWheeledVehiclePawn"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWheeledVehiclePawn"); }

	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "AWheeledVehiclePawn.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
};
