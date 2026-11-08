#pragma once
#include "BulkForward.h"


struct ADefaultPawn : APrimalPawn
{
	// Fields

	float& BaseTurnRateField() { return *GetNativePointerField<float*>(this, "ADefaultPawn.BaseTurnRate"); }
	float& BaseLookUpRateField() { return *GetNativePointerField<float*>(this, "ADefaultPawn.BaseLookUpRate"); }
	TObjectPtr<UPawnMovementComponent>& MovementComponentField() { return *GetNativePointerField<TObjectPtr<UPawnMovementComponent>*>(this, "ADefaultPawn.MovementComponent"); }
	TObjectPtr<USphereComponent>& CollisionComponentField() { return *GetNativePointerField<TObjectPtr<USphereComponent>*>(this, "ADefaultPawn.CollisionComponent"); }
	TObjectPtr<UStaticMeshComponent>& MeshComponentField() { return *GetNativePointerField<TObjectPtr<UStaticMeshComponent>*>(this, "ADefaultPawn.MeshComponent"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bAddDefaultMovementBindings() { return { this, "ADefaultPawn.bAddDefaultMovementBindings" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADefaultPawn"); }
	void UpdateNavigationRelevance() { NativeCall<void>(this, "ADefaultPawn.UpdateNavigationRelevance()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesADefaultPawn();
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) { NativeCall<void, UInputComponent*>(this, "ADefaultPawn.SetupPlayerInputComponent(UInputComponent*)", PlayerInputComponent); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "ADefaultPawn.MoveRight(float)", Val); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "ADefaultPawn.MoveForward(float)", Val); }
	void TurnAtRate(float Rate) { NativeCall<void, float>(this, "ADefaultPawn.TurnAtRate(float)", Rate); }
	void LookUpAtRate(float Rate) { NativeCall<void, float>(this, "ADefaultPawn.LookUpAtRate(float)", Rate); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ADefaultPawn"); }

	UPawnMovementComponent* GetMovementComponent() { return NativeCall<UPawnMovementComponent*>(this, "ADefaultPawn.GetMovementComponent()"); }
	void MoveUp_World(float Val) { NativeCall<void, float>(this, "ADefaultPawn.MoveUp_World(float)", Val); }
};