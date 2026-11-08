#pragma once


namespace EInventoryDataListType
{
	enum Type:unsigned __int64
	{
		LocalEquipment = 0x1,
		LocalQuickSlots = 0x4,
		LocalItems = 0x8,
		LocalCraftables = 0x10,
		RemoteItems = 0x100,
		RemoteCraftables = 0x200,
		RemoteEquipment = 0x400,
		ArkInventory = 0x10000,
		Droppable = 0x20000,
		DroppableMinusEquipped = 0x40000,
		Colors = 0x80000,
		Brushes = 0x100000,
		Dyes = 0x200000,
		Ingredients = 0x400000,
		Skins = 0x800000,
		Mask_Local = 0xFF,
		Mask_Remote = 0xFFFFFF00,
		Mask_LocalInventory = 0x18,
		Mask_RemoteInventory = 0x300,
		Mask_LocalDataList = 0x19,
		Mask_RemoteDataList = 0x700,
		Mask_Inventories = 0x10318,
		Mask_Items = 0x108,
		Mask_Craftables = 0x210,
		Mask_Equipment = 0x401
	};
}