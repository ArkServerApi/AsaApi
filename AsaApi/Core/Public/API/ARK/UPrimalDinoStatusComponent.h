#pragma once
#include "GameplayForward.h"
#include "UPrimalCharacterStatusComponent.h"

struct UPrimalDinoStatusComponent : UPrimalCharacterStatusComponent
{
public:
	UPrimalDinoStatusComponent() = delete;
	~UPrimalDinoStatusComponent() = delete;
	UPrimalDinoStatusComponent(const UPrimalDinoStatusComponent&) = delete;
	UPrimalDinoStatusComponent& operator=(const UPrimalDinoStatusComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDinoStatusComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDinoStatusComponent"); }



	bool IsPrimalDinoStatusComponent() { return NativeCall<bool>(this, "UPrimalDinoStatusComponent.IsPrimalDinoStatusComponent()"); }
};
