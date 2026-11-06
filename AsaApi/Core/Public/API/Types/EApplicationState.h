#pragma once


namespace EApplicationState
{
	enum Type:int
	{
		Unknown = 0x0,
		Inactive = 0x1,
		Background = 0x2,
		Active = 0x3
	};
}