#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalBuffPersistentData.h"

struct UPrimalBuffPersistentData_MissionData : UPrimalBuffPersistentData
{
public:
	UPrimalBuffPersistentData_MissionData() = delete;
	~UPrimalBuffPersistentData_MissionData() = delete;
	UPrimalBuffPersistentData_MissionData(const UPrimalBuffPersistentData_MissionData&) = delete;
	UPrimalBuffPersistentData_MissionData& operator=(const UPrimalBuffPersistentData_MissionData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalBuffPersistentData_MissionData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalBuffPersistentData_MissionData"); }

	int& ActiveMissionIndexField() { return *GetNativePointerField<int*>(this, "UPrimalBuffPersistentData_MissionData.ActiveMissionIndex"); }



	AMissionType*& ActiveMissionField() { return *GetNativePointerField<AMissionType**>(this, "UPrimalBuffPersistentData_MissionData.ActiveMission"); }

	TArray<UObject*, TSizedDefaultAllocator<32> >* GetObjectsToSkipDuringSeralization_Implementation(TArray<UObject*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UObject*, TSizedDefaultAllocator<32> >*, TArray<UObject*, TSizedDefaultAllocator<32> >*>(this, "UPrimalBuffPersistentData_MissionData.GetObjectsToSkipDuringSeralization_Implementation()", result); }
};
