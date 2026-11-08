#pragma once


namespace EInventorySortType
{
	enum Type:int
	{
		Default = 0x0,
		Alphabetical_Asc = 0x1,
		Alphabetical_Dsc = 0x2,
		Weight_Asc = 0x3,
		Weight_Dsc = 0x4,
		Type_Asc = 0x5,
		Type_Dsc = 0x6,
		SpoilTimer_Asc = 0x7,
		SpoilTimer_Dsc = 0x8,
		InvSortTypeNum = 0x9
	};
}