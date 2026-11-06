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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;



	bool IsPrimalDinoStatusComponent() { return NativeCall<bool>(this, "UPrimalDinoStatusComponent.IsPrimalDinoStatusComponent()"); }
};
