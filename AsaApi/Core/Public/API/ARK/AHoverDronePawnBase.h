#pragma once
#include "BulkForward.h"


struct AHoverDronePawnBase : ADefaultPawn
{
	// Fields

	//TObjectPtr<UCameraComponent>& CameraComponentField() { return *GetNativePointerField<TObjectPtr<UCameraComponent>*>(this, "AHoverDronePawnBase.CameraComponent"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("AHoverDronePawnBase"); }
	void PossessedBy(AController* NewController) { NativeCall<void, AController*>(this, "AHoverDronePawnBase.PossessedBy(AController*)", NewController); }
	void UnPossessed() { NativeCall<void>(this, "AHoverDronePawnBase.UnPossessed()"); }
	void SetupPlayerInputComponent(UInputComponent* InInputComponent) { NativeCall<void, UInputComponent*>(this, "AHoverDronePawnBase.SetupPlayerInputComponent(UInputComponent*)", InInputComponent); }
	void TurnAtRate(float Rate) { NativeCall<void, float>(this, "AHoverDronePawnBase.TurnAtRate(float)", Rate); }
	void LookUpAtRate(float Rate) { NativeCall<void, float>(this, "AHoverDronePawnBase.LookUpAtRate(float)", Rate); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHoverDronePawnBase"); }

	bool IsLoading() { return NativeCall<bool>(this, "AHoverDronePawnBase.IsLoading()"); }
};