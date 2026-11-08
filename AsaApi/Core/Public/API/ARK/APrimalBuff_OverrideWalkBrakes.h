#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalBuff.h"

struct APrimalBuff_OverrideWalkBrakes : APrimalBuff
{
public:
	APrimalBuff_OverrideWalkBrakes() = delete;
	~APrimalBuff_OverrideWalkBrakes() = delete;
	APrimalBuff_OverrideWalkBrakes(const APrimalBuff_OverrideWalkBrakes&) = delete;
	APrimalBuff_OverrideWalkBrakes& operator=(const APrimalBuff_OverrideWalkBrakes&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_OverrideWalkBrakes"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_OverrideWalkBrakes"); }

	float& ReducedBrakingDecelerationField() { return *GetNativePointerField<float*>(this, "APrimalBuff_OverrideWalkBrakes.ReducedBrakingDeceleration"); }
	float& OriginalBrakingDecelerationWalkingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_OverrideWalkBrakes.OriginalBrakingDecelerationWalking"); }
	bool& bHasCapturedOriginalBrakingField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_OverrideWalkBrakes.bHasCapturedOriginalBraking"); }

	void Deactivate() { NativeCall<void>(this, "APrimalBuff_OverrideWalkBrakes.Deactivate()"); }

	void OverrideCharacterWalkingVelocity(UE::Math::TVector<double>& InitialVelocity, const float& Friction, float DeltaTime) { NativeCall<void, UE::Math::TVector<double>&, const float&, float>(this, "APrimalBuff_OverrideWalkBrakes.OverrideCharacterWalkingVelocity(UE::Math::TVector<double>&,float&,float)", InitialVelocity, Friction, DeltaTime); }
};
