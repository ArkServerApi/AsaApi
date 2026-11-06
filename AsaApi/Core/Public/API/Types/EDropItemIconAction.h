#pragma once


namespace EDropItemIconAction
{
	enum Type:int
	{
		DA_NoAction = 0x0,
		DA_Equip = 0x1,
		DA_UnEquip = 0x2,
		DA_AddToSlot = 0x3,
		DA_RemoveFromSlot = 0x4,
		DA_ToRemoteInv = 0x5,
		DA_FromRemoteInv = 0x6,
		DA_RemoteEquip = 0x7,
		DA_MergeItemStack = 0x8,
		DA_SplitItemStack = 0x9,
		DA_SwapItems = 0xA,
		DA_UseWithItem = 0xB,
		DA_UnEquipTransferToLocal = 0xC,
		DA_RemoveItemSkin = 0xD,
		DA_SplitItemStackOne = 0xE,
		DA_RemoveWeaponAmmo = 0xF,
		DA_FromRemoteInvToSlot = 0x10,
		DA_ToRemoteInvFromSlot = 0x11,
		DA_EquipLocalFromRemote = 0x12,
		DA_EquipRemoteFromLocal = 0x13,
		DA_UnequipRemote = 0x14,
		DA_UnequipTransferToRemote = 0x15,
		DA_ToArkInv = 0x16,
		DA_FromArkInv = 0x17,
		MAX = 0x18
	};
}