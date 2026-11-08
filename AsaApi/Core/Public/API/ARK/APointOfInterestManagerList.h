#pragma once
#include "BulkForward.h"
#include "ACustomActorList.h"

struct APointOfInterestManagerList : public ACustomActorList
{
public:
	APointOfInterestManagerList() = delete;
	~APointOfInterestManagerList() = delete;
	APointOfInterestManagerList(const APointOfInterestManagerList&) = delete;
	APointOfInterestManagerList& operator=(const APointOfInterestManagerList&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APointOfInterestManagerList"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APointOfInterestManagerList"); }

	BitFieldValue<bool, unsigned __int32> bRefreshPointsArray() { return { this, "APointOfInterestManagerList.bRefreshPointsArray"}; }
	BitFieldValue<bool, unsigned __int32> bHasInitialized() { return { this, "APointOfInterestManagerList.bHasInitialized"}; }
	void BeginPlay() { NativeCall<void>(this, "APointOfInterestManagerList.BeginPlay()"); }
	bool CheckListForTagCollisions(AActor* ForSpecificActor) { return NativeCall<bool, AActor*>(this, "APointOfInterestManagerList.CheckListForTagCollisions(AActor*)", ForSpecificActor); }
	void ReConstructPointsInList() { NativeCall<void>(this, "APointOfInterestManagerList.ReConstructPointsInList()"); }
	void PopulatePointsActorList() { NativeCall<void>(this, "APointOfInterestManagerList.PopulatePointsActorList()"); }
	bool ManualAddPointOfInterestActor(AActor* AddActor) { return NativeCall<bool, AActor*>(this, "APointOfInterestManagerList.ManualAddPointOfInterestActor(AActor*)", AddActor); }
	void ScanForAllValidPointsOfInterest() { NativeCall<void>(this, "APointOfInterestManagerList.ScanForAllValidPointsOfInterest()"); }
};
