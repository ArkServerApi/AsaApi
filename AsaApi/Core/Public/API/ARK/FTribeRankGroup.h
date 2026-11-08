#pragma once


struct FTribeRankGroup
{
	// Fields

	FString& RankGroupNameField() { return *GetNativePointerField<FString*>(this, "FTribeRankGroup.RankGroupName"); }
	unsigned char& RankGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.RankGroupRank"); }
	unsigned char& InventoryRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.InventoryRank"); }
	unsigned char& StructureActivationRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.StructureActivationRank"); }
	unsigned char& NewStructureActivationRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.NewStructureActivationRank"); }
	unsigned char& NewStructureInventoryRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.NewStructureInventoryRank"); }
	unsigned char& PetOrderRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.PetOrderRank"); }
	unsigned char& PetRidingRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.PetRidingRank"); }
	unsigned char& InviteToGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.InviteToGroupRank"); }
	unsigned char& MaxPromotionGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.MaxPromotionGroupRank"); }
	unsigned char& MaxDemotionGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.MaxDemotionGroupRank"); }
	unsigned char& MaxBanishmentGroupRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.MaxBanishmentGroupRank"); }
	unsigned char& NumInvitesRemainingField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.NumInvitesRemaining"); }
	unsigned char& TeleportMembersRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.TeleportMembersRank"); }
	unsigned char& TeleportDinosRankField() { return *GetNativePointerField<unsigned char*>(this, "FTribeRankGroup.TeleportDinosRank"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPreventStructureDemolishField() { return { this, "FTribeRankGroup.bPreventStructureDemolish" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStructureAttachmentField() { return { this, "FTribeRankGroup.bPreventStructureAttachment" }; }
	BitFieldValue<bool, unsigned __int32> bPreventStructureBuildInRangeField() { return { this, "FTribeRankGroup.bPreventStructureBuildInRange" }; }
	BitFieldValue<bool, unsigned __int32> bPreventUnclaimingField() { return { this, "FTribeRankGroup.bPreventUnclaiming" }; }
	BitFieldValue<bool, unsigned __int32> bAllowInvitesField() { return { this, "FTribeRankGroup.bAllowInvites" }; }
	BitFieldValue<bool, unsigned __int32> bLimitInvitesField() { return { this, "FTribeRankGroup.bLimitInvites" }; }
	BitFieldValue<bool, unsigned __int32> bAllowDemotionsField() { return { this, "FTribeRankGroup.bAllowDemotions" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPromotionsField() { return { this, "FTribeRankGroup.bAllowPromotions" }; }
	BitFieldValue<bool, unsigned __int32> bAllowBanishmentsField() { return { this, "FTribeRankGroup.bAllowBanishments" }; }
	BitFieldValue<bool, unsigned __int32> bPreventWirelessCraftingField() { return { this, "FTribeRankGroup.bPreventWirelessCrafting" }; }
	BitFieldValue<bool, unsigned __int32> bDefaultRankField() { return { this, "FTribeRankGroup.bDefaultRank" }; }
	BitFieldValue<bool, unsigned __int32> bAllowPingField() { return { this, "FTribeRankGroup.bAllowPing" }; }
	BitFieldValue<bool, unsigned __int32> bAllowRallyPointField() { return { this, "FTribeRankGroup.bAllowRallyPoint" }; }

	// Functions

// 	FTribeRankGroup& operator=(const FTribeRankGroup* __that) { return NativeCall<FTribeRankGroup&, const FTribeRankGroup*>(this, "FTribeRankGroup.operator=(FTribeRankGroup&)", __that); }
// FUNCTION MISSING: FTribeRankGroup.operator=(FTribeRankGroup&)
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FTribeRankGroup>(); }
	void ValidateSettings() { NativeCall<void>(this, "FTribeRankGroup.ValidateSettings()"); }
};