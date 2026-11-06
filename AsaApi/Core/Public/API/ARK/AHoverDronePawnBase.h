#pragma once
#include "BulkForward.h"


struct AHoverDronePawnBase : ADefaultPawn
{
	// Fields

	//TObjectPtr<UCameraComponent>& CameraComponentField() { return *GetNativePointerField<TObjectPtr<UCameraComponent>*>(this, "AHoverDronePawnBase.CameraComponent"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AHoverDronePawnBase.StaticClass()"); }
	void PossessedBy(AController* NewController) { NativeCall<void, AController*>(this, "AHoverDronePawnBase.PossessedBy(AController*)", NewController); }
	void UnPossessed() { NativeCall<void>(this, "AHoverDronePawnBase.UnPossessed()"); }
	void SetupPlayerInputComponent(UInputComponent* InInputComponent) { NativeCall<void, UInputComponent*>(this, "AHoverDronePawnBase.SetupPlayerInputComponent(UInputComponent*)", InInputComponent); }
	void TurnAtRate(float Rate) { NativeCall<void, float>(this, "AHoverDronePawnBase.TurnAtRate(float)", Rate); }
	void LookUpAtRate(float Rate) { NativeCall<void, float>(this, "AHoverDronePawnBase.LookUpAtRate(float)", Rate); }

	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	bool IsLoading() { return NativeCall<bool>(this, "AHoverDronePawnBase.IsLoading()"); }
};