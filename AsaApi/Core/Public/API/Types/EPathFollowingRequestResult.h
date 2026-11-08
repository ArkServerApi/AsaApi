#pragma once


namespace EPathFollowingRequestResult
{
	enum Type:int
	{
		Failed = 0x0,
		AlreadyAtGoal = 0x1,
		RequestSuccessful = 0x2
	};
}