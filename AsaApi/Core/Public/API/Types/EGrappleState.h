#pragma once


namespace EGrappleState
{
	enum Type:int
	{
		GRAPPLE_Idle = 0x0,
		GRAPPLE_Pulling = 0x1,
		GRAPPLE_Releasing = 0x2,
		GRAPPLE_Custom = 0x3,
		GRAPPLE_Max = 0x4
	};
}