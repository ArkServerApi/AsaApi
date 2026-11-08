#pragma once


namespace EHasCustomNavigableGeometry
{
	enum Type:int
	{
		No = 0x0,
		Yes = 0x1,
		EvenIfNotCollidable = 0x2,
		DontExport = 0x3
	};
}