#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UParticleModuleEventSendToGame : public UObject
{
public:
	UParticleModuleEventSendToGame() = delete;
	~UParticleModuleEventSendToGame() = delete;
	UParticleModuleEventSendToGame(const UParticleModuleEventSendToGame&) = delete;
	UParticleModuleEventSendToGame& operator=(const UParticleModuleEventSendToGame&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UParticleModuleEventSendToGame"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UParticleModuleEventSendToGame"); }
	void DoEvent(const UE::Math::TVector<double>& InCollideDirection, const UE::Math::TVector<double>& InHitLocation, const UE::Math::TVector<double>& InHitNormal, const FName& InBoneName) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, const FName&>(this, "UParticleModuleEventSendToGame.DoEvent(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName&)", InCollideDirection, InHitLocation, InHitNormal, InBoneName); }
};
