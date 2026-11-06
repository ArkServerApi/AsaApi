#pragma once


namespace EWindowAction
{
	enum Type:int
	{
		ClickedNonClientArea = 0x1,
		Maximize = 0x2,
		Restore = 0x3,
		WindowMenu = 0x4
	};
}