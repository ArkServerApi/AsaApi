#pragma once


namespace EWindowZone
{
	enum Type:int
	{
		NotInWindow = 0x0,
		TopLeftBorder = 0x1,
		TopBorder = 0x2,
		TopRightBorder = 0x3,
		LeftBorder = 0x4,
		ClientArea = 0x5,
		RightBorder = 0x6,
		BottomLeftBorder = 0x7,
		BottomBorder = 0x8,
		BottomRightBorder = 0x9,
		TitleBar = 0xA,
		MinimizeButton = 0xB,
		MaximizeButton = 0xC,
		CloseButton = 0xD,
		SysMenu = 0xE,
		Unspecified = 0x0
	};
}