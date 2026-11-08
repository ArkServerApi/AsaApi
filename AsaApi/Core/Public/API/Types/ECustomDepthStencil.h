#pragma once


namespace ECustomDepthStencil
{
	enum Type:int
	{
		Disabled = 0x0,
		Enabled = 0x1,
		EnabledOnDemand = 0x2,
		EnabledWithStencil = 0x3
	};
}