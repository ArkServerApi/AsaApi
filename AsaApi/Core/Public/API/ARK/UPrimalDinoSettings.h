#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UObject.h"

struct UPrimalDinoSettings : UObject
{
public:
	UPrimalDinoSettings() = delete;
	~UPrimalDinoSettings() = delete;
	UPrimalDinoSettings(const UPrimalDinoSettings&) = delete;
	UPrimalDinoSettings& operator=(const UPrimalDinoSettings&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDinoSettings"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDinoSettings"); }

	float& TamingAffinityNoFoodDecreasePercentageSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalDinoSettings.TamingAffinityNoFoodDecreasePercentageSpeed"); }
	bool& bWakingTameDisplayItemNameField() { return *GetNativePointerField<bool*>(this, "UPrimalDinoSettings.bWakingTameDisplayItemName"); }



	UTexture2D*& DinoFoodTypeImageField() { return *GetNativePointerField<UTexture2D**>(this, "UPrimalDinoSettings.DinoFoodTypeImage"); }

	FString& DinoFoodTypeNameField() { return *GetNativePointerField<FString*>(this, "UPrimalDinoSettings.DinoFoodTypeName"); }
};
