#pragma once
#include "BulkForward.h"
#include "UFloatingPawnMovement.h"

struct USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
	USpectatorPawnMovement() = delete;
	~USpectatorPawnMovement() = delete;
	USpectatorPawnMovement(const USpectatorPawnMovement&) = delete;
	USpectatorPawnMovement& operator=(const USpectatorPawnMovement&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USpectatorPawnMovement"); }

	BitFieldValue<bool, unsigned __int32> bIgnoreTimeDilation() { return { this, "USpectatorPawnMovement.bIgnoreTimeDilation"}; }
	static UClass* StaticClass() { return AsaApi::ResolveClass("USpectatorPawnMovement"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "USpectatorPawnMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
