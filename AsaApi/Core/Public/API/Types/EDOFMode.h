#pragma once


namespace EDOFMode
{
	enum Type:int
	{
		Default = 0x0,
		SixDOF = 0x1,
		YZPlane = 0x2,
		XZPlane = 0x3,
		XYPlane = 0x4,
		CustomPlane = 0x5,
		None = 0x6
	};
}