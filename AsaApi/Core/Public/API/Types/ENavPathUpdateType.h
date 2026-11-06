#pragma once


namespace ENavPathUpdateType
{
	enum Type:int
	{
		GoalMoved = 0x0,
		NavigationChanged = 0x1,
		MetaPathUpdate = 0x2,
		Custom = 0x3
	};
}