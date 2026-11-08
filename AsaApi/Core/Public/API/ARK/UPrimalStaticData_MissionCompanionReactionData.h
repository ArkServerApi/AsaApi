#pragma once
#include "BulkForward.h"
#include "UPrimalStaticData.h"

struct UPrimalStaticData_MissionCompanionReactionData : public UPrimalStaticData
{
public:
	UPrimalStaticData_MissionCompanionReactionData() = delete;
	~UPrimalStaticData_MissionCompanionReactionData() = delete;
	UPrimalStaticData_MissionCompanionReactionData(const UPrimalStaticData_MissionCompanionReactionData&) = delete;
	UPrimalStaticData_MissionCompanionReactionData& operator=(const UPrimalStaticData_MissionCompanionReactionData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalStaticData_MissionCompanionReactionData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalStaticData_MissionCompanionReactionData"); }

	FCompanionReactionData& ReactionData_MissionStartField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionStart"); }
	FCompanionReactionData& ReactionData_MissionEnd_SuccessField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionEnd_Success"); }
	FCompanionReactionData& ReactionData_MissionEnd_FailureField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionEnd_Failure"); }
};
