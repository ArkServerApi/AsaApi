#pragma once


namespace ESplitScreenType
{
	enum Type:int
	{
		None = 0x0,
		TwoPlayer_Horizontal = 0x1,
		TwoPlayer_Vertical = 0x2,
		ThreePlayer_FavorTop = 0x3,
		ThreePlayer_FavorBottom = 0x4,
		ThreePlayer_Vertical = 0x5,
		ThreePlayer_Horizontal = 0x6,
		FourPlayer_Grid = 0x7,
		FourPlayer_Vertical = 0x8,
		FourPlayer_Horizontal = 0x9,
		SplitTypeCount = 0xA
	};
}