#pragma once


namespace EEnvQueryStatus
{
	enum Type:int
	{
		Processing = 0x0,
		Success = 0x1,
		Failed = 0x2,
		Aborted = 0x3,
		OwnerLost = 0x4,
		MissingParam = 0x5
	};
}