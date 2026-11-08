#pragma once
#include "BulkForward.h"
#include "UNavigationInvokerComponent.h"

struct UPrimalNavigationInvokerComponent : public UNavigationInvokerComponent
{
public:
	UPrimalNavigationInvokerComponent() = delete;
	~UPrimalNavigationInvokerComponent() = delete;
	UPrimalNavigationInvokerComponent(const UPrimalNavigationInvokerComponent&) = delete;
	UPrimalNavigationInvokerComponent& operator=(const UPrimalNavigationInvokerComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalNavigationInvokerComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalNavigationInvokerComponent"); }

	float& DeactivationDelayField() { return *GetNativePointerField<float*>(this, "UPrimalNavigationInvokerComponent.DeactivationDelay"); }
	FName& ActiveAlternateRadiusField() { return *GetNativePointerField<FName*>(this, "UPrimalNavigationInvokerComponent.ActiveAlternateRadius"); }
	double& LastInvokerActiveTimeField() { return *GetNativePointerField<double*>(this, "UPrimalNavigationInvokerComponent.LastInvokerActiveTime"); }
	BitFieldValue<bool, unsigned char> bForceInvokerActive() { return { this, "UPrimalNavigationInvokerComponent.bForceInvokerActive"}; }
	BitFieldValue<bool, unsigned char> bForceInvokerInactive() { return { this, "UPrimalNavigationInvokerComponent.bForceInvokerInactive"}; }
	void UpdatePrimalNavigationInvoker(APrimalDinoCharacter* ForCharacter) { NativeCall<void, APrimalDinoCharacter*>(this, "UPrimalNavigationInvokerComponent.UpdatePrimalNavigationInvoker(APrimalDinoCharacter*)", ForCharacter); }
};
