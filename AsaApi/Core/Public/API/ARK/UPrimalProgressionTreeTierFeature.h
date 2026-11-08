#pragma once
#include "BulkForward.h"
#include "UPrimalProgressionTreeFeature.h"

struct UPrimalProgressionTreeTierFeature : public UPrimalProgressionTreeFeature
{
public:
	UPrimalProgressionTreeTierFeature() = delete;
	~UPrimalProgressionTreeTierFeature() = delete;
	UPrimalProgressionTreeTierFeature(const UPrimalProgressionTreeTierFeature&) = delete;
	UPrimalProgressionTreeTierFeature& operator=(const UPrimalProgressionTreeTierFeature&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeTierFeature"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalProgressionTreeTierFeature"); }

	bool IncreaseSkillTier(FName SkillID) { return NativeCall<bool, FName>(this, "UPrimalProgressionTreeTierFeature.IncreaseSkillTier(FName)", SkillID); }
	void SetSkillTierConfig(FName SkillID, int MaxTier, int BaseCost, int CostIncreasePerTier) { NativeCall<void, FName, int, int, int>(this, "UPrimalProgressionTreeTierFeature.SetSkillTierConfig(FName,int,int,int)", SkillID, MaxTier, BaseCost, CostIncreasePerTier); }
	int GetSkillUpgradeCost(FName SkillID) { return NativeCall<int, FName>(this, "UPrimalProgressionTreeTierFeature.GetSkillUpgradeCost(FName)", SkillID); }
	int GetSkillTier(FName SkillID) { return NativeCall<int, FName>(this, "UPrimalProgressionTreeTierFeature.GetSkillTier(FName)", SkillID); }
};
