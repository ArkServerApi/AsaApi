#pragma once
#include "BulkForward.h"
#include "UPrimalStaticData.h"

struct UPrimalStaticData_MissionCompanionData : public UPrimalStaticData
{
public:
	UPrimalStaticData_MissionCompanionData() = delete;
	~UPrimalStaticData_MissionCompanionData() = delete;
	UPrimalStaticData_MissionCompanionData(const UPrimalStaticData_MissionCompanionData&) = delete;
	UPrimalStaticData_MissionCompanionData& operator=(const UPrimalStaticData_MissionCompanionData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalStaticData_MissionCompanionData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalStaticData_MissionCompanionData"); }

	FPointOfInterestData_ForCompanion& MissionPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData_ForCompanion*>(this, "UPrimalStaticData_MissionCompanionData.MissionPointOfInterestData"); }
};
