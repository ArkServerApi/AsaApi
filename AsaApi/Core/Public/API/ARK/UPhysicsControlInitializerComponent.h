#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UPhysicsControlInitializerComponent : public USceneComponent
{
public:
	UPhysicsControlInitializerComponent() = delete;
	~UPhysicsControlInitializerComponent() = delete;
	UPhysicsControlInitializerComponent(const UPhysicsControlInitializerComponent&) = delete;
	UPhysicsControlInitializerComponent& operator=(const UPhysicsControlInitializerComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsControlInitializerComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsControlInitializerComponent"); }

	FInitialCharacterControls& InitialCharacterControlsField() { return *GetNativePointerField<FInitialCharacterControls*>(this, "UPhysicsControlInitializerComponent.InitialCharacterControls"); }
	bool& bCreateControlsAtBeginPlayField() { return *GetNativePointerField<bool*>(this, "UPhysicsControlInitializerComponent.bCreateControlsAtBeginPlay"); }
	void CreateOrUpdateInitialControls(UPhysicsControlComponent* ControlComponent) { NativeCall<void, UPhysicsControlComponent*>(this, "UPhysicsControlInitializerComponent.CreateOrUpdateInitialControls(UPhysicsControlComponent*)", ControlComponent); }
	void CreateInitialCharacterControls(UPhysicsControlComponent* ControlComponent) { NativeCall<void, UPhysicsControlComponent*>(this, "UPhysicsControlInitializerComponent.CreateInitialCharacterControls(UPhysicsControlComponent*)", ControlComponent); }
	void CreateOrUpdateInitialBodyModifiers(UPhysicsControlComponent* ControlComponent) { NativeCall<void, UPhysicsControlComponent*>(this, "UPhysicsControlInitializerComponent.CreateOrUpdateInitialBodyModifiers(UPhysicsControlComponent*)", ControlComponent); }
	void BeginPlay() { NativeCall<void>(this, "UPhysicsControlInitializerComponent.BeginPlay()"); }
};
