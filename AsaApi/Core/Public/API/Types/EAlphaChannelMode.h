#pragma once


namespace EAlphaChannelMode
{
	enum Type:int
	{
		Disabled = 0x0,
		LinearColorSpaceOnly = 0x1,
		AllowThroughTonemapper = 0x2
	};
}