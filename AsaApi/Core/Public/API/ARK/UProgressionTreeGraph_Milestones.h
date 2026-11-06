#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalProgressionTreeGraph.h"

struct UProgressionTreeGraph_Milestones : UPrimalProgressionTreeGraph
{
public:
	UProgressionTreeGraph_Milestones() = delete;
	~UProgressionTreeGraph_Milestones() = delete;
	UProgressionTreeGraph_Milestones(const UProgressionTreeGraph_Milestones&) = delete;
	UProgressionTreeGraph_Milestones& operator=(const UProgressionTreeGraph_Milestones&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }



	bool ShouldEnforceMilestoneOrder() { return NativeCall<bool>(this, "UProgressionTreeGraph_Milestones.ShouldEnforceMilestoneOrder()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UProgressionTreeGraph_Milestones.StaticClass()"); }

	BitFieldValue<bool, unsigned char> bIsMilestoneBoard() { return { this, "UProgressionTreeGraph_Milestones.bIsMilestoneBoard"}; }
	BitFieldValue<bool, unsigned char> bCheckRequiredMaps() { return { this, "UProgressionTreeGraph_Milestones.bCheckRequiredMaps"}; }

	void BPOnMilestoneCompleted(FName MilestoneID, AShooterPlayerController* ForPC) { NativeCall<void, FName, AShooterPlayerController*>(this, "UProgressionTreeGraph_Milestones.BPOnMilestoneCompleted(FName,AShooterPlayerController*)", MilestoneID, ForPC); }
};
