#pragma once


namespace ESoundMixState
{
	enum Type:int
	{
		Inactive = 0x0,
		FadingIn = 0x1,
		Active = 0x2,
		FadingOut = 0x3,
		AwaitingRemoval = 0x4
	};
}