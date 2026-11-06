#pragma once
#include "BulkForward.h"
#include "ADefaultPawn.h"

struct ASpectatorPawn : public ADefaultPawn
{
public:
	ASpectatorPawn() = delete;
	~ASpectatorPawn() = delete;
	ASpectatorPawn(const ASpectatorPawn&) = delete;
	ASpectatorPawn& operator=(const ASpectatorPawn&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASpectatorPawn"); }

	void PossessedBy(AController* NewController) { NativeCall<void, AController*>(this, "ASpectatorPawn.PossessedBy(AController*)", NewController); }
	void LookUpAtRate(float Rate) { NativeCall<void, float>(this, "ASpectatorPawn.LookUpAtRate(float)", Rate); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASpectatorPawn"); }
	void TurnAtRate(float Rate) { NativeCall<void, float>(this, "ASpectatorPawn.TurnAtRate(float)", Rate); }
};
