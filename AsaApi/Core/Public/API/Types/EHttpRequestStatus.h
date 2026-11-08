#pragma once


namespace EHttpRequestStatus
{
	enum Type:int
	{
		NotStarted = 0x0,
		Processing = 0x1,
		Failed = 0x2,
		Failed_ConnectionError = 0x3,
		Succeeded = 0x4
	};
}