#pragma once


namespace ELoginStatus
{
	enum Type:int
	{
		NotLoggedIn = 0x0,
		UsingLocalProfile = 0x1,
		LoggedIn = 0x2
	};
}