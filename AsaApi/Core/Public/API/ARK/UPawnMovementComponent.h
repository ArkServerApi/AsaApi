#pragma once
#include "BulkForward.h"


struct UPawnMovementComponent : UNavMovementComponent
{
	// Fields

	TObjectPtr<APawn>& PawnOwnerField() { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPawnMovementComponent.PawnOwner"); }

	// Bitfields

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPawnMovementComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPawnMovementComponent"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPawnMovementComponent();
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UPawnMovementComponent.Serialize(FStructuredArchiveRecord)", Record); }
	void SetUpdatedComponent(USceneComponent* NewUpdatedComponent) { NativeCall<void, USceneComponent*>(this, "UPawnMovementComponent.SetUpdatedComponent(USceneComponent*)", NewUpdatedComponent); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UPawnMovementComponent.Serialize(FArchive&)", Ar); }
	bool IsMoveInputIgnored() { return NativeCall<bool>(this, "UPawnMovementComponent.IsMoveInputIgnored()"); }
	void AddInputVector(UE::Math::TVector<double>* WorldAccel, bool bForce) { NativeCall<void, UE::Math::TVector<double>*, bool>(this, "UPawnMovementComponent.AddInputVector(UE::Math::TVector<double>,bool)", WorldAccel, bForce); }
	void RequestPathMove(const UE::Math::TVector<double>* MoveInput) { NativeCall<void, const UE::Math::TVector<double>*>(this, "UPawnMovementComponent.RequestPathMove(UE::Math::TVector<double>&)", MoveInput); }
	void OnTeleported() { NativeCall<void>(this, "UPawnMovementComponent.OnTeleported()"); }
	AController* GetController() { return NativeCall<AController*>(this, "UPawnMovementComponent.GetController()"); }
	void MarkForClientCameraUpdate() { NativeCall<void>(this, "UPawnMovementComponent.MarkForClientCameraUpdate()"); }

	UE::Math::TVector<double>* GetPendingInputVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPawnMovementComponent.GetPendingInputVector()", result); }
	APawn* GetPawnOwner() { return NativeCall<APawn*>(this, "UPawnMovementComponent.GetPawnOwner()"); }
	UE::Math::TVector<double>* ConsumeInputVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPawnMovementComponent.ConsumeInputVector()", result); }
	void NotifyBumpedPawn(APawn* BumpedPawn) { NativeCall<void, APawn*>(this, "UPawnMovementComponent.NotifyBumpedPawn(APawn*)", BumpedPawn); }
	UE::Math::TVector<double>* GetLastInputVector(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPawnMovementComponent.GetLastInputVector()", result); }
};