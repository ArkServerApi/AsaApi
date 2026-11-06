#pragma once


namespace EPathFollowingAction
{
	enum Type:int
	{
		Error = 0x0,
		NoMove = 0x1,
		DirectMove = 0x2,
		PartialPath = 0x3,
		PathToGoal = 0x4
	};
}