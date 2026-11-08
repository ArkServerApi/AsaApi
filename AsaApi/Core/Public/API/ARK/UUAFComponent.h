#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UUAFComponent : public UActorComponent
{
public:
	UUAFComponent() = delete;
	~UUAFComponent() = delete;
	UUAFComponent(const UUAFComponent&) = delete;
	UUAFComponent& operator=(const UUAFComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UUAFComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UUAFComponent"); }

	FComponentReference& OutputComponentField() { return *GetNativePointerField<FComponentReference*>(this, "UUAFComponent.OutputComponent"); }
	unsigned int& SerialNumberField() { return *GetNativePointerField<unsigned int*>(this, "UUAFComponent.SerialNumber"); }
	BitFieldValue<bool, unsigned char> bShowDebugDrawing() { return { this, "UUAFComponent.bShowDebugDrawing"}; }
	BitFieldValue<bool, unsigned char> bSetupCharacterMovementDependency() { return { this, "UUAFComponent.bSetupCharacterMovementDependency"}; }
	BitFieldValue<bool, unsigned char> bCharacterMovementDependencyHasBeenSet() { return { this, "UUAFComponent.bCharacterMovementDependencyHasBeenSet"}; }
	void Activate(bool bReset) { NativeCall<void, bool>(this, "UUAFComponent.Activate(bool)", bReset); }
	void SetupInputOutput() { NativeCall<void>(this, "UUAFComponent.SetupInputOutput()"); }
	USkeletalMeshComponent* DetermineSkeletalMeshComponent() { return NativeCall<USkeletalMeshComponent*>(this, "UUAFComponent.DetermineSkeletalMeshComponent()"); }
	void BlueprintSetInputBinding(const FAnimNextVariableReference& InVariable, UActorComponent* InComponent) { NativeCall<void, const FAnimNextVariableReference&, UActorComponent*>(this, "UUAFComponent.BlueprintSetInputBinding(FAnimNextVariableReference&,UActorComponent*)", InVariable, InComponent); }
	void OnUnregister() { NativeCall<void>(this, "UUAFComponent.OnUnregister()"); }
	void BeginPlay() { NativeCall<void>(this, "UUAFComponent.BeginPlay()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UUAFComponent.Serialize(FArchive&)", Ar); }
	void OnRegister() { NativeCall<void>(this, "UUAFComponent.OnRegister()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UUAFComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void Deactivate() { NativeCall<void>(this, "UUAFComponent.Deactivate()"); }
	void AllocateSystem() { NativeCall<void>(this, "UUAFComponent.AllocateSystem()"); }
};
