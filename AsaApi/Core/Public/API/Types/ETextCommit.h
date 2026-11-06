#pragma once


namespace ETextCommit
{
	enum Type:int
	{
		Default = 0x0,
		OnEnter = 0x1,
		OnUserMovedFocus = 0x2,
		OnCleared = 0x3
	};
}