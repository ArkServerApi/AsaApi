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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FCompanionReactionData& ReactionData_MissionStartField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionStart"); }
	FCompanionReactionData& ReactionData_MissionEnd_SuccessField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionEnd_Success"); }
	FCompanionReactionData& ReactionData_MissionEnd_FailureField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionEnd_Failure"); }
};
