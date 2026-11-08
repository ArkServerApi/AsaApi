#pragma once


namespace ETabState
{
	enum Type:int
	{
		OpenedTab = 0x1,
		ClosedTab = 0x2,
		SidebarTab = 0x4,
		InvalidTab = 0x8
	};
}