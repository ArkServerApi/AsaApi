#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalCameraConfig : UObject
{
public:
	UPrimalCameraConfig() = delete;
	~UPrimalCameraConfig() = delete;
	UPrimalCameraConfig(const UPrimalCameraConfig&) = delete;
	UPrimalCameraConfig& operator=(const UPrimalCameraConfig&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalCameraConfig"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalCameraConfig"); }

	float& TransitionToTargetingCameraInterpSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCameraConfig.TransitionToTargetingCameraInterpSpeed"); }
	float& TransitionToASACameraInterpTimeField() { return *GetNativePointerField<float*>(this, "UPrimalCameraConfig.TransitionToASACameraInterpTime"); }
	float& TransitionToOldCameraInterpTimeField() { return *GetNativePointerField<float*>(this, "UPrimalCameraConfig.TransitionToOldCameraInterpTime"); }



	FName& DefaultCameraProfileNameField() { return *GetNativePointerField<FName*>(this, "UPrimalCameraConfig.DefaultCameraProfileName"); }
	FName& TightCameraProfileNameField() { return *GetNativePointerField<FName*>(this, "UPrimalCameraConfig.TightCameraProfileName"); }
	FName& MidCameraProfileNameField() { return *GetNativePointerField<FName*>(this, "UPrimalCameraConfig.MidCameraProfileName"); }
	FName& LooseCameraProfileNameField() { return *GetNativePointerField<FName*>(this, "UPrimalCameraConfig.LooseCameraProfileName"); }
	UE::Math::TVector<double>& TPVWeaponCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCameraConfig.TPVWeaponCameraOffset"); }
};
