#pragma once


namespace EProgressBarFillType
{
	enum Type:int
	{
		LeftToRight = 0x0,
		RightToLeft = 0x1,
		FillFromCenter = 0x2,
		FillFromCenterHorizontal = 0x3,
		FillFromCenterVertical = 0x4,
		TopToBottom = 0x5,
		BottomToTop = 0x6
	};
}