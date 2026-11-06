#pragma once


namespace EOnJoinSessionCompleteResult
{
	enum Type:int
	{
		Success = 0x0,
		SessionIsFull = 0x1,
		SessionDoesNotExist = 0x2,
		CouldNotRetrieveAddress = 0x3,
		AlreadyInSession = 0x4,
		UnknownError = 0x5
	};
}