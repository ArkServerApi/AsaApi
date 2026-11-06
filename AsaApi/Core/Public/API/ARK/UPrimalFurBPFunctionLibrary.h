#pragma once
#include "BulkForward.h"
#include "UBlueprintFunctionLibrary.h"

struct UPrimalFurBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	UPrimalFurBPFunctionLibrary() = delete;
	~UPrimalFurBPFunctionLibrary() = delete;
	UPrimalFurBPFunctionLibrary(const UPrimalFurBPFunctionLibrary&) = delete;
	UPrimalFurBPFunctionLibrary& operator=(const UPrimalFurBPFunctionLibrary&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	static float CalculateCameraData(UActorComponent* FurComp, bool& InAnyFrustrumRet) { return NativeCall<float, UActorComponent*, bool&>(nullptr, "UPrimalFurBPFunctionLibrary.CalculateCameraData(UActorComponent*,bool&)", FurComp, InAnyFrustrumRet); }
};
