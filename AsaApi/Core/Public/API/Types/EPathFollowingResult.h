#pragma once


namespace EPathFollowingResult
{
	enum Type:int
	{
		Success = 0x0,
		Blocked = 0x1,
		OffPath = 0x2,
		Aborted = 0x3,
		Skipped_DEPRECATED = 0x4,
		Invalid = 0x5
	};
}