#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UInputComponent : public UActorComponent
{
public:
	UInputComponent() = delete;
	~UInputComponent() = delete;
	UInputComponent(const UInputComponent&) = delete;
	UInputComponent& operator=(const UInputComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInputComponent"); }

	int& PriorityField() { return *GetNativePointerField<int*>(this, "UInputComponent.Priority"); }
	BitFieldValue<bool, unsigned char> bBlockInput() { return { this, "UInputComponent.bBlockInput"}; }
	void ClearAxisBindings() { NativeCall<void>(this, "UInputComponent.ClearAxisBindings()"); }
	void ConditionalBuildKeyMap(UPlayerInput* PlayerInput) { NativeCall<void, UPlayerInput*>(this, "UInputComponent.ConditionalBuildKeyMap(UPlayerInput*)", PlayerInput); }
	static void LogDeprecatedBindingWarning(FName BindingName) { NativeCall<void, FName>(nullptr, "UInputComponent.LogDeprecatedBindingWarning(FName)", BindingName); }
	void OnInputOwnerEndPlayed(AActor* InOwner, EEndPlayReason::Type EndPlayReason) { NativeCall<void, AActor*, EEndPlayReason::Type>(this, "UInputComponent.OnInputOwnerEndPlayed(AActor*,EEndPlayReason::Type)", InOwner, EndPlayReason); }
	void RemoveActionBinding(const FInputActionBinding& BindingToRemove, int BindingIndex) { NativeCall<void, const FInputActionBinding&, int>(this, "UInputComponent.RemoveActionBinding(FInputActionBinding&,int)", BindingToRemove, BindingIndex); }
	void RemoveActionBinding(int BindingIndex) { NativeCall<void, int>(this, "UInputComponent.RemoveActionBinding(int)", BindingIndex); }
	void ClearBindingValues() { NativeCall<void>(this, "UInputComponent.ClearBindingValues()"); }
	float GetAxisValue(FName AxisName) { return NativeCall<float, FName>(this, "UInputComponent.GetAxisValue(FName)", AxisName); }
	void ClearActionBindings() { NativeCall<void>(this, "UInputComponent.ClearActionBindings()"); }
	void ClearBindingsForObject(UObject* InOwner) { NativeCall<void, UObject*>(this, "UInputComponent.ClearBindingsForObject(UObject*)", InOwner); }
	bool HasBindings() { return NativeCall<bool>(this, "UInputComponent.HasBindings()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInputComponent"); }
};
